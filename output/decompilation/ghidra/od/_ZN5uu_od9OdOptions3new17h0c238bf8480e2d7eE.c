/* WARNING: Type propagation algorithm not settling */

undefined8 *
_ZN5uu_od9OdOptions3new17h0c238bf8480e2d7eE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  undefined uVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *puVar13;
  undefined uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *******local_158;
  undefined8 *******local_150;
  long local_148;
  undefined8 local_140;
  undefined local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *******local_110;
  undefined8 *******local_108;
  undefined8 *******pppppppuStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e4;
  long local_e0;
  undefined8 *******local_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******local_c8;
  undefined8 *******local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *******local_a8;
  undefined8 local_98;
  undefined8 *****local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *******local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *******local_38;
  
  uVar10 = 0;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1d26d5e9f1693520E
            (&local_168,param_2,"endian",6);
  pppppuVar8 = (undefined8 *****)
               _ZN12clap_builder6parser5error12MatchesError6unwrap17h009cf0e4b0406a7eE
                         ("endian",6,&local_168);
  if (pppppuVar8 == (undefined8 *****)0x0) {
    local_e4 = (undefined4)CONCAT71((int7)((ulong)uVar10 >> 8),2);
  }
  else {
    ppppuVar1 = pppppuVar8[1];
    ppppuVar2 = pppppuVar8[2];
    local_90 = pppppuVar8;
    cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5c6cac41b0728315E
                      (ppppuVar1,ppppuVar2,"little");
    if (cVar6 == '\0') {
      uVar10 = 0;
      cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5c6cac41b0728315E
                        (ppppuVar1,ppppuVar2,"big",3);
      local_e4 = (undefined4)CONCAT71((int7)((ulong)uVar10 >> 8),1);
      if (cVar6 == '\0') {
        local_108 = (undefined8 *******)&local_90;
        pppppppuStack_100 =
             (undefined8 *******)
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9d4d73fd5ba0347aE;
        local_168 = &PTR_s_Invalid_argument___endian__00241640;
        uStack_160 = (undefined8 *******)0x1;
        local_148 = 0;
        local_158 = &local_108;
        local_150 = (undefined8 *******)0x1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(local_138,&local_168);
        uStack_120 = (code *)CONCAT44(uStack_120._4_4_,1);
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(local_138);
        goto LAB_001c62ab;
      }
    }
    else {
      local_e4 = 0;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1d26d5e9f1693520E
            (&local_168,param_2,"skip-bytes",10);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h009cf0e4b0406a7eE
                    ("skip-bytes",10,&local_168);
  if (lVar9 == 0) {
    pppppppuVar12 = (undefined8 *******)0x0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar9 + 8);
    uVar3 = *(undefined8 *)(lVar9 + 0x10);
    _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17h85777a6afadc140aE(&local_108,uVar10,uVar3);
    pppppppuVar12 = pppppppuStack_100;
    if ((int)local_108 != 3) {
                    /* try { // try from 001c61d4 to 001c621c has its CatchHandler @ 001c68c1 */
      _ZN5uu_od20format_error_message17h954b3c00e83b3e7fE
                (local_78,local_108,uVar10,uVar3,"skip-bytes",10);
      local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
      local_158 = (undefined8 *******)local_68;
      uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
      param_1[1] = uVar10;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
      ;
      *param_1 = 2;
      _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17h8994ad15651988d3E
                (local_138);
      return param_1;
    }
  }
  _ZN5uu_od12parse_inputs12parse_inputs17h38cbe1382e5c3650E
            (&local_168,param_2,
             &
             PTR__ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hfe39525b27b15b1aE_00241748
            );
  pppppppuVar17 = local_150;
  pppppppuVar5 = local_158;
  if (local_148 == 3) {
    local_128 = local_158;
    uVar10 = _ZN5uu_od9OdOptions3new28__u7b__u7b_closure_u7d__u7d_17ha7a222c74d8e7c97E(local_138);
LAB_001c62ab:
    param_1[1] = uVar10;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
    ;
    *param_1 = 2;
    return param_1;
  }
  local_98 = local_140;
  local_e0 = local_148;
  if ((int)local_148 == 2) {
    local_b8 = (undefined4)local_168;
    uStack_b4 = local_168._4_4_;
    uStack_b0 = (undefined4)uStack_160;
    uStack_ac = uStack_160._4_4_;
    local_a8 = local_158;
    local_e0 = 0;
    pppppppuVar17 = pppppppuVar12;
  }
  else {
    local_88 = (undefined4)local_168;
    uStack_84 = local_168._4_4_;
    uStack_80 = (undefined4)uStack_160;
    uStack_7c = uStack_160._4_4_;
    puVar11 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x18);
    if (puVar11 == (undefined4 *)0x0) {
                    /* try { // try from 001c6872 to 001c6881 has its CatchHandler @ 001c68af */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
    }
    *puVar11 = local_88;
    puVar11[1] = uStack_84;
    puVar11[2] = uStack_80;
    puVar11[3] = uStack_7c;
    *(undefined8 ********)(puVar11 + 4) = pppppppuVar5;
    _ZN5alloc5slice4hack8into_vec17h371cf1993c745829E(&local_b8,puVar11,1);
  }
                    /* try { // try from 001c6313 to 001c6352 has its CatchHandler @ 001c68bc */
  _ZN5uu_od13parse_formats18parse_format_flags17h9e51e9c420287b95E(local_138,param_3,param_4);
  if ((undefined8 *******)local_138._0_8_ == (undefined8 *******)0x0) {
    pppppppuVar12 = local_128;
    ppuVar15 = (undefined **)uStack_120;
    if ((undefined8 *******)local_138._8_8_ != (undefined8 *******)0x8000000000000000) {
      local_d8 = (undefined8 *******)local_138._8_8_;
      pppppppuStack_d0 = local_128;
      local_c8 = (undefined8 *******)uStack_120;
                    /* try { // try from 001c63c3 to 001c660c has its CatchHandler @ 001c68d0 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1d26d5e9f1693520E
                (&local_168,param_2,"width: warning: ",5);
      pppppppuVar12 =
           (undefined8 *******)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h009cf0e4b0406a7eE
                     ("width: warning: ",5,&local_168);
      if ((pppppppuVar12 == (undefined8 *******)0x0) ||
         (cVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                            (param_2,"width: warning: ",5), cVar6 != '\x02')) {
        local_110 = (undefined8 *******)&DAT_00000010;
LAB_001c644d:
        pppppppuVar5 = local_110;
        local_c0 = (undefined8 *******)
                   _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h84b6b874ac42ad5bE
                             (pppppppuStack_d0,pppppppuStack_d0 + (long)local_c8 * 5);
        if (pppppppuVar5 == (undefined8 *******)0x0) {
LAB_001c64a9:
          local_138 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          pppppppuStack_100 =
               (undefined8 *******)
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
          local_168 = (undefined **)&DAT_00241650;
          uStack_160 = (undefined8 *******)0x2;
          local_148 = 0;
          local_158 = &local_108;
          local_150 = (undefined8 *******)0x1;
          local_108 = (undefined8 *******)local_138;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_168);
          local_138._0_8_ = &local_110;
          local_138._8_8_ =
               _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
          ;
          local_128 = &local_c0;
          uStack_120 = 
          _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
          ;
          local_168 = &PTR_s_invalid_width_instead_00241670;
          uStack_160 = (undefined8 *******)0x3;
          local_148 = 0;
          local_150 = (undefined8 *******)0x2;
          local_158 = (undefined8 *******)local_138;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_168);
          local_110 = local_c0;
        }
        else {
          if (local_c0 == (undefined8 *******)0x0) {
                    /* try { // try from 001c6884 to 001c6890 has its CatchHandler @ 001c68d0 */
            uVar10 = _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                               (&PTR_s_src_uu_od_src_od_rs_00241770);
                    /* catch() { ... } // from try @ 001c66ed with catch @ 001c6891 */
                    /* try { // try from 001c6894 to 001c68ec has its CatchHandler @ 001c68f5 */
            _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17h8994ad15651988d3E
                      (local_138);
            _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17hf096e71933bd90a6E
                      (&local_d8);
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h65d68c6e4131dae8E
                      (&local_b8);
            puVar13 = (undefined8 *)_Unwind_Resume(uVar10);
            return puVar13;
          }
          if (((ulong)local_c0 | (ulong)pppppppuVar5) >> 0x20 == 0) {
            uVar16 = ((ulong)pppppppuVar5 & 0xffffffff) % ((ulong)local_c0 & 0xffffffff);
          }
          else {
            uVar16 = (ulong)pppppppuVar5 % (ulong)local_c0;
          }
          if (uVar16 != 0) goto LAB_001c64a9;
        }
        uVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"output-duplicates",0x11);
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1d26d5e9f1693520E
                  (&local_168,param_2,"read-bytes",10);
        lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h009cf0e4b0406a7eE
                          ("read-bytes",10,&local_168);
        if (lVar9 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar9 + 8);
          uVar3 = *(undefined8 *)(lVar9 + 0x10);
          _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17h85777a6afadc140aE
                    (&local_108,uVar10,uVar3);
          if ((int)local_108 != 3) {
            local_138._0_8_ = local_108;
            local_138._8_8_ = pppppppuStack_100;
            local_128 = (undefined8 *******)CONCAT44(uStack_f4,local_f8);
            uStack_120 = (code *)CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 001c6666 to 001c66ae has its CatchHandler @ 001c68a0 */
            _ZN5uu_od20format_error_message17h954b3c00e83b3e7fE
                      (&local_48,local_108,uVar10,uVar3,"read-bytes",10);
            local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
            local_168 = (undefined **)CONCAT44(uStack_44,local_48);
            uStack_160 = (undefined8 *******)CONCAT44(uStack_3c,uStack_40);
            local_158 = local_38;
            uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
            param_1[1] = uVar10;
            param_1[2] = &
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
            ;
            *param_1 = 2;
                    /* try { // try from 001c66c5 to 001c66ce has its CatchHandler @ 001c68d0 */
            _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17h8994ad15651988d3E
                      (local_138);
            goto LAB_001c6860;
          }
          uVar10 = 1;
          pppppppuVar12 = pppppppuStack_100;
        }
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1d26d5e9f1693520E
                  (&local_168,param_2,"address-radix",0xd);
        lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h009cf0e4b0406a7eE
                          ("address-radix",0xd,&local_168);
        uVar14 = 2;
        if (lVar9 == 0) goto switchD_001c6644_caseD_6f;
        if (*(long *)(lVar9 + 0x10) != 0) {
          switch(**(undefined **)(lVar9 + 8)) {
          case 100:
            uVar14 = 0;
            break;
          default:
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                      (local_138,"Radix must be one of [o, d, x, n]",0x21);
            local_158 = local_128;
            local_168 = (undefined **)local_138._0_8_;
            uStack_160 = (undefined8 *******)local_138._8_8_;
            local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
            uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
            goto LAB_001c684a;
          case 0x6e:
            uVar14 = 3;
            break;
          case 0x6f:
            break;
          case 0x78:
            uVar14 = 1;
          }
switchD_001c6644_caseD_6f:
          param_1[6] = local_a8;
          param_1[4] = CONCAT44(uStack_b4,local_b8);
          param_1[5] = CONCAT44(uStack_ac,uStack_b0);
          param_1[7] = local_d8;
          param_1[8] = pppppppuStack_d0;
          param_1[9] = local_c8;
          *param_1 = uVar10;
          param_1[1] = pppppppuVar12;
          param_1[2] = local_e0;
          param_1[3] = local_98;
          param_1[10] = pppppppuVar17;
          param_1[0xb] = local_110;
          *(undefined *)(param_1 + 0xc) = uVar7;
          *(char *)((long)param_1 + 0x61) = (char)local_e4;
          *(undefined *)((long)param_1 + 0x62) = uVar14;
          return param_1;
        }
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                  (local_138,"Radix cannot be empty, and must be one of [o, d, x, n]",0x36);
        local_158 = local_128;
        local_168 = (undefined **)local_138._0_8_;
        uStack_160 = (undefined8 *******)local_138._8_8_;
        local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
