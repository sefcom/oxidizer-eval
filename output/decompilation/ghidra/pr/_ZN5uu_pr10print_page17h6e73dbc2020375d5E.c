undefined  [16]
_ZN5uu_pr10print_page17h6e73dbc2020375d5E
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined local_c0 [8];
  long local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_e8 = *(undefined8 *)(param_3 + 0x50);
  local_f0 = *(undefined8 *)(param_3 + 0x58);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  uVar1 = *(undefined8 *)(param_3 + 0xa0);
  _ZN5uu_pr14header_content17h02dbeaeea8884abbE(local_48,param_3,param_4);
                    /* try { // try from 002c782d to 002c7836 has its CatchHandler @ 002c7a83 */
  _ZN5uu_pr15trailer_content17h355b304d1d1d6111E
            (local_c0,*(undefined *)(param_3 + 0x141),*(undefined *)(param_3 + 0x142));
  local_88 = uVar1;
  local_80 = uVar3;
  local_78 = param_1;
  local_70 = param_2;
                    /* try { // try from 002c7854 to 002c786f has its CatchHandler @ 002c7a8a */
  local_68 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_f8 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_68);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc20ab2c0828df040E
            (&local_e0,local_48);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17haec41bb14c083d45E
            (&local_60,&local_e0);
  if (CONCAT44(uStack_5c,local_60) != -0x8000000000000000) {
    do {
      local_a8 = local_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
                    /* try { // try from 002c78df to 002c78fa has its CatchHandler @ 002c7a99 */
      lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (&local_f8,CONCAT44(uStack_54,uStack_58));
      if ((lVar2 != 0) ||
         (lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                            (&local_f8,local_e8,local_f0), lVar2 != 0)) {
                    /* try { // try from 002c795c to 002c7965 has its CatchHandler @ 002c7a81 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_a8);
                    /* try { // try from 002c7966 to 002c796f has its CatchHandler @ 002c7a88 */
        _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17ha46bc5424c6e948fE
                  (&local_e0);
        goto LAB_002c7a36;
      }
                    /* try { // try from 002c7903 to 002c790c has its CatchHandler @ 002c7a94 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_a8);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17haec41bb14c083d45E
                (&local_60,&local_e0);
    } while (CONCAT44(uStack_5c,local_60) != -0x8000000000000000);
  }
                    /* try { // try from 002c7927 to 002c794b has its CatchHandler @ 002c7a88 */
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17ha46bc5424c6e948fE
            (&local_e0);
  auVar5 = _ZN5uu_pr13write_columns17h4b27546e3d45b76aE(local_78,local_70,param_3,&local_f8);
  lVar4 = auVar5._8_8_;
  lVar2 = lVar4;
  if (auVar5._0_8_ == 0) {
    local_d8 = local_b8 + local_b0 * 0x18;
    local_e0 = local_b8;
    local_d0 = 0;
    auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he43dc31389a3d3c2E
                       (&local_e0);
    if (auVar5._8_8_ != 0) {
      do {
                    /* try { // try from 002c79d8 to 002c79ff has its CatchHandler @ 002c7a8f */
        lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                          (&local_f8,*(undefined8 *)(auVar5._8_8_ + 8),
                           *(undefined8 *)(auVar5._8_8_ + 0x10));
        if ((lVar2 != 0) ||
           ((auVar5._0_8_ + 1 != local_b0 &&
            (lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                               (&local_f8,local_e8,local_f0), lVar2 != 0)))) goto LAB_002c7a36;
        auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he43dc31389a3d3c2E
                           (&local_e0);
      } while (auVar5._8_8_ != 0);
    }
                    /* try { // try from 002c7a0a to 002c7a2d has its CatchHandler @ 002c7a88 */
    lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (&local_f8,local_80,local_88);
    if ((lVar2 == 0) &&
       (lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17hf4899ae455fb37b6E
                          (&local_f8), lVar2 == 0)) {
                    /* try { // try from 002c7a6e to 002c7a72 has its CatchHandler @ 002c7a8a */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he446444bf71f01b1E(local_f8);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h72ab41bb7772a064E
                (local_c0);
      uVar3 = 0;
      goto LAB_002c7a53;
    }
  }
LAB_002c7a36:
  lVar4 = lVar2;
                    /* try { // try from 002c7a3c to 002c7a40 has its CatchHandler @ 002c7a8a */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he446444bf71f01b1E(local_f8);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h72ab41bb7772a064E
            (local_c0);
  uVar3 = 1;
LAB_002c7a53:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}