void __rustcall
uu_sort::KeyPosition::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined local_11d;
  undefined4 local_11c;
  long local_118;
  undefined local_110 [16];
  undefined local_100;
  char local_f8;
  undefined local_f7;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long *local_b8;
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_11c = param_5;
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x2e,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  auVar1 = core::str::iter::SplitInternal<P>::next(&local_78);
  if (auVar1._0_8_ == 0) {
    new::___closure__(&local_e8,param_2,param_3);
    local_88 = local_d8;
    local_98 = (undefined4)local_e8;
    uStack_94 = local_e8._4_4_;
    uStack_90 = (undefined4)uStack_e0;
    uStack_8c = uStack_e0._4_4_;
  }
  else {
    auVar2 = core::str::iter::SplitInternal<P>::next(&local_78);
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
              (&local_f8,auVar1._0_8_,auVar1._8_8_);
    if (local_f8 == '\0') {
      if (local_f0 == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,"field index can not be 0",0x18);
      }
      else {
        local_e8 = (undefined **)0x8000000000000000;
        uStack_e0 = param_4;
        core::option::Option<T>::map_or(&local_118,auVar2._0_8_,auVar2._8_8_,&local_e8);
        if (local_118 == -0x8000000000000000) {
          param_1[1] = local_f0;
          param_1[2] = local_110._0_8_;
          *(char *)(param_1 + 3) = (char)local_11c;
          *param_1 = 0;
          return;
        }
        param_1[1] = local_118;
        param_1[2] = local_110._0_8_;
        param_1[3] = local_110._8_8_;
      }
      goto LAB_0021ff7d;
    }
    local_11d = local_f7;
    local_118 = 0;
    local_100 = 1;
    local_b8 = &local_118;
    local_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_a8 = &local_11d;
    local_a0 = _<core::num::error::ParseIntError_as_core::fmt::Display>::fmt;
    local_e8 = &PTR_s_failed_to_parse_field_index_002fef18;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_b8;
    local_d0 = 2;
    local_110 = auVar1;
    core::option::Option<T>::map_or_else(&local_98,&local_e8);
  }
  *(undefined4 *)(param_1 + 1) = local_98;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_94;
  *(undefined4 *)(param_1 + 2) = uStack_90;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_8c;
  param_1[3] = local_88;
LAB_0021ff7d:
  *param_1 = 1;
  return;
}