LAB_001c684a:
        param_1[1] = uVar10;
        param_1[2] = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
        ;
        *param_1 = 2;
      }
      else {
        ppppppuVar4 = pppppppuVar12[1];
        pppppppuVar12 = (undefined8 *******)pppppppuVar12[2];
        _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17h85777a6afadc140aE
                  (&local_108,ppppppuVar4,pppppppuVar12);
        if ((int)local_108 == 3) {
          local_110 = pppppppuStack_100;
          goto LAB_001c644d;
        }
        local_138._0_8_ = local_108;
        local_138._8_8_ = pppppppuStack_100;
        local_128 = (undefined8 *******)CONCAT44(uStack_f4,local_f8);
        uStack_120 = (code *)CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 001c66ed to 001c6735 has its CatchHandler @ 001c6891 */
        _ZN5uu_od20format_error_message17h954b3c00e83b3e7fE
                  (&local_60,local_108,ppppppuVar4,pppppppuVar12,"width: warning: ",5);
        local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
        local_168 = (undefined **)CONCAT44(uStack_5c,local_60);
        uStack_160 = (undefined8 *******)CONCAT44(uStack_54,uStack_58);
        local_158 = local_50;
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
        param_1[1] = uVar10;
        param_1[2] = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
        ;
        *param_1 = 2;
                    /* try { // try from 001c674c to 001c6849 has its CatchHandler @ 001c68d0 */
        _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17h8994ad15651988d3E
                  (local_138);
      }
LAB_001c6860:
                    /* try { // try from 001c6860 to 001c686c has its CatchHandler @ 001c68bc */
      _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17hf096e71933bd90a6E
                (&local_d8);
      goto LAB_001c6389;
    }
  }
  else {
    local_158 = (undefined8 *******)uStack_120;
    local_168 = (undefined **)local_138._8_8_;
    uStack_160 = local_128;
    local_150 = (undefined8 *******)CONCAT44(local_150._4_4_,1);
    pppppppuVar12 =
         (undefined8 *******)_ZN5alloc5boxed12Box_LT_T_GT_3new17h222a7a04b251eb66E(&local_168);
    ppuVar15 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h0e37ce66c58053f6E_002416d8
    ;
  }
  param_1[1] = pppppppuVar12;
  param_1[2] = ppuVar15;
  *param_1 = 2;
LAB_001c6389:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h65d68c6e4131dae8E
            (&local_b8);
  return param_1;
}