undefined  [16]
_ZN7uu_uniq4Uniq10print_uniq17h818dd57e8b925a7aE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 unaff_R13;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar7 = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    uVar7 = 0;
  }
  local_d8 = param_4;
  local_d0 = param_5;
  _ZN3std2io7BufRead5split17h55d0a47e7c3c4bc4E(&local_68,param_2,param_3,uVar7);
                    /* try { // try from 0017064e to 00170687 has its CatchHandler @ 001709fe */
  _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h98b1df7ad774e08eE
            (&local_c8,&local_68);
  lVar4 = CONCAT44(uStack_c4,local_c8);
  if (lVar4 == -0x7fffffffffffffff) {
    uVar9 = 0;
  }
  else {
    if (lVar4 != -0x8000000000000000) {
      local_e8 = local_b8;
      local_78 = local_58;
      local_88 = local_68;
      uStack_84 = uStack_64;
      uStack_80 = uStack_60;
      uStack_7c = uStack_5c;
      cVar1 = *(char *)(param_1 + 0x32);
      cVar2 = *(char *)(param_1 + 0x30);
      cVar3 = *(char *)(param_1 + 0x31);
      uVar8 = 1;
      bVar6 = false;
      local_50 = -0x7fffffffffffffff;
      local_f8 = lVar4;
      uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
      local_a4 = uVar7;
                    /* try { // try from 00170710 to 00170724 has its CatchHandler @ 00170a31 */
      while (_ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h98b1df7ad774e08eE
                       (&local_48,&local_88), local_48 != local_50) {
        if (local_48 == -0x8000000000000000) {
                    /* try { // try from 00170904 to 00170921 has its CatchHandler @ 001709eb */
          auVar10 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_00234790
                    )(local_40);
LAB_00170922:
                    /* try { // try from 00170932 to 0017099f has its CatchHandler @ 001709f2 */
          _ZN4core3ptr92drop_in_place_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hab86488a13dfdbdcE
                    (CONCAT44(uStack_84,local_88),CONCAT44(uStack_7c,uStack_80));
          goto LAB_001709ab;
        }
        local_a0 = local_48;
        uStack_98 = local_40;
        local_90 = local_38;
                    /* try { // try from 00170770 to 001707cc has its CatchHandler @ 00170a36 */
        cVar5 = (*(code *)PTR__ZN7uu_uniq4Uniq8cmp_keys17h242b77250fdb6028E_00234798)
                          (param_1,uStack_f0,local_e8);
        if (cVar5 == '\0') {
          if (cVar1 == '\0') {
                    /* try { // try from 0017089a to 001708a3 has its CatchHandler @ 00170a31 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE
                      (&local_a0);
            uVar8 = uVar8 + 1;
          }
          else {
                    /* try { // try from 00170834 to 0017084e has its CatchHandler @ 00170a36 */
            auVar10 = _ZN7uu_uniq4Uniq10print_line17h32e5970fdc1721c7E
                                (param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
            if (auVar10._0_8_ != 0) {
LAB_00170915:
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE
                        (&local_a0);
              goto LAB_00170922;
            }
            local_b8 = local_90;
            local_c8 = (undefined4)local_a0;
            uStack_c4 = local_a0._4_4_;
            uStack_c0 = (undefined4)uStack_98;
            uStack_bc = uStack_98._4_4_;
                    /* try { // try from 0017086f to 00170878 has its CatchHandler @ 001709fc */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE
                      (&local_f8);
            local_e8 = local_b8;
            local_f8 = CONCAT44(uStack_c4,local_c8);
            uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
            uVar8 = uVar8 + 1;
            bVar6 = true;
          }
        }
        else {
          if ((uVar8 == 1 && cVar2 == '\0') || (1 < uVar8 && cVar3 == '\0')) {
            auVar10 = _ZN7uu_uniq4Uniq10print_line17h32e5970fdc1721c7E
                                (param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
            bVar6 = true;
            if (auVar10._0_8_ != 0) goto LAB_00170915;
          }
          local_b8 = local_90;
          local_c8 = (undefined4)local_a0;
          uStack_c4 = local_a0._4_4_;
          uStack_c0 = (undefined4)uStack_98;
          uStack_bc = uStack_98._4_4_;
                    /* try { // try from 001707ef to 001707f8 has its CatchHandler @ 00170a18 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE
                    (&local_f8);
          local_e8 = local_b8;
          local_f8 = CONCAT44(uStack_c4,local_c8);
          uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
          uVar8 = 1;
        }
      }
                    /* try { // try from 001708bf to 001708c3 has its CatchHandler @ 001709f2 */
      _ZN4core3ptr92drop_in_place_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hab86488a13dfdbdcE
                (CONCAT44(uStack_84,local_88),CONCAT44(uStack_7c,uStack_80));
      if ((uVar8 == 1 && cVar2 == '\0') || (1 < uVar8 && cVar3 == '\0')) {
        auVar10 = _ZN7uu_uniq4Uniq10print_line17h32e5970fdc1721c7E
                            (param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
        if (auVar10._0_8_ != 0) {
LAB_001709ab:
                    /* try { // try from 001709ab to 001709c0 has its CatchHandler @ 001709ed */
          unaff_R13 = auVar10._8_8_;
          uVar9 = auVar10._0_8_;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE
                    (&local_f8);
          goto LAB_001709c4;
        }
        if ((*(char *)(param_1 + 0x36) == '\0') || (*(char *)(param_1 + 0x36) == '\x03'))
        goto LAB_00170977;
      }
      else if (((*(char *)(param_1 + 0x36) == '\0') || (*(char *)(param_1 + 0x36) == '\x03')) &&
              (bVar6)) {
LAB_00170977:
        local_c8 = CONCAT31(local_c8._1_3_,(char)local_a4);
        uVar9 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17ha26dee22509071d6E
                          (local_d8,local_d0,&local_c8,1);
        auVar10 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1a47c8c078c37691E
                            (uVar9);
        if (auVar10._0_8_ != 0) goto LAB_001709ab;
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE(&local_f8);
      uVar9 = 0;
      goto LAB_001709c4;
    }
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_00234790
              )();
    unaff_R13 = auVar10._8_8_;
    uVar9 = auVar10._0_8_;
  }
                    /* try { // try from 0017069e to 001706a2 has its CatchHandler @ 001709f7 */
  _ZN4core3ptr92drop_in_place_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hab86488a13dfdbdcE
            (CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
LAB_001709c4:
  _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h2ae1655ce00f55b1E
            (local_d8,local_d0);
  auVar10._8_8_ = unaff_R13;
  auVar10._0_8_ = uVar9;
  return auVar10;
}