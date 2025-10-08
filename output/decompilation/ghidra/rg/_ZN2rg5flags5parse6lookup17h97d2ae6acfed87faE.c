undefined  [16] _ZN2rg5flags5parse6lookup17h97d2ae6acfed87faE(ulong param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined local_28 [24];
  
  uVar2 = _ZN2rg5flags5parse6Parser3new17h41a0a58eaeb94208E();
  _ZN2rg5flags5parse6Parser9find_long17h9dc8bf2eec00e1d3E(local_28,uVar2,param_1,param_2);
  _ZN4core3ptr39drop_in_place_LT_lexopt__LastOption_GT_17h7bcd830d12d0510fE(local_28);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1 << 0x40;
}