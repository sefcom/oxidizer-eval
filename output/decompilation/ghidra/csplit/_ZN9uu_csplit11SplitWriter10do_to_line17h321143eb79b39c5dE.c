void _ZN9uu_csplit11SplitWriter10do_to_line17h321143eb79b39c5dE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5
               ,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  char cVar5;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined *)(param_6 + 0x38) = 1;
  *(undefined8 *)(param_6 + 0x30) = 1;
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h86097ab9bff6af61E
            (&uStack_a8,param_3,param_4);
  puVar2 = PTR__ZN9uu_csplit11SplitWriter7writeln17he8d9df3e4a94ba9dE_0041f8b0;
  local_b0 = 1;
  do {
                    /* try { // try from 0025edc0 to 0025edca has its CatchHandler @ 0025f040 */
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h92638e6c16058415E
              (&local_50,param_6);
    if (local_48 == -0x7fffffffffffffff) {
LAB_0025ef48:
                    /* try { // try from 0025ef48 to 0025ef8d has its CatchHandler @ 0025f02f */
      (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h2b71f2c0808d1b8bE_0041f8b8)(param_2);
      param_1[4] = local_90;
      param_1[2] = local_a0;
      param_1[3] = uStack_98;
      *param_1 = local_b0;
      param_1[1] = uStack_a8;
      return;
    }
    if (local_48 == -0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = local_40;
LAB_0025ef8e:
      _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h99db2ffc8dffbdb1E
                (&local_b0);
      return;
    }
    local_e0 = local_48;
    uStack_d8 = local_40;
    local_d0 = local_38;
    cVar5 = local_50 + 1U != param_5;
    if (param_5 < local_50 + 1U) {
      cVar5 = -1;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\0') {
        cVar5 = *(char *)(*(long *)(param_2 + 0x20) + 99);
        if (cVar5 == '\0') {
          local_78 = local_38;
                    /* try { // try from 0025ee81 to 0025eeb4 has its CatchHandler @ 0025f02d */
          _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17hf666c82950bc0262E
                    (local_c8,param_6,local_50,&local_88);
          if (local_c8[0] != -0x8000000000000000) {
            _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h0ea097dc4fc5bc24E
                      (local_c8);
            ppuVar4 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deb78;
            goto LAB_0025efe6;
          }
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h0ea097dc4fc5bc24E
                    (local_c8);
        }
                    /* try { // try from 0025eeb5 to 0025eebe has its CatchHandler @ 0025f01a */
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h99db2ffc8dffbdb1E
                  (&local_b0);
        local_b0 = 0xc;
        if (cVar5 != '\0') {
                    /* try { // try from 0025eecd to 0025eed6 has its CatchHandler @ 0025f02f */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h43f353fdb3e00327E(&local_e0);
        }
      }
      else {
        local_78 = local_38;
                    /* try { // try from 0025ef05 to 0025ef34 has its CatchHandler @ 0025f02d */
        _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17hf666c82950bc0262E
                  (local_c8,param_6,local_50,&local_88);
        if (local_c8[0] != -0x8000000000000000) {
                    /* try { // try from 0025efaa to 0025f009 has its CatchHandler @ 0025f02d */
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h0ea097dc4fc5bc24E
                    (local_c8);
          ppuVar4 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deb60;
LAB_0025efe6:
          local_88 = &PTR_s_the_buffer_is_big_enough_to_cont_003deb50;
          uStack_80 = 1;
          local_78 = 8;
          local_70 = 0;
          uStack_68 = 0;
          (*(code *)PTR__ZN4core9panicking9panic_fmt17he12d0d7468628bb4E_0041f810)
                    (&local_88,ppuVar4);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h0ea097dc4fc5bc24E
                  (local_c8);
                    /* try { // try from 0025ef35 to 0025ef3e has its CatchHandler @ 0025f00c */
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h99db2ffc8dffbdb1E
                  (&local_b0);
        local_b0 = 0xc;
      }
      goto LAB_0025ef48;
    }
                    /* try { // try from 0025ee2b to 0025ee34 has its CatchHandler @ 0025f031 */
    lVar3 = (*(code *)puVar2)(param_2,local_40,local_38);
    if (lVar3 != 0) {
      *param_1 = 0;
      param_1[1] = lVar3;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h43f353fdb3e00327E(&local_e0);
      goto LAB_0025ef8e;
    }
                    /* try { // try from 0025ee3e to 0025ee47 has its CatchHandler @ 0025f040 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h43f353fdb3e00327E(&local_e0);
  } while( true );
}