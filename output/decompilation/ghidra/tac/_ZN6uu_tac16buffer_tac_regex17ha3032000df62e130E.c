long _ZN6uu_tac16buffer_tac_regex17ha3032000df62e130E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
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
  local_58 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  uVar1 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_58);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hffa1ef8784ad0549E
            (&local_90,0x2000,uVar1);
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = param_2;
    lVar4 = param_2;
    lVar5 = param_2;
    if (param_5 == '\0') {
      do {
        lVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_18backward_unchecked17hafc0b4d583767e83E
                          (lVar2);
                    /* try { // try from 0029fb3a to 0029fb9c has its CatchHandler @ 0029fc1a */
        auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0c2d10d49f9be9f9E
                           (0,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c8a78);
        _ZN5regex5regex5bytes5Regex7find_at17h97f889983824a43eE
                  (local_50,local_68,local_60,auVar7._0_8_,auVar7._8_8_,lVar2);
        if (local_50[0] != 0) {
          lVar6 = (local_38 - local_40) + lVar2;
          auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0c2d10d49f9be9f9E
                             (lVar6,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c8a90);
          lVar3 = local_80;
          lVar4 = lVar2;
          lVar5 = lVar6;
          if (auVar7._8_8_ < (ulong)(local_90 - local_80)) {
            (*(code *)PTR_memcpy_004065d0)(local_88 + local_80,auVar7._0_8_);
            local_80 = auVar7._8_8_ + lVar3;
          }
          else {
                    /* try { // try from 0029fbe0 to 0029fbec has its CatchHandler @ 0029fc1a */
            lVar3 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h5c532fad6e334161E
                              (&local_90,auVar7._0_8_);
            if (lVar3 != 0) goto LAB_0029fbfc;
          }
        }
      } while (lVar2 != 0);
    }
    else {
      do {
        lVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_18backward_unchecked17hafc0b4d583767e83E
                          (lVar2);
                    /* try { // try from 0029fa07 to 0029fa7d has its CatchHandler @ 0029fc1c */
        auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0c2d10d49f9be9f9E
                           (0,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c8a78);
        _ZN5regex5regex5bytes5Regex7find_at17h97f889983824a43eE
                  (local_50,local_68,local_60,auVar7._0_8_,auVar7._8_8_,lVar2);
        if (local_50[0] != 0) {
          auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0c2d10d49f9be9f9E
                             (lVar2,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c8aa8);
          lVar3 = local_80;
          lVar5 = lVar2;
          lVar4 = lVar2;
          if (auVar7._8_8_ < (ulong)(local_90 - local_80)) {
            (*(code *)PTR_memcpy_004065d0)(local_88 + local_80,auVar7._0_8_);
            local_80 = auVar7._8_8_ + lVar3;
          }
          else {
            lVar3 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h5c532fad6e334161E
                              (&local_90,auVar7._0_8_);
            if (lVar3 != 0) goto LAB_0029fbfc;
          }
        }
      } while (lVar2 != 0);
    }
  }
                    /* try { // try from 0029fa98 to 0029faaf has its CatchHandler @ 0029fc18 */
  auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0c2d10d49f9be9f9E
                     (0,lVar5,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c8a60);
  lVar5 = local_80;
  if (auVar7._8_8_ < (ulong)(local_90 - local_80)) {
    (*(code *)PTR_memcpy_004065d0)(local_88 + local_80,auVar7._0_8_);
    local_80 = auVar7._8_8_ + lVar5;
  }
  else {
                    /* try { // try from 0029fae1 to 0029faed has its CatchHandler @ 0029fc18 */
    lVar3 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h5c532fad6e334161E
                      (&local_90,auVar7._0_8_);
    if (lVar3 != 0) {
LAB_0029fbfc:
      _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hbf38bc9ad699fef9E
                (&local_90);
      return lVar3;
    }
  }
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hbf38bc9ad699fef9E
            (&local_90);
  return 0;
}