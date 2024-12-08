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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 366, in _decompile
    codegen = self.project.analyses[self._codegen_cls].prep(kb=self.kb, fail_fast=self._fail_fast)(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 250, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2649, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2698, in _analyze
    self._translate_prototype_to_rust(self._func.prototype),
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2676, in _translate_prototype_to_rust
    args = [translator.ctype2rust(arg) for arg in prototype.args]
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2676, in <listcomp>
    args = [translator.ctype2rust(arg) for arg in prototype.args]
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/typehoon/translator.py", line 130, in ctype2rust
    tc = self.simtype2tc(simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 67, in simtype2tc
    return self._simtype2tc(simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 219, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 210, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 70, in _simtype2tc
    if simtype in self.translated_simtypes:
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/sim_type.py", line 98, in __hash__
    out ^= hash(getattr(self, attr))
RecursionError: maximum recursion depth exceeded
