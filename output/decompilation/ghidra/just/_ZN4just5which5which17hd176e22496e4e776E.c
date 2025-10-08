void _ZN4just5which5which17hd176e22496e4e776E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined local_a0;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  uint *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  
  local_58 = param_3;
  local_50 = param_4;
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)
            (&local_c8,param_3,param_4);
  lVar2 = _ZN4core4iter6traits8iterator8Iterator4fold17hf6748623e0db1ee2E(&local_c8);
  if (lVar2 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (param_1 + 1,"empty command",0xd);
    *param_1 = 1;
  }
  else {
    local_f0 = param_1;
    if (lVar2 == 1) {
      _ZN3std3env6var_os17h1049275d85070725E(&local_128,"PATH ... => M",4);
      local_e8 = CONCAT44(uStack_124,local_128);
      uStack_e0 = CONCAT44(uStack_11c,uStack_120);
      local_d8 = local_118;
      uStack_c0 = 
      PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566d48;
      local_b0 = local_118;
      local_a8 = _ZN3std3sys3pal4unix2os11split_paths12is_separator17hb66c58b70205f58dE;
      local_a0 = 0;
      local_c8 = &local_58;
                    /* try { // try from 00394f9e to 00394faf has its CatchHandler @ 003951d8 */
      _ZN4core4iter6traits8iterator8Iterator7collect17h16f39b1f3da645b9E(&local_70,&local_c8);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_e8);
    }
    else {
      puVar3 = (uint *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
      if (puVar3 == (uint *)0x0) {
        uVar4 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)
                          (8,0x18);
                    /* catch() { ... } // from try @ 00394f9e with catch @ 003951d8 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_e8)
        ;
        _Unwind_Resume(uVar4);
        return;
      }
                    /* try { // try from 00394ef4 to 00394f06 has its CatchHandler @ 003951ef */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_c8,param_3,param_4);
      local_118 = local_b8;
      local_128 = (uint)local_c8;
      uStack_124 = local_c8._4_4_;
      uStack_120 = (uint)uStack_c0;
      uStack_11c = uStack_c0._4_4_;
      *(undefined8 *)(puVar3 + 4) = local_b8;
      *puVar3 = (uint)local_c8;
      puVar3[1] = local_c8._4_4_;
      puVar3[2] = (uint)uStack_c0;
      puVar3[3] = uStack_c0._4_4_;
      local_70 = 1;
      local_60 = 1;
      local_68 = puVar3;
    }
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7020ec4582f4a09dE
              (&local_c8,&local_70);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h89f3f68b0a4d6be6E
              (&local_88,&local_c8);
    do {
      local_108 = local_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      local_f8 = local_78;
                    /* try { // try from 0039502f to 00395048 has its CatchHandler @ 0039520a */
      cVar1 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_00566940)
                        (CONCAT44(uStack_7c,uStack_80));
      if (cVar1 == '\0') {
        _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
                  (&local_e8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
        local_118 = local_f8;
        local_128 = local_108;
        uStack_124 = uStack_104;
        uStack_120 = uStack_100;
        uStack_11c = uStack_fc;
                    /* try { // try from 00395066 to 00395075 has its CatchHandler @ 00395202 */
        _ZN3std4path4Path4join17h8b41166b2967df99E(&local_48,uStack_e0,local_d8,&local_128);
        local_108 = local_48;
        uStack_104 = uStack_44;
        uStack_100 = uStack_40;
        uStack_fc = uStack_3c;
        local_f8 = local_38;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_e8);
      }
                    /* try { // try from 003950a2 to 003950cd has its CatchHandler @ 0039520a */
      (*(code *)
        PTR__ZN60__LT__RF_std__path__Path_u20_as_u20_lexiclean__Lexiclean_GT_9lexiclean17h6a5ff6ae87480de6E_00566a98
      )(&local_128,CONCAT44(uStack_fc,uStack_100),local_f8);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_108);
      local_f8 = local_118;
      local_108 = local_128;
      uStack_104 = uStack_124;
      uStack_100 = uStack_120;
      uStack_fc = uStack_11c;
      cVar1 = _ZN13is_executable13is_executable17h940e17ec90db4909E(&local_108);
      if (cVar1 != '\0') {
                    /* try { // try from 00395121 to 00395169 has its CatchHandler @ 003951ed */
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
                  (&local_128,CONCAT44(uStack_fc,uStack_100),local_f8);
        if ((local_128 & 1) == 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                    (&local_128,CONCAT44(uStack_11c,uStack_120),local_118);
          local_e8 = CONCAT44(uStack_11c,uStack_120);
          uStack_e0 = local_118;
          if (CONCAT44(uStack_124,local_128) != -0x7fffffffffffffff) {
            *(uint *)(local_f0 + 2) = uStack_120;
            *(uint *)((long)local_f0 + 0x14) = uStack_11c;
            *(int *)(local_f0 + 3) = (int)local_118;
            *(undefined4 *)((long)local_f0 + 0x1c) = local_118._4_4_;
            local_f0[1] = CONCAT44(uStack_124,local_128);
            *local_f0 = 0;
            goto LAB_003951a2;
          }
        }
        _ZN4just5which5which28__u7b__u7b_closure_u7d__u7d_17h1924a8d8338b238eE
                  (&local_128,CONCAT44(uStack_fc,uStack_100),local_f8);
        local_f0[3] = local_118;
        *(uint *)(local_f0 + 1) = local_128;
        *(uint *)((long)local_f0 + 0xc) = uStack_124;
        *(uint *)(local_f0 + 2) = uStack_120;
        *(uint *)((long)local_f0 + 0x14) = uStack_11c;
        *local_f0 = 1;
LAB_003951a2:
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_108);
        _ZN4core3ptr78drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__path__PathBuf_GT__GT_17h1d9bcd419f39b040E
                  (&local_c8);
        return;
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_108);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h89f3f68b0a4d6be6E
                (&local_88,&local_c8);
    } while (CONCAT44(uStack_84,local_88) != -0x8000000000000000);
    _ZN4core3ptr78drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__path__PathBuf_GT__GT_17h1d9bcd419f39b040E
              (&local_c8);
    local_f0[1] = 0x8000000000000000;
    *local_f0 = 0;
  }
  return;
}