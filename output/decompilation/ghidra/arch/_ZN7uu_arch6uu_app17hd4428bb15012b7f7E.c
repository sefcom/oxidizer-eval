long _ZN7uu_arch6uu_app17hd4428bb15012b7f7E(long param_1)

{
  undefined8 uVar1;
  undefined auStack_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001dc2d0)();
  _ZN12clap_builder7builder7command7Command3new17ha0fe77cef072d3efE(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6e780c03043ed012E(auStack_5a8,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17h0774b5a8e4ec13dbE(local_2e0,auStack_5a8);
  _ZN12clap_builder7builder7command7Command10after_help17h4657f0a3d42151c8E(auStack_5a8,local_2e0);
  (*(code *)PTR_memcpy_001dc2a0)(param_1,auStack_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}