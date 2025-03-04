void _ZN5uu_cp13OverwriteMode6verify17h15b46a9de23bd96aE
               (undefined8 *param_1,char param_2,undefined8 param_3,undefined8 ***param_4,
               char param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 **local_130;
  code *local_128;
  undefined8 **local_120;
  code *local_118;
  undefined8 *puStack_110;
  code *local_108;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d0;
  code *local_c8;
  undefined ***local_c0;
  undefined local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_38;
  
  if (param_2 != '\0') {
    local_f0 = (undefined ***)param_4;
    if (param_2 != '\x01') {
      if (param_5 != '\0') {
        local_100 = (undefined  [8])0x1;
        local_e8 = CONCAT71(local_e8._1_7_,1);
        local_88 = (undefined8 *)local_100;
        pcStack_80 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_130 = (undefined8 **)&PTR_s_skipped_002b5dd8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_120 = &local_88;
        local_118 = (code *)0x1;
        local_f8 = (code *)param_3;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_130);
      }
      *param_1 = 8;
      *(undefined *)(param_1 + 1) = 0;
      return;
    }
    _ZN5uu_cp35file_mode_for_interactive_overwrite17h819430914012e276E(&local_88,param_3,param_4);
    if (local_88 == (undefined8 *)0x8000000000000000) {
                    /* try { // try from 002048ba to 002049d8 has its CatchHandler @ 00204c09 */
      _local_100 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
      local_130 = (undefined8 **)&DAT_002b5cc8;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      local_d0 = (undefined8 *)local_100;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
      local_100 = (undefined  [8])0x1;
      local_e8 = CONCAT71(local_e8._1_7_,1);
      local_c8 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_130 = (undefined8 **)&PTR_s_overwrite___002b5e48;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      local_f8 = (code *)param_3;
      local_d0 = (undefined8 *)local_100;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
      local_130 = (undefined8 **)&PTR_s_specified_more_than_once_002b5e38;
      local_128 = (code *)0x1;
      local_120 = (undefined8 **)0x8;
      local_118 = (code *)0x0;
      puStack_110 = (undefined8 *)0x0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
      local_58 = (undefined8 *)_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
      local_a8 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                           (&local_58);
      if (local_a8 != 0) {
                    /* try { // try from 00204afc to 00204bae has its CatchHandler @ 00204bc6 */
        _local_100 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
        local_130 = (undefined8 **)&DAT_002b5cc8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = &local_d0;
        local_d0 = (undefined8 *)local_100;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
        local_100 = (undefined  [8])&local_a8;
        local_f8 = 
        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
        local_130 = (undefined8 **)&DAT_002b5ce8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = (undefined8 **)local_100;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
        uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
        goto LAB_00204baf;
      }
      cVar1 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
      if (local_88 != (undefined8 *)0x8000000000000000) {
                    /* try { // try from 002049ef to 002049fb has its CatchHandler @ 00204baf */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_88);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_70);
      }
    }
    else {
      local_48 = local_78;
      local_58 = local_88;
      uStack_50 = pcStack_80;
      local_98 = local_60;
      local_a8 = CONCAT44(uStack_6c,local_70);
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
                    /* try { // try from 002046be to 00204810 has its CatchHandler @ 00204bea */
      _local_100 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_d0 = (undefined8 *)local_100;
      local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
      local_130 = (undefined8 **)&DAT_002b5cc8;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
      local_d0 = (undefined8 *)0x1;
      local_b8 = 1;
      local_128 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_120 = &local_58;
      local_118 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      puStack_110 = &local_a8;
      local_108 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_100 = (undefined  [8])&PTR_s_replace_002b5df8;
      local_f8 = (code *)0x4;
      local_e0 = 0;
      local_e8 = 3;
      local_130 = &local_d0;
      local_f0 = (undefined ***)&local_130;
      local_c8 = (code *)param_3;
      local_c0 = (undefined ***)param_4;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_100);
      local_130 = (undefined8 **)&PTR_s_specified_more_than_once_002b5e38;
      local_128 = (code *)0x1;
      local_120 = (undefined8 **)0x8;
      local_118 = (code *)0x0;
      puStack_110 = (undefined8 *)0x0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
      local_38 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
      local_b0 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                           (&local_38);
      if (local_b0 != 0) {
                    /* try { // try from 00204a3c to 00204aee has its CatchHandler @ 00204bd8 */
        _local_100 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
        local_130 = (undefined8 **)&DAT_002b5cc8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = &local_d0;
        local_d0 = (undefined8 *)local_100;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
        local_100 = (undefined  [8])&local_b0;
        local_f8 = 
        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
        local_130 = (undefined8 **)&DAT_002b5ce8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = (undefined8 **)local_100;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
        uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
LAB_00204baf:
                    /* catch() { ... } // from try @ 002049ef with catch @ 00204baf */
                    /* try { // try from 00204bba to 00204c3e has its CatchHandler @ 00204c47 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_70);
        _Unwind_Resume(uVar2);
        return;
      }
      cVar1 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
                    /* try { // try from 00204811 to 0020481f has its CatchHandler @ 00204bc1 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_a8);
                    /* try { // try from 00204820 to 0020482c has its CatchHandler @ 00204c09 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_58);
    }
    if (cVar1 == '\0') {
      *param_1 = 8;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
  }
  *param_1 = 0xd;
  return;
}