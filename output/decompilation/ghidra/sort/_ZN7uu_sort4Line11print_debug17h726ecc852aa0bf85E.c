long _ZN7uu_sort4Line11print_debug17h726ecc852aa0bf85E
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined **local_f0;
  code *pcStack_e8;
  undefined ***local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined **local_b8;
  code *pcStack_b0;
  undefined ***local_a8;
  undefined8 local_a0;
  undefined ***local_98;
  code *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  undefined ***pppuVar6;
  
  local_68 = param_3;
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h0e383c6d9d0dd1baE(&local_60,param_1,param_2);
  pcStack_b0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_f0 = (undefined **)&DAT_0028ce68;
  pcStack_e8 = (code *)0x2;
  uStack_d0 = 0;
  local_e0 = &local_b8;
  local_d8 = 1;
                    /* try { // try from 001d0e4c to 001d0e5d has its CatchHandler @ 001d16d3 */
  local_b8 = &local_60;
  local_a0 = param_4;
  lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(param_4,&local_f0);
  lVar7 = local_68;
  if (lVar5 != 0) goto LAB_001d1581;
  local_80 = 0;
  local_78 = 8;
  local_70 = 0;
                    /* try { // try from 001d0e99 to 001d0eb2 has its CatchHandler @ 001d16fe */
  _ZN7uu_sort8tokenize17h1a0db68099bd818aE
            (param_1,param_2,*(undefined4 *)(local_68 + 0x78),&local_80);
  lVar9 = *(long *)(lVar7 + 8);
  local_48 = *(long *)(lVar7 + 0x10);
  local_88 = local_48 * 0x38 + lVar9;
  if (local_48 != 0) {
    do {
      local_38 = lVar9 + 0x38;
                    /* try { // try from 001d0f29 to 001d126c has its CatchHandler @ 001d16fc */
      auVar14 = _ZN7uu_sort13FieldSelector9get_range17h36eed4fe0a7f87ecE
                          (lVar9,param_1,param_2,local_78,local_70);
      uVar8 = auVar14._8_8_;
      lVar5 = auVar14._0_8_;
      bVar4 = *(byte *)(lVar9 + 0x35);
      if (bVar4 < 2) {
        auVar14 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h8c3a2d8349b30d99E
                            (lVar5,uVar8);
        uVar8 = auVar14._0_8_;
        auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (uVar8,auVar14._8_8_,param_1,param_2);
        if (auVar15._0_8_ == 0) {
          ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028ce98;
        }
        else {
          pcStack_b0 = (code *)CONCAT71(pcStack_b0._1_7_,bVar4 == 1);
          local_b8 = (undefined **)0x2e00110000;
          local_40 = auVar14._8_8_;
          _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h9568947bf0c3d82dE
                    (&local_f0,auVar15._0_8_,auVar15._8_8_,&local_b8);
          uVar10 = local_d8;
          pppuVar6 = local_e0;
          lVar7 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h3f195717e6c4bef7E
                            (local_e0,local_d8);
          puVar12 = (undefined *)(lVar5 + (long)pppuVar6);
          puVar11 = puVar12 + lVar7;
          auVar14._8_8_ = local_40;
          auVar14._0_8_ = puVar11;
          if (uVar10 == 0 && (undefined ****)pppuVar6 == (undefined ****)0x0) {
            auVar14 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h8c3a2d8349b30d99E
                                (puVar12,puVar11);
            auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                (auVar14._0_8_,auVar14._8_8_,param_1,param_2);
            if (auVar15._0_8_ != 0) {
              auVar14 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h4840dd49033fba86E
                                  (auVar15._0_8_,auVar15._8_8_);
              lVar5 = auVar14._8_8_;
              if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                lVar5 = 0;
              }
              auVar14._8_8_ = puVar11 + lVar5;
              auVar14._0_8_ = puVar12 + lVar5;
              goto LAB_001d1224;
            }
            ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028ceb0;
          }
          else {
            if (*(char *)(lVar9 + 0x35) == '\x01') {
              auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                  (puVar11,local_40,param_1,param_2);
              if (auVar15._0_8_ == 0) {
                ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cec8;
                goto LAB_001d1515;
              }
              bVar4 = _ZN4core3str7pattern7Pattern12is_prefix_of17h56a589c1a1afc20eE
                                (auVar15._0_8_,auVar15._8_8_);
              puVar11 = puVar11 + bVar4;
            }
            auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                (uVar8,puVar12,param_1,param_2);
            if (auVar15._0_8_ != 0) {
              while( true ) {
                auVar14._8_8_ = puVar11;
                auVar14._0_8_ = puVar12;
                cVar3 = _ZN4core3str7pattern7Pattern12is_suffix_of17h9ea0a3f6ca9a3449E
                                  (auVar15._0_8_,auVar15._8_8_);
                if (cVar3 == '\0') break;
                puVar12 = puVar12 + -1;
                auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                    (uVar8,puVar12,param_1,param_2);
                if (auVar15._0_8_ == 0) goto LAB_001d150e;
              }
              goto LAB_001d1224;
            }
LAB_001d150e:
            auVar14._8_8_ = puVar12;
            auVar14._0_8_ = uVar8;
            ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cee0;
          }
        }
LAB_001d1515:
                    /* try { // try from 001d1515 to 001d16ce has its CatchHandler @ 001d16fe */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
                  (param_1,param_2,auVar14._0_8_,auVar14._8_8_,ppuVar13);
LAB_001d16cf:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (bVar4 == 2) {
        auVar14 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h8c3a2d8349b30d99E
                            (lVar5,uVar8);
        auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (auVar14._0_8_,auVar14._8_8_,param_1,param_2);
        if (auVar15._0_8_ != 0) {
          auVar14 = _ZN7uu_sort15get_leading_gen17h7fd24a66a114d51aE(auVar15._0_8_,auVar15._8_8_);
          lVar7 = auVar14._0_8_;
          lVar9 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h3f195717e6c4bef7E
                            (lVar7,auVar14._8_8_);
LAB_001d121b:
          auVar14._8_8_ = lVar9 + lVar5 + lVar7;
          auVar14._0_8_ = lVar5 + lVar7;
          goto LAB_001d1224;
        }
        ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cef8;
        goto LAB_001d1515;
      }
      if (bVar4 == 3) {
        auVar14 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h8c3a2d8349b30d99E
                            (lVar5,uVar8);
        auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (auVar14._0_8_,auVar14._8_8_,param_1,param_2);
        lVar7 = auVar15._8_8_;
        pppuVar6 = auVar15._0_8_;
        if (pppuVar6 != (undefined ***)0x0) {
          pcStack_e8 = (code *)((long)pppuVar6 + lVar7);
          local_e0 = (undefined ***)0x0;
          local_d8 = local_d8 & 0xffffffffffffff00;
          local_f0 = (undefined **)pppuVar6;
          cVar3 = _ZN7uu_sort11month_parse17he61b5b2aea1498acE(pppuVar6,lVar7);
          auVar14 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h04806fb318c74eeaE
                              (&local_f0,&local_d8);
          if (cVar3 == '\0') {
            auVar15 = _ZN4core6option15Option_LT_T_GT_6map_or17h2a81e57da9749b11E
                                (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,lVar7,lVar7);
          }
          else {
            if (auVar14._8_4_ == 0x110000) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                        (&PTR_s_src_uu_sort_src_sort_rs_0028cf28);
              goto LAB_001d16cf;
            }
            lVar7 = _ZN4core4iter6traits8iterator8Iterator10advance_by17h4e4e6888316db0b5E
                              (&local_f0);
            if (lVar7 == 0) {
              _ZN4core4iter6traits8iterator8Iterator8try_fold17h04806fb318c74eeaE
                        (&local_f0,&local_d8);
            }
            uVar8 = _ZN4core6option15Option_LT_T_GT_6map_or17h19d14ea526fb5a80E();
            auVar15._8_8_ = uVar8;
            auVar15._0_8_ = auVar14._0_8_;
          }
          lVar7 = auVar15._0_8_;
          lVar9 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h3f195717e6c4bef7E
                            (lVar7,auVar15._8_8_);
          goto LAB_001d121b;
        }
        ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cf10;
        goto LAB_001d1515;
      }
LAB_001d1224:
      lVar7 = local_50;
      lVar5 = local_58;
      uVar10 = auVar14._0_8_;
      auVar15 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (uVar10,local_58,local_50);
      lVar9 = auVar15._0_8_;
      if (lVar9 == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar10;
        auVar14 = auVar2 << 0x40;
        ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cf40;
        param_1 = lVar5;
        param_2 = lVar7;
        goto LAB_001d1515;
      }
      uVar8 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h9f59b36201598ceeE
                        (lVar9,auVar15._8_8_ + lVar9);
      _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h681278da6988cee9E(&local_f0," ",uVar8)
      ;
      local_a8 = local_e0;
      local_b8 = local_f0;
      pcStack_b0 = pcStack_e8;
      local_90 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_f0 = (undefined **)&DAT_001275d0;
      pcStack_e8 = (code *)&DAT_00000001;
      uStack_d0 = 0;
      local_e0 = (undefined ***)&local_98;
      local_d8 = 1;
                    /* try { // try from 001d12c8 to 001d12d6 has its CatchHandler @ 001d16ed */
      local_98 = &local_b8;
      lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(local_a0,&local_f0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(&local_b8);
      lVar9 = local_50;
      lVar7 = local_58;
      if (lVar5 != 0) goto LAB_001d156c;
      if (uVar10 < auVar14._8_8_) {
        auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (uVar10,auVar14._8_8_,local_58,local_50);
        lVar5 = auVar15._0_8_;
        if (lVar5 == 0) {
          ppuVar13 = &PTR_s_src_uu_sort_src_sort_rs_0028cf58;
          param_1 = lVar7;
          param_2 = lVar9;
          goto LAB_001d1515;
        }
                    /* try { // try from 001d1321 to 001d133f has its CatchHandler @ 001d16fc */
        uVar8 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h9f59b36201598ceeE
                          (lVar5,auVar15._8_8_ + lVar5);
        _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h681278da6988cee9E
                  (&local_f0,"_",uVar8);
        local_a8 = local_e0;
        local_b8 = local_f0;
        pcStack_b0 = pcStack_e8;
        local_90 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f0 = (undefined **)&DAT_0028ce68;
        pcStack_e8 = (code *)0x2;
        uStack_d0 = 0;
        local_e0 = (undefined ***)&local_98;
        local_d8 = 1;
                    /* try { // try from 001d139b to 001d13a9 has its CatchHandler @ 001d16eb */
        local_98 = &local_b8;
        lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(local_a0,&local_f0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(&local_b8);
        lVar9 = local_38;
      }
      else {
        local_f0 = &PTR_s___no_match_for_key_0028ce88;
        pcStack_e8 = (code *)&DAT_00000001;
        local_e0 = (undefined ***)&DAT_00000008;
        local_d8 = 0;
        uStack_d0 = 0;
                    /* try { // try from 001d13f6 to 001d1404 has its CatchHandler @ 001d16fc */
        lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(local_a0,&local_f0);
        lVar9 = local_38;
      }
      local_38 = lVar9;
      if (lVar5 != 0) goto LAB_001d156c;
    } while (lVar9 != local_88);
  }
  if (((*(char *)(local_68 + 0x98) == '\x05') || (*(char *)(local_68 + 0x83) != '\0')) ||
     (*(char *)(local_68 + 0x84) != '\0')) {
LAB_001d1569:
    lVar5 = 0;
  }
  else {
    if ((((*(char *)(local_68 + 0x7f) == '\0') && (*(char *)(local_68 + 0x7d) != '\x01')) &&
        ((*(char *)(local_68 + 0x7e) == '\0' &&
         ((*(char *)(local_68 + 0x98) == '\x06' && (*(char *)(local_68 + 0x80) == '\0')))))) &&
       (local_88 = local_88 + -0x38, local_88 != 0 && local_48 != 0)) {
      uVar10 = (*(code *)
                 PTR__ZN63__LT_uu_sort__KeySettings_u20_as_u20_core__default__Default_GT_7default17h14a8cebf2953677dE_002975b8
               )();
      local_d8 = 1;
      uStack_d0 = 1;
      local_c8 = 0;
      local_e0 = (undefined ***)CONCAT71(local_e0._1_7_,2);
      local_c0 = (undefined4)(uVar10 & 0xffffffffffff);
      local_bc = (undefined2)((uVar10 & 0xffffffffffff) >> 0x20);
      local_ba = 0;
      cVar3 = _ZN63__LT_uu_sort__FieldSelector_u20_as_u20_core__cmp__PartialEq_GT_2eq17ha806145b4361d250E
                        (local_88,&local_f0);
      if (cVar3 != '\0') goto LAB_001d1569;
    }
    if (param_2 == 0) {
      local_f0 = &PTR_s___no_match_for_key_0028ce88;
      pcStack_e8 = (code *)&DAT_00000001;
      local_e0 = (undefined ***)&DAT_00000008;
      local_d8 = 0;
      uStack_d0 = 0;
      lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(local_a0,&local_f0);
    }
    else {
                    /* try { // try from 001d147c to 001d1494 has its CatchHandler @ 001d16fe */
      uVar8 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h9f59b36201598ceeE
                        (local_58,local_50 + local_58);
      _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h681278da6988cee9E(&local_f0,"_",uVar8)
      ;
      local_a8 = local_e0;
      local_b8 = local_f0;
      pcStack_b0 = pcStack_e8;
      local_98 = &local_b8;
      local_90 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_f0 = (undefined **)&DAT_0028ce68;
      pcStack_e8 = (code *)0x2;
      uStack_d0 = 0;
      local_e0 = (undefined ***)&local_98;
      local_d8 = 1;
                    /* try { // try from 001d14f0 to 001d14fe has its CatchHandler @ 001d16d1 */
      lVar5 = _ZN3std2io5Write9write_fmt17hdf669c348b2f4091E(local_a0,&local_f0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(&local_b8);
    }
    if (lVar5 == 0) goto LAB_001d1569;
  }
LAB_001d156c:
  _ZN4core3ptr102drop_in_place_LT_alloc__vec__Vec_LT_std__sync__mpmc__array__Slot_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hd036655fcae2cd02E
            (local_80,local_78);
LAB_001d1581:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(&local_60);
  return lVar5;
}