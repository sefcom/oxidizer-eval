undefined *
_ZN5uu_dd6Output8new_fifo17h0387b804082ecc3bE
          (undefined *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined4 local_48;
  undefined8 local_44;
  byte local_3c;
  undefined local_3b;
  byte local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  
  lVar1 = *(long *)(param_4 + 0x22);
  if (lVar1 == 0) {
LAB_00190aac:
    if ((*param_4 == 2) || (*(long *)(param_4 + 2) != 0)) {
      local_3c = *(byte *)((long)param_4 + 0x92) ^ 1;
      local_3b = *(undefined *)((long)param_4 + 0x91);
      local_44 = (ulong)CONCAT16(*(undefined *)((long)param_4 + 0x96),0x100000001b6);
      auVar3 = _ZN5uu_dd17make_linux_oflags17h8059fc6e2ea11e72E((long)param_4 + 0x96);
      local_48 = 0;
      if ((auVar3 & (undefined  [12])0x1) != (undefined  [12])0x0) {
        local_48 = auVar3._8_4_;
      }
      _ZN3std2fs11OpenOptions4open17h8d324e17fb255e3bE(local_38,&local_48,param_2,param_3);
      if ((local_38[0] & 1) != 0) goto LAB_00190b25;
      *param_1 = 2;
      *(undefined4 *)(param_1 + 4) = local_34;
    }
    else {
      *param_1 = 3;
    }
    *(int **)(param_1 + 0x10) = param_4;
  }
  else {
    _ZN3std2fs4File4open17h6f8eb2428e586d07E(local_38,param_2,param_3);
    if ((local_38[0] & 1) == 0) {
      local_44 = CONCAT44(local_44._4_4_,local_34);
      local_48 = CONCAT31(local_48._1_3_,2);
                    /* try { // try from 00190a6c to 00190a83 has its CatchHandler @ 00190b5c */
      auVar2 = _ZN5uu_dd4Dest4seek17h5a64bc595251d974E(&local_48,lVar1);
      if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        auVar2 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                 )(auVar2._8_8_);
        *(undefined (*) [16])(param_1 + 8) = auVar2;
        *param_1 = 4;
        _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h46074e24ca5324afE
                  (local_48,local_44 & 0xffffffff);
        return param_1;
      }
      _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h46074e24ca5324afE
                (local_48,local_44 & 0xffffffff);
      goto LAB_00190aac;
    }
LAB_00190b25:
    auVar2 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
             )(local_30);
    *(undefined (*) [16])(param_1 + 8) = auVar2;
    *param_1 = 4;
  }
  return param_1;
}