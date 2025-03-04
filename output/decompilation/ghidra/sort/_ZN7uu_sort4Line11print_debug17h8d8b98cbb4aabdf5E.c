long _ZN7uu_sort4Line11print_debug17h8d8b98cbb4aabdf5E
               (long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined auVar1 [16];
  undefined ****ppppuVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  ulong local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined *local_e8;
  undefined ****local_e0;
  ulong local_d8 [3];
  undefined ***local_c0;
  code *local_b8;
  undefined8 local_a8;
  undefined8 ***local_a0;
  code *local_98;
  undefined **local_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long lVar8;
  
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hdab5ed66c8794b78E(&local_90,param_1,param_2);
  local_b8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_f0 = (undefined **)&DAT_002ff8f0;
  local_e8 = (undefined *)0x2;
  local_d8[1] = 0;
  local_e0 = &local_c0;
  local_d8[0] = 1;
                    /* try { // try from 002200d3 to 002200e4 has its CatchHandler @ 002208fd */
  local_c0 = &local_90;
  local_a8 = param_4;
  lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(param_4,&local_f0);
  if (lVar6 == 0) {
    local_70 = 0;
    local_68 = 8;
    local_60 = 0;
                    /* try { // try from 0022011a to 00220130 has its CatchHandler @ 00220913 */
    lVar6 = param_1;
    _ZN7uu_sort8tokenize17hb47c688654b41b2eE
              (param_1,param_2,*(undefined4 *)(param_3 + 0x78),&local_70);
    local_50 = *(long *)(param_3 + 8);
    local_58 = *(long *)(param_3 + 0x10);
    local_38 = local_58 * 0x38 + local_50;
    local_48 = param_3;
    local_40 = local_50;
    lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1dc45998b69df0a3E
                      (&local_40);
    if (lVar7 != 0) {
      local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff980;
      do {
                    /* try { // try from 002201d2 to 002204fa has its CatchHandler @ 00220911 */
        auVar15 = _ZN7uu_sort13FieldSelector9get_range17h94d5816cf09723a2E
                            (lVar7,param_1,param_2,local_68,local_60);
        uVar10 = auVar15._8_8_;
        lVar8 = auVar15._0_8_;
        bVar3 = *(byte *)(lVar7 + 0x35);
        local_100 = param_2;
        if (bVar3 < 2) {
          auVar15 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha702be9191d1b330E
                              (lVar8,uVar10);
          local_78 = auVar15._8_8_;
          uVar10 = auVar15._0_8_;
          auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                              (uVar10,local_78,lVar6,param_2);
          auVar16._8_8_ = local_78;
          auVar16._0_8_ = uVar10;
          if (auVar15._0_8_ == 0) {
            local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff920;
            goto LAB_0022084c;
          }
          local_b8 = (code *)CONCAT71(local_b8._1_7_,bVar3 == 1);
          local_c0 = (undefined ***)0x2e00110000;
          _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h2d1625adef450396E
                    (&local_f0,auVar15._0_8_,auVar15._8_8_,&local_c0);
          uVar13 = local_d8[0];
          ppppuVar2 = local_e0;
          lVar7 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h5069d6744b989186E
                            (local_e0,local_d8[0]);
          puVar12 = (undefined *)(lVar8 + (long)ppppuVar2);
          puVar14 = puVar12 + lVar7;
          if (((undefined8 ****)ppppuVar2 == (undefined8 ****)0x0) &&
             (cVar4 = _ZN4core3cmp5impls56__LT_impl_u20_core__cmp__PartialEq_u20_for_u20_usize_GT_2eq17h37bad34467ea7e13E
                                (uVar13), cVar4 != '\0')) {
            auVar16 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha702be9191d1b330E
                                (puVar12,puVar14);
            auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                (auVar16._0_8_,auVar16._8_8_,lVar6,param_2);
            if (auVar15._0_8_ == 0) {
LAB_002208d0:
              local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff938;
LAB_0022084c:
              do {
                uVar13 = auVar16._8_8_;
                    /* try { // try from 0022084c to 002208cf has its CatchHandler @ 00220913 */
                local_80 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                                     (lVar6,local_100,auVar16._0_8_,uVar13,local_f8,param_6,lVar6);
                local_88 = lVar6;
LAB_00220866:
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar13;
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff9c8;
                lVar6 = local_88;
                local_100 = local_80;
                auVar16 = auVar1 << 0x40;
              } while( true );
            }
            auVar15 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hb9662878ed5c0bb4E
                                (auVar15._0_8_,auVar15._8_8_);
            lVar7 = auVar15._8_8_;
            if (auVar15._0_8_ == 0) {
              lVar7 = 0;
            }
            auVar15._8_8_ = puVar14 + lVar7;
            auVar15._0_8_ = puVar12 + lVar7;
            param_1 = lVar6;
          }
          else {
            auVar16._8_8_ = local_78;
            auVar16._0_8_ = puVar14;
            param_1 = lVar6;
            if (bVar3 == 1) {
              auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                  (puVar14,local_78,lVar6,param_2);
              if (auVar15._0_8_ == 0) {
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff950;
                lVar6 = param_1;
                goto LAB_0022084c;
              }
              bVar3 = _ZN4core3str7pattern7Pattern12is_prefix_of17h07a07aaeb752853cE
                                (auVar15._0_8_,auVar15._8_8_);
              puVar14 = puVar14 + bVar3;
            }
            while( true ) {
              auVar16._8_8_ = puVar12;
              auVar16._0_8_ = uVar10;
              auVar15._8_8_ = puVar14;
              auVar15._0_8_ = puVar12;
              auVar17 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                  (uVar10,puVar12,lVar6,param_2);
              if (auVar17._0_8_ == 0) {
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff968;
                lVar6 = param_1;
                goto LAB_0022084c;
              }
              cVar4 = _ZN4core3str7pattern7Pattern12is_suffix_of17h00ec699f5ef7cba4E
                                (auVar17._0_8_,auVar17._8_8_);
              if (cVar4 == '\0') break;
              puVar12 = puVar12 + -1;
            }
          }
        }
        else {
          if (bVar3 == 2) {
            auVar16 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha702be9191d1b330E
                                (lVar8,uVar10);
            auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                (auVar16._0_8_,auVar16._8_8_,lVar6,param_2);
            if (auVar15._0_8_ == 0) goto LAB_0022084c;
            auVar15 = _ZN7uu_sort15get_leading_gen17h381fabafeef8de83E(auVar15._0_8_,auVar15._8_8_);
            lVar7 = auVar15._0_8_;
            lVar11 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h5069d6744b989186E
                               (lVar7,auVar15._8_8_);
          }
          else {
            param_1 = lVar6;
            if (bVar3 != 3) goto LAB_002204a5;
            auVar16 = _ZN73__LT_core__ops__range__Range_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha702be9191d1b330E
                                (lVar8,uVar10);
            uVar10 = auVar16._0_8_;
            auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                (uVar10,auVar16._8_8_,lVar6,param_2);
            lVar7 = auVar15._8_8_;
            ppuVar9 = auVar15._0_8_;
            if (ppuVar9 == (undefined **)0x0) {
              local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff998;
              goto LAB_0022084c;
            }
            local_e8 = (undefined *)((long)ppuVar9 + lVar7);
            local_e0 = (undefined ****)0x0;
            local_d8[0] = local_d8[0] & 0xffffffffffffff00;
            local_f0 = ppuVar9;
            uVar5 = _ZN7uu_sort11month_parse17h15c772d462e6ea25E(ppuVar9,lVar7);
            auVar16._8_4_ = uVar5;
            auVar16._0_8_ = uVar10;
            auVar16._12_4_ = 0;
            auVar15 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h1deec66163955984E
                                (&local_f0,local_d8);
            if ((char)uVar5 == '\0') {
              auVar17 = _ZN4core6option15Option_LT_T_GT_6map_or17h821973a7dfd1fe80E
                                  (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,lVar7,lVar7);
            }
            else {
              if (auVar15._8_4_ == 0x110000) {
                _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                          (&PTR_s_src_uu_sort_src_sort_rs_002ff9b0);
                goto LAB_002208d0;
              }
              lVar7 = _ZN4core4iter6traits8iterator8Iterator10advance_by17h3b89246444089858E
                                (&local_f0);
              if (lVar7 == 0) {
                _ZN4core4iter6traits8iterator8Iterator8try_fold17h1deec66163955984E
                          (&local_f0,local_d8);
              }
              uVar10 = _ZN4core6option15Option_LT_T_GT_6map_or17h00da6f409eb162fdE();
              auVar17._8_8_ = uVar10;
              auVar17._0_8_ = auVar15._0_8_;
            }
            lVar7 = auVar17._0_8_;
            lVar11 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h5069d6744b989186E
                               (lVar7,auVar17._8_8_);
          }
          auVar15._8_8_ = lVar11 + lVar8 + lVar7;
          auVar15._0_8_ = lVar8 + lVar7;
          param_1 = lVar6;
        }
LAB_002204a5:
        uVar13 = auVar15._0_8_;
        if (uVar13 != 0) {
          if (uVar13 < local_80) {
            if (*(char *)(local_88 + uVar13) < -0x40) goto LAB_00220866;
          }
          else if (uVar13 != local_80) goto LAB_00220866;
        }
        uVar10 = _ZN13unicode_width9str_width17hf245007b39258182E(local_88,uVar13,0);
        _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_c0," ",1,uVar10);
        local_a0 = &local_c0;
        local_98 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_f0 = (undefined **)&DAT_00124b80;
        local_e8 = (undefined *)0x1;
        local_d8[1] = 0;
        local_e0 = (undefined ****)&local_a0;
        local_d8[0] = 1;
                    /* try { // try from 00220542 to 00220550 has its CatchHandler @ 00220902 */
        lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(local_a8,&local_f0);
        if (lVar6 != 0) {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
          goto LAB_002207ef;
        }
                    /* try { // try from 0022055d to 002205c1 has its CatchHandler @ 00220911 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
        local_100 = local_80;
        lVar6 = local_88;
        if (uVar13 < auVar15._8_8_) {
          auVar16 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                              (uVar13,auVar15._8_8_,local_88,local_80);
          if (auVar16._0_8_ == 0) {
            local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002ff9e0;
            auVar16 = auVar15;
            goto LAB_0022084c;
          }
          uVar10 = _ZN13unicode_width9str_width17hf245007b39258182E(auVar16._0_8_,auVar16._8_8_,0);
          _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_c0,"_",1,uVar10);
          local_a0 = &local_c0;
          local_98 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_f0 = (undefined **)&DAT_002ff8f0;
          local_e8 = (undefined *)0x2;
          local_d8[1] = 0;
          local_e0 = (undefined ****)&local_a0;
          local_d8[0] = 1;
                    /* try { // try from 00220609 to 00220617 has its CatchHandler @ 002208ee */
          lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(local_a8,&local_f0);
          if (lVar6 != 0) {
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
            goto LAB_002207ef;
          }
                    /* try { // try from 00220624 to 00220674 has its CatchHandler @ 00220911 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
        }
        else {
          local_f0 = &PTR_s___no_match_for_key_002ff910;
          local_e8 = (undefined *)0x1;
          local_e0 = (undefined ****)&DAT_00000008;
          local_d8[0] = 0;
          local_d8[1] = 0;
          lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(local_a8,&local_f0);
          if (lVar6 != 0) goto LAB_002207ef;
        }
        lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1dc45998b69df0a3E
                          (&local_40);
        lVar6 = param_1;
      } while (lVar7 != 0);
    }
    if (((*(char *)(local_48 + 0x98) == '\x05') || (*(char *)(local_48 + 0x83) != '\0')) ||
       (*(char *)(local_48 + 0x84) != '\0')) {
LAB_00220825:
                    /* try { // try from 00220825 to 00220831 has its CatchHandler @ 002208fd */
      _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_core__ops__range__Range_LT_usize_GT__GT__GT_17h2fc80e81fa42ea86E
                (&local_70);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_90);
      return 0;
    }
    if ((*(int *)(local_48 + 0x7d) == 0) && (*(char *)(local_48 + 0x98) == '\x06')) {
      lVar6 = 0;
      if (local_58 != 0) {
        lVar6 = local_50 + (local_58 + -1) * 0x38;
      }
                    /* try { // try from 002206e6 to 00220730 has its CatchHandler @ 00220913 */
      cVar4 = _ZN4core6option15Option_LT_T_GT_6map_or17hf8e8f5637707ad45E(lVar6);
      if (cVar4 == '\0') goto LAB_00220825;
    }
    if (param_2 == 0) {
      local_f0 = &PTR_s___no_match_for_key_002ff910;
      local_e8 = (undefined *)0x1;
      local_e0 = (undefined ****)&DAT_00000008;
      local_d8[0] = 0;
      local_d8[1] = 0;
      lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(local_a8,&local_f0);
      if (lVar6 == 0) goto LAB_00220825;
    }
    else {
      uVar10 = _ZN13unicode_width9str_width17hf245007b39258182E(local_88,local_80,0);
      _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_c0,"_",1,uVar10);
      local_98 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_f0 = (undefined **)&DAT_002ff8f0;
      local_e8 = (undefined *)0x2;
      local_d8[1] = 0;
      local_e0 = (undefined ****)&local_a0;
      local_d8[0] = 1;
                    /* try { // try from 00220773 to 00220781 has its CatchHandler @ 002208df */
      local_a0 = &local_c0;
      lVar6 = _ZN3std2io5Write9write_fmt17hcac6bdf88f5c01efE(local_a8,&local_f0);
      if (lVar6 == 0) {
                    /* try { // try from 0022081b to 00220824 has its CatchHandler @ 00220913 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
        goto LAB_00220825;
      }
                    /* try { // try from 0022078e to 002207e6 has its CatchHandler @ 00220913 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_c0);
    }
LAB_002207ef:
                    /* try { // try from 002207ef to 002207fb has its CatchHandler @ 002208fd */
    _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_core__ops__range__Range_LT_usize_GT__GT__GT_17h2fc80e81fa42ea86E
              (&local_70);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_90);
  return lVar6;
}