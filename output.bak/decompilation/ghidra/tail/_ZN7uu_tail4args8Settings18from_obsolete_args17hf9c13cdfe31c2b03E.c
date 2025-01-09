ulong * __rustcall
uu_tail::args::Settings::from_obsolete_args(ulong *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _<uu_tail::args::Settings_as_core::default::Default>::default(&local_c8);
  if (*(char *)((long)param_2 + 10) != '\0') {
    uStack_7c = CONCAT31(uStack_7c._1_3_,param_3 != 0);
  }
  bVar1 = *(char *)((long)param_2 + 9) == '\0';
  uStack_c0 = *param_2;
  local_b8 = 10;
  if (bVar1) {
    uStack_c0 = (ulong)*(byte *)(param_2 + 1);
    local_b8 = *param_2;
  }
  local_c8 = 4;
  if (!bVar1) {
    local_c8 = (ulong)*(byte *)(param_2 + 1);
  }
  if (param_3 == 0) {
    _<uu_tail::paths::Input_as_core::default::Default>::default(&local_78);
  }
  else {
                    /* try { // try from 001f8de2 to 001f8e34 has its CatchHandler @ 001f8e70 */
    paths::Input::from(&local_78,param_3);
  }
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  ::alloc::vec::Vec<T,A>::push(&uStack_b0,&local_48);
  param_1[8] = local_88;
  param_1[9] = CONCAT44(uStack_7c,uStack_80);
  param_1[6] = local_98;
  param_1[7] = uStack_90;
  param_1[4] = local_a8;
  param_1[5] = uStack_a0;
  param_1[2] = local_b8;
  param_1[3] = uStack_b0;
  *param_1 = local_c8;
  param_1[1] = uStack_c0;
  return param_1;
}