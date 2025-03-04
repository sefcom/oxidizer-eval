void _ZN5uu_od15multifilereader15MultifileReader9next_file17h7ce1d576af53818dE(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined local_70 [16];
  undefined8 local_60;
  undefined local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h5ed5aa81710c39daE
                (&local_98,param_1,0,&PTR_s_src_uu_od_src_multifilereader_rs_002431a8);
      uVar1 = local_88;
      uVar2 = local_90;
      if (local_98 != 0) {
        if ((int)local_98 != 1) {
                    /* try { // try from 001d7080 to 001d7084 has its CatchHandler @ 001d70ee */
          _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h57a2b63c3e431407E
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          *(undefined8 *)(param_1 + 0x18) = local_90;
          *(undefined8 *)(param_1 + 0x20) = local_88;
          return;
        }
        uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hdd333a46d728f0dcE
                  (&local_c8,0x2000,uVar2);
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h76e6865e403783a0E(&local_c8);
                    /* try { // try from 001d705c to 001d7060 has its CatchHandler @ 001d70fe */
        _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h57a2b63c3e431407E
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        ppuVar3 = &
                  PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h9a370d93b61853ecE_00243218
        ;
LAB_001d70c8:
        *(undefined ***)(param_1 + 0x20) = ppuVar3;
        return;
      }
      _ZN3std2fs4File4open17h35a119a0b35fa654E(&local_80,local_90,local_88);
      if (local_80 == 0) {
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha0adff11cdf1efa4E
                  (&local_c8,0x2000,local_7c);
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h22131294aa53784eE(&local_c8);
                    /* try { // try from 001d70b8 to 001d70bc has its CatchHandler @ 001d70de */
        _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h57a2b63c3e431407E
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        ppuVar3 = &
                  PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h266fc60ba9509234E_002431c0
        ;
        goto LAB_001d70c8;
      }
      local_d0 = local_78;
                    /* try { // try from 001d6f13 to 001d6ff5 has its CatchHandler @ 001d712b */
      local_70 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_50 = (undefined8 *)local_70;
      local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
      local_c8 = &DAT_00243158;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_50;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
      local_70._0_8_ = 0;
      local_70._8_8_ = uVar2;
      local_60 = uVar1;
      local_58 = 0;
      local_50 = (undefined8 *)local_70;
      local_48 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_40 = &local_d0;
      local_38 = 
      _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
      local_c8 = &DAT_00243178;
      local_c0 = 3;
      local_a8 = 0;
      local_b0 = 2;
      local_b8 = &local_50;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
      *(undefined *)(param_1 + 0x28) = 1;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17he48ae13975420febE(local_d0);
    } while (*(long *)(param_1 + 0x10) != 0);
  }
                    /* try { // try from 001d7017 to 001d701b has its CatchHandler @ 001d7118 */
  _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h57a2b63c3e431407E
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}