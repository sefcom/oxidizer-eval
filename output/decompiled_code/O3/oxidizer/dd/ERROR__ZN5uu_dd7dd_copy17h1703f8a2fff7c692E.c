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
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/decompiler.py", line 366, in _decompile
    codegen = self.project.analyses[self._codegen_cls].prep(kb=self.kb, fail_fast=self._fail_fast)(
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/analysis.py", line 254, in wrapper
    oself.__init__(*args, **kwargs)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2707, in __init__
    self._analyze()
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2756, in _analyze
    self._translate_prototype_to_rust(self._func.prototype),
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2734, in _translate_prototype_to_rust
    args = [translator.ctype2rust(arg) for arg in prototype.args]
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/decompiler/structured_codegen/rust.py", line 2734, in <listcomp>
    args = [translator.ctype2rust(arg) for arg in prototype.args]
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/rust/typehoon/translator.py", line 130, in ctype2rust
    tc = self.simtype2tc(simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 67, in simtype2tc
    return self._simtype2tc(simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 221, in _translate_SimTypeArray
    elem_type = self._simtype2tc(st.elem_type)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 216, in _translate_SimStruct
    fields[offset] = self._simtype2tc(ty)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 225, in _translate_SimTypePointer
    base = self._simtype2tc(st.pts_to)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 74, in _simtype2tc
    return handler(self, simtype)
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/analyses/typehoon/translator.py", line 213, in _translate_SimStruct
    offsets = st.offsets
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/sim_type.py", line 1402, in offsets
    align = ty.alignment
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/sim_type.py", line 902, in alignment
    return self.elem_type.alignment
  File "/home/34r7hm4n/.virtualenvs/oxidizer-eval/lib/python3.10/site-packages/angr/sim_type.py", line 121, in alignment
    if self.size is None:
RecursionError: maximum recursion depth exceeded
