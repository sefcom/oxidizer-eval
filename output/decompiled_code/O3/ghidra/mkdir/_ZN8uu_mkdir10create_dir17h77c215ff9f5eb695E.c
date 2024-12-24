long __rustcall
uu_mkdir::create_dir
          (undefined8 *param_1,undefined8 param_2,char param_3,char param_4,char param_5,
          uint param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined local_160 [16];
  undefined *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  code *local_138;
  undefined8 *local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  std::fs::metadata(&local_e0,param_1,param_2);
  puVar2 = local_e0;
  if (local_e0 == (undefined *)0x2) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (2,local_d8);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_e0,local_d8);
    if (param_3 == '\0') {
      local_160._0_8_ = &local_140;
      local_160._8_8_ = _<std::path::Display_as_core::fmt::Display>::fmt;
      local_e0 = &DAT_002218f0;
      local_d8 = 2;
      local_c0 = 0;
      local_d0 = (undefined8 **)local_160;
      local_c8 = 1;
      local_140 = param_1;
      local_138 = (code *)param_2;
      core::option::Option<T>::map_or_else(&local_120,&local_e0);
      local_108 = 1;
      lVar6 = ::alloc::boxed::Box<T>::new(&local_120);
      return lVar6;
    }
  }
  local_150 = puVar2;
  local_148 = param_1;
  std::path::Path::components(&local_120,param_1);
  lVar6 = 0;
  std::path::Path::components(&local_e0,1,0);
  cVar3 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_120,&local_e0);
  puVar1 = local_148;
  if (cVar3 == '\0') {
    if (param_3 != '\0') {
      auVar8 = std::path::Path::parent(local_148,param_2);
      if (auVar8._0_8_ == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (&local_e0,"failed to create whole tree: created directory ",0x1b);
        local_c8 = CONCAT44(local_c8._4_4_,1);
        uVar7 = ::alloc::boxed::Box<T>::new(&local_e0);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (uVar7,&PTR_drop_in_place<uucore_mods_error_USimpleError>_00221880);
      }
      else {
        lVar6 = create_dir(auVar8._0_8_,auVar8._8_8_,1,param_4,1,param_6);
        if (lVar6 != 0) {
          return lVar6;
        }
      }
    }
    lVar6 = std::fs::create_dir(puVar1,param_2);
    if (lVar6 == 0) {
      if (param_4 != '\0') {
        local_160 = uucore::util_name();
        local_120 = 1;
        local_118 = puVar1;
        local_108 = CONCAT31(local_108._1_3_,1);
        local_140 = (undefined8 *)local_160;
        local_138 = _<&T_as_core::fmt::Display>::fmt;
        local_128 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_e0 = &DAT_00221910;
        local_d8 = 3;
        local_c0 = 0;
        local_d0 = &local_140;
        local_c8 = 2;
        local_130 = &local_120;
        local_110 = param_2;
        std::io::stdio::_print(&local_e0);
      }
      if ((int)local_150 == 2) {
        uVar4 = uucore::features::fsxattr::get_acl_perm_bits_from_xattr(puVar1,param_2);
        if (param_5 != '\0') {
          uVar5 = uucore::features::mode::get_umask();
          param_6 = uVar5 & 0x13f ^ 0x1ff;
        }
        param_6 = param_6 | uVar4;
      }
      lVar6 = chmod(puVar1,param_2,param_6);
    }
    else {
                    /* try { // try from 001b35f7 to 001b3605 has its CatchHandler @ 001b3731 */
      cVar3 = std::path::Path::is_dir(puVar1,param_2);
      if (cVar3 == '\0') {
        lVar6 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar6);
      }
      else {
        core::ptr::drop_in_place<std::io::error::Error>();
        lVar6 = 0;
      }
    }
  }
  return lVar6;
}