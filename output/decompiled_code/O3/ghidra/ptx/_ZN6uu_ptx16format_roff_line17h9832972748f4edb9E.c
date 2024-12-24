/* WARNING: Removing unreachable block (ram,0x002b854b) */

void __rustcall
uu_ptx::format_roff_line
          (undefined4 *param_1,undefined **param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10)

{
  char cVar1;
  undefined uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_RDX;
  undefined *puVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  long local_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined **local_1c8;
  code *pcStack_1c0;
  undefined ***local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  code *local_1a0;
  undefined *local_198;
  code *pcStack_190;
  undefined8 **local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined ***local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 *local_f0;
  long local_e8;
  long local_e0;
  undefined **local_d8;
  code *local_d0;
  undefined ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined ***local_a8;
  code *local_a0;
  undefined *local_90 [3];
  undefined8 *local_78 [3];
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_1e0 = 0;
  uStack_1d8 = 1;
  local_1d0 = 0;
  local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = &PTR_DAT_003ee9c8;
  pcStack_1c0 = (code *)0x1;
  puStack_1a8 = (undefined *)0x0;
  local_1b8 = &local_d8;
  local_1b0 = (code *)0x1;
                    /* try { // try from 002b801b to 002b815e has its CatchHandler @ 002b8548 */
  local_f0 = param_1;
  local_e0 = param_4;
  local_d8 = param_2;
  uVar2 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_1e0,&local_1c8);
  core::result::Result<T,E>::unwrap(uVar2,&DAT_003ee9d8);
  cVar1 = *(char *)((long)param_2 + 0x5a);
  if (cVar1 == '\0') {
    puVar5 = &DAT_003ee9f0;
    lVar6 = 0;
    lVar3 = param_3;
  }
  else {
    lVar3 = 0;
    auVar7 = core::str::traits::
             _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                       (0,param_3,param_5,param_6);
    if (auVar7._0_8_ == 0) {
      puVar5 = &DAT_003eea08;
      local_200 = param_3;
      goto LAB_002b8468;
    }
    auVar8 = core::str::_<impl_str>::trim_start_matches(auVar7._0_8_,auVar7._8_8_,param_9,param_10);
    core::str::_<impl_str>::trim_start_matches(auVar8._0_8_,auVar8._8_8_);
    lVar6 = param_3 - extraout_RDX;
    lVar3 = core::cmp::max_by(auVar7._8_8_,lVar6);
    puVar5 = &DAT_003eea20;
  }
  auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (lVar6,lVar3,param_7,param_8,puVar5);
  local_200 = local_e0;
  auVar8 = core::str::traits::
           _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                     (param_3,local_e0,param_5,param_6);
  local_e8 = auVar8._0_8_;
  if (local_e8 != 0) {
    auVar9 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (local_200,param_8,param_7,param_8,&DAT_003eea50);
    get_output_chunks(&local_1c8,auVar7._0_8_,auVar7._8_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,
                      param_2);
    local_158 = local_1b8;
    local_168 = local_1c8;
    uStack_160 = pcStack_1c0;
    local_138 = local_1a0;
    local_148 = local_1b0;
    uStack_140 = puStack_1a8;
    local_118 = local_188;
    local_128 = local_198;
    uStack_120 = pcStack_190;
    local_f8 = local_170;
    local_108 = (undefined4)local_180;
    uStack_104 = local_180._4_4_;
    uStack_100 = uStack_178;
    uStack_fc = uStack_174;
                    /* try { // try from 002b81e3 to 002b81f2 has its CatchHandler @ 002b8507 */
    format_roff_field(local_90,pcStack_1c0,local_1b8);
                    /* try { // try from 002b8203 to 002b8212 has its CatchHandler @ 002b84ad */
    format_roff_field(local_78,uStack_140,local_138);
                    /* try { // try from 002b8213 to 002b822d has its CatchHandler @ 002b84b2 */
    format_roff_field(local_60,local_e8,auVar8._8_8_);
                    /* try { // try from 002b823e to 002b824d has its CatchHandler @ 002b84b7 */
    format_roff_field(local_48,uStack_120,local_118);
                    /* try { // try from 002b825e to 002b826d has its CatchHandler @ 002b84bc */
    format_roff_field(&local_a8,CONCAT44(uStack_fc,uStack_100),local_f8);
    pcStack_1c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_d8 = &PTR_DAT_003eea68;
    local_d0 = (code *)0x6;
    local_b8 = 0;
    local_c0 = 5;
                    /* try { // try from 002b82ee to 002b830e has its CatchHandler @ 002b84c1 */
    local_1c8 = local_90;
    local_1b8 = (undefined ***)local_78;
    puStack_1a8 = local_60;
    local_198 = local_48;
    local_188 = &local_a8;
    local_c8 = &local_1c8;
    uVar2 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_1e0,&local_d8);
    core::result::Result<T,E>::unwrap(uVar2,&DAT_003eeac8);
                    /* try { // try from 002b830f to 002b831e has its CatchHandler @ 002b84bc */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 002b831f to 002b832b has its CatchHandler @ 002b84b7 */
    core::ptr::drop_in_place<alloc::string::String>(local_48);
                    /* try { // try from 002b832c to 002b8338 has its CatchHandler @ 002b84b2 */
    core::ptr::drop_in_place<alloc::string::String>(local_60);
                    /* try { // try from 002b8339 to 002b8345 has its CatchHandler @ 002b84ad */
    core::ptr::drop_in_place<alloc::string::String>(local_78);
                    /* try { // try from 002b8346 to 002b8385 has its CatchHandler @ 002b8507 */
    core::ptr::drop_in_place<alloc::string::String>(local_90);
    if (cVar1 != '\0' || *(char *)((long)param_2 + 0x59) != '\0') {
      format_roff_field(&local_d8,param_9,param_10);
      local_a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = &PTR_DAT_003eeae0;
      pcStack_1c0 = (code *)0x2;
      puStack_1a8 = (undefined *)0x0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 002b83c9 to 002b83e6 has its CatchHandler @ 002b849b */
      local_1b8 = (undefined ***)&local_a8;
      local_a8 = &local_d8;
      uVar2 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_1e0,&local_1c8);
      core::result::Result<T,E>::unwrap(uVar2,&DAT_003eeb00);
                    /* try { // try from 002b83e7 to 002b83f3 has its CatchHandler @ 002b8507 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
    }
    *(undefined8 *)(local_f0 + 4) = local_1d0;
    *local_f0 = (undefined4)local_1e0;
    local_f0[1] = local_1e0._4_4_;
    local_f0[2] = (undefined4)uStack_1d8;
    local_f0[3] = uStack_1d8._4_4_;
                    /* try { // try from 002b840d to 002b8419 has its CatchHandler @ 002b8494 */
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
                    /* try { // try from 002b841a to 002b8426 has its CatchHandler @ 002b848a */
    core::ptr::drop_in_place<alloc::string::String>(&local_128);
                    /* try { // try from 002b8427 to 002b8433 has its CatchHandler @ 002b8480 */
    core::ptr::drop_in_place<alloc::string::String>(&local_148);
    core::ptr::drop_in_place<alloc::string::String>(&local_168);
    return;
  }
  puVar5 = &DAT_003eea38;
  local_e8 = 0;
  lVar3 = param_3;
LAB_002b8468:
                    /* try { // try from 002b8468 to 002b847f has its CatchHandler @ 002b8548 */
  uVar4 = core::str::slice_error_fail(param_5,param_6,lVar3,local_200,puVar5);
                    /* catch() { ... } // from try @ 002b8427 with catch @ 002b8480 */
  core::ptr::drop_in_place<alloc::string::String>(&local_168);
  _Unwind_Resume(uVar4);
  return;
}