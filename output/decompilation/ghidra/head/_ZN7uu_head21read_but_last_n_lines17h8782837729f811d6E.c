long _ZN7uu_head21read_but_last_n_lines17h8782837729f811d6E
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e0 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_e8 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_e0);
                    /* try { // try from 001b9b43 to 001b9b57 has its CatchHandler @ 001b9c4b */
  _ZN7uu_head4take19TakeAllBut_LT_I_GT_3new17hc0845bc7cedacb1cE(&local_68,param_1,param_3,param_2);
  local_78 = local_38;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  while( true ) {
                    /* try { // try from 001b9bb0 to 001b9bba has its CatchHandler @ 001b9c5f */
    _ZN93__LT_uu_head__take__TakeAllBut_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a0f0232c199d7f6E
              (&local_c0,&local_a8);
    if (local_c0 == -0x7fffffffffffffff) {
                    /* try { // try from 001b9c00 to 001b9c09 has its CatchHandler @ 001b9c4b */
      _ZN4core3ptr168drop_in_place_LT_uu_head__take__TakeAllBut_LT_uucore__features__lines__Lines_LT__RF_mut_u20_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT__GT__GT_17h8c6f48dc289688b8E
                (&local_a8);
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E(local_e8);
      return 0;
    }
    lVar1 = local_b8;
    if (local_c0 == -0x8000000000000000) break;
    local_d8 = local_c0;
    local_d0 = local_b8;
    local_c8 = local_b0;
                    /* try { // try from 001b9be3 to 001b9beb has its CatchHandler @ 001b9c50 */
    lVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (&local_e8,local_b8);
    if (lVar1 != 0) {
                    /* try { // try from 001b9c17 to 001b9c20 has its CatchHandler @ 001b9c49 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb5d1cc1ebcc864d9E(&local_d8);
      break;
    }
                    /* try { // try from 001b9bf4 to 001b9bfd has its CatchHandler @ 001b9c5f */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb5d1cc1ebcc864d9E(&local_d8);
  }
                    /* try { // try from 001b9c21 to 001b9c2a has its CatchHandler @ 001b9c4b */
  _ZN4core3ptr168drop_in_place_LT_uu_head__take__TakeAllBut_LT_uucore__features__lines__Lines_LT__RF_mut_u20_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT__GT__GT_17h8c6f48dc289688b8E
            (&local_a8);
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E(local_e8);
  return lVar1;
}