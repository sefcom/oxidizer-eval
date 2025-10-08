void _ZN15tabby_index_cli8commands5bench15read_query_file17h3edc6ff9bfedd045E(undefined8 *param_1)

{
  int local_ec;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN3std2fs4File4open17hb5fdc991c31df92cE(&local_c8);
  if (local_c8 == 1) {
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    *param_1 = 0x8000000000000000;
  }
  else {
    local_ec = iStack_c4;
                    /* try { // try from 003722fd to 0037230e has its CatchHandler @ 00372430 */
    local_e8 = param_1;
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h23039990b1920b90E
              (&local_60,&local_ec);
    local_e0 = 0;
    uStack_d8 = 8;
    local_d0 = 0;
    local_a8 = local_40;
    uStack_a0 = uStack_38;
    local_b8 = local_50;
    uStack_b0 = uStack_48;
    local_c8 = local_60;
    iStack_c4 = uStack_5c;
    uStack_c0 = uStack_58;
    uStack_bc = uStack_54;
    while( true ) {
                    /* try { // try from 00372380 to 003723c6 has its CatchHandler @ 00372442 */
      _ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2ff1e412ff3379d3E
                (&local_90,&local_c8);
      if (local_90 == -0x7fffffffffffffff) break;
      if (local_90 == -0x8000000000000000) {
        local_e8[1] = local_88;
        *local_e8 = 0x8000000000000000;
        _ZN4core3ptr107drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT__GT_17h21d59927537c1757E
                  (CONCAT44(iStack_c4,local_c8),CONCAT44(uStack_bc,uStack_c0));
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7054847749bb044bE
                  (&local_e0);
        goto LAB_00372415;
      }
      local_78 = local_90;
      local_70 = local_88;
      local_68 = local_80;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbe183a96c535ca7eE(&local_e0,&local_78);
    }
    _ZN4core3ptr107drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT__GT_17h21d59927537c1757E
              (CONCAT44(iStack_c4,local_c8),CONCAT44(uStack_bc,uStack_c0));
    local_e8[2] = local_d0;
    *local_e8 = local_e0;
    local_e8[1] = uStack_d8;
LAB_00372415:
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4ab6841d866e1435E(local_ec);
  }
  return;
}