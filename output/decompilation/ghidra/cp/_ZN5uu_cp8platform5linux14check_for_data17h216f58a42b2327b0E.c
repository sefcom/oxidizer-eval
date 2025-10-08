void _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(ulong *param_1)

{
  undefined uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  int __fd;
  undefined auVar5 [16];
  int local_e4;
  ulong local_e0;
  long local_d8;
  int local_d0;
  int iStack_cc;
  ulong local_c8;
  long local_c0;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  
  _ZN3std2fs4File4open17h87ebb42518eeb9ffE(&local_d0);
  __fd = iStack_cc;
  if (local_d0 == 1) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
    return;
  }
  local_e4 = iStack_cc;
                    /* try { // try from 0019b0ba to 0019b12f has its CatchHandler @ 0019b1e5 */
  (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_d0,&local_e4);
  if (local_d0 == 2) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
  }
  else if (local_80 == 0) {
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h451713e6c2a4190aE
              (&local_d0,local_78,&PTR_DAT_0025e780);
                    /* try { // try from 0019b13a to 0019b14a has its CatchHandler @ 0019b1c4 */
    auVar5 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_00267b28
             )(&local_e4,local_c8,local_c0);
    uVar4 = auVar5._8_8_;
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      local_d8 = local_c0 + local_c8;
      local_e0 = local_c8;
      uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h634df474c9b6c8b5E
                        (&local_e0);
      param_1[2] = 0;
      uVar4 = 0;
    }
    else {
      uVar1 = 2;
    }
    *param_1 = uVar4;
    *(undefined *)(param_1 + 1) = uVar1;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h320a3f42966bf686E
              (CONCAT44(iStack_cc,local_d0),local_c8);
    __fd = local_e4;
  }
  else {
    lVar2 = (*(code *)PTR_lseek_00267b20)(__fd,0,3);
    if (lVar2 == -1) {
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      if (lVar2 < 0) {
        puVar3 = (uint *)(*(code *)PTR___errno_location_002679c8)();
        *param_1 = (ulong)*puVar3 << 0x20 | 2;
        *(undefined *)(param_1 + 1) = 2;
        __fd = local_e4;
        goto LAB_0019b1b1;
      }
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 1;
    }
    param_1[2] = local_70;
    __fd = local_e4;
  }
LAB_0019b1b1:
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd);
  return;
}