undefined  [16] __rustcall
uu_split::n_chunks_by_byte
          (undefined8 *param_1,undefined8 **param_2,long *param_3,long param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_f0;
  undefined *local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_78;
  undefined local_70;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *local_38;
  
  local_c0 = 0;
  local_b8 = 1;
  uStack_b0 = 0;
  puVar7 = param_1 + 0xe;
                    /* try { // try from 001cd264 to 001cd2d5 has its CatchHandler @ 001cd7b9 */
  local_a8 = param_5;
  auVar9 = get_input_size(puVar7,param_2,&local_c0,*param_1,param_1[1]);
  plVar8 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    local_88 = (undefined4)local_b8;
    uStack_84 = local_b8._4_4_;
    uStack_80 = (undefined4)uStack_b0;
    uStack_7c = uStack_b0._4_4_;
    local_70 = 0;
    local_78 = (long *)param_2;
    if (param_4 == 1) {
      if ((plVar8 == (long *)0x0) || (param_3 == (long *)0x0)) {
LAB_001cd330:
        uVar5 = 0;
        goto LAB_001cd72b;
      }
    }
    else {
      plVar3 = param_3;
      if (plVar8 < param_3) {
        plVar3 = plVar8;
      }
      if (*(char *)((long)param_1 + 0xa1) != '\0') {
        param_3 = plVar3;
      }
      if (param_3 == (long *)0x0) goto LAB_001cd330;
    }
    local_128 = (long *)std::io::stdio::stdout();
    local_148 = std::io::stdio::Stderr::lock(&local_128);
    local_140 = (long *)0x0;
    local_138 = (long *)&DAT_00000008;
    local_130 = (long *)0x0;
    if (((ulong)plVar8 | (ulong)param_3) >> 0x20 == 0) {
      local_f0 = ((ulong)plVar8 & 0xffffffff) / ((ulong)param_3 & 0xffffffff);
      local_e8 = (undefined *)(((ulong)plVar8 & 0xffffffff) % ((ulong)param_3 & 0xffffffff));
    }
    else {
      local_f0 = (ulong)plVar8 / (ulong)param_3;
      local_e8 = (undefined *)((ulong)plVar8 % (ulong)param_3);
    }
    local_e0 = param_3;
    if (param_4 != 1) {
                    /* try { // try from 001cd35b to 001cd36d has its CatchHandler @ 001cd780 */
      _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::init
                (&local_128,param_3,param_1,0);
      param_2 = local_118;
      plVar3 = uStack_120;
      auVar9._8_8_ = local_118;
      auVar9._0_8_ = uStack_120;
      local_d0 = local_128;
      if (local_128 == (long *)0x8000000000000000) goto LAB_001cd717;
                    /* try { // try from 001cd398 to 001cd3a1 has its CatchHandler @ 001cd762 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_140);
      local_140 = local_d0;
      local_138 = plVar3;
      local_130 = (long *)param_2;
    }
    local_a0 = 1;
    local_90 = 0;
    local_98 = local_e0;
    auVar9 = _<core::ops::range::RangeInclusive<T>as_core::iter::range::RangeInclusiveIteratorImpl>
             ::spec_next(&local_a0);
    plVar3 = auVar9._8_8_;
    if (auVar9._0_8_ != 0) {
      puVar2 = puVar7;
      if (param_4 == 0) {
        do {
          local_c8 = puVar2;
          local_160 = 0;
          local_158 = 1;
          local_150 = 0;
          if (plVar8 == (long *)0x0) goto LAB_001cd6ce;
          uStack_120 = (long *)(local_f0 + ((undefined *)((long)plVar3 + -1) < local_e8));
          if (plVar3 == local_e0) {
            uStack_120 = plVar8;
          }
          local_128 = (long *)&local_88;
                    /* try { // try from 001cd517 to 001cd549 has its CatchHandler @ 001cd796 */
          auVar9 = std::io::default_read_to_end(&local_128,&local_160,0);
          lVar6 = auVar9._8_8_;
          if (auVar9._0_8_ != 0) goto LAB_001cd5de;
          _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::get_writer
                    (&local_128,&local_140,(undefined *)((long)plVar3 + -1),param_1);
          plVar3 = uStack_120;
          uVar1 = local_150;
          auVar9._8_8_ = uStack_120;
          auVar9._0_8_ = local_128;
          if (local_128 != (long *)0x0) goto LAB_001cd70d;
          lVar4 = uStack_120[2];
          if (local_150 < (ulong)(*uStack_120 - lVar4)) {
            (*(code *)PTR_memcpy_0024d5a8)(uStack_120[1] + lVar4,local_158,local_150);
            plVar3[2] = lVar4 + uVar1;
          }
          else {
                    /* try { // try from 001cd597 to 001cd5a1 has its CatchHandler @ 001cd796 */
            lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                              (uStack_120,local_158,local_150);
            if (lVar4 != 0) {
                    /* try { // try from 001cd6fe to 001cd706 has its CatchHandler @ 001cd77e */
              auVar9 = uucore::mods::error::
                       _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                       ::from(lVar4);
              goto LAB_001cd70d;
            }
          }
                    /* try { // try from 001cd5b3 to 001cd5bc has its CatchHandler @ 001cd78a */
          puVar7 = local_c8;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_160);
          plVar8 = (long *)((long)plVar8 - lVar6);
          auVar9 = _<core::ops::range::RangeInclusive<T>as_core::iter::range::RangeInclusiveIteratorImpl>
                   ::spec_next(&local_a0);
          plVar3 = auVar9._8_8_;
          param_2 = (undefined8 **)plVar3;
          puVar2 = local_c8;
        } while (auVar9._0_8_ != 0);
      }
      else {
        do {
          local_160 = 0;
          local_158 = 1;
          local_150 = 0;
          if (plVar8 == (long *)0x0) goto LAB_001cd6ce;
          uStack_120 = (long *)(local_f0 + ((undefined *)((long)plVar3 + -1) < local_e8));
          if (plVar3 == local_e0) {
            uStack_120 = plVar8;
          }
          local_128 = (long *)&local_88;
                    /* try { // try from 001cd467 to 001cd473 has its CatchHandler @ 001cd794 */
          auVar9 = std::io::default_read_to_end(&local_128,&local_160,0);
          lVar6 = auVar9._8_8_;
          if (auVar9._0_8_ != 0) goto LAB_001cd5de;
          if (plVar3 == local_a8) {
            lVar6 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (&local_148,local_158,local_150);
            if (lVar6 == 0) goto LAB_001cd6ce;
            auVar9 = uucore::mods::error::
                     _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                     ::from(lVar6);
            goto LAB_001cd70d;
          }
                    /* try { // try from 001cd48e to 001cd495 has its CatchHandler @ 001cd78f */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_160);
          plVar8 = (long *)((long)plVar8 - lVar6);
          auVar9 = _<core::ops::range::RangeInclusive<T>as_core::iter::range::RangeInclusiveIteratorImpl>
                   ::spec_next(&local_a0);
          plVar3 = auVar9._8_8_;
          param_2 = (undefined8 **)plVar3;
        } while (auVar9._0_8_ != 0);
      }
    }
    goto LAB_001cd6d8;
  }
  auVar9 = uucore::mods::error::
           _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
           ::from(plVar8);
  param_2 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
  goto LAB_001cd72b;
