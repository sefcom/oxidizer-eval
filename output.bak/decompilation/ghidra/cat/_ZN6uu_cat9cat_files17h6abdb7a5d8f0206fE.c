undefined  [16] __rustcall uu_cat::cat_files(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined auVar5 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 *local_238;
  code *local_230;
  undefined local_220 [16];
  undefined *local_210;
  undefined local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined local_1de;
  long local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined local_198 [16];
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *local_e8;
  undefined local_e0 [24];
  undefined *local_c8;
  undefined local_c0 [144];
  
  local_220._0_8_ = std::io::stdio::stdout();
  uucore::features::fs::FileInformation::from_file(local_198,local_220);
  if ((undefined **)local_198._0_8_ == (undefined **)0x0) {
    (*(code *)PTR_memcpy_0021c170)(local_c0,local_198 + 8,0x90);
    local_c8 = &DAT_00000001;
  }
  else {
    local_c8 = (undefined *)0x0;
    core::ptr::
    drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>
              (local_198);
  }
  local_1e8 = 1;
  local_1e0 = 1;
  local_1de = 0;
  local_200 = 0;
  local_1f8 = 8;
  local_1f0 = 0;
  local_1d0 = param_1 + param_2 * 0x18;
  local_1d8 = param_1;
  lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_1d8);
  if (lVar2 != 0) {
    do {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      puVar1 = *(undefined **)(lVar2 + 0x10);
      puVar4 = local_c8;
      if (local_c8 != (undefined *)0x0) {
        puVar4 = local_c0;
      }
                    /* try { // try from 001af120 to 001af13a has its CatchHandler @ 001af399 */
      cat_path(&local_1b0,uVar3,puVar1,param_3,&local_1e8,puVar4);
      if (CONCAT44(uStack_1ac,local_1b0) != -0x7ffffffffffffffa) {
        local_1b8 = local_1a0;
        local_1c8 = local_1b0;
        uStack_1c4 = uStack_1ac;
        uStack_1c0 = uStack_1a8;
        uStack_1bc = uStack_1a4;
        local_220._0_8_ = 0;
        local_208 = 0;
        local_248 = local_220;
        uStack_240 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_230 = _<uu_cat::CatError_as_core::fmt::Display>::fmt;
        local_198._0_8_ = &DAT_002185e8;
        local_198._8_8_ = 2;
        uStack_178 = 0;
        local_180 = 2;
                    /* try { // try from 001af1eb to 001af207 has its CatchHandler @ 001af387 */
        local_238 = &local_1c8;
        local_220._8_8_ = uVar3;
        local_210 = puVar1;
        local_188 = (undefined *)&local_248;
        core::option::Option<T>::map_or_else(local_e0,local_198);
        ::alloc::vec::Vec<T,A>::push(&local_200,local_e0);
                    /* try { // try from 001af208 to 001af20f has its CatchHandler @ 001af399 */
        core::ptr::drop_in_place<uu_cat::CatError>(&local_1c8);
      }
      lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_1d8);
    } while (lVar2 != 0);
    if (local_1e0._1_1_ != '\0') {
      local_198._0_8_ = &PTR_s__00218608;
      local_198._8_8_ = 1;
      local_188 = &DAT_00000008;
      local_180 = 0;
      uStack_178 = 0;
                    /* try { // try from 001af24e to 001af2df has its CatchHandler @ 001af385 */
      std::io::stdio::_print(local_198);
    }
  }
  if (local_1f0 == 0) {
    uVar3 = 0;
  }
  else {
    local_220 = uucore::util_name();
    local_248 = local_220;
    uStack_240 = _<&T_as_core::fmt::Display>::fmt;
    local_198._0_8_ = &PTR_s__00218618;
    local_198._8_8_ = 2;
    uStack_178 = 0;
    local_180 = 1;
    local_188 = (undefined *)&local_248;
    core::option::Option<T>::map_or_else(&local_f8,local_198);
    lVar2 = local_1f0;
    local_248 = (undefined *)CONCAT44(uStack_f4,local_f8);
    uStack_240 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_238 = local_e8;
                    /* try { // try from 001af308 to 001af342 has its CatchHandler @ 001af378 */
    ::alloc::str::join_generic_copy(local_220,local_1f8,local_1f0,uStack_240);
    local_188 = local_210;
    local_180 = CONCAT44(local_180._4_4_,(int)lVar2);
    local_198 = local_220;
    uVar3 = ::alloc::boxed::Box<T>::new(local_198);
                    /* try { // try from 001af343 to 001af34d has its CatchHandler @ 001af385 */
    core::ptr::drop_in_place<alloc::string::String>(&local_248);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_200);
  auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00218670;
  auVar5._0_8_ = uVar3;
  return auVar5;
}