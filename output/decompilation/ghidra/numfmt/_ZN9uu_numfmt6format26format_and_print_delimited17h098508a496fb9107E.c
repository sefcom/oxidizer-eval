void _ZN9uu_numfmt6format26format_and_print_delimited17h098508a496fb9107E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  local_1b8 = param_4 + 0x70;
  (*(code *)
    PTR__ZN73__LT__RF_alloc__string__String_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17hf8368330bc7d3e9aE_00209970
  )(&local_168,local_1b8,param_2,param_3);
  local_100 = 0;
  local_f0 = 1;
  local_f8 = param_3;
  _ZN4core4iter6traits8iterator8Iterator3zip17ha700ff6630919b15E(&local_d0,&local_168);
  _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h63a30ee2b5483774E
            (&local_1b0,&local_d0);
  if (local_1a8 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x60);
    uVar2 = *(undefined8 *)(param_4 + 0x68);
    do {
      uVar5 = local_1b0;
      local_1e8 = local_1a8;
      local_1e0 = local_1a0;
      cVar6 = _ZN6uucore8features6ranges7contain17ha2f044f5693f050cE(uVar1,uVar2,local_1b0);
      if (1 < uVar5) {
        local_198 = &local_1b8;
        local_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hed06e343d9a3976cE;
        local_168 = &DAT_001198c0;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_168);
      }
      if (cVar6 == '\0') {
        local_198 = &local_1e8;
        local_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17heebe613453956698E;
        local_168 = &DAT_001198c0;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_168);
      }
      else {
        auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17ha4fc5e4c9ad6ee5cE
                           (local_1e8,local_1e0);
        _ZN9uu_numfmt6format13format_string17h3b8df337189cc348E
                  (&local_198,auVar7._0_8_,auVar7._8_8_,param_4,0);
        local_1d8 = local_190;
        pcVar3 = local_1d8;
        uStack_1d0 = uStack_188;
        uVar4 = uStack_1d0;
        local_1c8 = local_180;
        if (((ulong)local_198 & 1) != 0) {
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
        local_e8 = (undefined4)local_1d8;
        uStack_e4 = local_1d8._4_4_;
        uStack_e0 = (undefined4)uStack_1d0;
        uStack_dc = uStack_1d0._4_4_;
        local_170 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_168 = &DAT_001198c0;
        local_160 = 1;
        local_148 = 0;
        local_158 = &local_178;
        local_150 = 1;
                    /* try { // try from 0016afd7 to 0016afe4 has its CatchHandler @ 0016b079 */
        local_1d8 = pcVar3;
        uStack_1d0 = uVar4;
        local_178 = (undefined8 *)&local_e8;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_168);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_e8);
      }
      _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h63a30ee2b5483774E
                (&local_1b0,&local_d0);
    } while (local_1a8 != 0);
  }
  local_d0 = &PTR_s__00202518;
  local_c8 = 1;
  local_c0 = 8;
  local_b8 = 0;
  uStack_b0 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_d0);
  *param_1 = 0x8000000000000000;
  return;
}