undefined8 _ZN9alacritty3msg17h6c8ae6430e00480eE(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = -0x8000000000000000;
  if (*param_1 < -0x7ffffffffffffffe) goto LAB_00570a32;
                    /* try { // try from 005709b1 to 005709da has its CatchHandler @ 00570a5f */
  _ZN3std3env3var17h6dfe92363d5ba5ffE(&local_48,"XDG_ACTIVATION_TOKEN",0x14);
  if (local_48 == 1) {
    _ZN9alacritty3msg28__u7b__u7b_closure_u7d__u7d_17hf2625e4c89e1ca61E(&local_68,&uStack_40);
    if ((local_68 & 1) != 0) goto LAB_005709e1;
LAB_00570a04:
    lVar2 = CONCAT44(uStack_5c,uStack_60);
    local_28 = (undefined4)local_58;
    uStack_24 = local_58._4_4_;
    uStack_20 = (undefined4)uStack_50;
    uStack_1c = uStack_50._4_4_;
  }
  else {
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    local_58 = local_38;
    uStack_50 = uStack_30;
    if ((local_48 & 1) == 0) goto LAB_00570a04;
LAB_005709e1:
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17ha9e0b10d03171307E
              (&local_68);
  }
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6a0f98c288fb7106E
            (param_1 + 0x13);
  param_1[0x13] = lVar2;
  *(undefined4 *)(param_1 + 0x14) = local_28;
  *(undefined4 *)((long)param_1 + 0xa4) = uStack_24;
  *(undefined4 *)(param_1 + 0x15) = uStack_20;
  *(undefined4 *)((long)param_1 + 0xac) = uStack_1c;
LAB_00570a32:
  lVar2 = _ZN9alacritty3ipc12send_message17hc4ebc7a84409f3fcE(param_1 + 0x16,param_1);
  if (lVar2 != 0) {
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1f73520aeb5db4e5E(lVar2);
    return uVar1;
  }
  return 0;
}