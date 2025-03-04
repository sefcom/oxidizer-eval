void _ZN5uu_wc17files0_iter_stdin17h027d8be6f7e7f770E(undefined8 param_1)

{
  undefined auVar1 [12];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  local_50 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
  auVar1 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(&local_50);
                    /* try { // try from 001bcfe6 to 001bcffc has its CatchHandler @ 001bd031 */
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_30,&DAT_0011e2e7,1);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  _ZN5uu_wc11files0_iter17hd579310a299db12aE(param_1,auVar1._0_8_,auVar1._8_4_ & 1,&local_48);
  return;
}