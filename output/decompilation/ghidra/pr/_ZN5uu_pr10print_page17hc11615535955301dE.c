undefined  [16]
_ZN5uu_pr10print_page17hc11615535955301dE
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [8];
  long local_58;
  long local_50;
  undefined local_48 [24];
  
  local_c8 = *(undefined8 *)(param_3 + 0x50);
  local_d0 = *(undefined8 *)(param_3 + 0x58);
  uVar4 = *(undefined8 *)(param_3 + 0x98);
  uVar1 = *(undefined8 *)(param_3 + 0xa0);
  local_70 = param_1;
  _ZN5uu_pr14header_content17h1c434cc3245eafa3E(local_48,param_3,param_4);
                    /* try { // try from 00236ea2 to 00236eb1 has its CatchHandler @ 002370ec */
  _ZN5uu_pr15trailer_content17hfb8d3a6ef2744922E
            (local_60,*(undefined *)(param_3 + 0x141),*(undefined *)(param_3 + 0x142));
  local_d8 = local_60;
  local_88 = uVar1;
  local_80 = uVar4;
  local_78 = param_2;
                    /* try { // try from 00236eb2 to 00236ee1 has its CatchHandler @ 002370f3 */
  local_68 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00398b28)();
  local_e0 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00398dd8)(&local_68);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0b8c6871f9c67703E
            (&local_a8,local_48);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30afe659be7f021eE
            (&local_c0,&local_a8);
  puVar2 = 
  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00398de0
  ;
  do {
                    /* try { // try from 00236f3a to 00236f5b has its CatchHandler @ 0023711f */
    lVar3 = (*(code *)puVar2)(&local_e0,local_b8,local_b0);
    if ((lVar3 != 0) || (lVar3 = (*(code *)puVar2)(&local_e0,local_c8,local_d0), lVar3 != 0)) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_c0);
                    /* try { // try from 0023705c to 0023708c has its CatchHandler @ 002370f1 */
      _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h31fc898d73f77abbE
                (&local_a8);
      goto LAB_00237095;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_c0);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30afe659be7f021eE
              (&local_c0,&local_a8);
  } while (local_c0 != -0x8000000000000000);
                    /* try { // try from 00236f8c to 00236fac has its CatchHandler @ 002370f1 */
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h31fc898d73f77abbE
            (&local_a8);
  auVar6 = _ZN5uu_pr13write_columns17h498c3fffc8cb79bcE(local_70,local_78,param_3,&local_e0);
  lVar5 = auVar6._8_8_;
  lVar3 = lVar5;
  if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    local_a0 = local_58 + local_50 * 0x18;
    local_a8 = local_58;
    local_98 = 0;
    auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9b3b0cf146fef1f3E
                       (&local_a8);
    puVar2 = 
    PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00398de0
    ;
    if (auVar6._8_8_ != 0) {
      do {
                    /* try { // try from 00237028 to 0023704a has its CatchHandler @ 0023711a */
        lVar3 = (*(code *)puVar2)(&local_e0,*(undefined8 *)(auVar6._8_8_ + 8),
                                  *(undefined8 *)(auVar6._8_8_ + 0x10));
        if ((lVar3 != 0) ||
           ((auVar6._0_8_ + 1 != local_50 &&
            (lVar3 = (*(code *)puVar2)(&local_e0,local_c8,local_d0), lVar3 != 0))))
        goto LAB_00237095;
        auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9b3b0cf146fef1f3E
                           (&local_a8);
      } while (auVar6._8_8_ != 0);
    }
    lVar3 = (*(code *)
              PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00398de0
            )(&local_e0,local_80,local_88);
    if ((lVar3 == 0) &&
       (lVar3 = (*(code *)
                  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_00398de8
                )(&local_e0), lVar3 == 0)) {
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h9a5bea2ce40ac794E(local_e0);
      uVar4 = 0;
      goto LAB_002370a4;
    }
  }
LAB_00237095:
  uVar4 = 1;
                    /* try { // try from 0023709f to 002370d2 has its CatchHandler @ 002370d7 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h9a5bea2ce40ac794E(local_e0);
  lVar5 = lVar3;
LAB_002370a4:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17ha75e71cb54c06334E
            (local_60);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}