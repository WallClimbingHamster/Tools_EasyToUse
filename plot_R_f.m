function plot_R_f
Num=input('请输入待处理数据个数：Num=');
for i=1:Num
filename=input('文件名称,省略后缀：','s');
A=xlsread([filename,'.','xls']);     %设置文件路径
d=input('请输入样品大小,单位（mm）：d=');     %单位mm
Z=sqrt((A(:,4)+j*A(:,5))./(A(:,2)+j*A(:,3))).*tanh(-j*(2*pi*A(:,1).*sqrt((A(:,2)+j*A(:,3)).*(A(:,4)+j*A(:,5)))*d/2.99792458e11));
Rloss=20*log10(abs((1-Z)./(1+Z)));
plot(A(:,1),Rloss,'*-')
dlmwrite([filename,'_d=',num2str(d),'mm_out'],[A(:,1),Rloss]);
end

