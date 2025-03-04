undefined  [16]
_ZN7uu_tail18forwards_thru_file17h1756bf1e18ac67f2E
          (undefined8 param_1,ulong param_2,undefined param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long lVar3;
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h7fcbf21db742f1f7E
            (&local_60,0x2000,param_1);
  local_78 = 0;
  local_70 = 1;
  lVar4 = 0;
  uVar2 = 0;
  while( true ) {
    local_68 = 0;
    uVar2 = _ZN47__LT_u64_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17h30cfd590689ce002E
                      (uVar2);
                    /* try { // try from 00200b8b to 00200b99 has its CatchHandler @ 00200bf6 */
    auVar5 = _ZN3std2io10read_until17hc44e4035ffea86b1E(&local_60,param_3,&local_78);
    lVar3 = auVar5._8_8_;
    lVar1 = lVar3;
    if ((auVar5._0_8_ != 0) || (lVar1 = lVar4, lVar3 == 0)) break;
    lVar4 = lVar4 + lVar3;
    local_68 = 0;
    if (param_2 <= uVar2) {
                    /* try { // try from 00200bb8 to 00200bcc has its CatchHandler @ 00200bf1 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h284f430dac29ffa9E(&local_78);
LAB_00200bcd:
      _ZN4core3ptr93drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_std__fs__File_GT__GT_17hcb85c70210735641E
                (local_60,local_58);
      auVar5._8_8_ = lVar4;
      return auVar5;
    }
  }
  lVar4 = lVar1;
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h284f430dac29ffa9E(&local_78);
  goto LAB_00200bcd;
}