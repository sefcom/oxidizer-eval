long _ZN6uu_tac10buffer_tac17hf0c4fec0ee1a5c50E
               (undefined8 param_1,long param_2,char param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_e0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00361f68)();
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_003620e8)(&local_e0);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hb5da74aabfacf130E
            (&local_108,uVar1);
                    /* try { // try from 00212740 to 00212752 has its CatchHandler @ 0021296c */
  _ZN6memchr6memmem13FinderBuilder13build_reverse17hc825846e9c200c29E(&local_70,param_4,param_5);
  local_a8 = local_40;
  uStack_a0 = uStack_38;
  local_b8 = local_50;
  uStack_b0 = uStack_48;
  local_c8 = local_60;
  uStack_c0 = uStack_58;
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  local_98 = 1;
  lVar5 = param_2;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = param_2;
  if (param_3 == '\0') {
    do {
      while( true ) {
                    /* try { // try from 00212850 to 0021287c has its CatchHandler @ 00212973 */
        auVar6 = (*(code *)
                   PTR__ZN86__LT_memchr__memmem__FindRevIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h76b1505eadd4958fE_003620f0
                 )(&local_d8);
        if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_002128d9;
        lVar4 = auVar6._8_8_ + param_5;
        auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                           (lVar4,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333b10);
        lVar2 = local_f8;
        uVar3 = auVar6._8_8_;
        lVar5 = lVar4;
        if ((ulong)(local_108 - local_f8) <= uVar3) break;
        (*(code *)PTR_memcpy_00361ec0)(local_100 + local_f8,auVar6._0_8_,uVar3);
        local_f8 = lVar2 + uVar3;
      }
                    /* try { // try from 002128b3 to 002128c1 has its CatchHandler @ 00212973 */
      lVar2 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
              )(&local_108,auVar6._0_8_,uVar3);
    } while (lVar2 == 0);
  }
  else {
    do {
      while( true ) {
                    /* try { // try from 002127c0 to 002127eb has its CatchHandler @ 00212971 */
        auVar6 = (*(code *)
                   PTR__ZN86__LT_memchr__memmem__FindRevIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h76b1505eadd4958fE_003620f0
                 )(&local_d8);
        lVar2 = auVar6._8_8_;
        if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_002128d9;
        auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                           (lVar2,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333b28);
        lVar4 = local_f8;
        uVar3 = auVar6._8_8_;
        lVar5 = lVar2;
        if ((ulong)(local_108 - local_f8) <= uVar3) break;
        (*(code *)PTR_memcpy_00361ec0)(local_100 + local_f8,auVar6._0_8_,uVar3);
        local_f8 = uVar3 + lVar4;
      }
                    /* try { // try from 00212824 to 00212832 has its CatchHandler @ 00212971 */
      lVar2 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
              )(&local_108,auVar6._0_8_,uVar3);
    } while (lVar2 == 0);
  }
  _ZN4core3ptr48drop_in_place_LT_memchr__memmem__FindRevIter_GT_17h3d1f7cc021b2545aE(&local_d8);
LAB_00212936:
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h906e82980bfe4b9cE
            (&local_108);
  return lVar2;
LAB_002128d9:
  _ZN4core3ptr48drop_in_place_LT_memchr__memmem__FindRevIter_GT_17h3d1f7cc021b2545aE(&local_d8);
                    /* try { // try from 002128e3 to 002128f9 has its CatchHandler @ 0021296c */
  auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                     (0,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333af8);
  lVar5 = local_f8;
  uVar3 = auVar6._8_8_;
  if (uVar3 < (ulong)(local_108 - local_f8)) {
    (*(code *)PTR_memcpy_00361ec0)(local_100 + local_f8,auVar6._0_8_,uVar3);
    local_f8 = uVar3 + lVar5;
  }
  else {
                    /* try { // try from 00212953 to 00212961 has its CatchHandler @ 0021296c */
    lVar2 = (*(code *)
              PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
            )(&local_108,auVar6._0_8_,uVar3);
    if (lVar2 != 0) goto LAB_00212936;
  }
                    /* try { // try from 0021292b to 00212932 has its CatchHandler @ 0021296c */
  lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17he7ea2e76e39453c0E
                    (&local_108);
  goto LAB_00212936;
}