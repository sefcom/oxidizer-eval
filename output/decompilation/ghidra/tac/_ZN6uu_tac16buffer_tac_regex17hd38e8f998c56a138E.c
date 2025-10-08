long _ZN6uu_tac16buffer_tac_regex17hd38e8f998c56a138E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined auVar9 [16];
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  long local_38;
  
  local_68 = param_3;
  local_60 = param_4;
  local_58 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00361f68)();
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_003620e8)(&local_58);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hb5da74aabfacf130E
            (&local_90,uVar1);
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar7 = param_2 + -1;
    lVar4 = param_2;
    lVar5 = param_2;
    if (param_5 == '\0') {
      do {
                    /* try { // try from 002125f0 to 00212650 has its CatchHandler @ 002126d4 */
        auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                           (0,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333ab0);
        _ZN5regex5regex5bytes5Regex7find_at17ha500615bd3b0433bE
                  (local_50,local_68,local_60,auVar9._0_8_,auVar9._8_8_,lVar7);
        if (local_50[0] != 0) {
          lVar6 = (local_38 - local_40) + lVar7;
          auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                             (lVar6,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333ac8);
          lVar2 = local_80;
          uVar3 = auVar9._8_8_;
          lVar4 = lVar7;
          lVar5 = lVar6;
          if (uVar3 < (ulong)(local_90 - local_80)) {
            (*(code *)PTR_memcpy_00361ec0)(local_88 + local_80,auVar9._0_8_,uVar3);
            local_80 = uVar3 + lVar2;
          }
          else {
                    /* try { // try from 0021268b to 0021269b has its CatchHandler @ 002126d4 */
            lVar2 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
                    )(&local_90,auVar9._0_8_,uVar3);
            if (lVar2 != 0) goto LAB_002125bb;
          }
        }
        bVar8 = lVar7 != 0;
        lVar7 = lVar7 + -1;
      } while (bVar8);
    }
    else {
      do {
                    /* try { // try from 002124cd to 0021254a has its CatchHandler @ 002126d6 */
        auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                           (0,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333ab0);
        _ZN5regex5regex5bytes5Regex7find_at17ha500615bd3b0433bE
                  (local_50,local_68,local_60,auVar9._0_8_,auVar9._8_8_,lVar7);
        if (local_50[0] != 0) {
          auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                             (lVar7,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333ae0);
          lVar2 = local_80;
          uVar3 = auVar9._8_8_;
          lVar4 = lVar7;
          lVar5 = lVar7;
          if (uVar3 < (ulong)(local_90 - local_80)) {
            (*(code *)PTR_memcpy_00361ec0)(local_88 + local_80,auVar9._0_8_,uVar3);
            local_80 = uVar3 + lVar2;
          }
          else {
            lVar2 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
                    )(&local_90,auVar9._0_8_,uVar3);
            if (lVar2 != 0) goto LAB_002125bb;
          }
        }
        bVar8 = lVar7 != 0;
        lVar7 = lVar7 + -1;
      } while (bVar8);
    }
  }
                    /* try { // try from 00212561 to 00212577 has its CatchHandler @ 002126d2 */
  auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h71ada529aa718b3eE
                     (0,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_00333a98);
  lVar5 = local_80;
  uVar3 = auVar9._8_8_;
  if (uVar3 < (ulong)(local_90 - local_80)) {
    (*(code *)PTR_memcpy_00361ec0)(local_88 + local_80,auVar9._0_8_,uVar3);
    local_80 = uVar3 + lVar5;
  }
  else {
                    /* try { // try from 002126b0 to 002126c0 has its CatchHandler @ 002126d2 */
    lVar2 = (*(code *)
              PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h8000122166762ae1E_00361fa0
            )(&local_90,auVar9._0_8_,uVar3);
    if (lVar2 != 0) goto LAB_002125bb;
  }
                    /* try { // try from 002125ae to 002125b7 has its CatchHandler @ 002126d2 */
  lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17he7ea2e76e39453c0E
                    (&local_90);
LAB_002125bb:
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h906e82980bfe4b9cE
            (&local_90);
  return lVar2;
}