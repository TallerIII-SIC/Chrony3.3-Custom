sudo rm *.o
sudo rm chronyc
sudo rm chronyd
sudo rm INSTALL
sudo chmod +x ./configure
./configure
make
sudo make install
sudo rm /etc/chrony.conf
sudo rm /var/log/chrony/measurements.log
sudo touch /etc/chrony.conf
sudo chmod 777 /etc/chrony.conf
sudo echo 'pool time.afip.gov.ar iburst' >> /etc/chrony.conf
sudo sed -i -e '$a makestep 1.0 3' /etc/chrony.conf
sudo sed -i -e '$a logdir /var/log/chrony' /etc/chrony.conf
sudo sed -i -e '$a log measurements' /etc/chrony.conf


