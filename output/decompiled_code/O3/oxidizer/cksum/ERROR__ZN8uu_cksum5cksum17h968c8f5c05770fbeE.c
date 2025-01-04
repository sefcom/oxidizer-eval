Traceback (most recent call last):
  File "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/eval/decompilers/angr.py", line 80, in _angr_dec_base
    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 269, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 254, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 164, in __init__
    self._decompile()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 314, in _decompile
    clinic.graph, ri = self._run_region_simplification_passes(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 496, in _run_region_simplification_passes
    a = pass_(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/return_duplicator_low.py", line 80, in __init__
    self.analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/optimization_pass.py", line 377, in analyze
    self._fixed_point_analyze(cache=cache)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/optimization_pass.py", line 427, in _fixed_point_analyze
    changes = self._analyze(cache=cache)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/return_duplicator_low.py", line 235, in _analyze
    return self._analyze_core(self.out_graph)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/return_duplicator_base.py", line 139, in _analyze_core
    self._copy_region([pred_node], region_head, region, graph)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/return_duplicator_base.py", line 212, in _copy_region
    node_copy = copy.deepcopy(node)
  File "/usr/lib/python3.10/copy.py", line 172, in deepcopy
    y = _reconstruct(x, memo, *rv)
  File "/usr/lib/python3.10/copy.py", line 271, in _reconstruct
    state = deepcopy(state, memo)
  File "/usr/lib/python3.10/copy.py", line 146, in deepcopy
    y = copier(x, memo)
  File "/usr/lib/python3.10/copy.py", line 211, in _deepcopy_tuple
    y = [deepcopy(a, memo) for a in x]
  File "/usr/lib/python3.10/copy.py", line 211, in <listcomp>
    y = [deepcopy(a, memo) for a in x]
  File "/usr/lib/python3.10/copy.py", line 146, in deepcopy
    y = copier(x, memo)
  File "/usr/lib/python3.10/copy.py", line 231, in _deepcopy_dict
    y[deepcopy(key, memo)] = deepcopy(value, memo)
  File "/usr/lib/python3.10/copy.py", line 146, in deepcopy
    y = copier(x, memo)
  File "/usr/lib/python3.10/copy.py", line 206, in _deepcopy_list
    append(deepcopy(a, memo))
  File "/usr/lib/python3.10/copy.py", line 172, in deepcopy
    y = _reconstruct(x, memo, *rv)
  File "/usr/lib/python3.10/copy.py", line 271, in _reconstruct
    state = deepcopy(state, memo)
  File "/usr/lib/python3.10/copy.py", line 146, in deepcopy
    y = copier(x, memo)
  File "/usr/lib/python3.10/copy.py", line 211, in _deepcopy_tuple
    y = [deepcopy(a, memo) for a in x]
  File "/usr/lib/python3.10/copy.py", line 211, in <listcomp>
    y = [deepcopy(a, memo) for a in x]
  File "/usr/lib/python3.10/copy.py", line 146, in deepcopy
    y = copier(x, memo)
  File "/usr/lib/python3.10/copy.py", line 231, in _deepcopy_dict
    y[deepcopy(key, memo)] = deepcopy(value, memo)
  File "/usr/lib/python3.10/copy.py", line 172, in deepcopy
    y = _reconstruct(x, memo, *rv)
  File "/usr/lib/python3.10/copy.py", line 283, in _reconstruct
    setattr(y, key, value)
AttributeError: can't set attribute 'bits'
