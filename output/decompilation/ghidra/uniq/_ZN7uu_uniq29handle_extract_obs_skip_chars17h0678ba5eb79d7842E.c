void _ZN7uu_uniq29handle_extract_obs_skip_chars17h0678ba5eb79d7842E
               (undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  ulong extraout_RDX;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_98 = 0;
  local_90 = 4;
  local_88 = 0;
  uStack_40 = param_2 + param_3;
  local_48 = param_2;
  _ZN4core3str11validations15next_code_point17h660536d7d7533ae5E(&local_48);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  do {
    iVar1 = _ZN4core3str11validations15next_code_point17h660536d7d7533ae5E(&local_68);
    if (iVar1 == 0) {
      if (local_88 == 0) {
        _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_80,param_2,param_3);
LAB_001bdc93:
        param_1[2] = local_70;
        *(undefined4 *)param_1 = local_80;
        *(undefined4 *)((long)param_1 + 4) = uStack_7c;
        *(undefined4 *)(param_1 + 1) = uStack_78;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      }
      else {
                    /* try { // try from 001bdc13 to 001bdc1c has its CatchHandler @ 001bdce4 */
        _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17h251793bacb3d3b4dE
                  (&local_80,local_90,local_90 + local_88 * 4);
        local_58 = local_70;
        local_68 = local_80;
        uStack_64 = uStack_7c;
        uStack_60 = uStack_78;
        uStack_5c = uStack_74;
                    /* try { // try from 001bdc31 to 001bdc38 has its CatchHandler @ 001bdcbb */
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17haaebd7cc9f7d6887E
                  (param_4);
        param_4[2] = local_58;
        *(undefined4 *)param_4 = local_68;
        *(undefined4 *)((long)param_4 + 4) = uStack_64;
        *(undefined4 *)(param_4 + 1) = uStack_60;
        *(undefined4 *)((long)param_4 + 0xc) = uStack_5c;
        *param_1 = 0x8000000000000000;
      }
      _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h9e7c6a67d86540d0E(&local_98);
      return;
    }
    if (9 < (int)extraout_RDX - 0x30U) {
                    /* try { // try from 001bdc5a to 001bdc61 has its CatchHandler @ 001bdcd2 */
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17haaebd7cc9f7d6887E
                (param_4);
      *param_4 = 0x8000000000000000;
                    /* try { // try from 001bdc6f to 001bdc92 has its CatchHandler @ 001bdce4 */
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_80,param_2,param_3);
      goto LAB_001bdc93;
    }
                    /* try { // try from 001bdbf4 to 001bdbfd has its CatchHandler @ 001bdce6 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heb97b033ef2f73d1E(&local_98,extraout_RDX & 0xffffffff);
  } while( true );
}