void __rustcall uu_split::ByteChunkWriter::new(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long *local_110;
  code *local_108;
  undefined8 **local_100;
  undefined **local_f8;
  code *pcStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *local_a8;
  code *local_a0;
  undefined8 **local_98;
  undefined **local_90;
  code *pcStack_88;
  undefined8 **local_80;
  undefined local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  filenames::FilenameIterator::new
            (&local_f8,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             param_3 + 0x40);
  if (local_f8 == (undefined **)0x8000000000000001) {
    param_1[1] = pcStack_f0;
    param_1[2] = local_e8;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_38 = local_c0;
    uStack_34 = uStack_bc;
    uStack_30 = uStack_b8;
    uStack_2c = uStack_b4;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    uStack_40 = uStack_c8;
    uStack_3c = uStack_c4;
    uStack_58 = (undefined4)uStack_e0;
    uStack_54 = uStack_e0._4_4_;
    uStack_50 = (undefined4)uStack_d8;
    uStack_4c = uStack_d8._4_4_;
    local_70 = local_f8;
    uStack_68 = pcStack_f0;
    local_60 = local_e8;
                    /* try { // try from 001cbfd0 to 001cc034 has its CatchHandler @ 001cc1d8 */
    _<uu_split::filenames::FilenameIterator_as_core::iter::traits::iterator::Iterator>::next
              (&local_a8,&local_70);
    if ((undefined ***)local_a8 == (undefined ***)0x8000000000000000) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                (&local_90,"output file suffixes exhausted",0x1e);
      local_e8 = local_80;
      local_f8 = local_90;
      pcStack_f0 = pcStack_88;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
      uVar1 = ::alloc::boxed::Box<T>::new(&local_f8);
      param_1[1] = uVar1;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248938;
      *param_1 = 0x8000000000000000;
    }
    else {
      local_110 = local_a8;
      local_108 = local_a0;
      local_100 = local_98;
      if (*(char *)(param_3 + 0xa0) != '\0') {
        local_90 = (undefined **)0x0;
        pcStack_88 = local_a0;
        local_80 = local_98;
        local_78 = 1;
        local_a8 = (long *)&local_90;
        local_a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_f8 = &PTR_s_creating_file___cannot_read_from_002489a8;
        pcStack_f0 = (code *)0x2;
        uStack_d8 = 0;
        uStack_e0 = 1;
                    /* try { // try from 001cc0db to 001cc117 has its CatchHandler @ 001cc1c9 */
        local_e8 = &local_a8;
        std::io::stdio::_print(&local_f8);
      }
      Settings::instantiate_current_writer(&local_f8,param_3,local_108,local_100,1);
      if (local_f8 != (undefined **)0x8000000000000000) {
        param_1[4] = uStack_d8;
        param_1[5] = CONCAT44(uStack_cc,uStack_d0);
        param_1[2] = local_e8;
        param_1[3] = uStack_e0;
        param_1[0xe] = CONCAT44(uStack_2c,uStack_30);
        *(undefined4 *)(param_1 + 0xc) = uStack_40;
        *(undefined4 *)((long)param_1 + 100) = uStack_3c;
        *(undefined4 *)(param_1 + 0xd) = local_38;
        *(undefined4 *)((long)param_1 + 0x6c) = uStack_34;
        *(undefined4 *)(param_1 + 10) = uStack_50;
        *(undefined4 *)((long)param_1 + 0x54) = uStack_4c;
        *(undefined4 *)(param_1 + 0xb) = uStack_48;
        *(undefined4 *)((long)param_1 + 0x5c) = uStack_44;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_60;
        *(undefined4 *)((long)param_1 + 0x44) = local_60._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_58;
        *(undefined4 *)((long)param_1 + 0x4c) = uStack_54;
        *(undefined4 *)(param_1 + 6) = (undefined4)local_70;
        *(undefined4 *)((long)param_1 + 0x34) = local_70._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_68;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_68._4_4_;
        *param_1 = local_f8;
        param_1[1] = pcStack_f0;
        param_1[0xf] = param_3;
        param_1[0x10] = param_2;
        param_1[0x11] = 0;
        param_1[0x12] = param_2;
        core::ptr::drop_in_place<alloc::string::String>(&local_110);
        return;
      }
      auVar2 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from();
      *(undefined (*) [16])(param_1 + 1) = auVar2;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001cc123 to 001cc12c has its CatchHandler @ 001cc1d8 */
      core::ptr::drop_in_place<alloc::string::String>(&local_110);
    }
    core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&local_70);
  }
  return;
}