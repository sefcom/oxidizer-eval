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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 256, in _decompile
    clinic = self.project.analyses.Clinic(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 269, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 254, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 194, in __init__
    self._analyze_for_decompiling()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 244, in _analyze_for_decompiling
    ail_graph = self._decompilation_simplifications(ail_graph)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 617, in _decompilation_simplifications
    variable_kb = self._recover_and_link_variables(ail_graph, arg_list, arg_vvars, vvar2vvar)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 1574, in _recover_and_link_variables
    vr = self.project.analyses.VariableRecoveryFast(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 269, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 254, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/variable_recovery_fast.py", line 283, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/forward_analysis/forward_analysis.py", line 268, in _analyze
    self._analysis_core_graph()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/forward_analysis/forward_analysis.py", line 285, in _analysis_core_graph
    changed, output_state = self._run_on_node(n, job_state)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/variable_recovery_fast.py", line 459, in _run_on_node
    self._process_block(state, block)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/variable_recovery_fast.py", line 581, in _process_block
    processor.process(state, block=block, fail_fast=self._fail_fast)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/engine_base.py", line 91, in process
    super().process(state, *args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 70, in process
    return self._process(state, block=block, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 660, in _process
    stmt_data = self._process_stmts(whitelist=whitelist)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 700, in _process_stmts
    result.append(self._stmt(stmt))
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 706, in _stmt
    return self._stmt_handlers[stmt_type_name](stmt)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/engine_ail.py", line 197, in _handle_stmt_Call
    richr = self._expr(arg)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 742, in _expr
    return self._expr_handlers[expr_type_name](expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/engine_ail.py", line 331, in _handle_expr_Load
    addr_r = self._expr_bv(expr.addr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/engine_ail.py", line 307, in _expr_bv
    result = self._expr(expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 742, in _expr
    return self._expr_handlers[expr_type_name](expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/engines/light/engine.py", line 766, in _handle_expr_BinaryOp
    return self._binop_handlers[expr.op](expr)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/variable_recovery/engine_ail.py", line 469, in _handle_binop_Add
    compute = r0.data + r1.data  # type: ignore
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/claripy/operations.py", line 62, in _op
    raise ClaripyOperationError(msg)
claripy.errors.ClaripyOperationError: args' length must all be equal
