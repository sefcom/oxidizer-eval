void _ZN3bat5error21default_error_handler17h2bda66878880b633E
               (char *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  char **local_98;
  code *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined local_50;
  undefined8 local_4f;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_b0 = param_1;
  if (*param_1 == '\0') {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(*(undefined8 *)(param_1 + 8));
    if (cVar1 == '\v') {
      uVar2 = (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00807508)(0);
                    /* catch() { ... } // from try @ 005393e7 with catch @ 00539553 */
      _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
                (&local_88);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
  }
  else if (*param_1 == '\x06') {
    local_50 = 0;
    local_58 = 0;
    local_4f = 0x1500000002;
    local_88 = 0x8000000000000000;
    local_80 = &DAT_002a2899;
    local_78 = 0xb;
    local_70 = 0x8000000000000002;
    local_a8 = &local_88;
    local_a0 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
    ;
    local_98 = &local_b0;
    local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e3b3851b5941a74E;
    local_38 = &DAT_007ce428;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_a8;
    local_20 = 2;
                    /* try { // try from 005393e7 to 0053940b has its CatchHandler @ 00539553 */
    local_b8 = (undefined *)(**(code **)(param_3 + 0x48))(param_2,&local_38);
    if (local_b8 != (undefined *)0x0) {
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hd82f0dd660d43339E
                (&local_b8);
    }
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (&local_88);
    return;
  }
  local_b8 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00807b58;
  local_c0 = (*(code *)PTR__ZN3std2io5stdio6Stdout4lock17h4a61e9d3dcac90dcE_00807b60)(&local_b8);
  local_50 = 0;
  local_58 = 0;
  local_4f = 0x1500000002;
  local_88 = 0x8000000000000000;
  local_80 = &DAT_002a2899;
  local_78 = 0xb;
  local_70 = 0x8000000000000002;
  local_a8 = &local_88;
  local_a0 = 
  PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
  ;
  local_98 = &local_b0;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e3b3851b5941a74E;
  local_38 = &DAT_007ce198;
  local_30 = 3;
  local_18 = 0;
  local_28 = &local_a8;
  local_20 = 2;
                    /* try { // try from 00539502 to 0053952d has its CatchHandler @ 00539568 */
  local_40 = _ZN3std2io5Write9write_fmt17hd735acb8b0f88d2cE(&local_c0,&local_38);
  if (local_40 != 0) {
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hd82f0dd660d43339E
              (&local_40);
  }
  _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
            (&local_88);
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc6778b24ef661503E(&local_c0);
  return;
}