bool _ZN7uu_head4take18TakeAllLinesBuffer8is_empty17hb5e5799055f3f758E(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined uVar2;
  
  if (param_2 <= param_1) {
    return param_2 == param_1;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001fe820)
            ("assertion failed: self.start_index <= self.buffer.len()",0x37,
             &PTR_s_src_uu_head_src_take_rs_001f7b48);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}