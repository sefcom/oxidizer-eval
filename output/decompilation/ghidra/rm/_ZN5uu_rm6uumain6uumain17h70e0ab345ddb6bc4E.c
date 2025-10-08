undefined8 _ZN5uu_rm6uumain6uumain17h70e0ab345ddb6bc4E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  byte bVar7;
  undefined uVar8;
  undefined uVar9;
  undefined4 uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined uVar15;
  undefined auVar16 [16];
  char local_6d8;
  undefined local_6d7;
  byte local_6d6;
  char local_6d5;
  undefined local_6d4;
  undefined local_6d3;
  char local_6d2;
  undefined local_6d1;
  char **local_6d0;
  char *local_6c8;
  code *local_6c0;
  char *local_6b8;
  undefined **local_6b0;
  undefined local_6a8 [8];
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined8 local_678;
  undefined local_670 [12];
  undefined4 uStack_664;
  undefined8 local_660;
  undefined4 local_654;
  char **local_650;
  char *local_648;
  long local_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  char **local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  char **local_5f8;
  code *pcStack_5f0;
  char **local_5e8;
  code *pcStack_5e0;
  undefined local_5d8 [672];
  long local_338 [8];
  char *local_2f8;
  code *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN5uu_rm6uu_app17hbf90efb73f59e8a6E_001f0eb8)(&local_608);
  _ZN12clap_builder7builder7command7Command10after_help17h82f737b207138c15E(&local_2f8,&local_608);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h3a9cbc4c588e5ca9E
            (local_6a8,&local_2f8,param_1,param_2);
  local_2c8 = local_678;
  local_2d8 = (undefined4)local_688;
  uStack_2d4 = local_688._4_4_;
  uStack_2d0 = uStack_680;
  uStack_2cc = uStack_67c;
  local_2e8 = (undefined4)local_698;
  uStack_2e4 = local_698._4_4_;
  uStack_2e0 = (undefined4)uStack_690;
  uStack_2dc = uStack_690._4_4_;
  local_2f8 = (char *)local_6a8;
  local_2f0 = uStack_6a0;
  uVar13 = *(undefined8 *)PTR__ZN5uu_rm9ARG_FILES17hef95834ae08469abE_001f0ec8;
  uVar1 = *(undefined8 *)(PTR__ZN5uu_rm9ARG_FILES17hef95834ae08469abE_001f0ec8 + 8);
                    /* try { // try from 00157183 to 001571d8 has its CatchHandler @ 00157a3e */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hca9a760e17c4905fE
            (&local_608,&local_2f8,uVar13,uVar1);
  pcVar12 = (char *)&local_608;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hf52b18848be69beaE(local_338,uVar13,uVar1);
  if ((local_338[0] == 0) ||
     (_ZN4core4iter6traits8iterator8Iterator7collect17h24c187cf39dba405E(&local_608,local_338),
     pcVar12 = (char *)local_608, local_608 == (undefined **)&DAT_8000000000000000)) {
    local_6c0 = (code *)&DAT_00000008;
    local_6d0 = (char **)0x0;
    local_6c8 = (char *)0x0;
  }
  else {
    local_6c8 = (char *)local_608;
    local_6c0 = uStack_600;
    local_6d0 = local_5f8;
  }
  puVar3 = PTR__ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE_001f0ed0;
                    /* try { // try from 0015723b to 00157766 has its CatchHandler @ 00157a43 */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,*(undefined8 *)PTR__ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE_001f0ed0,
            *(undefined8 *)(PTR__ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE_001f0ed0 + 8));
  if (cVar4 == '\0') {
    if (local_6d0 == (char **)0x0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h814d9f48fb28eb6aE
                (local_6a8,"missing operand",0xf);
      local_5f8 = local_698;
      local_608 = (undefined **)local_6a8;
      uStack_600 = uStack_6a0;
      pcStack_5f0 = (code *)CONCAT44(pcStack_5f0._4_4_,1);
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h00709b7edeb99d0eE(&local_608);
      goto LAB_001579d1;
    }
LAB_001572fd:
    cVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
            )(&local_2f8,*(undefined8 *)PTR__ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE_001f0ee8,
              *(undefined8 *)(PTR__ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE_001f0ee8 + 8));
    if (cVar5 == '\0') {
      cVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
              )(&local_2f8,
                *(undefined8 *)PTR__ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE_001f0ef0,
                *(undefined8 *)(PTR__ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE_001f0ef0 + 8));
      puVar3 = PTR__ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E_001f0ef8;
      uVar15 = 1;
      uVar10 = (int)CONCAT71((int7)((ulong)pcVar12 >> 8),1);
      if (cVar5 == '\0') {
        cVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f0f00
                )(&local_2f8,
                  *(undefined8 *)PTR__ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E_001f0ef8,
                  *(undefined8 *)(PTR__ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E_001f0ef8 + 8));
        if (cVar5 == '\0') {
          uVar15 = 3;
          uVar10 = 0;
        }
        else {
          uVar13 = *(undefined8 *)puVar3;
          uVar1 = *(undefined8 *)(puVar3 + 8);
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h443c0c4ca046772eE
                    (&local_608,&local_2f8,uVar13,uVar1);
          lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha2fd908dc3a94b35E
                             (uVar13,uVar1,&local_608);
          if (lVar11 == 0) {
                    /* try { // try from 00157a05 to 00157a11 has its CatchHandler @ 00157a43 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f0f70)
                      (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e9928);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar13 = *(undefined8 *)(lVar11 + 8);
          uVar1 = *(undefined8 *)(lVar11 + 0x10);
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5e8de16b13b0fa7aE
                            (uVar13,uVar1,"never");
          uVar15 = 0;
          uVar10 = 0;
          if (cVar5 == '\0') {
            uVar14 = 0;
            cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5e8de16b13b0fa7aE
                              (uVar13,uVar1,&DAT_00118b70,4);
            uVar15 = 1;
            uVar10 = (int)CONCAT71((int7)((ulong)uVar14 >> 8),1);
            if (cVar5 == '\0') {
              cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5e8de16b13b0fa7aE
                                (uVar13,uVar1,"always");
              if (cVar5 == '\0') {
                local_6a8 = (undefined  [8])local_670;
                uStack_6a0 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h709d5a6c04fcf791E;
                local_608 = &PTR_s_Invalid_argument_to_interactive___001e9810;
                uStack_600 = (code *)0x2;
                local_5e8 = (char **)0x0;
                pcStack_5f0 = (code *)0x1;
                local_670._0_8_ = uVar13;
                unique0x10000aee = (code *)uVar1;
                local_5f8 = (char **)local_6a8;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h8617635e584293d6E
                          (&local_620,&local_608);
                pcStack_5f0 = (code *)CONCAT44(pcStack_5f0._4_4_,1);
                local_608 = (undefined **)CONCAT44(uStack_61c,local_620);
                uStack_600 = (code *)CONCAT44(uStack_614,uStack_618);
                local_5f8 = local_610;
                uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h00709b7edeb99d0eE(&local_608);
                goto LAB_001579d1;
              }
              goto LAB_0015731d;
            }
          }
        }
      }
    }
    else {
LAB_0015731d:
      uVar15 = 2;
      uVar10 = 0;
    }
  }
  else {
    auVar16 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_001f0ee0
              )(&local_2f8,*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8));
    local_670._0_8_ = 0;
    if ((auVar16 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      local_670._0_8_ = auVar16._8_8_;
    }
    local_608 = *(undefined ***)PTR__ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE_001f0ee8;
    uStack_600 = *(code **)(PTR__ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE_001f0ee8 + 8);
    local_5f8 = *(char ***)PTR__ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE_001f0ef0;
    pcStack_5f0 = *(code **)(PTR__ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE_001f0ef0 + 8);
    local_5e8 = *(char ***)PTR__ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E_001f0ef8;
    pcStack_5e0 = *(code **)(PTR__ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E_001f0ef8 + 8);
    uStack_6a0 = (code *)local_5d8;
    local_6a8 = (undefined  [8])&local_608;
    cVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h831b4787a29b115aE
                      (local_6a8,&local_2f8,local_670);
    pcVar12 = (char *)0x0;
    uVar15 = 0;
    uVar10 = 0;
    if (cVar5 != '\0') goto LAB_001572fd;
  }
  local_654 = uVar10;
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,
            *(undefined8 *)PTR__ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h8bb65e4078269c0bE_001f0f08,
            *(undefined8 *)(PTR__ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h8bb65e4078269c0bE_001f0f08 + 8));
  bVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,
            *(undefined8 *)PTR__ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h5f2a6f148cad7644E_001f0f10,
            *(undefined8 *)(PTR__ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h5f2a6f148cad7644E_001f0f10 + 8));
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,*(undefined8 *)PTR__ZN5uu_rm13OPT_RECURSIVE17hd1a2487ee0992495E_001f0f18,
            *(undefined8 *)(PTR__ZN5uu_rm13OPT_RECURSIVE17hd1a2487ee0992495E_001f0f18 + 8));
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,*(undefined8 *)PTR__ZN5uu_rm7OPT_DIR17h1fc8202a571f3541E_001f0f20,
            *(undefined8 *)(PTR__ZN5uu_rm7OPT_DIR17h1fc8202a571f3541E_001f0f20 + 8));
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
          )(&local_2f8,*(undefined8 *)PTR__ZN5uu_rm11OPT_VERBOSE17h2e250573aa413252E_001f0f28,
            *(undefined8 *)(PTR__ZN5uu_rm11OPT_VERBOSE17h2e250573aa413252E_001f0f28 + 8));
  local_6d2 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0ed8
              )(&local_2f8,
                *(undefined8 *)PTR__ZN5uu_rm17PRESUME_INPUT_TTY17h16578df483f43972E_001f0f30,
                *(undefined8 *)(PTR__ZN5uu_rm17PRESUME_INPUT_TTY17h16578df483f43972E_001f0f30 + 8));
  auVar16._8_8_ = stack0xfffffffffffff998;
  auVar16._0_8_ = local_670._0_8_;
  local_6d6 = bVar7 ^ 1;
  local_6d2 = '\x02' - local_6d2;
  local_6d8 = cVar4;
  local_6d7 = uVar6;
  local_6d5 = cVar5;
  local_6d4 = uVar8;
  local_6d3 = uVar9;
  local_6d1 = uVar15;
  if ((char)local_654 != '\0') {
    if (cVar5 == '\0') {
      _local_670 = auVar16;
      if (local_6d0 < (char **)0x4) goto LAB_00157983;
      local_648 = "arguments";
      local_640 = 9;
      local_6b0 = (undefined **)0x1;
      local_6b8 = "?";
    }
    else {
      local_648 = "argumentNoEquals";
      if (local_6d0 >= (char **)0x2) {
        local_648 = "arguments";
      }
      local_640 = 9 - (ulong)(local_6d0 < (char **)0x2);
      local_6b0 = (undefined **)0xd;
      local_6b8 = " recursively?";
    }
    local_650 = local_6d0;
    local_608 = (undefined **)&local_650;
    uStack_600 = (code *)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001f0f38
    ;
    local_5f8 = &local_648;
    pcStack_5f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h709d5a6c04fcf791E;
    pcStack_5e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h709d5a6c04fcf791E;
    local_6a8 = (undefined  [8])&PTR_s_remove_001e9830;
    uStack_6a0 = (code *)0x3;
    local_688 = 0;
    local_698 = (char **)&local_608;
    uStack_690 = (code *)0x3;
    local_5e8 = &local_6b8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h8617635e584293d6E(local_670,local_6a8);
    local_638 = local_670._0_4_;
    uStack_634 = local_670._4_4_;
    uStack_630 = local_670._8_4_;
    uStack_62c = uStack_664;
    local_628 = local_660;
                    /* try { // try from 00157784 to 001578b9 has its CatchHandler @ 00157a2c */
    _local_6a8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    stack0xfffffffffffff998 =
         _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h709d5a6c04fcf791E;
    local_608 = (undefined **)0x1e9798;
    uStack_600 = (code *)0x2;
    local_5e8 = (char **)0x0;
    pcStack_5f0 = (code *)0x1;
    local_670._0_8_ = local_6a8;
    local_5f8 = (char **)local_670;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_608);
    local_6a8 = (undefined  [8])&local_638;
    uStack_6a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_608 = (undefined **)0x118830;
    uStack_600 = (code *)0x1;
    local_5e8 = (char **)0x0;
    pcStack_5f0 = (code *)0x1;
    local_5f8 = (char **)local_6a8;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_608);
    local_608 = &PTR_s__001e9860;
    uStack_600 = (code *)&DAT_00000001;
    local_5f8 = (char **)&DAT_00000008;
    pcStack_5f0 = (code *)0x0;
    local_5e8 = (char **)0x0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_608);
    local_608 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar11 = (*(code *)
               PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
             )(&local_608);
    if (lVar11 != 0) {
      pcVar12 = (char *)_ZN5uu_rm6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h807ae549a4baef7cE
                                  (lVar11);
      if (pcVar12 != (char *)0x0) {
        local_6b0 = &
                    PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hcbc4e12d42bb03fcE_001e9960
        ;
        local_6b8 = pcVar12;
        uVar10 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                           (pcVar12);
                    /* try { // try from 001578dc to 0015795a has its CatchHandler @ 00157a18 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar10);
        _local_670 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        uStack_6a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h709d5a6c04fcf791E;
        uStack_690 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17he48c80030f99de4bE
        ;
        local_608 = (undefined **)0x1e9870;
        uStack_600 = (code *)0x3;
        local_5e8 = (char **)0x0;
        pcStack_5f0 = (code *)0x2;
        local_6a8 = (undefined  [8])local_670;
        local_698 = &local_6b8;
        local_5f8 = (char **)local_6a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_608);
                    /* try { // try from 00157965 to 00157969 has its CatchHandler @ 00157a14 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h7684e11f81e8d33eE
                  (local_6b8,local_6b0);
      }
    }
                    /* try { // try from 0015796a to 0015796f has its CatchHandler @ 00157a16 */
    cVar4 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc367c76fecfebbb2E(&local_638);
    if (cVar4 == '\0') {
      uVar13 = 0;
      goto LAB_001579d1;
    }
  }
LAB_00157983:
                    /* try { // try from 00157983 to 001579a6 has its CatchHandler @ 00157a43 */
  cVar4 = (*(code *)PTR__ZN5uu_rm6remove17h1125bc30f1a1af71E_001f0f60)
                    (local_6c0,local_6d0,&local_6d8);
  if (cVar4 == '\0') {
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17h2b29754fe9bf5166E
              (local_6c8,local_6c0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h9b29608627f08de6E
              (&local_2f8);
    return 0;
  }
  uVar13 = (*(code *)
             PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001f0f68
           )(1);
LAB_001579d1:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17h2b29754fe9bf5166E
            (local_6c8,local_6c0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h9b29608627f08de6E
            (&local_2f8);
  return uVar13;
}