function plot_R_f
Num=input('��������������ݸ�����Num=');
for i=1:Num
filename=input('�ļ�����,ʡ�Ժ�׺��','s');
A=xlsread([filename,'.','xls']);     %�����ļ�·��
d=input('��������Ʒ��С,��λ��mm����d=');     %��λmm
Z=sqrt((A(:,4)+j*A(:,5))./(A(:,2)+j*A(:,3))).*tanh(-j*(2*pi*A(:,1).*sqrt((A(:,2)+j*A(:,3)).*(A(:,4)+j*A(:,5)))*d/2.99792458e11));
Rloss=20*log10(abs((1-Z)./(1+Z)));
plot(A(:,1),Rloss,'*-')
dlmwrite([filename,'_d=',num2str(d),'mm_out'],[A(:,1),Rloss]);
end

