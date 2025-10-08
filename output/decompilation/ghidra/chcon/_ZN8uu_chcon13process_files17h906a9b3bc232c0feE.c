undefined8 *
_ZN8uu_chcon13process_files17h906a9b3bc232c0feE
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int local_c0;
  char local_bc;
  int local_78 [18];
  
  _ZN8uu_chcon3fts3FTS3new17h1ba0cd59aadc0d7fE
            (&local_108,*(long *)(param_2 + 8),
             *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10) * 0x18,
             *(undefined4 *)(&DAT_00119bd0 + (ulong)*(byte *)(param_2 + 0x7b) * 4));
  if (local_108 == 0x12) {
    local_118 = uStack_100;
    uStack_114 = uStack_fc;
    uStack_110 = uStack_f8;
    uStack_10c = uStack_f4;
    local_130 = 0;
    uStack_128 = 8;
    local_120 = 0;
    while( true ) {
      _ZN8uu_chcon3fts3FTS15read_next_entry17h61830a73507cb09aE(&local_c0,&local_118);
      if (local_c0 != 0x12) break;
      if (local_bc == '\0') goto LAB_00164423;
      _ZN8uu_chcon12process_file17h1368cd6f12435f91E(local_78,param_2,param_3,&local_118,param_4);
      if (local_78[0] == 0x12) {
        _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                  (local_78);
      }
      else {
                    /* try { // try from 00164350 to 001643aa has its CatchHandler @ 0016446b */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h394a0ecf89d44a6fE
                  (&local_130,local_78,&PTR_s_src_uu_chcon_src_chcon_rs_001f0428);
      }
    }
                    /* try { // try from 0016440d to 00164422 has its CatchHandler @ 00164469 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h394a0ecf89d44a6fE
              (&local_130,&local_c0,&PTR_s_src_uu_chcon_src_chcon_rs_001f0440);
LAB_00164423:
    param_1[2] = local_120;
    *(undefined4 *)param_1 = (undefined4)local_130;
    *(undefined4 *)((long)param_1 + 4) = local_130._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_128._4_4_;
    _ZN4core3ptr39drop_in_place_LT_uu_chcon__fts__FTS_GT_17hf3c3ebc386ffa52dE(&local_118);
  }
  else {
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x48);
    if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 00164457 to 00164466 has its CatchHandler @ 0016448a */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001f6e40)(8,0x48);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    puVar2[8] = local_c8;
    puVar2[6] = local_d8;
    puVar2[7] = uStack_d0;
    puVar2[4] = local_e8;
    puVar2[5] = uStack_e0;
    puVar2[2] = CONCAT44(uStack_f4,uStack_f8);
    puVar2[3] = uStack_f0;
    *puVar2 = CONCAT44(uStack_104,local_108);
    puVar2[1] = CONCAT44(uStack_fc,uStack_100);
    *param_1 = 1;
    param_1[1] = puVar2;
    param_1[2] = 1;
  }
  return param_1;
}