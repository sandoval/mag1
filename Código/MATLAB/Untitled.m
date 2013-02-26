clear all
close all
clc

s = serial('/dev/tty.usbmodemfa131');
fopen(s);

reads = 800;

sinal = zeros(1,reads);
pause(5);
for i=1:reads
   fprintf(s,'a');
    sinal(i) = str2double(fscanf(s));
    
end

fclose(s);
delete(s);

figure;plot(sinal)
title('Sinal de entrada')
amostras = size(sinal,2);

Fs = 470; 

x = sinal-mean(sinal); 


% Adiciona padding para fazer a FFT.
nfft= 2^(nextpow2(length(x))); 
fftx = fft(x,nfft); 


% Calcula o n?mero de pontos ?nicos
NumUniquePts = ceil((nfft+1)/2); 


% Corta pela metade a fft, pois ? sim?trica
fftx = fftx(1:NumUniquePts); 


% Escala a fft para que n?o seja uma fun??o do tamanho da amostra
mx = abs(fftx)/length(x); 
mx = mx.^2; 

if rem(nfft, 2) % odd nfft excludes Nyquist point
  mx(2:end) = mx(2:end)*2;
else
  mx(2:end -1) = mx(2:end -1)*2;
end

f = (0:NumUniquePts-1)*Fs/nfft;

% Generate the plot, title and labels. 

figure;plot(f,mx); 
title('Magnitude do sinal no espectro da frequ?ncia'); 
xlabel('Frequ?ncia (Hz)'); 
ylabel('Magnitude'); 