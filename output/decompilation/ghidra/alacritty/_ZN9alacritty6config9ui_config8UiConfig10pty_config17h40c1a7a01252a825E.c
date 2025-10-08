void _ZN9alacritty6config9ui_config8UiConfig10pty_config17h40c1a7a01252a825E
               (long *param_1,long param_2)

{
  long lVar1;
  undefined auVar2 [16];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  
  if (*(long *)(param_2 + 0x360) == -0x7fffffffffffffff) {
    local_50 = -0x7fffffffffffffff;
  }
  else {
    _ZN76__LT_alacritty__config__ui_config__Program_u20_as_u20_core__clone__Clone_GT_5clone17ha9cecc4ab8fd9e38E
              (&local_50,param_2 + 0x360);
  }
  _ZN4core6option15Option_LT_T_GT_7or_else17hb40315794b9ee246E(&local_98,&local_50,param_2);
  if (local_98 == -0x7fffffffffffffff) {
    local_c8 = -0x8000000000000000;
    lVar1 = *(long *)(param_2 + 0x310);
  }
  else {
    lStack_c0 = CONCAT44(uStack_8c,uStack_90);
    local_b8 = local_88;
    if (local_98 == -0x8000000000000000) {
      local_78 = 8;
      local_70 = 0;
      local_98 = lStack_c0;
      local_b8 = local_80;
      lStack_c0 = local_88;
      local_80 = 0;
    }
    lVar1 = *(long *)(param_2 + 0x310);
    local_c8 = local_98;
    local_a8 = local_78;
    lStack_a0 = local_70;
    lStack_b0 = local_80;
  }
  if (lVar1 == -0x8000000000000000) {
    local_98 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 005368ee to 00536987 has its CatchHandler @ 00536a06 */
    _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
              (&local_50,*(undefined8 *)(param_2 + 0x318),*(undefined8 *)(param_2 + 800));
    local_88 = local_40;
    local_98 = local_50;
    uStack_90 = uStack_48;
    uStack_8c = uStack_44;
  }
  _ZN4core6option15Option_LT_T_GT_7or_else17ha0e97caec7d64104E(&local_68,&local_98,param_2);
                    /* try { // try from 00536988 to 0053698c has its CatchHandler @ 005369e9 */
  auVar2 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h1712436c6fb8faccE();
  param_1[4] = local_a8;
  param_1[5] = lStack_a0;
  param_1[2] = local_b8;
  param_1[3] = lStack_b0;
  *param_1 = local_c8;
  param_1[1] = lStack_c0;
  param_1[6] = local_68;
  param_1[7] = lStack_60;
  param_1[8] = local_58;
  *(undefined *)(param_1 + 0xf) = 0;
  lVar1 = _UNK_00975360;
  param_1[9] = (long)PTR_DAT_00975358;
  param_1[10] = lVar1;
  lVar1 = _UNK_00975370;
  param_1[0xb] = _DAT_00975368;
  param_1[0xc] = lVar1;
  *(undefined (*) [16])(param_1 + 0xd) = auVar2;
  return;
}