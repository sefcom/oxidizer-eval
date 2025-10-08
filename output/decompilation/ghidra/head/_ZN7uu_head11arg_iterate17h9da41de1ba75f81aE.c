void _ZN7uu_head11arg_iterate17h9da41de1ba75f81aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long *local_138;
  long local_130;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_150 = param_2;
  local_148 = param_3;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha233663bd138e689E
            (&local_140,&local_150);
  lVar4 = local_130;
  plVar3 = local_138;
  lVar2 = local_140;
                    /* try { // try from 0015dd82 to 0015dd93 has its CatchHandler @ 0015e192 */
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha233663bd138e689E
            (&local_80,&local_150);
  if (local_80 == -0x8000000000000000) {
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17ha4cb084281363d08E
              (0x8000000000000000);
    local_e0 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (local_e0 == (long *)0x0) {
                    /* try { // try from 0015e11c to 0015e12b has its CatchHandler @ 0015e192 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001fe650)(8,0x18);
      goto LAB_0015e150;
    }
    *local_e0 = lVar2;
    local_e0[1] = (long)plVar3;
    local_e0[2] = lVar4;
    local_e8 = 1;
    local_d8 = 1;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0ceaded9872b293dE
              (&local_140,&local_e8);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7acdb67afe7955ffE(&local_140);
    param_1[1] = uVar5;
    ppuVar6 = &
              PTR__ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h5bc7d8213c6a7571E_001f6d28
    ;
LAB_0015de34:
    param_1[2] = ppuVar6;
    *param_1 = 0x8000000000000005;
  }
  else {
                    /* try { // try from 0015de51 to 0015de90 has its CatchHandler @ 0015e17e */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001fe560)
              (&local_140,local_78,local_70);
    if ((int)local_140 == 1) {
      *param_1 = 0x8000000000000001;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc191b4ed0286b218E
                (local_80,local_78);
      local_78 = (long)plVar3;
      local_80 = lVar2;
    }
    else {
      (*(code *)PTR__ZN7uu_head5parse14parse_obsolete17hee0b1fdae7af2962E_001fe690)
                (&local_a8,local_138,local_130);
      if (CONCAT44(uStack_a4,local_a8) == -0x7fffffffffffffff) {
        local_138 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x30);
        if (local_138 == (long *)0x0) {
                    /* try { // try from 0015e12e to 0015e13d has its CatchHandler @ 0015e17e */
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001fe650)(8,0x30);
          goto LAB_0015e150;
        }
        *local_138 = lVar2;
        local_138[1] = (long)plVar3;
        local_138[2] = lVar4;
        local_138[3] = local_80;
        local_138[4] = local_78;
        local_138[5] = local_70;
        local_140 = 2;
        local_130 = 2;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0ceaded9872b293dE
                  (&local_e8,&local_140);
        _ZN4core4iter6traits8iterator8Iterator5chain17h363a5d7fa6683cbeE
                  (&local_140,&local_e8,local_150,local_148);
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha2dd3dc0778b363eE(&local_140);
        param_1[1] = uVar5;
        ppuVar6 = &
                  PTR__ZN4core3ptr232drop_in_place_LT_core__iter__adapters__chain__Chain_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__C_core__iter__adapters__cloned__Cloned_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__GT__GT__GT_17h1ee351fcd195cb03E_001f6cb8
        ;
        goto LAB_0015de34;
      }
      local_58 = local_98;
      local_68 = local_a8;
      uStack_64 = uStack_a4;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
      local_e0 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
      if (local_e0 == (long *)0x0) {
                    /* try { // try from 0015e140 to 0015e14f has its CatchHandler @ 0015e16c */
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001fe650)(8,0x18);
LAB_0015e150:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *local_e0 = lVar2;
      local_e0[1] = (long)plVar3;
      local_e0[2] = lVar4;
      local_e8 = 1;
      local_d8 = 1;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0ceaded9872b293dE
                (&local_140,&local_e8);
      _ZN4core4iter6traits8iterator8Iterator5chain17hd4b14ed75e7cf24fE
                (&local_e8,&local_140,&local_68);
      _ZN4core4iter6traits8iterator8Iterator5chain17h1ff7b94f70b1b33cE
                (&local_140,&local_e8,local_150,local_148);
                    /* try { // try from 0015e0e2 to 0015e0e9 has its CatchHandler @ 0015e152 */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9461490f9e9c7628E(&local_140);
      param_1[1] = uVar5;
      param_1[2] = &
                   PTR__ZN4core3ptr342drop_in_place_LT_core__iter__adapters__chain__Chain_LT_core__iter__adapters__chain__Chain_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__C_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT__C_core__iter__adapters__cloned__Cloned_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__GT__GT__GT_17hcdc3b83420aa3070E_001f6cf0
      ;
      *param_1 = 0x8000000000000005;
    }
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc191b4ed0286b218E
              (local_80,local_78);
  }
  return;
}