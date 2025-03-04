/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16]
_ZN8uu_tsort6uumain6uumain17hff4558af46a5d226E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined local_4fc [4];
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  long *local_4e8;
  code *pcStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  long local_4b8;
  long local_4b0;
  undefined local_4a8 [16];
  undefined8 local_498;
  undefined local_488 [16];
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  long local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  undefined8 local_428;
  code *local_420;
  code *local_418;
  long local_410;
  long local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined local_3f0;
  undefined7 uStack_3ef;
  undefined *local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined local_3c8 [16];
  long local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  long *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined local_350 [16];
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  long *local_328;
  code *pcStack_320;
  undefined8 local_318;
  code *pcStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined2 local_2f8;
  undefined local_2f0 [640];
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [40];
  undefined2 local_38;
  
  (*(code *)PTR__ZN8uu_tsort6uu_app17he13fe654e24171ebE_00225088)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hff2c0943be558db2E
            (&local_460,&local_338,param_1,param_2);
  if (local_460 == -0x8000000000000000) {
    auVar12 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00225090
              )();
    return auVar12;
  }
  local_388 = local_430;
  local_398 = local_440;
  uStack_394 = uStack_43c;
  uStack_390 = uStack_438;
  uStack_38c = uStack_434;
  local_3a8 = local_450;
  uStack_3a4 = uStack_44c;
  uStack_3a0 = uStack_448;
  uStack_39c = uStack_444;
  local_3b8 = local_460;
  local_3b0 = local_458;
                    /* try { // try from 0016734e to 00167387 has its CatchHandler @ 00167daf */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h28e7d3f2482c50b0E
            (&local_338,&local_3b8,&DAT_001144ec,4);
  local_4b0 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3a667534f1abdb57E
                        (&DAT_001144ec,4,&local_338);
  if (local_4b0 == 0) {
                    /* try { // try from 00167cc9 to 00167ce1 has its CatchHandler @ 00167daf */
    (*(code *)PTR__ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE_002250d0)
              (&DAT_00114d45,0x19,&PTR_DAT_0021e828);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 001673a1 to 001673f5 has its CatchHandler @ 00167db4 */
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hd39b3327ae2a3504E
                    (*(undefined8 *)(local_4b0 + 8),*(undefined8 *)(local_4b0 + 0x10),&DAT_00114dbb,
                     1);
  if (cVar5 == '\0') {
    uVar9 = *(undefined8 *)(local_4b0 + 8);
    uVar1 = *(undefined8 *)(local_4b0 + 0x10);
                    /* try { // try from 0016745c to 00167557 has its CatchHandler @ 00167db4 */
    cVar6 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_002250a8)(uVar9,uVar1);
    if (cVar6 != '\0') {
      local_4f8 = &local_4b0;
      uStack_4f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h93a685a2101b800fE;
      local_338 = &DAT_0021e788;
      uStack_330 = 2;
      local_318 = 0;
      local_328 = &local_4f8;
      pcStack_320 = (code *)0x1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h61e9aa31ff763042E(&local_380,&local_338);
      pcStack_320 = (code *)CONCAT44(pcStack_320._4_4_,1);
      local_338 = (undefined *)CONCAT44(uStack_37c,local_380);
      uStack_330 = CONCAT44(uStack_374,uStack_378);
      local_328 = local_370;
      uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0a6e41ca1ff4979aE(&local_338);
      auVar12._8_8_ =
           &
           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7de5253f1b1a0a2fE_0021e8d0
      ;
      auVar12._0_8_ = uVar9;
      goto LAB_00167816;
    }
    _ZN3std2fs4File4open17hb4ea70bf20a6c4bcE(&local_338,uVar9,uVar1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17haddad720e02ad751E
              (&local_4f8,&local_338,local_4b0);
    auVar12._8_8_ = uStack_4f0;
    auVar12._0_8_ = local_4f8;
    if (local_4f8 != (long *)0x0) goto LAB_00167816;
    local_4fc = (undefined  [4])(undefined4)uStack_4f0;
    ppuVar10 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hf29264b319478393E_0021e840;
    puVar11 = (undefined8 *)local_4fc;
  }
  else {
    local_428 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_00225098)();
    ppuVar10 = (undefined **)&DAT_0021e940;
    puVar11 = &local_428;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hda7e672eb5fcc9f0E
            (&local_460,0x2000,puVar11,ppuVar10);
  local_478 = 0;
  local_470 = 1;
  local_468 = 0;
                    /* try { // try from 0016741a to 00167440 has its CatchHandler @ 00167daa */
  auVar12 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_14read_to_string17h6b6a1c6d1bfd242dE
                      (&local_460,&local_478);
  if (auVar12._0_8_ == 0) {
                    /* try { // try from 00167570 to 00167589 has its CatchHandler @ 00167daa */
    _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17hce9af829f85cbcd2E(&local_338);
    local_3c8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hcf1ae938213ad007E(&local_338);
    uVar9 = local_468;
    local_3e8 = PTR_DAT_0021e9b0;
    uStack_3e0 = _UNK_0021e9b8;
    local_3d8 = _DAT_0021e9c0;
    uStack_3d4 = _UNK_0021e9c4;
    uStack_3d0 = _UNK_0021e9c8;
    uStack_3cc = _UNK_0021e9cc;
                    /* try { // try from 001675c8 to 001675d4 has its CatchHandler @ 00167d2c */
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
              (&local_4f8,local_470,local_468);
    puVar4 = PTR__ZN8uu_tsort5Graph8add_edge17h8f24cab5b427ccb3E_002250b0;
    local_308 = local_4d8;
    uStack_300 = uStack_4d0;
    local_318 = local_4e8;
    pcStack_310 = pcStack_4e0;
    local_328 = local_4f8;
    pcStack_320 = uStack_4f0;
    local_338 = (undefined *)0x0;
    uStack_330 = uVar9;
    local_2f8 = 0;
    do {
                    /* try { // try from 00167636 to 001676a2 has its CatchHandler @ 00167d3c */
      lVar8 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17h62b04e9d485bb710E
                        (&local_338);
      if (lVar8 == 0) {
LAB_00167861:
        (*(code *)PTR__ZN8uu_tsort5Graph9run_tsort17h2621dd5cdb4faf5aE_002250c0)
                  (&local_408,&local_3e8);
        if (local_408 == 0) {
          local_498 = CONCAT71(uStack_3ef,local_3f0);
          local_4a8._12_4_ = uStack_3f4;
          local_4a8._8_4_ = uStack_3f8;
                    /* try { // try from 00167bc1 to 00167bda has its CatchHandler @ 00167d02 */
          _ZN5alloc3str17join_generic_copy17h06f086fa24266c97E
                    (&local_338,local_4a8._8_8_,local_498,&DAT_00114ca2,1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_4c8 = &local_4f8;
          uStack_4c0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_338 = &DAT_0021e730;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = &local_4c8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167c4b to 00167c58 has its CatchHandler @ 00167ce4 */
          (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_002250c8)(&local_338);
                    /* try { // try from 00167c59 to 00167c62 has its CatchHandler @ 00167d02 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(&local_4f8);
                    /* try { // try from 00167c63 to 00167c6c has its CatchHandler @ 00167d1b */
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h468c94d3c415e8e3E
                    (local_4a8);
          uVar9 = 0;
        }
        else {
          local_4b8 = CONCAT71(uStack_3ef,local_3f0);
          local_4c8 = (undefined8 *)CONCAT44(uStack_3fc,local_400);
          uStack_4c0 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
                    /* try { // try from 0016789f to 0016792a has its CatchHandler @ 00167d20 */
          local_4a8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00225068)();
          uStack_4f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb3b4f0bde3248f91E;
          local_4e8 = &local_4b0;
          pcStack_4e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h93a685a2101b800fE;
          local_338 = &DAT_0021e7c8;
          uStack_330 = 3;
          local_318 = 0;
          local_328 = &local_4f8;
          pcStack_320 = (code *)0x2;
          local_4f8 = (long *)local_4a8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h61e9aa31ff763042E(local_350,&local_338);
          local_498 = local_340;
          local_418 = uStack_4c0 + local_4b8 * 0x10;
          local_420 = uStack_4c0;
          lVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8e4486873f05d014E
                            (&local_420);
          if (lVar8 != 0) {
            do {
              local_410 = lVar8;
                    /* try { // try from 001679a8 to 00167a34 has its CatchHandler @ 00167d44 */
              auVar12 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00225068)();
              local_4f8 = (long *)local_488;
              uStack_4f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb3b4f0bde3248f91E
              ;
              local_4e8 = &local_410;
              pcStack_4e0 = 
              _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdeab228c8bd01923E;
              local_338 = &DAT_0021e7f8;
              uStack_330 = 3;
              local_318 = 0;
              local_328 = &local_4f8;
              pcStack_320 = (code *)0x2;
              local_488 = auVar12;
              uVar7 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hb0059971e59db927E
                                (local_4a8,&local_338);
              _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h81a18be82a0e08f6E(uVar7);
              lVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8e4486873f05d014E
                                (&local_420);
            } while (lVar8 != 0);
          }
          uStack_4f0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_338 = &DAT_00114af0;
          uStack_330 = 1;
          local_318 = 0;
          local_328 = &local_4f8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167a97 to 00167ac8 has its CatchHandler @ 00167d25 */
          local_4f8 = (long *)local_4a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00225070)(&local_338);
          _ZN5alloc3str17join_generic_copy17h06f086fa24266c97E
                    (&local_338,uStack_4c0,local_4b8,&DAT_00114ca2,1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_488._0_8_ = &local_4f8;
          local_488._8_8_ =
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
          ;
          local_338 = &DAT_0021e730;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = (long *)local_488;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167b3b to 00167b48 has its CatchHandler @ 00167cf3 */
          (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_002250c8)(&local_338);
                    /* try { // try from 00167b49 to 00167b8e has its CatchHandler @ 00167d25 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(&local_4f8);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hfc4b2f6c5cbecadbE
                    (&local_4f8);
          local_328 = local_4e8;
          local_338 = (undefined *)CONCAT44(local_4f8._4_4_,(undefined4)local_4f8);
          uStack_330 = CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          pcStack_320 = (code *)CONCAT44(pcStack_320._4_4_,1);
          uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0a6e41ca1ff4979aE(&local_338);
                    /* try { // try from 00167b8f to 00167b9b has its CatchHandler @ 00167d20 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(local_4a8);
                    /* try { // try from 00167b9c to 00167ba5 has its CatchHandler @ 00167d1b */
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h468c94d3c415e8e3E
                    (&local_4c8);
        }
                    /* try { // try from 00167c70 to 00167c7c has its CatchHandler @ 00167d16 */
        _ZN4core3ptr36drop_in_place_LT_uu_tsort__Graph_GT_17hfb1817077245a538E(&local_3e8);
                    /* try { // try from 00167c7d to 00167c89 has its CatchHandler @ 00167d11 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(&local_478);
        _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17h6cf9e678dd9a4b95E
                  (local_460,local_458);
        if (cVar5 == '\0') {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hf29264b319478393E(local_4fc);
        }
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0a4c6af42426ce0aE
                  (&local_3b8);
        auVar3._8_8_ = &
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7de5253f1b1a0a2fE_0021e8d0
        ;
        auVar3._0_8_ = uVar9;
        return auVar3;
      }
      auVar12 = _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17hff25601417aa14a1E
                          (local_2f0,lVar8);
      if (auVar12._0_8_ == 0) goto LAB_00167861;
      _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h86df839be1b2713bE
                (local_60,auVar12._0_8_);
      local_70 = 0;
      local_38 = 1;
      local_68 = auVar12._8_8_;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h3d3838e8c745c526E
                (&local_4c8,&local_70);
      if (local_4b8 == 0) {
                    /* try { // try from 00167857 to 00167876 has its CatchHandler @ 00167d2c */
        _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h468c94d3c415e8e3E
                  (&local_4c8);
        goto LAB_00167861;
      }
      local_4a8._0_8_ = uStack_4c0;
      local_4a8._8_8_ = local_4b8;
      local_498 = 2;
      while( true ) {
                    /* try { // try from 001676d0 to 001676f7 has its CatchHandler @ 00167db9 */
        auVar12 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h89c26ee6dbdc37dfE
                            (local_4a8);
        puVar11 = auVar12._0_8_;
        if (puVar11 == (undefined8 *)0x0) break;
        if (auVar12._8_8_ != 2) {
          local_400 = *(undefined4 *)(local_4b0 + 8);
          uStack_3fc = *(undefined4 *)(local_4b0 + 0xc);
          uStack_3f8 = *(undefined4 *)(local_4b0 + 0x10);
          uStack_3f4 = *(undefined4 *)(local_4b0 + 0x14);
          local_408 = 0;
          local_3f0 = 0;
          local_488._0_8_ = &local_408;
          local_488._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_002250b8
          ;
          local_4f8 = (long *)&DAT_0021e7a8;
          uStack_4f0 = (code *)0x2;
          local_4d8 = 0;
          local_4e8 = (long *)local_488;
          pcStack_4e0 = (code *)0x1;
                    /* try { // try from 00167784 to 001677c1 has its CatchHandler @ 00167d27 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h61e9aa31ff763042E(&local_368,&local_4f8);
          pcStack_4e0 = (code *)CONCAT44(pcStack_4e0._4_4_,1);
          local_4f8 = (long *)CONCAT44(uStack_364,local_368);
          uStack_4f0 = (code *)CONCAT44(uStack_35c,uStack_360);
          local_4e8 = (long *)local_358;
          uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0a6e41ca1ff4979aE(&local_4f8);
                    /* try { // try from 001677c2 to 001677ce has its CatchHandler @ 00167d2c */
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h468c94d3c415e8e3E
                    (&local_4c8);
                    /* try { // try from 001677cf to 001677db has its CatchHandler @ 00167daa */
          _ZN4core3ptr36drop_in_place_LT_uu_tsort__Graph_GT_17hfb1817077245a538E(&local_3e8);
          auVar12._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7de5253f1b1a0a2fE_0021e8d0
          ;
          auVar12._0_8_ = uVar9;
          goto LAB_001677e3;
        }
        (*(code *)puVar4)(&local_3e8,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
      }
                    /* try { // try from 001676fa to 00167703 has its CatchHandler @ 00167d3c */
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h468c94d3c415e8e3E
                (&local_4c8);
    } while( true );
  }
  auVar12 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_002250a0
            )(auVar12._8_8_);
LAB_001677e3:
                    /* try { // try from 001677e3 to 001677ef has its CatchHandler @ 00167d34 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(&local_478);
  _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17h6cf9e678dd9a4b95E
            (local_460,local_458);
  if (cVar5 == '\0') {
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hf29264b319478393E(local_4fc);
  }
LAB_00167816:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0a4c6af42426ce0aE
            (&local_3b8);
  return auVar12;
}