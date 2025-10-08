void _ZN3bat6assets16asset_from_cache17h3795340a0ae6536fE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
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
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_f8 = &DAT_00291b6f;
  local_f0 = 9;
  _ZN3std2fs4read17h93dd606058041d1cE(&local_e8);
                    /* try { // try from 00536ba8 to 00536c11 has its CatchHandler @ 00536c59 */
  local_d0 = param_2;
  local_c8 = param_3;
  local_c0 = (undefined *)&local_f8;
  _ZN3bat6assets19asset_from_contents17h9aebca1bb60e2b9aE
            (&local_68,local_e0,local_d8,&DAT_00291b6f,9);
  if ((char)local_68 == '\r') {
    *(undefined8 *)(param_1 + 0x10) = local_28;
    *(undefined8 *)(param_1 + 0x12) = uStack_20;
  }
  else {
    _ZN3bat6assets16asset_from_cache28__u7b__u7b_closure_u7d__u7d_17h324a9a628ccba514E
              (&local_b8,&local_f8,&local_68);
    *(undefined8 *)(param_1 + 0x10) = local_78;
    *(undefined8 *)(param_1 + 0x12) = uStack_70;
    local_68 = local_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    local_58 = local_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    local_48 = local_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    local_38 = local_88;
    uStack_34 = uStack_84;
    uStack_30 = uStack_80;
    uStack_2c = uStack_7c;
  }
  param_1[0xc] = local_38;
  param_1[0xd] = uStack_34;
  param_1[0xe] = uStack_30;
  param_1[0xf] = uStack_2c;
  param_1[8] = local_48;
  param_1[9] = uStack_44;
  param_1[10] = uStack_40;
  param_1[0xb] = uStack_3c;
  param_1[4] = local_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
            (local_e8,local_e0);
  return;
}