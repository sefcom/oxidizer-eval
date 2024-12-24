undefined  [16] __rustcall uu_wc::wc(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  code ***pppcVar3;
  code ***pppcVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  code **ppcVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined8 *local_1a8;
  code *local_1a0;
  code **local_198;
  code *local_190;
  code *local_188;
  code **local_180;
  long **local_178;
  long **pplStack_170;
  long **pplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long **local_150;
  undefined8 local_148;
  undefined local_140 [16];
  code **local_130;
  code *local_128;
  code **local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long **local_c8;
  long **local_c0;
  undefined local_b8 [16];
  long **local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long **local_90;
  long local_88;
  undefined8 *local_80;
  code *local_78;
  long local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  bVar1 = *(byte *)(param_2 + 0x1d);
  local_100 = 1;
  if (bVar1 != 2) {
    local_100 = compute_number_width(param_1,param_2);
  }
  Inputs::try_iter(&local_178,param_1,param_2);
  if ((code ***)local_178 != (code ***)0x8000000000000003) {
    local_90 = local_150;
    local_a0 = (undefined4)uStack_160;
    uStack_9c = uStack_160._4_4_;
    uStack_98 = (undefined4)uStack_158;
    uStack_94 = uStack_158._4_4_;
    local_b8._0_8_ = local_178;
    local_b8._8_8_ = pplStack_170;
    local_c0 = pplStack_168;
    local_a8 = pplStack_168;
    uVar10 = 0;
    local_f0 = (ulong)bVar1;
    while( true ) {
                    /* try { // try from 001bda73 to 001bda87 has its CatchHandler @ 001be05a */
      Inputs::try_iter::___closure__(&local_70,local_b8);
      if (local_70 == -0x7ffffffffffffffd) break;
      if (local_70 == -0x7ffffffffffffffe) {
        local_1a8 = local_68;
        local_1a0 = local_60;
                    /* try { // try from 001bdac5 to 001bdb4a has its CatchHandler @ 001be047 */
        uVar5 = (**(code **)(local_60 + 0x60))();
        uucore::mods::error::set_exit_code(uVar5);
        auVar11 = uucore::util_name();
        local_128 = _<&T_as_core::fmt::Display>::fmt;
        local_118 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_178 = (long **)&DAT_002321d8;
        pplStack_170 = (long **)0x3;
        uStack_158 = (code ***)0x0;
        uStack_160 = (code ***)0x2;
        pplStack_168 = (long **)&local_130;
        local_130 = (code **)local_e8;
        local_120 = (code **)&local_1a8;
        local_e8 = auVar11;
        std::io::stdio::_eprint(&local_178);
                    /* try { // try from 001bdb54 to 001bdb58 has its CatchHandler @ 001be05a */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_1a8,local_1a0);
LAB_001bda70:
        uVar10 = uVar10 + 1;
      }
      else {
        local_88 = local_70;
        local_80 = local_68;
        local_78 = local_60;
                    /* try { // try from 001bdb78 to 001bdbab has its CatchHandler @ 001be035 */
        word_count_from_input(&local_178,&local_88,param_2);
        if ((code ***)local_178 != (code ***)0x0) {
          if ((int)local_178 == 2) {
            local_188 = (code *)_<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                                ::map_err_context(pplStack_170,&local_88);
                    /* try { // try from 001bdbb1 to 001bdc3a has its CatchHandler @ 001be017 */
            uucore::mods::error::set_exit_code(1);
            auVar11 = uucore::util_name();
            local_1a8 = (undefined8 *)local_140;
            local_1a0 = _<&T_as_core::fmt::Display>::fmt;
            local_198 = &local_188;
            local_190 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_130 = (code **)&DAT_002321d8;
            local_128 = (code *)0x3;
            local_110 = 0;
            local_118 = (code *)0x2;
            local_120 = (code **)&local_1a8;
            local_140 = auVar11;
            std::io::stdio::_eprint(&local_130);
                    /* try { // try from 001bdc40 to 001bdc44 has its CatchHandler @ 001be035 */
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_188);
                    /* try { // try from 001bdc45 to 001bdc4c has its CatchHandler @ 001be05a */
            core::ptr::drop_in_place<uu_wc::Input>(&local_88);
            goto LAB_001bda70;
          }
                    /* try { // try from 001bdc57 to 001bdc5e has its CatchHandler @ 001be035 */
          local_188 = (code *)_<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                              ::map_err_context(local_148,&local_88);
                    /* try { // try from 001bdc64 to 001bdced has its CatchHandler @ 001be026 */
          uucore::mods::error::set_exit_code(1);
          auVar11 = uucore::util_name();
          local_1a8 = (undefined8 *)local_140;
          local_1a0 = _<&T_as_core::fmt::Display>::fmt;
          local_198 = &local_188;
          local_190 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_130 = (code **)&DAT_002321d8;
          local_128 = (code *)0x3;
          local_110 = 0;
          local_118 = (code *)0x2;
          local_120 = (code **)&local_1a8;
          local_140 = auVar11;
          std::io::stdio::_eprint(&local_130);
                    /* try { // try from 001bdcf3 to 001bdd5a has its CatchHandler @ 001be035 */
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_188);
        }
        pppcVar4 = uStack_158;
        local_c8 = local_150;
        local_d8 = (undefined4)uStack_160;
        uStack_d4 = uStack_160._4_4_;
        uStack_d0 = (undefined4)uStack_158;
        uStack_cc = uStack_158._4_4_;
        local_e8._0_8_ = pplStack_170;
        local_e8._8_8_ = pplStack_168;
        uStack_158 = (code ***)local_150;
        pppcVar3 = uStack_160;
        uStack_160 = pppcVar4;
        local_178 = pplStack_170;
        pplStack_170 = pplStack_168;
        pplStack_168 = (long **)pppcVar3;
        _<uu_wc::word_count::WordCount_as_core::ops::arith::AddAssign>::add_assign
                  (&local_58,&local_178);
        if ((int)local_f0 != 2) {
          Input::to_title(&local_1a8,&local_88);
          pcVar8 = (char *)local_1a0;
          ppcVar9 = local_198;
          if ((local_1a8 != (undefined8 *)0x8000000000000000) &&
             (local_1a8 == (undefined8 *)0x8000000000000001)) {
            pcVar8 = (char *)(code *)0x0;
            ppcVar9 = (code **)local_e8;
          }
                    /* try { // try from 001bdd8b to 001bdda8 has its CatchHandler @ 001bdfe9 */
          lVar6 = print_stats(param_2,local_e8,pcVar8,ppcVar9,local_100);
          if (lVar6 != 0) {
            if ((code *)pcVar8 == (code *)0x0) {
              pcVar8 = "<stdin>";
              ppcVar9 = (code **)&DAT_00000007;
            }
                    /* try { // try from 001bddd3 to 001bdddf has its CatchHandler @ 001bdff8 */
            local_188 = (code *)pcVar8;
            local_180 = ppcVar9;
            local_f8 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                       ::map_err_context(lVar6,&local_188);
                    /* try { // try from 001bdde8 to 001bde76 has its CatchHandler @ 001bdffd */
            uucore::mods::error::set_exit_code(1);
            auVar11 = uucore::util_name();
            local_130 = (code **)local_140;
            local_128 = _<&T_as_core::fmt::Display>::fmt;
            local_120 = (code **)&local_f8;
            local_118 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_178 = (long **)&DAT_002321d8;
            pplStack_170 = (long **)0x3;
            uStack_158 = (code ***)0x0;
            uStack_160 = (code ***)0x2;
            pplStack_168 = (long **)&local_130;
            local_140 = auVar11;
            std::io::stdio::_eprint(&local_178);
                    /* try { // try from 001bde7f to 001bde83 has its CatchHandler @ 001bdff8 */
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_f8);
          }
                    /* try { // try from 001bde84 to 001bde8b has its CatchHandler @ 001bdff6 */
          core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&local_1a8);
        }
                    /* try { // try from 001bde99 to 001bdea0 has its CatchHandler @ 001be05a */
        core::ptr::drop_in_place<uu_wc::Input>(&local_88);
        uVar10 = uVar10 + 1;
      }
    }
    core::ptr::
    drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::__closure__>>
              (local_b8);
    iVar2 = (int)local_f0;
    if ((iVar2 - 1U < 2) || ((iVar2 == 0 && (1 < uVar10)))) {
      pcVar8 = (char *)0x0;
      if (iVar2 != 2) {
        pcVar8 = "total: ";
      }
      lVar6 = print_stats(param_2,&local_58,pcVar8,5,local_100);
      if (lVar6 != 0) {
        pcVar7 = (code *)_<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                         ::map_err_context(lVar6);
        local_e8._0_8_ = pcVar7;
                    /* try { // try from 001bdf13 to 001bdf9a has its CatchHandler @ 001bdfd4 */
        uucore::mods::error::set_exit_code(1);
        local_b8 = uucore::util_name();
        local_128 = _<&T_as_core::fmt::Display>::fmt;
        local_118 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_178 = (long **)&DAT_002321d8;
        pplStack_170 = (long **)0x3;
        uStack_158 = (code ***)0x0;
        pplStack_168 = (long **)&local_130;
        uStack_160 = (code ***)0x2;
        local_130 = (code **)local_b8;
        local_120 = (code **)local_e8;
        std::io::stdio::_eprint(&local_178);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_e8._0_8_);
      }
    }
    pplStack_170 = (long **)0x0;
    pplStack_168 = local_c0;
  }
  auVar11._8_8_ = pplStack_168;
  auVar11._0_8_ = pplStack_170;
  return auVar11;
}