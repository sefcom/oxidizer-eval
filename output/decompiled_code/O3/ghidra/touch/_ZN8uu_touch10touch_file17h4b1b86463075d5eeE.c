undefined  [16] __rustcall
uu_touch::touch_file
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined **param_4,undefined8 param_5
          ,ulong param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int extraout_EDX;
  undefined auVar7 [16];
  undefined8 local_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_150 [16];
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined local_120 [8];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  param_6 = param_6 & 0xffffffff;
  local_100 = param_5;
  if (param_3 == 0) {
    local_e0 = param_1;
    local_d8 = param_2;
    _<T_as_alloc::string::ToString>::to_string(local_120,&local_e0);
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_120,&DAT_001753cf,1);
  }
  cVar1 = *(char *)((long)param_4 + 0x31);
  if (cVar1 == '\0') {
    std::fs::metadata(&local_e0,param_1,param_2);
  }
  else {
                    /* try { // try from 002c2255 to 002c227c has its CatchHandler @ 002c26a1 */
    std::fs::symlink_metadata(&local_e0,param_1,param_2);
  }
  uVar6 = local_d8;
  if ((int)local_e0 != 2) {
LAB_002c2533:
                    /* try { // try from 002c253f to 002c2569 has its CatchHandler @ 002c269f */
    auVar7 = update_times(param_1,param_2,param_3 & 0xff,cVar1,*(undefined *)((long)param_4 + 0x33),
                          local_100,param_6,param_7,param_8);
    goto LAB_002c2570;
  }
  local_108 = param_6;
  cVar3 = std::io::error::Error::kind(local_d8);
  if (cVar3 != '\0') {
                    /* try { // try from 002c22a7 to 002c22b6 has its CatchHandler @ 002c269d */
    uVar6 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
            ::map_err_context(uVar6,local_120);
    auVar7._8_8_ = &PTR_drop_in_place<uucore_mods_error_UIoError>_00411028;
    auVar7._0_8_ = uVar6;
    goto LAB_002c2570;
  }
  local_160 = uVar6;
  if (*(char *)(param_4 + 6) == '\0') {
    if (cVar1 == '\0') {
      std::fs::File::create(&local_1a8,param_1,param_2);
      param_6 = local_108;
      ppuVar2 = local_1a0;
      if ((int)local_1a8 == 0) {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>
                  (&local_1a8);
        cVar3 = _<uu_touch::Source_as_core::cmp::PartialEq>::eq(param_4[3]);
        if ((cVar3 == '\0') || (*param_4 != (undefined *)0x8000000000000000)) {
                    /* try { // try from 002c2529 to 002c2532 has its CatchHandler @ 002c269b */
          core::ptr::drop_in_place<std::io::error::Error>(local_160);
          goto LAB_002c2533;
        }
        goto LAB_002c22cf;
      }
                    /* try { // try from 002c23cb to 002c244e has its CatchHandler @ 002c266c */
      std::sys::os_str::bytes::Slice::to_string_lossy(&local_198,param_1,param_2);
      local_138 = (code *)((long)local_188 + (long)uStack_190);
      local_140 = uStack_190;
      iVar4 = core::str::validations::next_code_point_reverse(&local_140);
      if ((iVar4 == 0) || (extraout_EDX == 0x110000)) {
                    /* try { // try from 002c2595 to 002c259e has its CatchHandler @ 002c266c */
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_198);
LAB_002c259f:
                    /* try { // try from 002c259f to 002c25ac has its CatchHandler @ 002c266a */
        uVar6 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                ::map_err_context(ppuVar2,param_1,param_2);
        if (*(char *)((long)param_4 + 0x32) == '\0') {
          local_158 = uVar6;
                    /* try { // try from 002c25c0 to 002c2640 has its CatchHandler @ 002c265b */
          uucore::mods::error::set_exit_code(1);
          local_150 = uucore::util_name();
          local_140 = (undefined8 *)local_150;
          local_138 = _<&T_as_core::fmt::Display>::fmt;
          uStack_130 = &local_158;
          local_128 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_198 = (undefined **)&DAT_00411098;
          uStack_190 = (undefined8 *)0x3;
          local_178 = 0;
          local_180 = 2;
          local_188 = &local_140;
          std::io::stdio::_eprint(&local_198);
                    /* try { // try from 002c2646 to 002c264a has its CatchHandler @ 002c266a */
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_158);
          uVar6 = 0;
        }
      }
      else {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_198);
        if (extraout_EDX != 0x2f) goto LAB_002c259f;
        uVar6 = std::io::error::Error::new(0x27,&DAT_001753d0,0x19);
        uVar6 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                ::map_err_context(uVar6,local_120);
                    /* try { // try from 002c244f to 002c2459 has its CatchHandler @ 002c2659 */
        core::ptr::drop_in_place<std::io::error::Error>(ppuVar2);
      }
      param_4 = &PTR_drop_in_place<uucore_mods_error_UIoError>_00411028;
    }
    else {
      local_140 = (undefined8 *)0x0;
      local_138 = (code *)CONCAT44(uStack_114,local_118);
      uStack_130 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
      local_128 = (code *)CONCAT71(local_128._1_7_,1);
      local_150._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_198 = &PTR_DAT_004110c8;
      uStack_190 = (undefined8 *)0x2;
      local_178 = 0;
      local_180 = 1;
                    /* try { // try from 002c234e to 002c23b3 has its CatchHandler @ 002c268c */
      local_188 = (undefined8 **)local_150;
      local_150._0_8_ = &local_140;
      core::option::Option<T>::map_or_else(&local_f8,&local_198);
      local_180 = CONCAT44(local_180._4_4_,1);
      local_198 = (undefined **)CONCAT44(uStack_f4,local_f8);
      uStack_190 = (undefined8 *)CONCAT44(uStack_ec,uStack_f0);
      local_188 = local_e8;
      uVar6 = ::alloc::boxed::Box<T>::new(&local_198);
      if (*(char *)((long)param_4 + 0x32) == '\0') {
        local_1a0 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00411120;
        local_1a8 = uVar6;
        uVar5 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code(uVar6);
                    /* try { // try from 002c2477 to 002c24ed has its CatchHandler @ 002c2679 */
        uucore::mods::error::set_exit_code(uVar5);
        local_150 = uucore::util_name();
        local_138 = _<&T_as_core::fmt::Display>::fmt;
        local_128 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_198 = (undefined **)&DAT_00411098;
        uStack_190 = (undefined8 *)0x3;
        local_178 = 0;
        local_180 = 2;
        local_188 = &local_140;
        local_140 = (undefined8 *)local_150;
        uStack_130 = &local_1a8;
        std::io::stdio::_eprint(&local_198);
                    /* try { // try from 002c24f7 to 002c2508 has its CatchHandler @ 002c268c */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_1a8,local_1a0);
        goto LAB_002c22cf;
      }
      param_4 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00411120;
    }
  }
  else {
LAB_002c22cf:
    uVar6 = 0;
  }
                    /* try { // try from 002c22d1 to 002c22da has its CatchHandler @ 002c269b */
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = uVar6;
  core::ptr::drop_in_place<std::io::error::Error>(local_160);
LAB_002c2570:
  core::ptr::drop_in_place<alloc::string::String>(local_120);
  return auVar7;
}