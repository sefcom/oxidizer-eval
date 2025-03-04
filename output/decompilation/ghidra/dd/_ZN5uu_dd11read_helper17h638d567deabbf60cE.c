void _ZN5uu_dd11read_helper17h638d567deabbf60cE
               (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h7ed7dd5e8601bb1eE(param_3,param_4,0xdd);
  if (*(char *)(*(long *)(param_2 + 8) + 0x68) == '\0') {
    _ZN5uu_dd5Input16fill_consecutive17h7d4bc8ab92dd656eE(&local_60,param_2,param_3);
  }
  else {
    _ZN5uu_dd5Input11fill_blocks17h45cc08a13ee607a5E
              (&local_60,param_2,param_3,*(undefined *)(*(long *)(param_2 + 8) + 0x69));
  }
  if (local_60 == 0) {
    uStack_68 = local_40;
    uStack_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_80 = local_58;
    if ((local_58 == 0) && (CONCAT44(uStack_4c,local_50) == 0)) {
      param_1[3] = CONCAT44(uStack_44,uStack_48);
      param_1[4] = local_40;
      param_1[1] = 0;
      param_1[2] = CONCAT44(uStack_4c,local_50);
      *param_1 = 0;
    }
    else {
      lVar1 = *(long *)(param_2 + 8);
      if (*(char *)(lVar1 + 0x6a) != '\0') {
        _ZN5uu_dd11read_helper12perform_swab17h674fb7c29172040eE(param_3[1],param_3[2]);
        lVar1 = *(long *)(param_2 + 8);
      }
      if (*(char *)(lVar1 + 0x50) != '\a') {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0fe0d79b2ed079ccE
                  (&local_60,param_3);
        _ZN5uu_dd6blocks25conv_block_unblock_helper17he5e21bd733c5515fE
                  (&local_38,&local_60,lVar1 + 0x50,&local_80);
                    /* try { // try from 001d8c32 to 001d8c39 has its CatchHandler @ 001d8c71 */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hcaeb013c8c4216feE(param_3);
        param_3[2] = local_28;
        *param_3 = local_38;
        param_3[1] = uStack_30;
      }
      param_1[3] = CONCAT44(uStack_6c,uStack_70);
      param_1[4] = uStack_68;
      param_1[1] = local_80;
      param_1[2] = CONCAT44(uStack_74,uStack_78);
      *param_1 = 0;
    }
  }
  else {
    param_1[1] = local_58;
    *param_1 = 1;
  }
  return;
}