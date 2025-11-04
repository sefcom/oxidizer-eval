# !/bin/bash
set -e
pip install -U git+https://github.com/angr/archinfo.git@f7dc7e1a754acbdcfb6966496bd13819419c5a77
pip install -U git+https://github.com/angr/claripy.git@97a710f82edc737bef82c27898ad235a15a309a9
pip install -U git+https://github.com/angr/pyvex.git@6327984e4dbd082e62d33d1c7f753e4e5855ddb8
pip install -U git+https://github.com/angr/cle.git@7f8f1fd11cc8d2b4527e608f43b69a7f37f2dec9
pip install unicorn==2.0.1.post1
pip install -U --no-build-isolation git+ssh://git@github.com/bluesadi/oxidizer.git