clear all
clc

s = serial('COM35');
fopen(s);

reads = 800;

a = zeros(1,reads);
pause(5);
for i=1:reads
   fprintf(s,'a');
    a(i) = str2double(fscanf(s));
    
end

fclose(s);
delete(s);