undefined8 *
_ZN5uu_du15read_files_from17h6043d31ba0920720E
          (undefined8 *param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 **local_168;
  code *pcStack_160;
  undefined8 ***local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined local_138 [16];
  undefined8 **local_128;
  code *local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined local_f8;
  undefined8 local_f0;
  undefined8 **local_e8;
  code *pcStack_e0;
  undefined8 **local_d8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 local_70;
  long local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_c8 = param_2;
  local_c0 = param_3;
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb35b18b4f111dc4aE
                    (param_2,param_3,&DAT_0011cf46,1);
  local_110 = param_1;
  if (cVar2 == '\0') {
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_168,param_2,param_3);
    local_128 = local_158;
    local_138._0_8_ = local_168;
    local_138._8_8_ = pcStack_160;
                    /* try { // try from 001f3be3 to 001f3c64 has its CatchHandler @ 001f3e34 */
    cVar2 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(pcStack_160);
    if (cVar2 == '\0') {
                    /* try { // try from 001f3ce3 to 001f3cec has its CatchHandler @ 001f3e34 */
      _ZN3std2fs4File4open17h9cae249c916a6c96E(&local_108,local_c8,local_c0);
      if ((int)local_108 == 0) {
                    /* try { // try from 001f3d39 to 001f3d4d has its CatchHandler @ 001f3e20 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha4ed61db034c9bb6E
                  (&local_168,0x2000,local_108._4_4_);
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha50a6ea0e0989317E(&local_168);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(local_138);
        local_100 = (undefined8 **)
                    &
                    PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h7f009cb48c6c012dE_00284728
        ;
        goto LAB_001f3966;
      }
      cVar2 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_100);
      if (cVar2 != '\0') {
        param_1[1] = local_100;
        goto LAB_001f3d09;
      }
      local_e8 = local_100;
      local_a0 = &local_c8;
      local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
      local_168 = (undefined8 **)&PTR_DAT_002846b8;
      pcStack_160 = (code *)0x2;
      local_148 = 0;
      local_158 = &local_a0;
      local_150 = 1;
                    /* try { // try from 001f3dc9 to 001f3dea has its CatchHandler @ 001f3e0e */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17he00bf600f5f44dbcE(local_48,&local_168);
      uVar3 = _ZN3std2io5error5Error3new17hd0a0d6bee076b6f8E(0x27,local_48);
      param_1[1] = uVar3;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001f3dfc to 001f3e08 has its CatchHandler @ 001f3e20 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3dad00d2d386d8f0E(&local_e8);
    }
    else {
      local_a0 = &local_c8;
      local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
      local_168 = (undefined8 **)&DAT_00284698;
      pcStack_160 = (code *)0x2;
      local_148 = 0;
      local_158 = &local_a0;
      local_150 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17he00bf600f5f44dbcE(local_60,&local_168);
      uVar3 = _ZN3std2io5error5Error3new17hd0a0d6bee076b6f8E(0x27,local_60);
      param_1[1] = uVar3;
LAB_001f3d09:
      *param_1 = 0x8000000000000000;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(local_138);
  }
  else {
    uVar3 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4d636d06c0931382E
              (&local_168,0x2000,uVar3);
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hdb9fa66f67ecf04bE(&local_168);
    local_100 = (undefined8 **)
                &
                PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h62b06542cd7d62c5E_002847b0
    ;
LAB_001f3966:
    local_b8 = 0;
    uStack_b0 = 8;
    local_a8 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = uVar3;
    while (_ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h886d3813ac58f572E
                     (&local_a0,&local_108), puVar1 = local_110,
          local_98 != (code *)0x8000000000000001) {
      if (local_98 == (code *)0x8000000000000000) {
        local_110[1] = local_90;
        *local_110 = 0x8000000000000000;
        _ZN4core3ptr142drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT__GT_17h93c3737ff8ebef1fE
                  (local_108,local_100);
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h16d3046407d1e07aE
                  (&local_b8);
        return puVar1;
      }
      local_78 = local_98;
      local_70 = local_90;
      local_68 = local_88;
      if (local_88 == 0) {
        local_80 = (undefined8 *)((long)local_a0 + 1);
                    /* try { // try from 001f3aeb to 001f3bb6 has its CatchHandler @ 001f3e69 */
        local_138 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
        local_168 = (undefined8 **)&DAT_002846d8;
        pcStack_160 = (code *)0x2;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_e8;
        local_e8 = (undefined8 **)local_138;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_168);
        local_138._0_8_ = &local_c8;
        local_138._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
        local_128 = &local_80;
        local_120 = 
        _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
        ;
        local_168 = (undefined8 **)&DAT_002846f8;
        pcStack_160 = (code *)0x3;
        local_148 = 0;
        local_150 = 2;
        local_158 = (undefined8 ***)local_138;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_168);
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      }
      else {
                    /* try { // try from 001f3a4d to 001f3a55 has its CatchHandler @ 001f3e69 */
        _ZN5alloc6string6String15from_utf8_lossy17hea505cf60d4f919bE(&local_168);
                    /* try { // try from 001f3a60 to 001f3a67 has its CatchHandler @ 001f3e45 */
        _ZN73__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__ToString_GT_9to_string17ha2cb0370e40ab073E
                  (local_138,pcStack_160,local_158);
        local_d8 = local_128;
        local_e8 = (undefined8 **)local_138._0_8_;
        pcStack_e0 = (code *)local_138._8_8_;
                    /* try { // try from 001f3a82 to 001f3aa1 has its CatchHandler @ 001f3e52 */
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h7fa1288604a001f4E
                  (&local_168);
        cVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hc0e47005068e24ddE
                          (&local_e8,uStack_b0,local_a8);
        if (cVar2 == '\0') {
          local_158 = (undefined8 ***)local_d8;
          local_168 = local_e8;
          pcStack_160 = pcStack_e0;
                    /* try { // try from 001f3ac3 to 001f3ad2 has its CatchHandler @ 001f3e43 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcb430c3180ba1f0fE(&local_b8,&local_168);
        }
        else {
                    /* try { // try from 001f39d0 to 001f39d7 has its CatchHandler @ 001f3e69 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(&local_e8);
        }
      }
                    /* try { // try from 001f39d8 to 001f39ef has its CatchHandler @ 001f3e64 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc287f1aab316582aE(&local_78);
    }
                    /* try { // try from 001f3c78 to 001f3cc3 has its CatchHandler @ 001f3e2f */
    _ZN4core3ptr142drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT__GT_17h93c3737ff8ebef1fE
              (local_108,local_100);
    local_110[2] = local_a8;
    *local_110 = local_b8;
    local_110[1] = uStack_b0;
  }
  return local_110;
}