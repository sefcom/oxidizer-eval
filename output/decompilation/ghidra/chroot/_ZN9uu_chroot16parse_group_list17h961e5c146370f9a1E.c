void _ZN9uu_chroot16parse_group_list17h961e5c146370f9a1E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined auVar2 [8];
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined auStack_158 [8];
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined2 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 **local_108;
  undefined8 **local_100;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined4 *local_98;
  undefined *local_90;
  undefined local_88 [88];
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&uStack_150,0x2c,param_2,param_3);
  local_160 = 0;
  uStack_15c = 0;
  auStack_158._0_4_ = (undefined4)param_3;
  auStack_158._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
  local_120 = 1;
  _ZN4core4iter6traits8iterator8Iterator7collect17hc6e6e32a66244622E(&local_d8,&local_160);
  puVar11 = local_d0;
  if (local_c8 == 1) {
    auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17he490630ed8633fd2E
                        (*local_d0,local_d0[1]);
    if (auVar12._8_8_ != 0) {
      puVar6 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
      if (puVar6 == (undefined4 *)0x0) {
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00201698)(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* try { // try from 001668c3 to 001668d5 has its CatchHandler @ 00166cff */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                (&local_160,auVar12._0_8_,auVar12._8_8_);
      auVar2 = (undefined  [8])CONCAT44((undefined4)uStack_150,auStack_158._4_4_);
      local_118 = local_160;
      uStack_114 = uStack_15c;
      uStack_110._0_4_ = auStack_158._0_4_;
      uStack_110._4_4_ = auStack_158._4_4_;
      *(ulong *)(puVar6 + 4) = CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      *puVar6 = local_160;
      puVar6[1] = uStack_15c;
      puVar6[2] = auStack_158._0_4_;
      puVar6[3] = auStack_158._4_4_;
      *(undefined8 *)(param_1 + 2) = 1;
      *(undefined4 **)(param_1 + 4) = puVar6;
      *(undefined8 *)(param_1 + 6) = 1;
      *param_1 = 0xe;
      puVar11 = local_d0;
      goto LAB_00166c74;
    }
                    /* try { // try from 00166c30 to 00166cd5 has its CatchHandler @ 00166d48 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
              (&local_160,auVar12._0_8_,0);
    local_148 = uStack_150._4_4_;
    uVar5 = auStack_158._0_4_;
    auStack_158._0_4_ = uStack_15c;
    auVar2 = (undefined  [8])CONCAT44(auStack_158._4_4_,uVar5);
    uStack_150._4_4_ = (undefined4)uStack_150;
    *param_1 = 4;
  }
  else {
    auStack_158 = (undefined  [8])(local_d0 + local_c8 * 2);
    local_160 = SUB84(local_d0,0);
    uStack_15c = (undefined4)((ulong)local_d0 >> 0x20);
    cVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17hf037d8f689b44d8fE
                      (&local_160);
    if (cVar3 == '\0') {
      local_c0 = 0;
      uStack_b8 = 8;
      local_b0 = 0;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hbd31ef3f4dd053ddE
                (local_88,&local_d8);
      bVar4 = false;
      do {
        while( true ) {
          auVar12 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h03a637a8b496c07fE
                              (local_88);
          lVar9 = auVar12._8_8_;
          lVar7 = auVar12._0_8_;
          if (lVar7 == 0) {
                    /* try { // try from 00166c05 to 00166c11 has its CatchHandler @ 00166ce7 */
            _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h0039c72f5ec7f340E
                      (local_88);
            if (bVar4) {
              _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h9c5285db89163a1fE
                        (&local_c0);
              uVar5 = 3;
            }
            else {
              *(undefined8 *)(param_1 + 6) = local_b0;
              *(undefined8 *)(param_1 + 2) = local_c0;
              *(undefined8 *)(param_1 + 4) = uStack_b8;
              uVar5 = 0xe;
            }
            *param_1 = uVar5;
            return;
          }
          auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17he490630ed8633fd2E
                              (lVar7,lVar9);
          lVar10 = auVar12._8_8_;
          uVar8 = auVar12._0_8_;
          if (lVar10 != 0) break;
          if (lVar9 != 0) {
                    /* try { // try from 001669f0 to 001669ff has its CatchHandler @ 00166d0c */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                      (&local_160,lVar7,lVar9);
            local_100 = uStack_150;
            uStack_110._0_4_ = local_160;
            uStack_110._4_4_ = uStack_15c;
            local_108 = (undefined8 **)auStack_158;
            local_118 = 4;
                    /* try { // try from 00166a1e to 00166ab8 has its CatchHandler @ 00166d0e */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002017b8)(0x7d);
            auVar12 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00201768)();
            local_a8 = (undefined8 *)local_e8;
            local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd4727b3c80c27e33E;
            local_98 = &local_118;
            local_90 = 
            PTR__ZN68__LT_uu_chroot__error__ChrootError_u20_as_u20_core__fmt__Display_GT_3fmt17hde4c65801cafeee4E_002017f8
            ;
            local_160 = 0x1fab48;
            uStack_15c = 0;
            auStack_158._0_4_ = 3;
            auStack_158._4_4_ = 0;
            local_140 = 0;
            uStack_150 = &local_a8;
            local_148 = 2;
            uStack_144 = 0;
            local_e8 = auVar12;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00201770)(&local_160);
                    /* try { // try from 00166ab9 to 00166ac2 has its CatchHandler @ 00166d0c */
            _ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17h70d0c8dd677b313fE
                      (&local_118);
