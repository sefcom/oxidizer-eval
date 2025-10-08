undefined2 *
_ZN7uu_comm19are_files_identical17hd9a64e92504ea60bE
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  int __fd;
  undefined4 uVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined local_4090 [48];
  undefined local_4060 [48];
  undefined8 local_4030;
  undefined8 local_4028;
  long local_3fe0;
  undefined8 local_3030;
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030[0] = 0;
  local_3030 = 0;
  local_4030 = 0;
  _ZN3std2fs8metadata17h0373c3893bc9c36eE(&local_4030);
  lVar5 = local_3fe0;
  if ((int)local_4030 != 2) {
    _ZN3std2fs8metadata17h0373c3893bc9c36eE(&local_4030,param_4,param_5);
    if ((int)local_4030 != 2) {
      if (lVar5 != local_3fe0) {
        *param_1 = 0;
        return param_1;
      }
      _ZN3std2fs4File4open17h4d8fb62fce9f1fe2E(&local_4030,param_2,param_3);
      if ((local_4030 & 1) == 0) {
        __fd = local_4030._4_4_;
                    /* try { // try from 001575bf to 001575ce has its CatchHandler @ 0015771e */
        _ZN3std2fs4File4open17h4d8fb62fce9f1fe2E(&local_4030,param_4,param_5);
        if ((int)local_4030 == 1) {
          *(undefined8 *)(param_1 + 4) = local_4028;
          *(undefined *)param_1 = 1;
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17he3417a785d7054a0E(__fd);
          return param_1;
        }
        uVar2 = local_4030._4_4_;
                    /* try { // try from 001575f7 to 00157602 has its CatchHandler @ 0015770b */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h1ec4c3de20b2cd65E
                  (local_4090,__fd);
                    /* try { // try from 00157603 to 0015760f has its CatchHandler @ 001576f6 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h1ec4c3de20b2cd65E
                  (local_4060,uVar2);
        puVar1 = PTR_memset_001e7428;
        (*(code *)PTR_memset_001e7428)(local_2030,0,0x2000);
        (*(code *)puVar1)(&local_4030,0,0x2000);
        do {
                    /* try { // try from 00157640 to 001576a9 has its CatchHandler @ 00157730 */
          auVar7 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_4read17h7936c168bbd33ba5E
                             (local_4090,local_2030);
          lVar5 = auVar7._8_8_;
          if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            *(long *)(param_1 + 4) = lVar5;
            uVar4 = 1;
            goto LAB_001576db;
          }
          auVar7 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_4read17h7936c168bbd33ba5E
                             (local_4060,&local_4030);
          lVar6 = auVar7._8_8_;
          if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            *(long *)(param_1 + 4) = lVar6;
            uVar4 = 1;
            goto LAB_001576db;
          }
          if (lVar5 != lVar6) break;
          if (lVar5 == 0) {
            *(undefined *)((long)param_1 + 1) = 1;
            goto LAB_001576d9;
          }
          auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h6ba8ff5fdf051e41E
                             (0,lVar5,local_2030,0x2000,&PTR_s_src_uu_comm_src_comm_rs_001e0c78);
          auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h6ba8ff5fdf051e41E
                             (0,lVar6,&local_4030,0x2000,&PTR_s_src_uu_comm_src_comm_rs_001e0c90);
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5723b3bfa7d363aaE
                            (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
        } while (cVar3 != '\0');
        *(undefined *)((long)param_1 + 1) = 0;
LAB_001576d9:
        uVar4 = 0;
LAB_001576db:
        *(undefined *)param_1 = uVar4;
        _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17he5548ef147721afbE
                  (local_4060);
        _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17he5548ef147721afbE
                  (local_4090);
        return param_1;
      }
    }
  }
  *(undefined8 *)(param_1 + 4) = local_4028;
  *(undefined *)param_1 = 1;
  return param_1;
}