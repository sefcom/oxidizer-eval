# !/bin/bash
set -e
pip install -U git+https://github.com/angr/archinfo.git
pip install -U git+https://github.com/angr/claripy.git
pip install -U git+https://github.com/angr/pyvex.git
pip install -U git+https://github.com/angr/cle.git
pip install unicorn==2.0.1.post1
pip install -U --no-build-isolation git+ssh://git@github.com/bluesadi/oxidizer.git
pip install -U git+https://github.com/angr/angr-management.git