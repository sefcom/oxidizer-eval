void _ZN9uu_numfmt6format26format_and_print_delimited17h8362ae98c5bd7b3fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long *local_198;
  code *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(long *)(param_4 + 0x70) == -0x8000000000000000) {
    uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                      (&PTR_s_src_uu_numfmt_src_format_rs_00235bb0);
                    /* catch() { ... } // from try @ 001c4c09 with catch @ 001c4cab */
                    /* try { // try from 001c4cae to 001c4cba has its CatchHandler @ 001c4cc3 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_e8);
    _Unwind_Resume(uVar6);
    return;
  }
  local_1b8 = param_4 + 0x70;
  _ZN73__LT__RF_alloc__string__String_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h282a0739900a3654E
            (&local_168,local_1b8,param_2,param_3);
  local_100 = 0;
  local_f0 = 1;
  local_f8 = param_3;
  _ZN4core4iter6traits8iterator8Iterator3zip17h4a03188e88e105eeE(&local_d0,&local_168);
  _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17he3883890326b5614E
            (&local_1b0,&local_d0);
  if (local_1a8 != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x60);
    uVar1 = *(undefined8 *)(param_4 + 0x68);
    do {
      uVar4 = local_1b0;
      local_1e8 = local_1a8;
      local_1e0 = local_1a0;
      cVar5 = _ZN6uucore8features6ranges7contain17ha9677be85801ec1fE(uVar6,uVar1,local_1b0);
      if (1 < uVar4) {
        local_198 = &local_1b8;
        local_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4dc19265c681ac20E;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
      }
      if (cVar5 == '\0') {
        local_198 = &local_1e8;
        local_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h82a8b331819c1deeE;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
      }
      else {
        auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd29dae6a79270574E
                           (local_1e8,local_1e0);
        _ZN9uu_numfmt6format13format_string17h230c6a9d10700455E
                  (&local_198,auVar7._0_8_,auVar7._8_8_,param_4,0);
        local_1d8 = local_190;
        pcVar2 = local_1d8;
        uStack_1d0 = uStack_188;
        uVar3 = uStack_1d0;
        local_1c8 = local_180;
        if (local_198 != (long *)0x0) {
          param_1[2] = local_180;
          *param_1 = local_190;
          param_1[1] = uStack_188;
          return;
        }
        local_d8 = local_180;
        local_1d8._0_4_ = SUB84(local_190,0);
        local_1d8._4_4_ = (undefined4)((ulong)local_190 >> 0x20);
        uStack_1d0._0_4_ = (undefined4)uStack_188;
        uStack_1d0._4_4_ = (undefined4)((ulong)uStack_188 >> 0x20);
        local_e8._0_4_ = (undefined4)local_1d8;
        local_e8._4_4_ = local_1d8._4_4_;
        uStack_e0 = (undefined4)uStack_1d0;
        uStack_dc = uStack_1d0._4_4_;
        local_170 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_158 = &local_178;
        local_150 = 1;
                    /* try { // try from 001c4c09 to 001c4c16 has its CatchHandler @ 001c4cab */
        local_1d8 = pcVar2;
        uStack_1d0 = uVar3;
        local_178 = &local_e8;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_e8);
      }
      _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17he3883890326b5614E
                (&local_1b0,&local_d0);
    } while (local_1a8 != 0);
  }
  local_d0 = &PTR_DAT_00235ba0;
  local_c8 = 1;
  local_c0 = 8;
  local_b8 = 0;
  uStack_b0 = 0;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_d0);
  *param_1 = 0x8000000000000000;
  return;
}