void _ZN8uu_nohup11find_stdout17hadffd7477f170ba3E(undefined8 *param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  int iVar6;
  undefined **local_f8;
  undefined8 *puStack_f0;
  undefined8 **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 *local_c8;
  code *pcStack_c0;
  undefined8 local_b8;
  undefined local_b0 [16];
  undefined8 uStack_a0;
  undefined local_98;
  undefined7 uStack_97;
  undefined8 *local_90;
  code *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN3std3env3var17h9bd4fb999c9dbe8dE(&local_f8,"POSIXLY_CORRECT",0xf);
  bVar2 = (byte)local_f8;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17he0e3335e5b80ba06E
            (&local_f8);
  local_78 = 0x1b600000000;
  local_6c = 1;
  local_70 = 0x10000;
  _ZN3std2fs11OpenOptions4open17h9017e185fad19e88E(&local_58,&local_78,"nohup.out",9);
  if (local_58 == 1) {
    local_80 = local_50;
                    /* try { // try from 00156c7a to 00156c8f has its CatchHandler @ 0015702c */
    _ZN3std3env3var17h9bd4fb999c9dbe8dE(local_b0,&DAT_00117230,4);
    iVar6 = (uint)(bVar2 ^ 1) * 2 + 0x7d;
    if (local_b0._0_8_ == 1) {
      local_e8 = (undefined8 **)CONCAT44(local_e8._4_4_,iVar6);
      puStack_f0 = local_50;
      local_f8 = (undefined **)0x8000000000000002;
                    /* try { // try from 00156cc7 to 00156cce has its CatchHandler @ 00157006 */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea0f551513cd90e2E(&local_f8);
      *param_1 = uVar5;
      param_1[1] = &
                   PTR__ZN4core3ptr41drop_in_place_LT_uu_nohup__NohupError_GT_17h1aac36d21234ba1dE_001debb0
      ;
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17he0e3335e5b80ba06E
                (local_b0);
    }
    else {
      local_b8 = CONCAT71(uStack_97,local_98);
      local_c8 = (undefined8 *)local_b0._8_8_;
      pcStack_c0 = (code *)uStack_a0;
                    /* try { // try from 00156de3 to 00156e5a has its CatchHandler @ 00157043 */
      _ZN3std4path7PathBuf4push17h7e011101ff3a8e62E(&local_c8);
      (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e4be8)
                (&local_f8,pcStack_c0,local_b8);
      ppuVar4 = local_e8;
      puVar3 = puStack_f0;
      if (((ulong)local_f8 & 1) != 0) {
                    /* try { // try from 00156fc1 to 00156fcd has its CatchHandler @ 00157043 */
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e4d90)
                  (&PTR_s_src_uu_nohup_src_nohup_rs_001dec58);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_68 = 0x1b600000000;
      local_5c = 1;
      local_60 = 0x10000;
      _ZN3std2fs11OpenOptions4open17hc8219ae85e6b165dE(&local_48,&local_68,&local_c8);
      if (local_48 == 1) {
        local_38 = local_40;
        local_90 = local_50;
                    /* try { // try from 00156e7a to 00156e89 has its CatchHandler @ 00156fd5 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd404e6f6c4fd17c6E
                  (local_b0,puStack_f0,local_e8);
        local_e8 = (undefined8 **)uStack_a0;
        local_e0 = local_50;
        local_d8 = local_40;
        local_d0 = iVar6;
                    /* try { // try from 00156eac to 00156eb3 has its CatchHandler @ 00156fd0 */
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea0f551513cd90e2E(&local_f8);
        *param_1 = uVar5;
        param_1[1] = &
                     PTR__ZN4core3ptr41drop_in_place_LT_uu_nohup__NohupError_GT_17h1aac36d21234ba1dE_001debb0
        ;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he63e5d41399ae48fE
                  (local_c8,pcStack_c0);
      }
      else {
                    /* try { // try from 00156edd to 00156f98 has its CatchHandler @ 00157020 */
        local_b0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4d48)();
        local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2ca060958355d931E;
        local_f8 = (undefined **)&DAT_001dec18;
        puStack_f0 = (undefined8 *)0x2;
        local_d8 = 0;
        local_e0 = (undefined8 *)0x1;
        local_e8 = &local_90;
        local_90 = (undefined8 *)local_b0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_f8);
        local_b0._0_8_ = 0;
        local_b0._8_8_ = puVar3;
        uStack_a0 = ppuVar4;
        local_98 = 1;
        local_88 = (code *)
                   PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e4e60
        ;
        local_f8 = &PTR_s_ignoring_input_and_appending_out_001dec38;
        puStack_f0 = (undefined8 *)0x2;
        local_d8 = 0;
        local_e0 = (undefined8 *)0x1;
        local_e8 = &local_90;
        local_90 = (undefined8 *)local_b0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_f8);
        *(undefined4 *)(param_1 + 1) = local_44;
        *param_1 = 0;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he63e5d41399ae48fE
                  (local_c8,pcStack_c0);
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb34077f862f5102eE(&local_80);
      }
    }
  }
  else {
                    /* try { // try from 00156cf3 to 00156db2 has its CatchHandler @ 00157031 */
    local_b0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4d48)();
    pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2ca060958355d931E;
    local_f8 = (undefined **)&DAT_001dec18;
    puStack_f0 = (undefined8 *)0x2;
    local_d8 = 0;
    local_e0 = (undefined8 *)0x1;
    local_e8 = &local_c8;
    local_c8 = (undefined8 *)local_b0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_f8);
    local_b0._0_8_ = 0;
    local_b0._8_8_ = "nohup.out";
    uStack_a0 = 9;
    local_98 = 1;
    pcStack_c0 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e4e60
    ;
    local_f8 = &PTR_s_ignoring_input_and_appending_out_001dec38;
    puStack_f0 = (undefined8 *)0x2;
    local_d8 = 0;
    local_e0 = (undefined8 *)0x1;
    local_e8 = &local_c8;
    local_c8 = (undefined8 *)local_b0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_f8);
    *(undefined4 *)(param_1 + 1) = local_54;
    *param_1 = 0;
  }
  return;
}