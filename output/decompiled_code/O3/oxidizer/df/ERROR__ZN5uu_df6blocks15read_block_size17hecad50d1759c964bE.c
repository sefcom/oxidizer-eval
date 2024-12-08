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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 496, in _decompilation_simplifications
    ail_graph = self._simplify_blocks(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 1112, in _simplify_blocks
    simplified = self._simplify_block(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 1150, in _simplify_block
    simp = self.project.analyses.AILBlockSimplifier(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 265, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/block_simplifier.py", line 108, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/block_simplifier.py", line 125, in _analyze
    new_block = self._simplify_block_once(block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/block_simplifier.py", line 200, in _simplify_block_once
    return self._peephole_optimize(new_block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/block_simplifier.py", line 356, in _peephole_optimize
    peephole_optimize_exprs(block, self._expr_peephole_opts)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/utils.py", line 583, in peephole_optimize_exprs
    walker.walk(block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 238, in walk
    new_stmt = self._handle_stmt(i, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 259, in _handle_stmt
    return handler(stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 290, in _handle_Assignment
    src = self._handle_expr(1, stmt.src, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/utils.py", line 558, in _handle_expr
    processed = ailment.AILBlockWalker._handle_expr(walker, expr_idx, expr, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 271, in _handle_expr
    expr = handler(expr_idx, expr, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 580, in _handle_Phi
    return super()._handle_Phi(expr_id, expr, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 178, in _handle_Phi
    self._handle_expr(idx, vvar, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/utils.py", line 558, in _handle_expr
    processed = ailment.AILBlockWalker._handle_expr(walker, expr_idx, expr, stmt_idx, stmt, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 266, in _handle_expr
    handler = self.expr_handlers[type(expr)]
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/claripy/backends/backend_z3.py", line 52, in handle_sigint
    raise KeyboardInterrupt
KeyboardInterrupt
