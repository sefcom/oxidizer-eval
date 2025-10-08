void _ZN3bat6assets21serialized_syntax_set19SerializedSyntaxSet11deserialize17hd0680f92916f6cb5E
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_100 = &DAT_00291b78;
  uStack_f8 = 10;
  _ZN3std2fs4read17h93dd606058041d1cE(&uStack_f0);
  ppuStack_c8 = &puStack_100;
  uStack_d8 = uVar1;
  uStack_d0 = uVar2;
  _ZN3bat6assets19asset_from_contents17h9aa831f69bef887dE
            (&iStack_70,uStack_e8,uStack_e0,&DAT_00291b78,10);
  if (iStack_70 == 1) {
    _ZN3bat6assets16asset_from_cache28__u7b__u7b_closure_u7d__u7d_17h324a9a628ccba514E
              (&iStack_c0,&puStack_100,&iStack_68);
    *(undefined8 *)(param_1 + 0x12) = uStack_80;
    *(undefined8 *)(param_1 + 0x14) = uStack_78;
    param_1[0xe] = iStack_90;
    param_1[0xf] = iStack_8c;
    param_1[0x10] = iStack_88;
    param_1[0x11] = iStack_84;
    param_1[10] = iStack_a0;
    param_1[0xb] = iStack_9c;
    param_1[0xc] = iStack_98;
    param_1[0xd] = iStack_94;
    param_1[6] = iStack_b0;
    param_1[7] = iStack_ac;
    param_1[8] = iStack_a8;
    param_1[9] = iStack_a4;
    param_1[2] = iStack_c0;
    param_1[3] = iStack_bc;
    param_1[4] = iStack_b8;
    param_1[5] = iStack_b4;
    param_1[0] = 1;
    param_1[1] = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x14) = uStack_20;
    *(undefined8 *)(param_1 + 0x10) = uStack_30;
    *(undefined8 *)(param_1 + 0x12) = uStack_28;
    param_1[0xc] = iStack_40;
    param_1[0xd] = iStack_3c;
    param_1[0xe] = iStack_38;
    param_1[0xf] = iStack_34;
    param_1[8] = iStack_50;
    param_1[9] = iStack_4c;
    param_1[10] = iStack_48;
    param_1[0xb] = iStack_44;
    param_1[4] = iStack_60;
    param_1[5] = iStack_5c;
    param_1[6] = iStack_58;
    param_1[7] = iStack_54;
    *param_1 = iStack_70;
    param_1[1] = iStack_6c;
    param_1[2] = iStack_68;
    param_1[3] = iStack_64;
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
            (uStack_f0,uStack_e8);
  return;
}