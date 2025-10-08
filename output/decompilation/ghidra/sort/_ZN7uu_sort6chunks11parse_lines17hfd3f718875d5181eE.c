void _ZN7uu_sort6chunks11parse_lines17hfd3f718875d5181eE
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5,
               undefined8 param_6)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [16];
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  local_b8 = local_b8 & 0xffffffff00000000;
  local_a0 = param_6;
  auVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(param_5,&local_b8);
  auVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                     (auVar3._0_8_,auVar3._8_8_,param_1,param_2);
  if (auVar3._0_8_ == 0) {
    auVar3 = auVar1;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    if (*(long *)(param_4 + 0x10) != 0) goto LAB_001c25dd;
    if (*(long *)(param_4 + 0x28) != 0) goto LAB_001c25f6;
    if (*(long *)(param_4 + 0x40) == 0) {
      if (*(long *)(param_4 + 0x58) == 0) {
        local_b8 = 0;
        local_b0 = 8;
        local_a8 = 0;
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                  (local_68,param_5,auVar3._0_8_,auVar3._8_8_);
        local_80 = 0;
        uStack_78 = 0;
        local_38 = 1;
        local_88 = local_a0;
                    /* try { // try from 001c2597 to 001c25a3 has its CatchHandler @ 001c2641 */
        local_98 = param_4;
        local_90 = (undefined *)&local_b8;
        local_70 = auVar3._8_8_;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h22a929e18423d947E(param_3,&local_98);
        _ZN4core3ptr102drop_in_place_LT_alloc__vec__Vec_LT_std__sync__mpmc__array__Slot_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hd036655fcae2cd02E
                  (local_b8,local_b0);
        return;
      }
      goto LAB_001c2628;
    }
  }
  else {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: lines.is_empty()",0x22,&PTR_s_src_uu_sort_src_chunks_rs_0028c5a0);
LAB_001c25dd:
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: line_data.selections.is_empty()",0x31,
               &PTR_s_src_uu_sort_src_chunks_rs_0028c588);
LAB_001c25f6:
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: line_data.num_infos.is_empty()",0x30,
               &PTR_s_src_uu_sort_src_chunks_rs_0028c570);
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
            ("assertion failed: line_data.parsed_floats.is_empty()",0x34,
             &PTR_s_src_uu_sort_src_chunks_rs_0028c558);
LAB_001c2628:
  uVar2 = (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
                    ("assertion failed: line_data.line_num_floats.is_empty()",0x36,
                     &PTR_s_src_uu_sort_src_chunks_rs_0028c540);
                    /* catch() { ... } // from try @ 001c2597 with catch @ 001c2641 */
  _ZN4core3ptr102drop_in_place_LT_alloc__vec__Vec_LT_std__sync__mpmc__array__Slot_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hd036655fcae2cd02E
            (local_b8,local_b0);
  _Unwind_Resume(uVar2);
  return;
}