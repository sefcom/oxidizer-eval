undefined  [16] _ZN5uu_pr6uumain6uumain17hf17caad61ffada1fE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *unaff_R14;
  undefined auVar6 [16];
  int local_6f8;
  undefined4 uStack_6f4;
  int iStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  long local_6b8;
  undefined local_6a8 [8];
  undefined8 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  long local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long local_668;
  long local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  int local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  int iStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined local_5f0 [32];
  undefined local_5d0 [24];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined local_318 [32];
  undefined local_2f8 [712];
  
  _ZN6uucore4Args14collect_ignore17h1f75fae5bd7a4821E(local_6a8,param_1,param_2);
                    /* try { // try from 00270d5b to 00270d68 has its CatchHandler @ 00271331 */
  (*(code *)PTR__ZN5uu_pr18recreate_arguments17hbe43c308ac861d0cE_00448600)
            (&local_608,local_6a0,local_698);
                    /* try { // try from 00270d69 to 00270d76 has its CatchHandler @ 0027131c */
  (*(code *)PTR__ZN5uu_pr6uu_app17h27293cf4b1de8d69E_00448608)(local_2f8);
  local_458 = local_5f8;
  local_468 = local_608;
  uStack_464 = uStack_604;
  iStack_460 = iStack_600;
  uStack_45c = uStack_5fc;
                    /* try { // try from 00270d97 to 00270dd8 has its CatchHandler @ 00271353 */
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h0d51c7aaa63022baE
            (&local_5b8,local_2f8,&local_468);
  if (local_5b8 == -0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00448610
             )();
