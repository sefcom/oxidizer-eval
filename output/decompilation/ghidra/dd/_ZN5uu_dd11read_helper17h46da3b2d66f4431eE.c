void _ZN5uu_dd11read_helper17h46da3b2d66f4431eE
               (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  byte local_60 [8];
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h82b279a1e4e0a0eaE(param_3,param_4,0xdd);
  if (*(char *)(*(long *)(param_2 + 8) + 0x68) == '\x01') {
    _ZN5uu_dd5Input11fill_blocks17h1db18295bd354b67E
              (local_60,param_2,param_3,*(undefined *)(*(long *)(param_2 + 8) + 0x69));
    local_80 = local_58;
    uStack_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    uStack_68 = local_40;
  }
  else {
    _ZN5uu_dd5Input16fill_consecutive17h39d193754d2b2b2dE(local_60,param_2,param_3);
    local_80 = local_58;
    uStack_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    uStack_68 = local_40;
  }
  if ((local_60[0] & 1) == 0) {
    if ((local_80 != 0) || (CONCAT44(uStack_74,uStack_78) != 0)) {
      lVar2 = *(long *)(param_2 + 8);
      if (*(char *)(lVar2 + 0x6a) != '\0') {
        _ZN5uu_dd11read_helper12perform_swab17h85f2ce77153961c5E(param_3[1],param_3[2]);
        lVar2 = *(long *)(param_2 + 8);
      }
      if (*(char *)(lVar2 + 0x50) != '\a') {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h10340bb6599e71edE
                  (local_60,param_3[1],param_3[2]);
        _ZN5uu_dd6blocks25conv_block_unblock_helper17hba15d5a3bd29b3b7E
                  (&local_38,local_60,lVar2 + 0x50,&local_80);
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h270e478e73f6834bE
                  (*param_3,param_3[1]);
        param_3[2] = local_28;
        *param_3 = local_38;
        param_3[1] = uStack_30;
      }
    }
    param_1[3] = CONCAT44(uStack_6c,uStack_70);
    param_1[4] = uStack_68;
    param_1[1] = local_80;
    param_1[2] = CONCAT44(uStack_74,uStack_78);
    uVar1 = 0;
  }
  else {
    param_1[1] = local_80;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}