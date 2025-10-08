undefined  [16]
_ZN9uu_numfmt22handle_buffer_iterator17h414c95f5f8eb45b9E(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  undefined ***local_c0;
  undefined *local_b8;
  undefined **local_b0;
  undefined ***pppuStack_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *pcStack_80;
  undefined4 *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined ***local_50;
  undefined local_48 [24];
  
  auVar4 = ZEXT816(0x8000000000000001);
  local_d4 = 10;
  if (*(char *)(param_2 + 200) != '\0') {
    local_d4 = 0;
  }
  _ZN4core4iter6traits8iterator8Iterator9enumerate17ha5b6576aba57f0deE(local_48,param_1);
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h54f092d491cf1a5aE
            (&local_68,local_48);
  if (local_60 != (undefined *)0x8000000000000001) {
    uVar1 = *(ulong *)(param_2 + 0xc0);
    do {
      if (local_60 == (undefined *)0x8000000000000000) {
        local_d0 = local_58;
                    /* try { // try from 00163386 to 001633bb has its CatchHandler @ 001633ec */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hae49a63914faa038E
                  (&local_88,&local_d0);
        local_a0 = local_78;
        local_b0 = local_88;
        pppuStack_a8 = (undefined ***)pcStack_80;
        local_b8 = (undefined *)0x0;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb6e44097f5c9c613E(&local_b8);
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd93953e64ca236e7E(&local_d0);
        auVar2._8_8_ = &
                       PTR__ZN4core3ptr51drop_in_place_LT_uu_numfmt__errors__NumfmtError_GT_17h6a827ff1ba94f797E_00201800
        ;
        auVar2._0_8_ = uVar3;
        return auVar2;
      }
      if (local_68 < uVar1) {
        local_d0 = local_60;
        local_c8 = local_58;
        local_c0 = local_50;
        pcStack_80 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_78 = &local_d4;
        local_70 = 
        PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00209800;
        local_b8 = &DAT_001195a0;
        local_b0 = (undefined **)0x2;
        local_98 = 0;
        pppuStack_a8 = &local_88;
        local_a0 = (undefined4 *)0x2;
        local_88 = &local_d0;
                    /* try { // try from 0016333a to 00163342 has its CatchHandler @ 00163401 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_b8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc2a262c10a1490fE(&local_d0);
      }
      else {
        local_b8 = local_60;
        local_b0 = (undefined **)local_58;
        pppuStack_a8 = local_50;
                    /* try { // try from 0016335f to 00163367 has its CatchHandler @ 00163409 */
        auVar4 = (*(code *)
                   PTR__ZN9uu_numfmt28format_and_handle_validation17hcfab93a3f32ae107E_002097f8)
                           (local_58,local_50,param_2);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc2a262c10a1490fE(&local_b8);
        if (auVar4._0_8_ != 0) {
          return auVar4;
        }
      }
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h54f092d491cf1a5aE
                (&local_68,local_48);
    } while (local_60 != (undefined *)0x8000000000000001);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = &local_d0;
  }
  return auVar4 << 0x40;
}