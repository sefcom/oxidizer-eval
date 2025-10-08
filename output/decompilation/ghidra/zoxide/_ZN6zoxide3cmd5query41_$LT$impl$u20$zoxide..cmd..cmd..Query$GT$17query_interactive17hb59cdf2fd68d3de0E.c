undefined8
_ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_17query_interactive17hb59cdf2fd68d3de0E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined auVar5 [16];
  long **local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_a8 [4];
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  undefined8 local_50;
  
  _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_7get_fzf17hf403ce7b6e161106E
            (&local_d8);
  if ((int)local_d8 == 1) {
    return local_d0;
  }
  local_84 = local_d8._4_4_;
  local_80 = local_d0;
  local_78 = (undefined4)local_c8;
  uStack_74 = local_c8._4_4_;
  uStack_70 = (undefined4)uStack_c0;
  uStack_6c = uStack_c0._4_4_;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_60 = (long **)0x8000000000000001;
  local_68 = param_1;
                    /* try { // try from 0018fca0 to 0018fcdb has its CatchHandler @ 0018fef6 */
  while (lVar4 = _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(param_2), lVar4 != 0) {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h070d08ab5346a901E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),uVar1,uVar2);
    if (cVar3 == '\0') {
      _ZN6zoxide4util8FzfChild5write17h5751cfe08cd05641E(&local_d8,&local_84,lVar4,param_3);
      if (local_d8 == local_60) goto LAB_0018feb4;
      local_f0 = local_d8;
      local_e8 = (code *)local_d0;
      local_e0 = local_c8;
      if (local_d8 != (long **)0x8000000000000000) {
        cVar3 = *(char *)(local_68 + 0x4b);
        goto joined_r0x0018fd5f;
      }
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17he4fa8c614f7df1fbE
                (&local_f0);
    }
  }
                    /* try { // try from 0018fd1d to 0018fd2b has its CatchHandler @ 0018fed3 */
  _ZN6zoxide4util8FzfChild4wait17h58b549ee022416b6E(&local_d8,&local_84);
  if (local_d8 == (long **)0x8000000000000000) {
LAB_0018feb4:
    _ZN4core3ptr43drop_in_place_LT_zoxide__util__FzfChild_GT_17h8162ffcf0a6e609cE(&local_84);
  }
  else {
    cVar3 = *(char *)(local_68 + 0x4b);
joined_r0x0018fd5f:
    if (cVar3 == '\0') {
      auVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (7,local_d0,local_c8);
                    /* try { // try from 0018fd79 to 0018fe91 has its CatchHandler @ 0018fed5 */
      _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_7context17h87531f8a1ca6dc18E
                (&local_d8,auVar5._0_8_,auVar5._8_8_,"could not read selection from fzf",0x21);
      if (local_d8 == (long **)0x0) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(local_a8);
        goto LAB_0018feb4;
      }
      local_58 = local_d8;
      local_50 = local_d0;
      local_f0 = (long **)&local_58;
      local_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3f43078e28aa9000E;
      local_d8 = (long **)&DAT_00118b80;
      local_d0 = 1;
      local_b8 = 0;
      local_c8 = &local_f0;
      uStack_c0 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0023b928)(&local_d8);
    }
    else {
      local_f0 = local_a8;
      local_e8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_d8 = (long **)&DAT_00118b80;
      local_d0 = 1;
      local_b8 = 0;
      local_c8 = &local_f0;
      uStack_c0 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0023b928)(&local_d8);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(local_a8);
    _ZN4core3ptr43drop_in_place_LT_zoxide__util__FzfChild_GT_17h8162ffcf0a6e609cE(&local_84);
    local_d0 = 0;
  }
  return local_d0;
}