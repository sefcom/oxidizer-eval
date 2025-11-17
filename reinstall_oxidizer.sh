# !/bin/bash
set -e
pip uninstall angr
pip install -U --no-build-isolation git+ssh://git@github.com/bluesadi/oxidizer.git