LAB_0027127b:
                    /* try { // try from 0027127b to 00271287 has its CatchHandler @ 0027131a */
    _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hb4de78349db13b93E
              (local_2f8);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd5b40a3057d327f5E
              (local_6a8);
    return auVar6;
  }
  local_640 = local_598;
  uStack_63c = uStack_594;
  uStack_638 = uStack_590;
  uStack_634 = uStack_58c;
  local_650 = (undefined4)local_5a8;
  uStack_64c = local_5a8._4_4_;
  uStack_648 = uStack_5a0;
  uStack_644 = uStack_59c;
  local_660 = local_5b8;
  local_658 = uStack_5b0;
                    /* try { // try from 00270e24 to 00270ec0 has its CatchHandler @ 00271339 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17he9d5271e2c2f6830E
            (&local_5b8,&local_660,"files",5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h9483f94352775eb3E
            (&local_468,"files",5,&local_5b8);
  if (CONCAT44(uStack_464,local_468) != 0) {
    local_588 = local_438;
    uStack_584 = uStack_434;
    uStack_580 = uStack_430;
    uStack_57c = uStack_42c;
    local_598 = local_448;
    uStack_594 = uStack_444;
    uStack_590 = uStack_440;
    uStack_58c = uStack_43c;
    local_5a8 = local_458;
    uStack_5a0 = uStack_450;
    uStack_59c = uStack_44c;
    local_5b8 = CONCAT44(uStack_464,local_468);
    uStack_5b0 = CONCAT44(uStack_45c,iStack_460);
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h3126b24b43ab7e31E
              (&local_6f8,&local_5b8);
    local_5b8 = CONCAT44(uStack_6f4,local_6f8);
    local_628 = iStack_6f0;
    uStack_624 = uStack_6ec;
    iStack_620 = (int)uStack_6e8;
    uStack_61c = uStack_6e8._4_4_;
    if (local_5b8 != -0x8000000000000000) {
      uStack_5b0 = CONCAT44(uStack_6ec,iStack_6f0);
      local_5a8 = uStack_6e8;
      goto LAB_00270f1f;
    }
  }
  local_5b8 = 0;
  uStack_5b0 = 8;
  local_5a8 = 0;
LAB_00270f1f:
                    /* try { // try from 00270f1f to 00270f30 has its CatchHandler @ 00271303 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hed7d37a3b4c56c54E
            (&local_690,&local_5b8);
                    /* try { // try from 00270f31 to 00270f77 has its CatchHandler @ 00271341 */
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd9c35ea9e897c87dE(&local_5b8);
  if (local_680 == 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h6aa1a4bfc3ddda46E(&local_690,0,"-",1);
  }
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00448618
          )(&local_660,
            "mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG"
            ,5);
  if (cVar4 == '\0') {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h57e7793faa5c940aE
              (local_318,&local_690);
    _ZN5alloc3vec16in_place_collect108__LT_impl_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__u20_for_u20_alloc__vec__Vec_LT_T_GT__GT_9from_iter17ha8d90c04fe27a3d5E
              (local_5d0,local_318);
  }
  else {
    puVar5 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
    if (puVar5 == (undefined4 *)0x0) {
                    /* try { // try from 002712aa to 002712b9 has its CatchHandler @ 00271341 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_004485c0)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(long *)(puVar5 + 4) = local_680;
    *puVar5 = local_690;
    puVar5[1] = uStack_68c;
    puVar5[2] = uStack_688;
    puVar5[3] = uStack_684;
                    /* try { // try from 00270f9b to 00270fd6 has its CatchHandler @ 00271318 */
    _ZN5alloc5slice4hack8into_vec17h92977b83cee8faeeE(local_5d0,puVar5,1);
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he0633ba5e41a2d78E
            (local_5f0,local_5d0);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h08603e204509b18eE
            (&local_678,local_5f0);
  if (CONCAT44(uStack_674,local_678) != -0x8000000000000000) {
    unaff_R14 = &local_5b8;
    do {
      lVar3 = local_668;
      local_6b8 = local_668;
      local_6c8 = local_678;
      uStack_6c4 = uStack_674;
      uStack_6c0 = uStack_670;
      uStack_6bc = uStack_66c;
      uVar2 = CONCAT44(uStack_66c,uStack_670);
                    /* try { // try from 00271059 to 0027106d has its CatchHandler @ 0027136d */
      _ZN5alloc3str17join_generic_copy17h3936ba3902b6550cE(unaff_R14,local_6a0,local_698," ",1);
      uStack_6e8 = local_5a8;
      local_6f8 = (int)local_5b8;
      uStack_6f4 = local_5b8._4_4_;
      iStack_6f0 = (int)uStack_5b0;
      uStack_6ec = uStack_5b0._4_4_;
                    /* try { // try from 0027108c to 002710a7 has its CatchHandler @ 00271360 */
      (*(code *)PTR__ZN5uu_pr13build_options17h94d2c892cdb8648cE_00448620)
                (&local_468,&local_660,uVar2,lVar3,uStack_5b0);
                    /* try { // try from 002710aa to 002710b4 has its CatchHandler @ 0027138e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9f022ce4bf884c9dE(&local_6f8);
      if (CONCAT44(uStack_464,local_468) == 2) {
        uStack_6e0 = local_448;
        uStack_6dc = uStack_444;
        local_6f8 = iStack_460;
        uStack_6f4 = uStack_45c;
        iStack_6f0 = (int)local_458;
        uStack_6ec = local_458._4_4_;
                    /* try { // try from 002711db to 002711f6 has its CatchHandler @ 002712e5 */
        (*(code *)PTR__ZN5uu_pr11print_error17hae74ddad01a055bbE_00448638)(&local_660,&local_6f8);
        auVar6 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_00448640
                 )(1);
                    /* try { // try from 002711f7 to 00271204 has its CatchHandler @ 002712d6 */
        _ZN4core3ptr35drop_in_place_LT_uu_pr__PrError_GT_17h11e50f787d698fdaE(&local_6f8);
LAB_00271257:
                    /* try { // try from 00271257 to 00271260 has its CatchHandler @ 002712d1 */
        _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd9c35ea9e897c87dE
                  (&local_6c8);
                    /* try { // try from 00271261 to 0027126d has its CatchHandler @ 00271318 */
        _ZN4core3ptr90drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT__RF_str_GT__GT__GT_17h4b9d711cf2b8be8bE
                  (local_5f0);
                    /* try { // try from 0027126e to 0027127a has its CatchHandler @ 00271353 */
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h320315631e9d3f1cE
                  (&local_660);
        goto LAB_0027127b;
      }
      (*(code *)PTR_memcpy_004484e8)(unaff_R14,&local_468,0x148);
                    /* try { // try from 002710f2 to 0027113a has its CatchHandler @ 00271372 */
      _ZN9itertools9Itertools11exactly_one17h2b0e489c5cd32cfaE
                (&local_6f8,CONCAT44(uStack_6bc,uStack_6c0),
                 local_6b8 * 0x10 + CONCAT44(uStack_6bc,uStack_6c0));
      if (local_6f8 == 2) {
        (*(code *)PTR__ZN5uu_pr2pr17hece35f3a6aa3bef4E_00448628)
                  (&local_628,*(undefined8 *)CONCAT44(uStack_6ec,iStack_6f0),
                   ((undefined8 *)CONCAT44(uStack_6ec,iStack_6f0))[1],unaff_R14);
      }
      else {
        (*(code *)PTR__ZN5uu_pr3mpr17h619b4b447614e91aE_00448630)
                  (&local_628,CONCAT44(uStack_6bc,uStack_6c0),local_6b8,unaff_R14);
      }
      if (CONCAT44(uStack_624,local_628) != -0x7ffffffffffffffb) {
        uStack_6e0 = uStack_610;
        uStack_6dc = uStack_60c;
        local_6f8 = local_628;
        uStack_6f4 = uStack_624;
        iStack_6f0 = iStack_620;
        uStack_6ec = uStack_61c;
                    /* try { // try from 00271220 to 00271230 has its CatchHandler @ 002712bc */
        (*(code *)PTR__ZN5uu_pr11print_error17hae74ddad01a055bbE_00448638)(&local_660,&local_6f8);
                    /* try { // try from 00271231 to 00271243 has its CatchHandler @ 002712cc */
        _ZN4core3ptr35drop_in_place_LT_uu_pr__PrError_GT_17h11e50f787d698fdaE(&local_6f8);
        auVar6 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_00448640
                 )(1);
                    /* try { // try from 00271244 to 00271256 has its CatchHandler @ 002712d6 */
        _ZN4core3ptr41drop_in_place_LT_uu_pr__OutputOptions_GT_17h0aa4c9475356bf21E(&local_5b8);
        goto LAB_00271257;
      }
                    /* try { // try from 0027114b to 00271152 has its CatchHandler @ 0027138e */
      _ZN4core3ptr41drop_in_place_LT_uu_pr__OutputOptions_GT_17h0aa4c9475356bf21E(unaff_R14);
                    /* try { // try from 00271153 to 0027115c has its CatchHandler @ 0027135b */
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd9c35ea9e897c87dE
                (&local_6c8);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h08603e204509b18eE
                (&local_678,local_5f0);
    } while (CONCAT44(uStack_674,local_678) != -0x8000000000000000);
  }
                    /* try { // try from 0027118a to 00271196 has its CatchHandler @ 00271318 */
  _ZN4core3ptr90drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT__RF_str_GT__GT__GT_17h4b9d711cf2b8be8bE
            (local_5f0);
                    /* try { // try from 00271197 to 002711a3 has its CatchHandler @ 00271353 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h320315631e9d3f1cE
            (&local_660);
                    /* try { // try from 002711a4 to 002711b0 has its CatchHandler @ 0027131a */
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hb4de78349db13b93E
            (local_2f8);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd5b40a3057d327f5E
            (local_6a8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_R14;
  return auVar6 << 0x40;
}