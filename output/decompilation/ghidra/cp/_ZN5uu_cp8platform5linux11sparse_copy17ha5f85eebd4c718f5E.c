ulong _ZN5uu_cp8platform5linux11sparse_copy17ha5f85eebd4c718f5E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  int local_f8;
  int local_f4;
  long local_f0;
  long local_e8;
  int local_e0;
  int local_dc;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_90;
  undefined8 local_88;
  
  _ZN3std2fs4File4open17h2ade805364297b3fE(&local_e0,param_1,param_2);
  iVar2 = local_dc;
  if (local_e0 == 0) {
    local_f8 = local_dc;
                    /* try { // try from 002132df to 002132ee has its CatchHandler @ 00213469 */
    _ZN3std2fs4File6create17h63900868be62ed17E(&local_e0,param_3,param_4);
    if (local_e0 == 0) {
      local_f4 = local_dc;
                    /* try { // try from 00213308 to 00213389 has its CatchHandler @ 00213464 */
      _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_e0,&local_f8);
      if (local_e0 != 2) {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h73f8e5c4ab47dad3E
                  (local_90 >> 0x3f,&PTR_s_src_uu_cp_src_platform_linux_rs_002b6500);
        iVar2 = (*(code *)PTR_ftruncate_002bc0c0)(local_dc,local_90);
        if (iVar2 < 0) {
          uVar3 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
          local_d8 = (ulong)uVar3 << 0x20 | 2;
        }
        else {
          _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_e0,&local_f4);
          if (local_e0 != 2) {
            _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h3824b372c4eb90c7E
                      (&local_e0,local_88);
            if (local_90 != 0) {
              uVar7 = 0;
              do {
                    /* try { // try from 002133b1 to 00213407 has its CatchHandler @ 0021346e */
                auVar8 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h24fce4ed669fe556E
                                   (&local_f8,local_d8,local_d0);
                uVar6 = auVar8._8_8_;
                uVar5 = uVar6;
                if (auVar8._0_8_ != 0) {
LAB_00213410:
                    /* try { // try from 00213410 to 0021344d has its CatchHandler @ 00213464 */
                  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha0066fb3d75053fdE
                            (&local_e0);
                  local_d8 = uVar5;
                  local_dc = local_f4;
                  goto LAB_0021341e;
                }
                auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17ha9f3ca16460e2477E
                                   (uVar6,local_d8,local_d0);
                lVar4 = auVar8._0_8_;
                local_e8 = lVar4 + auVar8._8_8_;
                local_f0 = lVar4;
                cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hb6331f8b0439d978E
                                  (&local_f0);
                if ((cVar1 != '\0') &&
                   (uVar5 = _ZN3std2os4unix2fs7FileExt12write_all_at17h20b571d70eaa1579E
                                      (&local_f4,lVar4,auVar8._8_8_,uVar7), uVar5 != 0))
                goto LAB_00213410;
                uVar7 = uVar7 + uVar6;
              } while (uVar7 < local_90);
            }
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha0066fb3d75053fdE
                      (&local_e0);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_f4);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_f8);
            return 0;
          }
        }
      }
LAB_0021341e:
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_dc);
      iVar2 = local_f8;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(iVar2);
  }
  return local_d8;
}