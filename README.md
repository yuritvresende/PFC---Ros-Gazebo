# PFC---Ros-Gazebo

1. Instalação de ROS e Gazebo

Feita a instalação do WSL com a versão adequada do Ubuntu, segundo o passo a passo registrado em: https://learn.microsoft.com/en-us/windows/wsl/basic-commands

sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt install curl

curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

sudo apt update

sudo apt install ros-noetic-desktop-full

source /opt/ros/noetic/setup.bash

echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc

source ~/.bashrc

echo "source /opt/ros/noetic/setup.zsh" >> ~/.zshrc

source ~/.zshrc

sudo apt install python3-rosdep python3-rosinstall python3-rosinstall-generator python3-wstool build-essential

sudo apt install python3-rosdep

sudo rosdep init

rosdep update

export GAZEBO_IP=127.0.0.1

export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}'):0 

export LIBGL_ALWAYS_INDIRECT=0

2. Criação de um catkin workspace

Para tal finalidade, é suficiente seguir o passo a passo informado em: https://wiki.ros.org/catkin/Tutorials/create_a_workspace

3. Passo a passo do processo de trabalho com braços robóticos

Dentro do espaço catkin_ws, usar as linhas de comando:

cd src

git clone https://github.com/ros-industrial/universal_robot

Copiado o repositório do braço robótico UR5, retornar ao espaço catkin original e aplicar:

catkin_make

source devel/setup.bash

roslaunch ur_gazebo ur5_bringup.launch

Feito isso, será inicializado o modelo básico do braço robótico UR5 no simulador Gazebo.

4. Configurando o MoveIt para uso.

Primeiro é necessário instalar a ferramenta do MoveIt com:

sudo apt install ros-noetic-moveit

Depois, inicializar com:

roslaunch moveit_setup_assistant setup_assistant.launch


