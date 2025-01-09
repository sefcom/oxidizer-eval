void __rustcall
uu_numfmt::format::format_and_print_delimited
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long *local_198;
  code *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(long *)(param_4 + 0x70) == -0x8000000000000000) {
    uVar6 = core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_format_rs_00235bb0);
                    /* catch() { ... } // from try @ 001c4c09 with catch @ 001c4cab */
                    /* try { // try from 001c4cae to 001c4cba has its CatchHandler @ 001c4cc3 */
    core::ptr::drop_in_place<alloc::string::String>(&local_e8);
    _Unwind_Resume(uVar6);
    return;
  }
  local_1b8 = param_4 + 0x70;
  _<&alloc::string::String_as_core::str::pattern::Pattern>::into_searcher
            (&local_168,local_1b8,param_2,param_3);
  local_100 = 0;
  local_f0 = 1;
  local_f8 = param_3;
  core::iter::traits::iterator::Iterator::zip(&local_d0,&local_168);
  _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::next
            (&local_1b0,&local_d0);
  if (local_1a8 != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x60);
    uVar1 = *(undefined8 *)(param_4 + 0x68);
    do {
      uVar4 = local_1b0;
      local_1e8 = local_1a8;
      local_1e0 = local_1a0;
      cVar5 = uucore::features::ranges::contain(uVar6,uVar1,local_1b0);
      if (1 < uVar4) {
        local_198 = &local_1b8;
        local_190 = _<&T_as_core::fmt::Display>::fmt;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        std::io::stdio::_print(&local_168);
      }
      if (cVar5 == '\0') {
        local_198 = &local_1e8;
        local_190 = _<&T_as_core::fmt::Display>::fmt;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_198;
        std::io::stdio::_print(&local_168);
      }
      else {
        auVar7 = core::str::_<impl_str>::trim_start_matches(local_1e8,local_1e0);
        format_string(&local_198,auVar7._0_8_,auVar7._8_8_,param_4,0);
        local_1d8 = local_190;
        pcVar2 = local_1d8;
        uStack_1d0 = uStack_188;
        uVar3 = uStack_1d0;
        local_1c8 = local_180;
        if (local_198 != (long *)0x0) {
          param_1[2] = local_180;
          *param_1 = local_190;
          param_1[1] = uStack_188;
          return;
        }
        local_d8 = local_180;
        local_1d8._0_4_ = SUB84(local_190,0);
        local_1d8._4_4_ = (undefined4)((ulong)local_190 >> 0x20);
        uStack_1d0._0_4_ = (undefined4)uStack_188;
        uStack_1d0._4_4_ = (undefined4)((ulong)uStack_188 >> 0x20);
        local_e8._0_4_ = (undefined4)local_1d8;
        local_e8._4_4_ = local_1d8._4_4_;
        uStack_e0 = (undefined4)uStack_1d0;
        uStack_dc = uStack_1d0._4_4_;
        local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_168 = &DAT_00116000;
        local_160 = 1;
        local_148 = 0;
        local_158 = &local_178;
        local_150 = 1;
                    /* try { // try from 001c4c09 to 001c4c16 has its CatchHandler @ 001c4cab */
        local_1d8 = pcVar2;
        uStack_1d0 = uVar3;
        local_178 = &local_e8;
        std::io::stdio::_print(&local_168);
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
      }
      _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::next
                (&local_1b0,&local_d0);
    } while (local_1a8 != 0);
  }
  local_d0 = &PTR_DAT_00235ba0;
  local_c8 = 1;
  local_c0 = 8;
  local_b8 = 0;
  uStack_b0 = 0;
  std::io::stdio::_print(&local_d0);
  *param_1 = 0x8000000000000000;
  return;
}