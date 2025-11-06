sudo apt-get update
sudo apt-get install -y --no-install-recommends \
    python3 \
    python3-venv \
    python3-dev \
    python3-pip \
    build-essential \
    git \
    ca-certificates \
    openssh-client \
    pkg-config \
    libssl-dev \
    libffi-dev \
	curl

ln -s /usr/bin/python3 /usr/bin/python
python -m pip install --upgrade pip setuptools wheel
pip install virtualenv virtualenvwrapper
curl https://sh.rustup.rs -sSf | sh -s -- -y
echo "export PATH=\$HOME/.local/bin:\$PATH" >> ~/.bashrc
echo "export PATH=\$HOME/.cargo/bin:\$PATH" >> ~/.bashrc
echo "export WORKON_HOME=$HOME/.virtualenvs" >> ~/.bashrc
echo "source /home/ubuntu/.local/bin/virtualenvwrapper.sh" >> ~/.bashrc
source ~/.bashrc
mkvirtualenv oxidizer
workon oxidizer
pip install -U git+https://github.com/angr/archinfo.git@f7dc7e1a754acbdcfb6966496bd13819419c5a77
pip install -U git+https://github.com/angr/claripy.git@97a710f82edc737bef82c27898ad235a15a309a9
pip install -U git+https://github.com/angr/pyvex.git@6327984e4dbd082e62d33d1c7f753e4e5855ddb8
pip install -U git+https://github.com/angr/cle.git@7f8f1fd11cc8d2b4527e608f43b69a7f37f2dec9
pip install unicorn==2.0.1.post1
pip install setuptools_rust
pip install toml
pip install pytz
pip install -U --no-build-isolation git+ssh://git@github.com/bluesadi/oxidizer.git
git clone git@github.com:sefcom/oxidizer-eval.git