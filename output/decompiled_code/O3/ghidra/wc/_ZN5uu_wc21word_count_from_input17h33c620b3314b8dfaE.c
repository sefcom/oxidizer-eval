void __rustcall uu_wc::word_count_from_input(ulong *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte extraout_DL;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  ulong local_20;
  ulong local_18;
  
  if (*param_2 == -0x7fffffffffffffff) {
    local_50 = std::io::stdio::stdin();
    uVar1 = std::io::stdio::Stdin::lock(&local_50);
    word_count_from_reader(&local_40,uVar1,extraout_DL & 1,param_3);
  }
  else {
    std::fs::File::open(&local_50);
    if ((int)local_50 != 0) {
      param_1[1] = local_48;
      *param_1 = 2;
      return;
    }
    word_count_from_reader(&local_40,local_50._4_4_,param_3);
  }
  param_1[5] = local_20;
  param_1[3] = local_30;
  param_1[4] = uStack_28;
  param_1[1] = local_40;
  param_1[2] = uStack_38;
  if (local_18 != 0) {
    param_1[6] = local_18;
  }
  *param_1 = (ulong)(local_18 != 0);
  return;
}