void _ZN14linera_summary21ci_runtime_comparison19CiRuntimeComparison12get_runtimes17h6b7aa8181dc2e971E
               (undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined auVar5 [12];
  char local_551;
  undefined8 *local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined4 local_528;
  int local_524;
  undefined8 local_520;
  undefined local_518 [32];
  undefined local_4f8 [24];
  undefined local_4e0 [24];
  undefined local_4c8 [88];
  undefined local_470 [24];
  undefined local_458 [24];
  undefined local_440 [88];
  undefined local_3e8 [88];
  undefined local_390 [24];
  undefined local_378 [24];
  undefined local_360 [24];
  undefined local_348 [24];
  undefined local_330 [24];
  undefined local_318 [68];
  undefined8 local_2d4;
  undefined4 local_2cc;
  int local_2c4;
  undefined8 local_2c0;
  char local_2b8;
  char local_2b7;
  undefined local_2b0 [56];
  long local_278 [73];
  
  local_548 = 0;
  local_538 = 0;
  local_550 = param_1;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0418eb3e5a9d9ae5E
            (local_518);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc38c0697d7152ffbE
            (local_278,local_518);
  puVar3 = PTR_memcpy_00a4ac98;
  do {
    (*(code *)puVar3)(local_4f8,local_278,0x248);
    if (local_2b8 != '\x03') {
                    /* try { // try from 00617900 to 00617913 has its CatchHandler @ 00617a3a */
      uVar2 = _ZN59__LT__LP_A_C_B_RP__u20_as_u20_anyhow__ensure__BothDebug_GT_17__dispatch_ensure17hd80a0ce03af04a7bE
                        (&local_2b8);
LAB_00617914:
      local_550[1] = uVar2;
      *local_550 = 1;
      puVar3 = local_4f8;
LAB_00617948:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(puVar3);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_4e0);
      _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_4c8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_470);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_458);
      _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_440);
      _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_3e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_390);
      _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_octocrab__models__workflows__Step_GT__GT_17hedd112003ee7f486E
                (local_378);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_360);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h492b602ae4f5467cE
                (local_348);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb772be4e7af31c63E
                (local_330);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb772be4e7af31c63E
                (local_318);
                    /* try { // try from 006179e1 to 006179ea has its CatchHandler @ 00617a44 */
      _ZN4core3ptr92drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_octocrab__models__workflows__Job_GT__GT_17h03b25bc479979ac1E
                (local_518);
      _ZN4core3ptr168drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_u64_GT__GT__GT_17hcda09b8ef5bf9729E
                (&local_548);
      return;
    }
    if (local_2b7 == '\a') {
      uVar2 = 0x2c;
      pcVar4 = "Condition failed: `job.conclusion.is_some()`";
LAB_00617a21:
                    /* try { // try from 00617a21 to 00617a25 has its CatchHandler @ 00617a3a */
      uVar2 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hcbad9944872ae83fE
                        (pcVar4,uVar2);
      goto LAB_00617914;
    }
    local_551 = local_2b7;
    if (local_2b7 != '\x05') {
      uVar2 = _ZN59__LT__LP_A_C_B_RP__u20_as_u20_anyhow__ensure__BothDebug_GT_17__dispatch_ensure17h6da9ad59f8cf9516E
                        (&local_551);
      goto LAB_00617914;
    }
    if (local_2c4 == 0) {
      uVar2 = 0x2e;
      pcVar4 = "Condition failed: `job.completed_at.is_some()`";
      goto LAB_00617a21;
    }
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5entry17h64b7f88545f9777bE
              (local_2b0,&local_548,local_278);
                    /* try { // try from 006177c7 to 006177dd has its CatchHandler @ 00617a50 */
    uVar2 = _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17h6d559705046cb376E
                      (local_2b0);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00a4ae68
    )(local_2b0,local_390);
    if (local_2c4 == 0) {
                    /* try { // try from 00617a2b to 00617a37 has its CatchHandler @ 00617a55 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00a4aca0)(&PTR_DAT_009f3390);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_524 = local_2c4;
    local_520 = local_2c0;
    local_528 = local_2cc;
    local_530 = local_2d4;
                    /* try { // try from 0061780f to 0061781d has its CatchHandler @ 00617a4e */
    auVar5 = _ZN6chrono8datetime18DateTime_LT_Tz_GT_21signed_duration_since17h6fe2f740ab2fa8aeE
                       (&local_524,&local_530);
    if ((long)((ulong)(0 < auVar5._8_4_ && auVar5._0_8_ < 0) + auVar5._0_8_) < 0) {
                    /* try { // try from 0061792b to 0061792f has its CatchHandler @ 00617a55 */
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h80769afd2905541eE
                        ();
      local_550[1] = uVar2;
      *local_550 = 1;
      puVar3 = local_2b0;
      goto LAB_00617948;
    }
                    /* try { // try from 00617837 to 00617841 has its CatchHandler @ 00617a4c */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h7035cfc127f286d4E
              (uVar2,local_2b0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_4e0);
    _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_4c8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_470);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_458);
    _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_440);
    _ZN4core3ptr29drop_in_place_LT_url__Url_GT_17h5a162777a9689d3cE(local_3e8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_390);
    _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_octocrab__models__workflows__Step_GT__GT_17hedd112003ee7f486E
              (local_378);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_360);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h492b602ae4f5467cE
              (local_348);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb772be4e7af31c63E(local_330);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb772be4e7af31c63E(local_318);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc38c0697d7152ffbE
              (local_278,local_518);
    if (local_278[0] == -0x8000000000000000) {
                    /* try { // try from 00617711 to 0061771a has its CatchHandler @ 00617a44 */
      _ZN4core3ptr92drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_octocrab__models__workflows__Job_GT__GT_17h03b25bc479979ac1E
                (local_518);
      local_550[3] = local_538;
      local_550[1] = local_548;
      local_550[2] = uStack_540;
      *local_550 = 0;
      return;
    }
  } while( true );
}