LAB_00166ac3:
            bVar4 = true;
          }
        }
                    /* try { // try from 00166ace to 00166b27 has its CatchHandler @ 00166d1d */
        cVar3 = _ZN4core3str7pattern7Pattern12is_prefix_of17hb5e922bbb1679761E(uVar8,lVar10);
        if (cVar3 != '\0') {
          cVar3 = _ZN4core3str7pattern7Pattern12is_suffix_of17h4d12b2a3f6b8ec0dE(uVar8,lVar10);
          if (cVar3 != '\0') {
                    /* try { // try from 00166b2d to 00166b3c has its CatchHandler @ 00166d0c */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                      (&local_160,lVar7,lVar9);
            local_100 = uStack_150;
            uStack_110._0_4_ = local_160;
            uStack_110._4_4_ = uStack_15c;
            local_108 = (undefined8 **)auStack_158;
            local_118 = 4;
                    /* try { // try from 00166b5b to 00166bf5 has its CatchHandler @ 00166cd8 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002017b8)(0x7d);
            auVar12 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00201768)();
            local_a8 = (undefined8 *)local_e8;
            local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd4727b3c80c27e33E;
            local_98 = &local_118;
            local_90 = 
            PTR__ZN68__LT_uu_chroot__error__ChrootError_u20_as_u20_core__fmt__Display_GT_3fmt17hde4c65801cafeee4E_002017f8
            ;
            local_160 = 0x1fab48;
            uStack_15c = 0;
            auStack_158._0_4_ = 3;
            auStack_158._4_4_ = 0;
            local_140 = 0;
            uStack_150 = &local_a8;
            local_148 = 2;
            uStack_144 = 0;
            local_e8 = auVar12;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00201770)(&local_160);
                    /* try { // try from 00166bf6 to 00166bff has its CatchHandler @ 00166d0c */
            _ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17h70d0c8dd677b313fE
                      (&local_118);
            goto LAB_00166ac3;
          }
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                  (&local_160,uVar8,lVar10);
        local_108 = uStack_150;
        local_118 = local_160;
        uStack_114 = uStack_15c;
        uStack_110 = auStack_158;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1e8619c8d8ef628aE(&local_c0,&local_118);
      } while( true );
    }
                    /* try { // try from 00166942 to 00166951 has its CatchHandler @ 00166d48 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
              (&local_160,param_2,param_3);
    local_148 = uStack_150._4_4_;
    auVar2 = auStack_158;
    auStack_158._0_4_ = uStack_15c;
    uStack_150._4_4_ = (undefined4)uStack_150;
    *param_1 = 5;
  }
  auStack_158._4_4_ = SUB84(auVar2,0);
  param_1[1] = local_160;
  param_1[2] = local_160;
  param_1[3] = auStack_158._0_4_;
  param_1[4] = auStack_158._4_4_;
  *(undefined (*) [8])(param_1 + 4) = auVar2;
  *(ulong *)(param_1 + 6) = CONCAT44(local_148,uStack_150._4_4_);
  uStack_15c = local_160;
LAB_00166c74:
  unique0x10000915 = (undefined8 **)auVar2;
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h79c3796c70dc8d4dE
            (local_d8,puVar11);
  return;
}