undefined8
_ZN6uu_tee13process_error17ha4eebf41bd63a2e6E
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined *local_50;
  undefined local_48 [16];
  undefined8 local_38;
  undefined local_30;
  
  local_a0 = param_2;
  if (param_1 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0015d458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_001191f8 + *(int *)(&DAT_001191f8 + (ulong)*param_1 * 4)))();
    return uVar2;
  }
  cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(param_2);
  if (cVar1 != '\v') {
    local_48 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0d00)();
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c0a48ca77de87afE;
    local_98 = &DAT_001ea4f0;
    local_90 = 2;
    local_78 = 0;
    local_80 = 1;
    local_88 = &local_68;
    local_68 = (undefined8 *)local_48;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0d08)(&local_98);
    local_48._0_8_ = 0;
    local_30 = 0;
    local_60 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f0eb8
    ;
    local_58 = &local_a0;
    local_50 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f0d90
    ;
    local_98 = &DAT_001ea510;
    local_90 = 3;
    local_78 = 0;
    local_80 = 2;
    local_88 = &local_68;
    local_68 = (undefined8 *)local_48;
    local_48._8_8_ = param_3;
    local_38 = param_4;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0d08)(&local_98);
    *param_5 = *param_5 + 1;
  }
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc399f132f0256091E(local_a0);
  return 0;
}