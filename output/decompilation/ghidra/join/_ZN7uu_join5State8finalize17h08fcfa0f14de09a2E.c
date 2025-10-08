undefined8
_ZN7uu_join5State8finalize17h08fcfa0f14de09a2E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(char *)(param_1 + 0x59) != '\0') &&
       (lVar1 = _ZN7uu_join5State16print_first_line17hca78e112704afaabE(param_1,param_2,param_4),
       lVar1 != 0)) {
      uVar2 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00204f40
              )(lVar1);
      return uVar2;
    }
    _ZN7uu_join5State9next_line17hd68ae9e4628c6bfaE(&local_98,param_1,param_3);
    lVar1 = CONCAT44(uStack_94,local_98);
    local_68 = uStack_90;
    uStack_64 = uStack_8c;
    uStack_60 = uStack_88;
    uStack_5c = uStack_84;
    if (lVar1 == -0x7fffffffffffffff) {
      puVar3 = &local_68;
LAB_00163ed3:
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbde49e4af2e5852bE(puVar3);
      return uVar2;
    }
    local_b8 = CONCAT44(uStack_74,local_78);
    uStack_b0 = CONCAT44(uStack_6c,uStack_70);
    local_d8 = lVar1;
    uStack_c0 = CONCAT44(uStack_7c,uStack_80);
    local_a8 = param_2;
    local_a0 = param_4;
    if (lVar1 != -0x8000000000000000) {
      do {
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        uStack_c8 = uStack_88;
        uStack_c4 = uStack_84;
                    /* try { // try from 00163f38 to 00163f4c has its CatchHandler @ 00164030 */
        if ((*(char *)(param_1 + 0x59) != '\0') &&
           (lVar1 = _ZN7uu_join5State10print_line17he9418c62082595efE
                              (param_1,local_a8,&local_d8,local_a0), lVar1 != 0)) {
                    /* try { // try from 0016400f to 00164017 has its CatchHandler @ 0016402e */
          uVar2 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00204f40
                  )(lVar1);
          _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_uu_join__Line_GT__GT_17h0fad273de0c46d5dE
                    (&local_d8);
          return uVar2;
        }
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        uStack_88 = uStack_c8;
        uStack_84 = uStack_c4;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        (*(code *)PTR__ZN7uu_join5State5reset17hf11a3d581915b2afE_00204f60)(param_1,&local_98);
        _ZN7uu_join5State9next_line17hd68ae9e4628c6bfaE(&local_98,param_1,param_3);
        lVar1 = CONCAT44(uStack_94,local_98);
        local_48 = uStack_90;
        uStack_44 = uStack_8c;
        uStack_40 = uStack_88;
        uStack_3c = uStack_84;
        local_38 = CONCAT44(uStack_7c,uStack_80);
        if (lVar1 == -0x7fffffffffffffff) {
          puVar3 = &local_48;
          goto LAB_00163ed3;
        }
        local_b8 = CONCAT44(uStack_74,local_78);
        uStack_b0 = CONCAT44(uStack_6c,uStack_70);
        local_d8 = lVar1;
        uStack_c0 = local_38;
      } while (lVar1 != -0x8000000000000000);
    }
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_uu_join__Line_GT__GT_17h0fad273de0c46d5dE
              (&local_d8);
  }
  return 0;
}