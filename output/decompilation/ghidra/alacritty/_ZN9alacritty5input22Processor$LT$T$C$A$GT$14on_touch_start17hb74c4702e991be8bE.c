void _ZN9alacritty5input22Processor_LT_T_C_A_GT_14on_touch_start17hb74c4702e991be8bE
               (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined2 local_bc;
  undefined local_ba;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined uStack_7c;
  undefined2 uStack_7b;
  undefined uStack_79;
  long local_70;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13touch_purpose17hfb6ca17d7f1966f0E
            ();
  lVar1 = *param_1;
  lVar5 = param_1[1];
  local_58 = param_1[4];
  lStack_50 = param_1[5];
  lVar3 = param_1[6];
  lVar6 = param_1[7];
  local_68 = param_1[8];
  uVar4 = *(undefined *)((long)param_1 + 0x44);
  lVar2 = param_1[0xe];
  *param_1 = 4;
  switch(lVar1) {
  case 4:
    local_48 = *param_2;
    lStack_40 = param_2[1];
    local_58 = param_2[2];
    lStack_50 = param_2[3];
    lVar3 = param_2[4];
    lVar6 = param_2[5];
    local_68 = param_2[6];
    uVar4 = *(undefined *)((long)param_2 + 0x34);
    local_ba = *(undefined *)((long)param_2 + 0x37);
    local_bc = *(undefined2 *)((long)param_2 + 0x35);
    local_70 = param_2[7];
    lVar5 = 9;
    goto LAB_0055a91d;
  case 5:
  case 6:
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h1264fc145c2ba3a1E
              (&local_b8);
                    /* try { // try from 0055a789 to 0055a793 has its CatchHandler @ 0055a9b6 */
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hb8109ba4e3020215E(&local_b8,lVar6);
    break;
  default:
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h1264fc145c2ba3a1E
              (&local_b8);
                    /* try { // try from 0055a807 to 0055a81e has its CatchHandler @ 0055a9b4 */
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hb8109ba4e3020215E(&local_b8,lVar3);
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hb8109ba4e3020215E(&local_b8,lVar2);
    break;
  case 8:
  case 9:
    local_48 = param_1[2];
    lStack_40 = param_1[3];
    local_bc = *(undefined2 *)((long)param_1 + 0x45);
    local_ba = *(undefined *)((long)param_1 + 0x47);
    local_70 = *param_2;
    local_b8 = param_2[1];
    lStack_b0 = param_2[2];
    local_a8 = param_2[3];
    lStack_a0 = param_2[4];
    local_98 = *(undefined4 *)(param_2 + 5);
    uStack_94 = *(undefined4 *)((long)param_2 + 0x2c);
    lStack_90 = param_2[6];
    local_88 = param_2[7];
    goto LAB_0055a91d;
  case 10:
    lStack_b0 = param_1[2];
    local_a8 = param_1[3];
    uStack_7b = *(undefined2 *)((long)param_1 + 0x45);
    uStack_79 = *(undefined *)((long)param_1 + 0x47);
                    /* try { // try from 0055a8be to 0055a8c7 has its CatchHandler @ 0055a9b2 */
    local_b8 = lVar5;
    lStack_a0 = param_1[4];
    local_98 = *(undefined4 *)(param_1 + 5);
    uStack_94 = *(undefined4 *)((long)param_1 + 0x2c);
    lStack_90 = lVar3;
    local_88 = lVar6;
    local_80 = (int)local_68;
    uStack_7c = uVar4;
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hb8109ba4e3020215E(&local_b8,param_2[6])
    ;
  }
  local_48 = local_b8;
  lStack_40 = lStack_b0;
  local_58 = local_a8;
  lStack_50 = lStack_a0;
  lVar3 = CONCAT44(uStack_94,local_98);
  local_68 = local_88;
  local_bc = local_88._5_2_;
  local_ba = local_88._7_1_;
  local_70 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,local_80)));
  lVar5 = 10;
  lVar6 = lStack_90;
  uVar4 = local_88._4_1_;
LAB_0055a91d:
  uStack_60 = 0;
  _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(param_1);
  *param_1 = lVar5;
  param_1[1] = local_48;
  param_1[2] = lStack_40;
  param_1[3] = local_58;
  param_1[4] = lStack_50;
  param_1[5] = lVar3;
  param_1[6] = lVar6;
  *(undefined4 *)(param_1 + 7) = (undefined4)local_68;
  *(undefined *)((long)param_1 + 0x3c) = uVar4;
  *(undefined2 *)((long)param_1 + 0x3d) = local_bc;
  *(undefined *)((long)param_1 + 0x3f) = local_ba;
  param_1[8] = local_70;
  param_1[9] = local_b8;
  param_1[10] = lStack_b0;
  param_1[0xb] = local_a8;
  param_1[0xc] = lStack_a0;
  param_1[0xd] = CONCAT44(uStack_94,local_98);
  param_1[0xe] = lStack_90;
  param_1[0xf] = local_88;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}