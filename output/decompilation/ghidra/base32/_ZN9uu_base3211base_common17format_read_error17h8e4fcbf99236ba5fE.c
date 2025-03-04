undefined8
_ZN9uu_base3211base_common17format_read_error17h8e4fcbf99236ba5fE
          (undefined8 param_1,undefined param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined local_60 [8];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_d9 = param_2;
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h7bd6b561c7dd34eaE
            (local_60,&local_d9);
                    /* try { // try from 001c1ab3 to 001c1ac1 has its CatchHandler @ 001c1c67 */
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h82af769b21b92444E(&local_c0,local_50,0);
  local_90 = param_1;
  if (local_c0 == (undefined **)0x0) {
    local_d8 = uStack_b8;
    local_d0 = local_b0;
    local_c8 = 0;
    local_40 = local_50 + local_58;
    local_48 = local_58;
    local_38 = 0;
    auVar3 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                       (&local_48);
    if (auVar3._8_4_ != 0x110000) {
      do {
        if (auVar3._0_8_ == 0) {
          _ZN4core7unicode12unicode_data11conversions8to_upper17h75a19f004959258fE
                    (&local_88,auVar3._8_8_ & 0xffffffff);
          _ZN4core4char15CaseMappingIter3new17h3810fcac66648f70E(&local_c0,&local_88);
          local_78 = local_b0;
          uStack_70 = uStack_a8;
          while( true ) {
                    /* try { // try from 001c1c30 to 001c1c45 has its CatchHandler @ 001c1c71 */
            iVar1 = _ZN82__LT_core__char__ToLowercase_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc58afee2023a2b2bE
                              (&local_88);
            if (iVar1 == 0x110000) break;
            _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_d8,iVar1);
          }
                    /* try { // try from 001c1c50 to 001c1c57 has its CatchHandler @ 001c1c6c */
          _ZN4core3ptr44drop_in_place_LT_core__char__ToUppercase_GT_17h43adcbb5a5b65b60E(&local_88);
        }
        else {
                    /* try { // try from 001c1be0 to 001c1c14 has its CatchHandler @ 001c1c6c */
          _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_d8,auVar3._8_8_ & 0xffffffff);
        }
        auVar3 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                           (&local_48);
      } while (auVar3._8_4_ != 0x110000);
    }
    uVar2 = local_90;
    local_88 = &local_d8;
    pcStack_80 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_c0 = &PTR_s_read_error__00249910;
    uStack_b8 = 1;
    local_a0 = 0;
    local_b0 = &local_88;
    uStack_a8 = 1;
                    /* try { // try from 001c1b77 to 001c1b88 has its CatchHandler @ 001c1c65 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hb37e8cc30801e00bE(local_90,&local_c0);
                    /* try { // try from 001c1b89 to 001c1b92 has its CatchHandler @ 001c1c67 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb8d56522d3c47933E(&local_d8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb8d56522d3c47933E(local_60);
    return uVar2;
  }
                    /* try { // try from 001c1c5f to 001c1c64 has its CatchHandler @ 001c1c67 */
  uVar2 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(uStack_b8,local_b0);
                    /* catch() { ... } // from try @ 001c1b77 with catch @ 001c1c65 */
                    /* catch() { ... } // from try @ 001c1be0 with catch @ 001c1c6c
                       catch() { ... } // from try @ 001c1c50 with catch @ 001c1c6c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb8d56522d3c47933E(&local_d8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb8d56522d3c47933E(local_60);
  uVar2 = _Unwind_Resume(uVar2);
  return uVar2;
}