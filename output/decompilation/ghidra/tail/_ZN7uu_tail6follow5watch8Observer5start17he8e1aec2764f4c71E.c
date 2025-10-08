undefined8 _ZN7uu_tail6follow5watch8Observer5start17he8e1aec2764f4c71E(long *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined **ppuVar7;
  undefined *local_1c8;
  undefined8 uStack_1c0;
  undefined8 **local_1b8;
  long lStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  long local_188;
  long local_180;
  undefined8 *local_178;
  long local_170;
  undefined local_168 [16];
  int local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_100;
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined local_80 [16];
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_2 + 0x4c) == '\x02') {
    uVar4 = 0;
  }
  else {
    _ZN3std4sync4mpmc7channel17h864b4d4a8958682fE(&local_1c8);
    ppuVar6 = local_1b8;
    uVar4 = uStack_1c0;
    puVar1 = local_1c8;
    local_b8 = local_1c8;
    local_b0 = uStack_1c0;
    local_178 = local_1b8;
    local_180 = lStack_1b0;
    local_170 = lStack_1b0;
    local_110 = *(undefined8 *)(param_2 + 0x30);
    local_108 = *(undefined4 *)(param_2 + 0x38);
    local_100 = 0x101;
    if (*(char *)((long)param_1 + 0x8d) == '\0') {
      local_168 = _ZN71__LT_std__sync__mpmc__Sender_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h1cf49cde8d1e9983E
                            (local_1c8,uStack_1c0);
      local_120 = local_168._8_8_;
      local_118 = local_168._0_8_;
                    /* try { // try from 001a37f5 to 001a380c has its CatchHandler @ 001a3b7f */
      _ZN67__LT_notify__inotify__INotifyWatcher_u20_as_u20_notify__Watcher_GT_3new17h4c9e11e1092b07a8E
                (&local_158,puVar1,uVar4,1);
      if (local_158 == 6) {
        local_98 = uStack_150;
        uStack_94 = uStack_14c;
        uStack_90 = uStack_148;
        uStack_8c = uStack_144;
                    /* try { // try from 001a383f to 001a384e has its CatchHandler @ 001a3b87 */
        lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3002b5d40d9d4b22E(&local_98);
                    /* try { // try from 001a384f to 001a385b has its CatchHandler @ 001a3b73 */
        _ZN4core3ptr129drop_in_place_LT_std__sync__mpsc__Sender_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17h359f26b60c005f52E
                  (local_168);
        ppuVar7 = &
                  PTR__ZN4core3ptr52drop_in_place_LT_notify__inotify__INotifyWatcher_GT_17h2b146964c4032a7fE_002734e0
        ;
        lVar5 = local_180;
      }
      else {
                    /* try { // try from 001a3875 to 001a3889 has its CatchHandler @ 001a3b87 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hac9ec7b82eebf25bE
                  (&local_1c8,&local_158);
                    /* try { // try from 001a3894 to 001a38a4 has its CatchHandler @ 001a3b5d */
        cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h4c5f044eca67b541E
                          (uStack_1c0,local_1b8,&DAT_00124c8e,0x13);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(&local_1c8);
        if (cVar2 == '\0') {
          local_198 = local_128;
          uStack_1a0 = uStack_130;
          uStack_19c = uStack_12c;
                    /* try { // try from 001a3ac2 to 001a3b0b has its CatchHandler @ 001a3b4b */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hac9ec7b82eebf25bE
                    (local_80,&local_1c8);
          local_e0 = 1;
          local_e8 = local_70;
          uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(local_f8);
                    /* try { // try from 001a3b18 to 001a3b24 has its CatchHandler @ 001a3b87 */
          _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17hf2995e16b4f1d266E(&local_1c8);
                    /* try { // try from 001a3b28 to 001a3b31 has its CatchHandler @ 001a3c0a */
          _ZN4core3ptr129drop_in_place_LT_std__sync__mpsc__Sender_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17h359f26b60c005f52E
                    (local_168);
          _ZN4core3ptr131drop_in_place_LT_std__sync__mpsc__Receiver_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17h11c770775c11519aE
                    (&local_178);
          return uVar4;
        }
        local_38 = local_128;
        local_48 = local_138;
        uStack_44 = uStack_134;
        uStack_40 = uStack_130;
        uStack_3c = uStack_12c;
        local_58 = uStack_148;
        uStack_54 = uStack_144;
        uStack_50 = uStack_140;
        uStack_4c = uStack_13c;
        local_68 = local_158;
        uStack_64 = uStack_154;
        uStack_60 = uStack_150;
        uStack_5c = uStack_14c;
                    /* try { // try from 001a38fd to 001a3a23 has its CatchHandler @ 001a3bb4 */
        local_f8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_1c8 = &DAT_002734a0;
        uStack_1c0 = 2;
        local_1a8 = 0;
        local_1b8 = &local_a8;
        lStack_1b0 = 1;
        local_a8 = (undefined8 *)local_f8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_1c8);
        local_f8._0_8_ = &PTR_DAT_00273510;
        local_f8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_1c8 = &DAT_002734c0;
        uStack_1c0 = 2;
        local_1a8 = 0;
        lStack_1b0 = 1;
        local_1b8 = (undefined8 **)local_f8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_1c8);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0027d888)(1);
        *(undefined *)((long)param_1 + 0x8d) = 1;
        _ZN6notify4poll11PollWatcher8with_opt17h4a3ee0b7f3af5eccE
                  (&local_1c8,local_118,local_120,&local_110);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb047c03065406ba4E
                  (local_f8,&local_1c8,&PTR_DAT_00273520);
        local_188 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h21983f8786ab1751E(local_f8);
                    /* try { // try from 001a3a2f to 001a3a3e has its CatchHandler @ 001a3b87 */
        _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17hf2995e16b4f1d266E(&local_68);
        ppuVar7 = &
                  PTR__ZN4core3ptr46drop_in_place_LT_notify__poll__PollWatcher_GT_17h5681a63cbe2ff918E_00273538
        ;
        lVar5 = local_170;
        ppuVar6 = (undefined8 **)local_178;
        lVar3 = local_188;
      }
    }
    else {
      *(undefined *)((long)param_1 + 0x8d) = 1;
                    /* try { // try from 001a3775 to 001a37da has its CatchHandler @ 001a3c0a */
      _ZN6notify4poll11PollWatcher8with_opt17h4a3ee0b7f3af5eccE
                (&local_1c8,local_1c8,uStack_1c0,&local_110);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb047c03065406ba4E
                (local_f8,&local_1c8,&PTR_DAT_00273568);
      lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h21983f8786ab1751E(local_f8);
      ppuVar7 = &
                PTR__ZN4core3ptr46drop_in_place_LT_notify__poll__PollWatcher_GT_17h5681a63cbe2ff918E_00273538
      ;
      lVar5 = local_180;
    }
                    /* try { // try from 001a3a55 to 001a3a5c has its CatchHandler @ 001a3bf0 */
    _ZN4core3ptr82drop_in_place_LT_core__option__Option_LT_uu_tail__follow__watch__WatcherRx_GT__GT_17hbe95e8c1645b997fE
              (param_1);
    *param_1 = (long)ppuVar6;
    param_1[1] = lVar5;
    param_1[2] = lVar3;
    param_1[3] = (long)ppuVar7;
    uVar4 = _ZN7uu_tail6follow5watch8Observer10init_files17h8692031d5a934069E
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  return uVar4;
}