undefined  [16] _ZN5uu_pr6uumain6uumain17hac06982649f0a133E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong unaff_R12;
  ulong uVar8;
  undefined auVar9 [16];
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  long local_6e8;
  undefined local_6e0 [8];
  undefined8 local_6d8;
  undefined8 local_6d0;
  int local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  long local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  long local_688;
  long local_680;
  long local_678;
  ulong local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  int local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined4 *local_610;
  undefined8 local_608;
  undefined local_600 [32];
  undefined local_5e0 [24];
  ulong local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  long local_480 [8];
  int local_440 [2];
  int local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined local_2f8 [712];
  
  _ZN6uucore4Args14collect_ignore17h97482d15030ba782E(local_6e0,param_1,param_2);
                    /* try { // try from 00223c8b to 00223c98 has its CatchHandler @ 0022419a */
  (*(code *)PTR__ZN5uu_pr18recreate_arguments17hde7501ecf1930281E_00398ab0)
            (local_5e0,local_6d8,local_6d0);
                    /* try { // try from 00223c99 to 00223ca6 has its CatchHandler @ 00224178 */
  (*(code *)PTR__ZN5uu_pr6uu_app17hd57f601a60b3d98fE_00398ab8)(local_2f8);
                    /* try { // try from 00223ca7 to 00223ce1 has its CatchHandler @ 002241b4 */
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h56c31e2702c5690aE
            (&local_5c8,local_2f8,local_5e0);
  local_640 = local_598;
  local_650 = local_5a8;
  uStack_64c = uStack_5a4;
  uStack_648 = uStack_5a0;
  uStack_644 = uStack_59c;
  local_660 = local_5b8;
  uStack_65c = uStack_5b4;
  uStack_658 = uStack_5b0;
  uStack_654 = uStack_5ac;
  local_670 = local_5c8;
  local_668 = local_5c0;
                    /* try { // try from 00223d2d to 00223d76 has its CatchHandler @ 002241af */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9ab32871d6940052E
            (&local_5c8,&local_670);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h326427d89277f070E(local_480,&local_5c8);
  if ((local_480[0] == 0) ||
     (_ZN4core4iter6traits8iterator8Iterator7collect17hcebf0ec800da98fbE(&local_5c8,local_480),
     local_5c8 == 0x8000000000000000)) {
    uVar6 = 0;
    uVar7 = 8;
    uVar8 = 0;
  }
  else {
    uVar6 = CONCAT44(uStack_5b4,local_5b8);
    uVar7 = local_5c0;
    uVar8 = local_5c8;
  }
                    /* try { // try from 00223daa to 00223db4 has its CatchHandler @ 00224166 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc7ce5ee35d8c572cE
            (&local_6f8,uVar7,uVar6);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h77d95ec4cfe72c96E(uVar8,uVar7)
  ;
  if (local_6e8 == 0) {
                    /* try { // try from 00223dc8 to 00223de9 has its CatchHandler @ 002241f8 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17he471e9efcf55dae8E(&local_6f8);
  }
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00398ac8
          )(&local_670,
            "mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
            ,5);
  if (cVar5 == '\0') {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h4c8875bae1ad66feE
              (&local_5c8,&local_6f8);
                    /* try { // try from 00223e4b to 00223e5a has its CatchHandler @ 00224174 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h39c8c4e18f2c5e13E(&local_618,&local_5c8);
  }
  else {
    local_610 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (local_610 == (undefined4 *)0x0) {
                    /* try { // try from 0022412c to 0022413b has its CatchHandler @ 002241f8 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00398af8)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(long *)(local_610 + 4) = local_6e8;
    *local_610 = local_6f8;
    local_610[1] = uStack_6f4;
    local_610[2] = uStack_6f0;
    local_610[3] = uStack_6ec;
    local_618 = 1;
    local_608 = 1;
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he0c8406f3ea8cec4E
            (local_600,&local_618);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b07da59e5f71a1eE
            (&local_688,local_600);
  if (local_688 != -0x8000000000000000) {
    local_690 = local_6d8;
    local_698 = local_6d0;
    local_6a0 = -0x7ffffffffffffffb;
    do {
      lVar4 = local_678;
      lVar3 = local_680;
      lVar2 = local_688;
                    /* try { // try from 00223edd to 00223eee has its CatchHandler @ 002241db */
      _ZN5alloc3str17join_generic_copy17h9a16a609d86d9006E(&local_5c8,local_690,local_698);
      uVar6 = local_5c0;
      unaff_R12 = local_5c8;
                    /* try { // try from 00223f07 to 00223f25 has its CatchHandler @ 002241cb */
      (*(code *)PTR__ZN5uu_pr13build_options17h49ff7384d8a5a7b3E_00398ad0)
                (local_440,&local_670,lVar3,lVar4,local_5c0,CONCAT44(uStack_5b4,local_5b8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1990b2a4231c8396E(unaff_R12,uVar6);
      if (local_440[0] == 2) {
        local_6b8 = local_428;
        uStack_6b4 = uStack_424;
        uStack_6b0 = uStack_420;
        uStack_6ac = uStack_41c;
        local_6c8 = local_438;
        uStack_6c4 = uStack_434;
        uStack_6c0 = uStack_430;
        uStack_6bc = uStack_42c;
                    /* try { // try from 00224050 to 0022406d has its CatchHandler @ 00224157 */
        (*(code *)PTR__ZN5uu_pr11print_error17hcda7b11e9efc84e6E_00398ae8)(&local_670,&local_6c8);
        auVar9 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00398af0
                 )(1);
                    /* try { // try from 0022406e to 0022407d has its CatchHandler @ 00224150 */
        _ZN4core3ptr35drop_in_place_LT_uu_pr__PrError_GT_17hb0ace81eae090343E(&local_6c8);
LAB_002240d8:
        _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h77d95ec4cfe72c96E
                  (lVar2,lVar3);
                    /* try { // try from 002240e3 to 002240ef has its CatchHandler @ 00224174 */
        _ZN4core3ptr90drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT__RF_str_GT__GT__GT_17h7a0321272e8203dbE
                  (local_600);
                    /* try { // try from 002240f0 to 002240fc has its CatchHandler @ 002241b4 */
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h35a9c1db073199baE
                  (&local_670);
                    /* try { // try from 002240fd to 00224109 has its CatchHandler @ 00224176 */
        _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h5390a55aec4cadbcE
                  (local_2f8);
        goto LAB_0022410a;
      }
      (*(code *)PTR_memcpy_00398a40)(&local_5c8,local_440,0x148);
      _ZN9itertools9Itertools11exactly_one17h00a3accd7fcc4326E
                (&local_6c8,lVar3,lVar4 * 0x10 + lVar3);
      if (local_6c8 == 2) {
                    /* try { // try from 00223f7f to 00223fb6 has its CatchHandler @ 002241b9 */
        (*(code *)PTR__ZN5uu_pr2pr17h5485419cf3c9b0aeE_00398ad8)
                  (&local_638,*(undefined8 *)CONCAT44(uStack_6bc,uStack_6c0),
                   ((undefined8 *)CONCAT44(uStack_6bc,uStack_6c0))[1],&local_5c8);
      }
      else {
        (*(code *)PTR__ZN5uu_pr3mpr17hb7baf1477b554e9cE_00398ae0)(&local_638,lVar3,lVar4,&local_5c8)
        ;
      }
      if (CONCAT44(uStack_634,local_638) != local_6a0) {
        local_6b8 = local_628;
        uStack_6b4 = uStack_624;
        uStack_6b0 = uStack_620;
        uStack_6ac = uStack_61c;
        local_6c8 = local_638;
        uStack_6c4 = uStack_634;
        uStack_6c0 = uStack_630;
        uStack_6bc = uStack_62c;
                    /* try { // try from 0022409a to 002240ac has its CatchHandler @ 0022413e */
        (*(code *)PTR__ZN5uu_pr11print_error17hcda7b11e9efc84e6E_00398ae8)(&local_670,&local_6c8);
                    /* try { // try from 002240ad to 002240c4 has its CatchHandler @ 00224155 */
        _ZN4core3ptr35drop_in_place_LT_uu_pr__PrError_GT_17hb0ace81eae090343E(&local_638);
        auVar9 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00398af0
                 )(1);
        _ZN4core3ptr41drop_in_place_LT_uu_pr__OutputOptions_GT_17h0b5888463897c4e4E(&local_5c8);
        goto LAB_002240d8;
      }
      _ZN4core3ptr41drop_in_place_LT_uu_pr__OutputOptions_GT_17h0b5888463897c4e4E(&local_5c8);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h77d95ec4cfe72c96E
                (lVar2,lVar3);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b07da59e5f71a1eE
                (&local_688,local_600);
    } while (local_688 != -0x8000000000000000);
  }
                    /* try { // try from 00224007 to 00224013 has its CatchHandler @ 00224174 */
  _ZN4core3ptr90drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT__RF_str_GT__GT__GT_17h7a0321272e8203dbE
            (local_600);
                    /* try { // try from 00224014 to 00224020 has its CatchHandler @ 002241b4 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h35a9c1db073199baE
            (&local_670);
                    /* try { // try from 00224021 to 0022402d has its CatchHandler @ 00224176 */
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h5390a55aec4cadbcE
            (local_2f8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = unaff_R12;
  auVar9 = auVar9 << 0x40;
LAB_0022410a:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd02d4b6e80bb29b4E
            (local_6e0);
  return auVar9;
}