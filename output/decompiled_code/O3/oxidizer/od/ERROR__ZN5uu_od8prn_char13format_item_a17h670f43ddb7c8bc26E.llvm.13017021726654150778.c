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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 605, in _decompilation_simplifications
    vvar2vvar = self._collect_dephi_vvar_mapping_and_rewrite_blocks(ail_graph)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/timing.py", line 55, in timed_func
    return func(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/clinic.py", line 1395, in _collect_dephi_vvar_mapping_and_rewrite_blocks
    dephication = self.project.analyses.GraphDephicationVVarMapping(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 265, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/dephication/graph_vvar_mapping.py", line 59, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/dephication/graph_vvar_mapping.py", line 62, in _analyze
    self.vvar_to_vvar_mapping = self._collect_and_remap()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/dephication/graph_vvar_mapping.py", line 77, in _collect_and_remap
    liveness = self.project.analyses.SLiveness(self._function, func_graph=self._graph, entry=self._entry)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 265, in __call__
    r = w(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/s_liveness.py", line 44, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/s_liveness.py", line 98, in _analyze
    vvar_use_collector = VVarUsesCollector()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/utils/ssa/vvar_uses_collector.py", line 19, in __init__
    super().__init__()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/ailment/block_walker.py", line 30, in __init__
    def __init__(self, stmt_handlers=None, expr_handlers=None):
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/claripy/backends/backend_z3.py", line 52, in handle_sigint
    raise KeyboardInterrupt
KeyboardInterrupt
