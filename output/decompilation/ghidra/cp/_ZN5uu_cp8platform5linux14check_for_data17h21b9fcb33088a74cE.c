void _ZN5uu_cp8platform5linux14check_for_data17h21b9fcb33088a74cE(ulong *param_1)

{
  undefined uVar1;
  long lVar2;
  ulong uVar3;
  int __fd;
  undefined auVar4 [16];
  int local_e4;
  ulong local_e0;
  long local_d8;
  int local_d0;
  int local_cc;
  ulong local_c8;
  long local_c0;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  
  _ZN3std2fs4File4open17h2ade805364297b3fE(&local_d0);
  if (local_d0 != 0) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
    return;
  }
  local_e4 = local_cc;
                    /* try { // try from 00212dba to 00212e22 has its CatchHandler @ 00212ece */
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_d0,&local_e4);
  if (local_d0 == 2) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
    __fd = local_cc;
  }
  else if (local_80 == 0) {
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h3824b372c4eb90c7E
              (&local_d0,local_78);
                    /* try { // try from 00212e2d to 00212e3d has its CatchHandler @ 00212eb9 */
    auVar4 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h24fce4ed669fe556E
                       (&local_e4,local_c8,local_c0);
    uVar3 = auVar4._8_8_;
    if (auVar4._0_8_ == 0) {
      local_d8 = local_c0 + local_c8;
      local_e0 = local_c8;
      uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h682aa6afec1bbf51E
                        (&local_e0);
      param_1[2] = 0;
      uVar3 = 0;
    }
    else {
      uVar1 = 2;
    }
    *param_1 = uVar3;
    *(undefined *)(param_1 + 1) = uVar1;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha0066fb3d75053fdE(&local_d0);
    __fd = local_e4;
  }
  else {
    lVar2 = (*(code *)PTR_lseek_002bc0b8)(local_cc,0,3);
    if (lVar2 == -1) {
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      if (lVar2 < 0) {
                    /* try { // try from 00212e54 to 00212e9f has its CatchHandler @ 00212ece */
        lVar2 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
        *param_1 = lVar2 << 0x20 | 2;
        *(undefined *)(param_1 + 1) = 2;
        __fd = local_e4;
        goto LAB_00212ea6;
      }
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 1;
    }
    param_1[2] = local_70;
    __fd = local_e4;
  }
LAB_00212ea6:
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(__fd);
  return;
}