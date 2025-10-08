undefined8 *
_ZN5uu_cp8platform5linux13copy_on_write17h34431c68bfa64cd2E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,char param_6,char param_7,undefined8 param_8,undefined8 param_9,
          undefined param_10,char param_11)

{
  long lVar1;
  undefined8 *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_6 == '\0') {
    if (param_7 != '\x01') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
                (param_1 + 1,&DAT_00123997,0x36);
      *param_1 = 0x8000000000000003;
      return param_1;
    }
    local_40 = param_8;
    local_38 = param_9;
    uVar3 = 0;
    lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E(param_2,param_3,param_4,param_5,0);
    local_60._2_1_ = 2;
    local_60._3_1_ = 1;
  }
  else {
    if (param_6 != '\x01') {
      if (param_7 == '\0') {
        if (param_11 == '\0') {
          local_40 = param_8;
          local_38 = param_9;
          _ZN5uu_cp8platform5linux34handle_reflink_never_sparse_always17heed2137fe7113b5aE
                    (&local_60);
          if ((char)local_60 == '\0') {
            uVar5 = local_60._2_1_;
            uVar4 = local_60._3_1_;
            uVar3 = local_60._1_1_;
            if (local_60._4_1_ == '\x01') {
                    /* try { // try from 0019bead to 0019bec1 has its CatchHandler @ 0019bf68 */
              auVar7 = _ZN3std2fs4copy17h705af7a8cd89b11dE(param_2,param_3,param_4,param_5);
              goto LAB_0019bec2;
            }
          }
          else {
            uVar5 = 1;
            uVar4 = 2;
            uVar3 = 0;
          }
                    /* try { // try from 0019beeb to 0019bef5 has its CatchHandler @ 0019bf68 */
          lVar1 = _ZN5uu_cp8platform5linux11sparse_copy17h236dad6108a5e89bE
                            (param_2,param_3,param_4,param_5);
          local_60._2_1_ = uVar5;
          local_60._3_1_ = uVar4;
          goto LAB_0019bef9;
        }
        auVar7 = _ZN5uu_cp8platform5linux11copy_stream17h194a761372098ffcE
                           (param_2,param_3,param_4,param_5,param_10);
        lVar1 = auVar7._8_8_;
        if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          uVar3 = 3;
          local_60._2_1_ = 1;
          local_60._3_1_ = 2;
          goto LAB_0019bf31;
        }
      }
      else {
        if (param_7 == '\x01') {
          if (param_11 == '\0') {
            local_40 = param_8;
            local_38 = param_9;
            _ZN5uu_cp8platform5linux32handle_reflink_never_sparse_auto17h718df85bcf1cef5cE
                      (&local_60);
            if ((char)local_60 == '\0') {
              uVar5 = local_60._3_1_;
              uVar4 = local_60._2_1_;
              uVar3 = local_60._1_1_;
              if (local_60._4_1_ == '\x03') {
                    /* try { // try from 0019be67 to 0019be92 has its CatchHandler @ 0019bf77 */
                lVar1 = _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h2d9392879b3e0cb0E
                                  (param_2,param_3,param_4,param_5);
                goto LAB_0019bef9;
              }
            }
            else {
              uVar5 = 1;
              uVar4 = 1;
              uVar3 = 0;
            }
            auVar7 = _ZN3std2fs4copy17h705af7a8cd89b11dE(param_2,param_3,param_4,param_5);
            local_60._2_1_ = uVar4;
            local_60._3_1_ = uVar5;
            goto LAB_0019bec2;
          }
        }
        else if (param_11 == '\0') {
          local_40 = param_8;
          local_38 = param_9;
          _ZN5uu_cp8platform5linux32handle_reflink_auto_sparse_never17hd22b7d91bc1c3709E(&local_60);
          bVar6 = (char)local_60 != '\0';
          uVar5 = local_60._3_1_;
          if (bVar6) {
            uVar5 = 1;
          }
          uVar4 = local_60._2_1_;
          if (bVar6) {
            uVar4 = 1;
          }
          uVar3 = local_60._1_1_;
          if (bVar6) {
            uVar3 = 0;
          }
                    /* try { // try from 0019bd85 to 0019bd99 has its CatchHandler @ 0019bf59 */
          auVar7 = _ZN3std2fs4copy17h705af7a8cd89b11dE(param_2,param_3,param_4,param_5);
          local_60._2_1_ = uVar4;
          local_60._3_1_ = uVar5;
LAB_0019bec2:
          lVar1 = auVar7._8_8_;
          if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17h045b393fe041be74E
                      (&local_60);
            goto LAB_0019bf08;
          }
          _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17h045b393fe041be74E
                    (&local_60);
          goto LAB_0019bf31;
        }
LAB_0019bc4a:
        auVar7 = _ZN5uu_cp8platform5linux11copy_stream17h194a761372098ffcE
                           (param_2,param_3,param_4,param_5,param_10);
        lVar1 = auVar7._8_8_;
        if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          uVar3 = 3;
          local_60._3_1_ = 1;
          local_60._2_1_ = 1;
          goto LAB_0019bf31;
        }
      }
