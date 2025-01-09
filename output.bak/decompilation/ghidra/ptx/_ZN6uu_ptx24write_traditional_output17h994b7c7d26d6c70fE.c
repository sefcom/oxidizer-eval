undefined  [16] __rustcall
uu_ptx::write_traditional_output
          (long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined auVar12 [16];
  undefined local_138 [8];
  undefined4 local_130;
  undefined4 uStack_128;
  undefined *local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f0;
  code *local_e8;
  ulong local_e0 [3];
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined local_98 [24];
  undefined4 local_80 [2];
  undefined4 uStack_78;
  undefined local_60 [48];
  
  cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_4,param_5,&DAT_0015ec5a,1);
  if (cVar6 == '\0') {
    std::fs::File::create(local_e0,param_4,param_5);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_120,local_e0);
    auVar4._8_8_ = local_118;
    auVar4._0_8_ = local_120;
    if (local_120 != (undefined *)0x0) {
      return auVar4;
    }
    uVar8 = ::alloc::boxed::Box<T>::new(local_118 & 0xffffffff);
    ppuVar11 = &PTR_drop_in_place<std_fs_File>_003ee270;
  }
  else {
    uVar8 = std::io::stdio::stdout();
    uVar8 = ::alloc::boxed::Box<T>::new(uVar8);
    ppuVar11 = (undefined **)&DAT_003ee2c0;
  }
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_60,0x2000,uVar8,ppuVar11);
                    /* try { // try from 002b8b3f to 002b8b68 has its CatchHandler @ 002b8e78 */
  regex::regex::string::Regex::new
            (local_e0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  core::result::Result<T,E>::unwrap(local_80,local_e0,&PTR_s_src_uu_ptx_src_ptx_rs_003ee310);
  local_e0[2] = *param_3;
  local_c8 = param_3[1];
  local_a0 = local_e0[2];
  if (local_e0[2] != 0) {
    local_a0 = param_3[2];
  }
  local_e0[0] = (ulong)(local_e0[2] != 0);
  local_e0[1] = 0;
  local_b8 = 0;
  cVar6 = *(char *)(param_1 + 0x5d);
  uVar2 = *(undefined *)(param_1 + 0x59);
  uVar7 = (uint)*(byte *)(param_1 + 0x5a);
  ppuVar11 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee370;
  local_c0 = local_e0[0];
  local_b0 = local_e0[2];
  local_a8 = local_c8;
  do {
                    /* try { // try from 002b8c00 to 002b8c76 has its CatchHandler @ 002b8ea2 */
    lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(local_e0);
    if (lVar9 == 0) {
                    /* try { // try from 002b8dae to 002b8dba has its CatchHandler @ 002b8e78 */
      core::ptr::drop_in_place<regex::regex::string::Regex>(local_80);
      core::ptr::
      drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
                (local_60);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_4;
      return auVar5 << 0x40;
    }
    lVar10 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_2,lVar9 + 0x18);
    if (lVar10 == 0) {
      core::option::expect_failed(&DAT_0015ecf6,0x18,&PTR_s_src_uu_ptx_src_ptx_rs_003ee328);
LAB_002b8e6a:
                    /* try { // try from 002b8e6a to 002b8e77 has its CatchHandler @ 002b8e7d */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(param_4);
    }
    param_4 = *(ulong *)(lVar9 + 0x38);
    if (*(ulong *)(lVar10 + 0x28) <= param_4) {
                    /* try { // try from 002b8e33 to 002b8e5d has its CatchHandler @ 002b8ea0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (param_4,*(ulong *)(lVar10 + 0x28),&PTR_s_src_uu_ptx_src_ptx_rs_003ee340);
    }
    lVar3 = *(long *)(lVar10 + 0x20);
    get_reference(local_138,uVar2,uVar7,lVar9,*(undefined8 *)(lVar3 + 8 + param_4 * 0x18),
                  *(undefined8 *)(lVar3 + 0x10 + param_4 * 0x18),local_80[0],uStack_78);
    lVar3 = lVar3 + param_4 * 0x18;
    if (cVar6 == '\x01') {
      if (*(ulong *)(lVar10 + 0x40) <= param_4) goto LAB_002b8e6a;
      puVar1 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 8 + param_4 * 0x18);
      format_roff_line(local_98,param_1,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48),
                       *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),*puVar1,puVar1[2],
                       local_130,uStack_128);
    }
    else {
      if (cVar6 != '\x02') {
        local_120 = (undefined *)((ulong)local_120 & 0xffffffffffffff00);
        uVar8 = ::alloc::boxed::Box<T>::new(&local_120);
        auVar12._8_8_ = &DAT_003edc08;
        auVar12._0_8_ = uVar8;
        goto LAB_002b8df7;
      }
      if (*(ulong *)(lVar10 + 0x40) <= param_4) goto LAB_002b8e6a;
      puVar1 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 8 + param_4 * 0x18);
                    /* try { // try from 002b8cb5 to 002b8d29 has its CatchHandler @ 002b8e7f */
      format_tex_line(local_98,param_1,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48),
                      *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),*puVar1,puVar1[2],
                      local_130,uStack_128,param_1,uVar7,ppuVar11);
    }
    local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_120 = &DAT_003ee250;
    local_118 = 2;
    local_100 = 0;
    local_110 = &local_f0;
    local_108 = 1;
                    /* try { // try from 002b8d75 to 002b8d8e has its CatchHandler @ 002b8e84 */
    local_f0 = local_98;
    uVar8 = std::io::Write::write_fmt(local_60,&local_120);
    auVar12 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
              ::map_err_context(uVar8);
    if (auVar12._0_8_ != 0) {
                    /* try { // try from 002b8dcc to 002b8dec has its CatchHandler @ 002b8e7d */
      core::ptr::drop_in_place<alloc::string::String>(local_98);
LAB_002b8df7:
                    /* try { // try from 002b8df7 to 002b8e00 has its CatchHandler @ 002b8ea0 */
      core::ptr::drop_in_place<alloc::string::String>(local_138);
                    /* try { // try from 002b8e01 to 002b8e0d has its CatchHandler @ 002b8e78 */
      core::ptr::drop_in_place<regex::regex::string::Regex>(local_80);
      core::ptr::
      drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
                (local_60);
      return auVar12;
    }
                    /* try { // try from 002b8d97 to 002b8d9e has its CatchHandler @ 002b8e7f */
    core::ptr::drop_in_place<alloc::string::String>(local_98);
                    /* try { // try from 002b8d9f to 002b8da8 has its CatchHandler @ 002b8ea2 */
    core::ptr::drop_in_place<alloc::string::String>(local_138);
  } while( true );
}