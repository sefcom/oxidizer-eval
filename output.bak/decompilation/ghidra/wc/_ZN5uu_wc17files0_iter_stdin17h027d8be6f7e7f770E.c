void __rustcall uu_wc::files0_iter_stdin(undefined8 param_1)

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
  
  local_50 = std::io::stdio::stdin();
  auVar1 = std::io::stdio::Stdin::lock(&local_50);
                    /* try { // try from 001bcfe6 to 001bcffc has its CatchHandler @ 001bd031 */
  std::sys::os_str::bytes::Slice::to_owned(&local_30,&DAT_0011e2e7,1);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  files0_iter(param_1,auVar1._0_8_,auVar1._8_4_ & 1,&local_48);
  return;
}