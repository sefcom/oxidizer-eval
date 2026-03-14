#!/bin/bash
set -e
pip install setuptools setuptools-rust
pip install rust_demangler==1.0
pip install git+https://github.com/angr/archinfo.git@84ad167543028b32e170d3659650707b3866185c
pip install git+https://github.com/angr/claripy.git@8b890bb13fe743bfdbaae119062631db4f10047b
pip install git+https://github.com/angr/pyvex.git@3f92fece7147e91cea401e14a3936f20860a402e
pip install git+https://github.com/angr/cle.git@ce3333d0e1e72936fdbb75eefd70299ead4fb998
cd oxidizer
pip install --no-build-isolation -e .