LAB_0019bc65:
      local_40 = param_8;
      local_38 = param_9;
      goto LAB_0019bf08;
    }
    if (param_7 == '\0') {
      if (param_11 != '\0') {
        auVar7 = _ZN5uu_cp8platform5linux11copy_stream17h194a761372098ffcE
                           (param_2,param_3,param_4,param_5,param_10);
        lVar1 = auVar7._8_8_;
        if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          uVar3 = 3;
          local_60._2_1_ = 4;
          local_60._3_1_ = 2;
          goto LAB_0019bf31;
        }
        goto LAB_0019bc65;
      }
      local_40 = param_8;
      local_38 = param_9;
      _ZN5uu_cp8platform5linux33handle_reflink_auto_sparse_always17haaf9f37e7b58eafaE(&local_60);
      if ((char)local_60 == '\0') {
        uVar5 = local_60._3_1_;
        uVar4 = local_60._2_1_;
        uVar3 = local_60._1_1_;
        if (local_60._4_1_ == '\x01') {
                    /* try { // try from 0019be0f to 0019be49 has its CatchHandler @ 0019bf95 */
          lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E
                            (param_2,param_3,param_4,param_5,1);
          goto LAB_0019bef9;
        }
      }
      else {
        uVar5 = 2;
        uVar4 = 4;
        uVar3 = 0;
      }
      lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E(param_2,param_3,param_4,param_5,2);
      local_60._2_1_ = uVar4;
      local_60._3_1_ = uVar5;
    }
    else if (param_7 == '\x01') {
      if (param_11 != '\0') {
        auVar7 = _ZN5uu_cp8platform5linux11copy_stream17h194a761372098ffcE
                           (param_2,param_3,param_4,param_5,param_10);
        lVar1 = auVar7._8_8_;
        if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          local_60._2_1_ = 4;
          local_60._3_1_ = 1;
          uVar3 = 4;
          goto LAB_0019bf31;
        }
        goto LAB_0019bc65;
      }
      local_40 = param_8;
      local_38 = param_9;
      _ZN5uu_cp8platform5linux31handle_reflink_auto_sparse_auto17hc3f72f8fab662c9cE(&local_60);
      if ((char)local_60 == '\0') {
        uVar5 = local_60._3_1_;
        uVar4 = local_60._2_1_;
        uVar3 = local_60._1_1_;
        if (local_60._4_1_ == '\x03') {
                    /* try { // try from 0019bdb7 to 0019bdf1 has its CatchHandler @ 0019bfa4 */
          lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E
                            (param_2,param_3,param_4,param_5,3);
          goto LAB_0019bef9;
        }
      }
      else {
        uVar5 = 1;
        uVar4 = 4;
        uVar3 = 0;
      }
      lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E(param_2,param_3,param_4,param_5,1);
      local_60._2_1_ = uVar4;
      local_60._3_1_ = uVar5;
    }
    else {
      if (param_11 != '\0') goto LAB_0019bc4a;
      local_40 = param_8;
      local_38 = param_9;
      _ZN5uu_cp8platform5linux32handle_reflink_auto_sparse_never17hd22b7d91bc1c3709E(&local_60);
      local_41 = (char)local_60;
                    /* try { // try from 0019bbc9 to 0019bbdf has its CatchHandler @ 0019bf86 */
      lVar1 = _ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E(param_2,param_3,param_4,param_5,1);
      uVar3 = local_60._1_1_;
      if (local_41 != '\0') {
        local_60._2_1_ = 1;
        local_60._3_1_ = 1;
        uVar3 = 0;
      }
    }
LAB_0019bef9:
    _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17h045b393fe041be74E
              (&local_60);
  }
  if (lVar1 == 0) {
LAB_0019bf31:
    *(undefined *)(param_1 + 1) = uVar3;
    *(undefined *)((long)param_1 + 9) = local_60._2_1_;
    *(undefined *)((long)param_1 + 10) = local_60._3_1_;
    *param_1 = 0x800000000000000c;
    return (undefined8 *)0x800000000000000c;
  }
LAB_0019bf08:
  local_60 = local_40;
  local_58 = local_38;
  local_50 = lVar1;
  puVar2 = (undefined8 *)
           (*(code *)
             PTR__ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17hda2d8848c156368bE_00267b40
           )(param_1,&local_60);
  return puVar2;
}