LAB_001cd6ce:
                    /* try { // try from 001cd6ce to 001cd6d7 has its CatchHandler @ 001cd780 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_160);
  param_2 = (undefined8 **)plVar3;
LAB_001cd6d8:
                    /* try { // try from 001cd6d8 to 001cd6e1 has its CatchHandler @ 001cd785 */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_140);
                    /* try { // try from 001cd6e7 to 001cd6eb has its CatchHandler @ 001cd7b9 */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_148);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
  uVar5 = 0;
  goto LAB_001cd738;
LAB_001cd5de:
  local_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_58 = &local_d8;
  local_50 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
  local_128 = (long *)&DAT_00248aa0;
  uStack_120 = (long *)0x2;
  local_108 = 0;
  local_118 = &local_68;
  local_110 = 2;
                    /* try { // try from 001cd650 to 001cd68f has its CatchHandler @ 001cd750 */
  local_d8 = lVar6;
  local_68 = puVar7;
  core::option::Option<T>::map_or_else(&local_48,0,&local_128);
  local_110 = CONCAT44(local_110._4_4_,1);
  local_128 = (long *)CONCAT44(uStack_44,local_48);
  uStack_120 = (long *)CONCAT44(uStack_3c,uStack_40);
  local_118 = (undefined8 **)local_38;
  uVar5 = ::alloc::boxed::Box<T>::new(&local_128);
                    /* try { // try from 001cd69b to 001cd6cb has its CatchHandler @ 001cd77e */
  core::ptr::drop_in_place<std::io::error::Error>(local_d8);
  auVar9._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248938;
  auVar9._0_8_ = uVar5;
LAB_001cd70d:
                    /* try { // try from 001cd70d to 001cd716 has its CatchHandler @ 001cd780 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_160);
LAB_001cd717:
                    /* try { // try from 001cd717 to 001cd720 has its CatchHandler @ 001cd785 */
  param_2 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_140);
                    /* try { // try from 001cd726 to 001cd72a has its CatchHandler @ 001cd7b9 */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_148);
LAB_001cd72b:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
LAB_001cd738:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = uVar5;
  return auVar10;
}