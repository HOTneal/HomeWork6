echo ���������� ��������� ����������, ���������� ��������� 1 ���
git config --global user.name HOTneal
git config --global user.email onealvkotn@gmail.com 
echo ������� ������� ���� ����� ������
git add -A
echo ������ ���� ��������� ���������, �� �������� � ����������� ��������� ���� ��������� ���������
git commit -a -m "Izmenil znachenie 60 kopeek na 100 v 8 dom.zadanii. Dobavil 9 rabotu i 9 dom.zadanie"
echo ���������� ��� ��������� �� ���������� ����������� � ��������� �������
git pull origin master
echo ���������� �������, ���� ��������� �������� � ��������� �����������
git push origin master
