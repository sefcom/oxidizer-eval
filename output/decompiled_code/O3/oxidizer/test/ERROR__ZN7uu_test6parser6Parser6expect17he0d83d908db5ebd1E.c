Traceback (most recent call last):
  File "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/eval/decompilers/oxidizer.py", line 44, in oxidizer_dec
    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 265, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 164, in __init__
    self._decompile()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 256, in _decompile
    clinic = self.project.analyses.Clinic(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 265, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 189, in __init__
    self._analyze_for_decompiling()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 239, in _analyze_for_decompiling
    ail_graph = self._decompilation_simplifications(ail_graph)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 565, in _decompilation_simplifications
    ail_graph = self._run_simplification_passes(ail_graph, stage=OptimizationPassStage.AFTER_GLOBAL_SIMPLIFICATION)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 1275, in _run_simplification_passes
    a = pass_(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/optimization_passes/alloc_simplifier.py", line 202, in __init__
    self.analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/optimization_pass.py", line 82, in analyze
    self._analyze(cache=cache)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/optimization_passes/alloc_simplifier.py", line 354, in _analyze
    self._remove_alloc_error_handling_blocks()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/optimization_passes/alloc_simplifier.py", line 337, in _remove_alloc_error_handling_blocks
    false_visited_blocks, false_block = self._get_real_jump_target(jump.false_target, jump.false_target_idx)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/optimization_passes/alloc_simplifier.py", line 313, in _get_real_jump_target
    block = self.blocks_by_addr_and_idx[(block_addr, block_idx)]
KeyError: (4910947, None)
