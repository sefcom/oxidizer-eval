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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/multi_simplifier.py", line 208, in __init__
    self.analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/optimization_pass.py", line 82, in analyze
    self._analyze(cache=cache)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/multi_simplifier.py", line 220, in _analyze
    new_block = self.engine.process(state=self.state.copy(), block=old_block.copy())
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 59, in process
    super().process(state, *args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 114, in process
    self._process(state, None, block=kwargs.pop("block", None), whitelist=kwargs.pop("whitelist", None))
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 876, in _process
    self._process_Stmt(whitelist=whitelist)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 72, in _process_Stmt
    new_stmt = self._ail_handle_Stmt(stmt)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 80, in _ail_handle_Stmt
    return getattr(self, handler)(stmt)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 85, in _ail_handle_Assignment
    src = self._expr(stmt.src)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 155, in _expr
    v = getattr(self, handler)(expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 204, in _ail_handle_Convert
    operand_expr = self._expr(expr.operand)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/optimization_passes/engine_base.py", line 155, in _expr
    v = getattr(self, handler)(expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 1058, in _ail_handle_BinaryOp
    return handler(expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 1294, in _ail_handle_Mull
    **expr.tags,
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/tagged_object.py", line 54, in tags
    @property
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/claripy/backends/backend_z3.py", line 52, in handle_sigint
    raise KeyboardInterrupt
KeyboardInterrupt
