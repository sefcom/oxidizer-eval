undefined **
_ZN8uu_tsort5Graph8add_edge17h8f24cab5b427ccb3E
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined uStack_109;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined auStack_c0 [32];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long alStack_78 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _ZN8uu_tsort5Graph8add_node17h226cd9a3985bfd5fE();
  ppuVar2 = (undefined **)
            _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h357813b587d5e2a7E
                      (param_2,param_3,param_4,param_5);
  if ((char)ppuVar2 != '\0') {
    return ppuVar2;
  }
  _ZN8uu_tsort5Graph8add_node17h226cd9a3985bfd5fE(param_1,param_4,param_5);
  lVar6 = param_2;
  lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h03536305409d1b4dE
                    (param_1,param_2,param_3);
  if (lVar3 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_tsort_src_tsort_rs_002214e8);
  }
  else {
    _ZN8uu_tsort4Node13add_successor17hc806fe8fc5e165c9E(lVar3 + 0x10,param_4,param_5);
    lVar6 = param_4;
    ppuVar2 = (undefined **)
              _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h03536305409d1b4dE
                        (param_1,param_4,param_5);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2[5] = ppuVar2[5] + 1;
      return ppuVar2;
    }
  }
  ppuVar2 = &PTR_s_src_uu_tsort_src_tsort_rs_00221500;
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE();
  ppuStack_108 = ppuVar2;
  uStack_58 = param_5;
  uStack_50 = param_3;
  lStack_48 = param_2;
  lStack_40 = param_4;
  uStack_38 = param_1;
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h22ab93a426132a55E
            (&uStack_100,*(undefined8 *)(lVar6 + 0x18),0);
  uStack_d8 = CONCAT44(uStack_f4,uStack_f8);
  if (CONCAT44(uStack_fc,uStack_100) == 0) {
    uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
    puStack_c8 = (undefined *)0x0;
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17hc8089db10f6b491bE(&uStack_100,lVar6);
    uStack_80 = uStack_e0;
    uStack_90 = uStack_f0;
    uStack_8c = uStack_ec;
    uStack_88 = uStack_e8;
    uStack_84 = uStack_e4;
    uStack_a0 = uStack_100;
    uStack_9c = uStack_fc;
    uStack_98 = uStack_f8;
    uStack_94 = uStack_f4;
    _ZN141__LT_alloc__collections__vec_deque__VecDeque_LT_T_GT__u20_as_u20_alloc__collections__vec_deque__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_14spec_from_iter17hf462620b0ae1bf0aE
              (auStack_c0,&uStack_a0);
    auVar7 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hade1d2ed3a63ca34E
                       (auStack_c0);
    uVar5 = auVar7._8_8_;
    if (1 < uVar5) {
      if (uVar5 < 0x15) {
        _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17hb4368774700ae4a6E
                  (auVar7._0_8_,uVar5,1,&uStack_109);
      }
      else {
        _ZN4core5slice4sort8unstable7ipnsort17hf51f3faef85c7917E(auVar7._0_8_,uVar5,&uStack_109);
      }
    }
    do {
      do {
        auVar7 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h21c96a6c4f6a5b39E
                           (auStack_c0);
        ppuVar2 = ppuStack_108;
        lVar3 = auVar7._0_8_;
        if (lVar3 == 0) {
          if (*(long *)(lVar6 + 0x18) == 0) {
            ppuStack_108[3] = puStack_c8;
            *(undefined4 *)(ppuStack_108 + 1) = (undefined4)uStack_d8;
            *(undefined4 *)((long)ppuStack_108 + 0xc) = uStack_d8._4_4_;
            *(undefined4 *)(ppuStack_108 + 2) = (undefined4)uStack_d0;
            *(undefined4 *)((long)ppuStack_108 + 0x14) = uStack_d0._4_4_;
            *ppuStack_108 = (undefined *)0x0;
            _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
                      (auStack_c0);
          }
          else {
            _ZN8uu_tsort5Graph12detect_cycle17h0c5291f558dc399aE(&uStack_100,lVar6);
            ppuStack_108[3] = (undefined *)CONCAT44(uStack_ec,uStack_f0);
            *(undefined4 *)(ppuStack_108 + 1) = uStack_100;
            *(undefined4 *)((long)ppuStack_108 + 0xc) = uStack_fc;
            *(undefined4 *)(ppuStack_108 + 2) = uStack_f8;
            *(undefined4 *)((long)ppuStack_108 + 0x14) = uStack_f4;
            *ppuStack_108 = (undefined *)0x1;
            _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
                      (auStack_c0);
            _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h5f70d679a77a97edE
                      (&uStack_d8);
            ppuVar2 = ppuStack_108;
          }
          return ppuVar2;
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbbd106ac298c97ceE(&uStack_d8,lVar3);
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h7f917ab83a911431E
                  (alStack_78,lVar6,lVar3,auVar7._8_8_);
      } while (alStack_78[0] == -0x8000000000000000);
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17ha34f728323d6f0c1E
                (&uStack_100,alStack_78);
      auVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f648d1fd42f1db6E
                         (&uStack_100);
      lVar3 = auVar7._0_8_;
      while (lVar3 != 0) {
        lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h03536305409d1b4dE
                          (lVar6,auVar7._0_8_,auVar7._8_8_);
        if (lVar3 == 0) {
          _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_tsort_src_tsort_rs_00221518);
          goto LAB_001b695b;
        }
        plVar1 = (long *)(lVar3 + 0x28);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hadb7dbb4bc596622E
                    (auStack_c0,auVar7._0_8_,auVar7._8_8_);
        }
        auVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f648d1fd42f1db6E
                           (&uStack_100);
        lVar3 = auVar7._0_8_;
      }
      _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17hf9489df68880ab9dE
                (&uStack_100);
    } while( true );
  }
LAB_001b695b:
  uVar4 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE();
  _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
            (auStack_c0);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h5f70d679a77a97edE(&uStack_d8);
  ppuVar2 = (undefined **)_Unwind_Resume(uVar4);
  return ppuVar2;
}