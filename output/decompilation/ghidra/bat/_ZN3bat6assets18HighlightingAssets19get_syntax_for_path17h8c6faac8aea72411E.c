void _ZN3bat6assets18HighlightingAssets19get_syntax_for_path17h8c6faac8aea72411E
               (char *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined4 local_d0;
  undefined uStack_cc;
  undefined2 uStack_cb;
  undefined uStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined7 uStack_b8;
  undefined uStack_b1;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [24];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_80 = param_2;
  auVar9 = _ZN3std4path95__LT_impl_u20_core__convert__AsRef_LT_std__path__Path_GT__u20_for_u20_alloc__string__String_GT_6as_ref17h38bd28293a94b618E
                     (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  uVar6 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
                    /* try { // try from 0048f3c6 to 0048f605 has its CatchHandler @ 0048f668 */
  _ZN3bat14syntax_mapping13SyntaxMapping14get_syntax_for17he16ae842b51a4bfcE
            (&local_60,param_4,uVar5,uVar6);
  if (local_60 == 0) {
    (*(code *)
      PTR__ZN3bat6assets18HighlightingAssets20find_syntax_by_token17h2ed0326e3443b2e3E_00807600)
              (&local_d0,local_80,local_58,local_50);
    if ((char)local_d0 != '\r') {
      *(uint *)(param_1 + 4) = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
      *(uint *)(param_1 + 1) = CONCAT13(uStack_cc,local_d0._1_3_);
      *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_b1,uStack_b8);
      *(undefined8 *)(param_1 + 0x20) = uStack_b0;
      *(undefined8 *)(param_1 + 0x28) = local_a8;
      *(undefined8 *)(param_1 + 0x30) = uStack_a0;
      *(undefined8 *)(param_1 + 0x38) = local_98;
      *(undefined8 *)(param_1 + 0x40) = uStack_90;
      *(undefined8 *)(param_1 + 0x48) = local_88;
LAB_0048f647:
      *param_1 = (char)local_d0;
      *(undefined4 *)(param_1 + 8) = uStack_c8;
      *(undefined4 *)(param_1 + 0xc) = uStack_c4;
      *(undefined4 *)(param_1 + 0x10) = uStack_c0;
      *(undefined4 *)(param_1 + 0x14) = uStack_bc;
      goto LAB_0048f64d;
    }
    lVar4 = CONCAT44(uStack_c4,uStack_c8);
    if (lVar4 != 0) {
LAB_0048f499:
      uVar5 = CONCAT44(uStack_bc,uStack_c0);
LAB_0048f502:
      *(long *)(param_1 + 8) = lVar4;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *param_1 = '\r';
      goto LAB_0048f64d;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hab28b98124005ba5E
              (&local_d0,local_58,local_50);
    uVar3 = uStack_c0;
    uVar2 = uStack_c4;
    uVar1 = uStack_c8;
    uVar7 = CONCAT44(uStack_bc,uStack_c0);
    uVar5 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT14(uStack_cc,local_d0)));
    uVar6 = CONCAT44(uStack_c4,uStack_c8);
    uStack_c9 = (undefined)local_d0;
    uStack_c8 = (undefined4)(CONCAT14(uStack_cc,local_d0) >> 8);
    uStack_c4._0_3_ = (undefined3)((ulong)uVar5 >> 0x28);
    uStack_c4._3_1_ = (undefined)uVar1;
    uStack_c0 = (undefined4)((ulong)uVar6 >> 8);
    uStack_bc._3_1_ = (undefined)uVar3;
    uStack_bc = CONCAT13(uStack_bc._3_1_,(int3)((uint)uVar2 >> 8));
    uStack_b8 = (undefined7)((ulong)uVar7 >> 8);
    *param_1 = '\b';
  }
  else {
    if ((int)local_60 == 1) {
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                (&local_d0,uVar5,uVar6);
      (*(code *)
        PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_008075f8
      )(local_78,&local_d0);
    }
    else {
      auVar9 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00807590)(uVar5,uVar6);
      uVar7 = auVar9._8_8_;
      lVar4 = auVar9._0_8_;
      if (lVar4 == 0) {
        uVar7 = 0;
      }
      lVar8 = 1;
      if (lVar4 != 0) {
        lVar8 = lVar4;
      }
      (*(code *)
        PTR__ZN3bat6assets18HighlightingAssets24get_syntax_for_file_name17h8689a8930b60f613E_00807608
      )(&local_d0,local_80,lVar8,uVar7,param_4 + 0x18);
      if ((char)local_d0 != '\r') {
LAB_0048f60b:
        *(uint *)(param_1 + 4) = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
        *(uint *)(param_1 + 1) = CONCAT13(uStack_cc,local_d0._1_3_);
        *(undefined8 *)(param_1 + 0x28) = local_a8;
        *(undefined8 *)(param_1 + 0x30) = uStack_a0;
        *(undefined8 *)(param_1 + 0x38) = local_98;
        *(undefined8 *)(param_1 + 0x40) = uStack_90;
        *(undefined8 *)(param_1 + 0x48) = local_88;
        *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_b1,uStack_b8);
        *(undefined8 *)(param_1 + 0x20) = uStack_b0;
        goto LAB_0048f647;
      }
      lVar4 = CONCAT44(uStack_c4,uStack_c8);
      if (lVar4 != 0) {
        uVar5 = CONCAT44(uStack_bc,uStack_c0);
        goto LAB_0048f502;
      }
      if ((int)local_60 == 2) {
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                  (&local_d0,uVar5,uVar6);
        (*(code *)
          PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_008075f8
        )(local_78,&local_d0);
      }
      else {
        (*(code *)
          PTR__ZN3bat6assets18HighlightingAssets29get_syntax_for_file_extension17hc845356bd5e7f68cE_00807610
        )(&local_d0,local_80,lVar8,uVar7,param_4 + 0x18);
        if ((char)local_d0 != '\r') goto LAB_0048f60b;
        lVar4 = CONCAT44(uStack_c4,uStack_c8);
        if (lVar4 != 0) goto LAB_0048f499;
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                  (&local_d0,uVar5,uVar6);
        (*(code *)
          PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_008075f8
        )(local_78,&local_d0);
      }
    }
    uStack_c9 = (undefined)local_78._0_8_;
    uStack_c8 = SUB84(local_78._0_8_,1);
    uStack_c4._0_3_ = SUB83(local_78._0_8_,5);
    uStack_c4._3_1_ = (undefined)local_78._8_8_;
    uStack_c0 = SUB84(local_78._8_8_,1);
    uStack_bc._0_3_ = SUB83(local_78._8_8_,5);
    uStack_bc._3_1_ = (undefined)local_78._16_8_;
    uStack_b8 = SUB87(local_78._16_8_,1);
    *param_1 = '\a';
  }
  *(undefined4 *)(param_1 + 1) = local_d0;
  *(uint *)(param_1 + 5) = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
  *(undefined4 *)(param_1 + 9) = uStack_c8;
  *(undefined4 *)(param_1 + 0xd) = uStack_c4;
  *(ulong *)(param_1 + 0x10) = CONCAT35((undefined3)uStack_bc,CONCAT41(uStack_c0,uStack_c4._3_1_));
  *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_b8,uStack_bc._3_1_);
LAB_0048f64d:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd0005799f5f2e1beE(param_3);
  return;
}