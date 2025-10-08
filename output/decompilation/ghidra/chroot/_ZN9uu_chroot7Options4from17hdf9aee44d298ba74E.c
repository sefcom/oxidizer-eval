undefined8 * _ZN9uu_chroot7Options4from17hdf9aee44d298ba74E(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c59fc37725ebb47E
            (&local_d8,param_2,"newroot",7);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h7a39a729acf89774E
                    ("newroot",7,&local_d8);
  if (lVar2 == 0) {
    local_d8 = 6;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d25de4dbe6fde20E(&local_d8);
    param_1[1] = uVar3;
    param_1[2] = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17h70d0c8dd677b313fE_001fabb0
    ;
    *param_1 = 0x8000000000000000;
  }
  else {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_002016e8)
              (&local_90,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
                    /* try { // try from 00166e0b to 00166e59 has its CatchHandler @ 00167043 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c59fc37725ebb47E
              (&local_d8,param_2,"groups",6);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h7a39a729acf89774E
                      ("groups",6,&local_d8);
    if (lVar2 == 0) {
      local_a8 = 0x8000000000000000;
    }
    else if (*(long *)(lVar2 + 0x10) == 0) {
      local_a8 = 0;
      uStack_a0 = 8;
      local_98 = 0;
    }
    else {
      _ZN9uu_chroot16parse_group_list17h961e5c146370f9a1E(&local_d8,*(undefined8 *)(lVar2 + 8));
      if (local_d8 != 0xe) {
        uStack_38 = uStack_c4;
        uStack_34 = (undefined4)uStack_c0;
        uStack_30 = uStack_c0._4_4_;
                    /* try { // try from 00167018 to 0016701f has its CatchHandler @ 00167043 */
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d25de4dbe6fde20E(&local_d8);
        param_1[1] = uVar3;
        param_1[2] = &
                     PTR__ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17h70d0c8dd677b313fE_001fabb0
        ;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h5fa71b8a5a225c58E
                  (local_90,uStack_88);
        return param_1;
      }
      local_a8 = CONCAT44(uStack_cc,uStack_d0);
      uStack_a0 = CONCAT44(uStack_c4,uStack_c8);
      local_98 = uStack_c0;
    }
                    /* try { // try from 00166ece to 00166f24 has its CatchHandler @ 00167048 */
    uVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00201898
            )(param_2,"skip-chdir",10);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c59fc37725ebb47E
              (&local_d8,param_2,"userspec",8);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h7a39a729acf89774E
                      ("userspec",8,&local_d8);
    if (lVar2 == 0) {
      uVar3 = 0x8000000000000003;
    }
    else {
      _ZN9uu_chroot14parse_userspec17h253265bc6f25e3bcE
                (&local_d8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      uVar3 = CONCAT44(uStack_d4,local_d8);
      local_78 = CONCAT44(uStack_cc,uStack_d0);
      uStack_70 = CONCAT44(uStack_c4,uStack_c8);
      local_68 = uStack_c0;
      uStack_60 = uStack_b8;
      local_58 = local_b0;
    }
    *param_1 = local_90;
    param_1[1] = uStack_88;
    param_1[4] = uStack_a0;
    param_1[5] = local_98;
    param_1[2] = local_80;
    param_1[3] = local_a8;
    param_1[6] = uVar3;
    param_1[0xb] = local_58;
    param_1[9] = local_68;
    param_1[10] = uStack_60;
    param_1[7] = local_78;
    param_1[8] = uStack_70;
    *(undefined *)(param_1 + 0xc) = uVar1;
  }
  return param_1;
}