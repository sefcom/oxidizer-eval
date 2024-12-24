undefined8 __rustcall uu_head::uu_head(long *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined extraout_DL;
  char *pcVar9;
  undefined auVar10 [16];
  undefined4 local_10c;
  undefined **local_108;
  ulong uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined8 *local_90;
  code *local_88;
  long *local_80;
  ulong local_78;
  undefined local_70 [16];
  long local_60;
  long local_58;
  long local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_60 = param_1[3];
  local_78 = param_1[4];
  local_58 = local_60 + local_78 * 0x18;
  local_80 = param_1;
  lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_60);
  if (lVar7 != 0) {
    cVar1 = *(char *)((long)local_80 + 0x2a);
    cVar2 = *(char *)((long)local_80 + 0x29);
    cVar3 = *(char *)(local_80 + 5);
    local_50 = *local_80;
    local_c0 = local_80[1];
    bVar4 = false;
    do {
      if (cVar1 != '\0') {
LAB_001ba4a6:
        if (local_78 < 2) {
          if (cVar2 == '\0') goto LAB_001ba67b;
        }
        else if (cVar3 != '\0' && cVar2 == '\0') goto LAB_001ba67b;
        if (bVar4) {
          local_108 = &PTR_s_<___:_0022d730;
          uStack_100 = 1;
          local_f8 = (undefined8 **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
          std::io::stdio::_print(&local_108);
        }
        local_108 = &PTR_s___>_standard_input_<___0022d790;
        uStack_100 = 1;
        local_f8 = (undefined8 **)&DAT_00000008;
        local_f0 = 0;
        uStack_e8 = 0;
        std::io::stdio::_print(&local_108);
LAB_001ba67b:
        local_a0 = (undefined8 *)std::io::stdio::stdin();
        local_108 = (undefined **)std::io::stdio::Stdin::lock(&local_a0);
        uStack_100 = CONCAT71(uStack_100._1_7_,extraout_DL) & 0xffffffffffffff01;
                    /* WARNING: Could not recover jumptable at 0x001ba6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)(&DAT_0011dc1c + *(int *)(&DAT_0011dc1c + local_50 * 4)))();
        return uVar8;
      }
      while( true ) {
        pcVar9 = *(char **)(lVar7 + 8);
        uVar8 = *(undefined8 *)(lVar7 + 0x10);
        cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar9,uVar8,"-",1);
        if (cVar5 != '\0') goto LAB_001ba4a6;
        local_b0 = pcVar9;
        local_a8 = uVar8;
        std::fs::File::open(&local_d0,pcVar9,uVar8);
        if ((int)local_d0 == 0) break;
        local_b8 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                   ::map_err_context(local_c8,local_b0,local_a8);
                    /* try { // try from 001ba4e9 to 001ba56f has its CatchHandler @ 001ba988 */
        uucore::mods::error::set_exit_code(1);
        auVar10 = uucore::util_name();
        local_a0 = (undefined8 *)local_70;
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_90 = &local_b8;
        local_88 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_108 = (undefined **)&DAT_0022d760;
        uStack_100 = 3;
        uStack_e8 = 0;
        local_f0 = 2;
        local_f8 = &local_a0;
        local_70 = auVar10;
        std::io::stdio::_eprint(&local_108);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_b8);
        lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_60);
        if (lVar7 == 0) {
          return 0;
        }
      }
      local_10c = local_d0._4_4_;
      if (local_78 < 2) {
        if (cVar2 != '\0') goto LAB_001ba87d;
      }
      else if (cVar3 == '\0' || cVar2 != '\0') {
LAB_001ba87d:
        if (bVar4) {
          local_108 = &PTR_s_<___:_0022d730;
          uStack_100 = 1;
          local_f8 = (undefined8 **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
                    /* try { // try from 001ba8a9 to 001ba90a has its CatchHandler @ 001ba93e */
          std::io::stdio::_print(&local_108);
        }
        local_a0 = &local_b0;
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_108 = &PTR_DAT_0022d740;
        uStack_100 = 2;
        uStack_e8 = 0;
        local_f0 = 1;
        local_f8 = &local_a0;
        std::io::stdio::_print(&local_108);
      }
      lVar7 = head_file(&local_10c,local_80);
      local_d8 = lVar7;
      core::ptr::drop_in_place<std::fs::File>(local_10c);
      if (lVar7 != 0) {
                    /* try { // try from 001ba716 to 001ba7c4 has its CatchHandler @ 001ba979 */
        cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar9,uVar8,"-",1);
        if (cVar5 != '\0') {
          pcVar9 = "standard inputerror reading : Input/output error";
          uVar8 = 0xe;
        }
        local_a0 = &local_b0;
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_108 = (undefined **)&DAT_0022d7a0;
        uStack_100 = 2;
        uStack_e8 = 0;
        local_f0 = 1;
        local_f8 = &local_a0;
        local_b0 = pcVar9;
        local_a8 = uVar8;
        core::option::Option<T>::map_or_else(local_48,&local_108);
        local_f0 = CONCAT44(local_f0._4_4_,1);
        local_f8 = (undefined8 **)local_38;
        local_d0 = ::alloc::boxed::Box<T>::new(&local_108);
        local_c8 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0022d7f8;
        uVar6 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code(local_d0);
                    /* try { // try from 001ba7de to 001ba861 has its CatchHandler @ 001ba965 */
        uucore::mods::error::set_exit_code(uVar6);
        auVar10 = uucore::util_name();
        local_a0 = (undefined8 *)local_70;
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_90 = &local_d0;
        local_88 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_108 = (undefined **)&DAT_0022d760;
        uStack_100 = 3;
        uStack_e8 = 0;
        local_f0 = 2;
        local_f8 = &local_a0;
        local_70 = auVar10;
        std::io::stdio::_eprint(&local_108);
                    /* try { // try from 001ba86c to 001ba870 has its CatchHandler @ 001ba979 */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_d0,local_c8);
      }
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_d8);
      lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_60);
      bVar4 = true;
    } while (lVar7 != 0);
  }
  return 0;
}