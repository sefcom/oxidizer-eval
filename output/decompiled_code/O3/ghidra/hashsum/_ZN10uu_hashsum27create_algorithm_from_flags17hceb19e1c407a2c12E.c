long * __rustcall uu_hashsum::create_algorithm_from_flags(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  char *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  long lStack_20;
  
  local_40 = 0;
                    /* try { // try from 002da3bb to 002dab66 has its CatchHandler @ 002dab97 */
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"md5",3);
  if (cVar1 == '\0') {
LAB_002da436:
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha1",4);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"sha1sum",7,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha224",6);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"sha224sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha256",6);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"sha256sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha384",6);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"sha384sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha512",6);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"sha512sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"b2sum",5);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"b2sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"b3sum",5);
    if (cVar1 != '\0') {
      uucore::features::checksum::detect_algo(&local_90,"b3sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha3",4);
    if (cVar1 != '\0') {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_90,param_2,&DAT_00166c6c,4);
      auVar5 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00166c6c,4,&local_90);
      uVar4 = auVar5._8_8_;
      puVar3 = auVar5._0_8_;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = *puVar3;
      }
      uucore::features::checksum::create_sha3(&local_90,puVar3 != (undefined8 *)0x0,uVar4);
      if (local_90 == (char *)0x0) goto LAB_002dab3b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"sha3-224",8);
    if (cVar1 != '\0') {
      local_80 = ::alloc::boxed::Box<T>::new();
      local_90 = &DAT_00169848;
      local_88 = 8;
      local_78 = &DAT_0043f890;
      uStack_70 = 0xe0;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_001697e0,8);
    if (cVar1 != '\0') {
      local_80 = ::alloc::boxed::Box<T>::new();
      local_90 = &DAT_00169850;
      local_88 = 8;
      local_78 = &DAT_0043f8c0;
      uStack_70 = 0x100;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_00169a18,8);
    if (cVar1 != '\0') {
      local_80 = ::alloc::boxed::Box<T>::new();
      local_90 = &DAT_00169200;
      local_88 = 8;
      local_78 = &DAT_0043f8f0;
      uStack_70 = 0x180;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_001694a0,8);
    if (cVar1 != '\0') {
      local_80 = ::alloc::boxed::Box<T>::new();
      local_90 = "SHA3-512";
      local_88 = 8;
      local_78 = &DAT_0043f920;
      uStack_70 = 0x200;
      lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002dab67;
    }
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_001697e8,8);
    if (cVar1 == '\0') {
LAB_002daa7b:
      cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_2,"shake256S",8);
      if (cVar1 == '\0') {
LAB_002dab1a:
        if (local_40 != 0) {
          param_1[3] = local_28;
          param_1[4] = lStack_20;
          param_1[1] = local_38;
          param_1[2] = lStack_30;
          *param_1 = local_40;
          return param_1;
        }
        lVar2 = ::alloc::boxed::Box<T>::new(0xe);
      }
      else {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_90,param_2,&DAT_00166c6c,4);
        puVar3 = (undefined8 *)
                 clap_builder::parser::error::MatchesError::unwrap(&DAT_00166c6c,4,&local_90);
        if (puVar3 == (undefined8 *)0x0) {
          lVar2 = ::alloc::boxed::Box<T>::new(7);
        }
        else {
          local_80 = ::alloc::boxed::Box<T>::new();
          uStack_70 = *puVar3;
          local_90 = "SHAKE256stride: xidstart( ";
          local_88 = 8;
          local_78 = &DAT_0043fa10;
          lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
          if (lVar2 == 0) goto LAB_002dab1a;
        }
      }
    }
    else {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_90,param_2,&DAT_00166c6c,4);
      puVar3 = (undefined8 *)
               clap_builder::parser::error::MatchesError::unwrap(&DAT_00166c6c,4,&local_90);
      if (puVar3 == (undefined8 *)0x0) {
        lVar2 = ::alloc::boxed::Box<T>::new(6);
      }
      else {
        local_80 = ::alloc::boxed::Box<T>::new();
        uStack_70 = *puVar3;
        local_90 = &DAT_00169aa0;
        local_88 = 8;
        local_78 = &DAT_0043f9e0;
        lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_90);
        if (lVar2 == 0) goto LAB_002daa7b;
      }
    }
  }
  else {
    uucore::features::checksum::detect_algo(&local_90,"md5sum",6,0);
    if (local_90 == (char *)0x0) {
LAB_002dab3b:
      param_1[1] = local_88;
      param_1[2] = local_80;
      goto LAB_002dab76;
    }
    local_50 = (undefined4)local_78;
    uStack_4c = local_78._4_4_;
    uStack_48 = (undefined4)uStack_70;
    uStack_44 = uStack_70._4_4_;
    local_68 = local_90;
    local_60 = local_88;
    local_58 = local_80;
    lVar2 = create_algorithm_from_flags::___closure__(&local_40,&local_68);
    if (lVar2 == 0) goto LAB_002da436;
  }
LAB_002dab67:
  param_1[1] = lVar2;
  param_1[2] = (long)&DAT_0043f970;
LAB_002dab76:
  *param_1 = 0;
  core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>
            (&local_40);
  return param_1;
}