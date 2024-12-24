undefined  [16] __rustcall uu_unexpand::unexpand(long param_1)

{
  undefined uVar1;
  undefined uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  undefined auVar10 [16];
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined local_128 [16];
  undefined8 *local_118;
  code *local_110;
  undefined8 *local_108;
  code *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined local_88 [40];
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  long lVar8;
  
  uVar6 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_88,0x2000,uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  local_150 = 0;
  local_148 = 1;
  local_140 = 0;
  if (uVar4 < 2) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(ulong *)(lVar3 + -8 + uVar4 * 8);
  }
  local_138 = *(long *)(param_1 + 8);
  local_130 = local_138 + *(long *)(param_1 + 0x10) * 0x18;
  lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_138);
  if (lVar7 != 0) {
    uVar1 = *(undefined *)(param_1 + 0x30);
    uVar2 = *(undefined *)(param_1 + 0x31);
    do {
                    /* try { // try from 001b3f56 to 001b3f62 has its CatchHandler @ 001b417a */
      open(&local_c0,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (CONCAT44(uStack_bc,local_c0) == 0) {
        local_160 = CONCAT44(uStack_b4,uStack_b8);
        local_158 = local_b0;
                    /* try { // try from 001b402a to 001b40be has its CatchHandler @ 001b4166 */
        uVar5 = (**(code **)(local_b0 + 0x60))();
        uucore::mods::error::set_exit_code(uVar5);
        auVar10 = uucore::util_name();
        local_118 = (undefined8 *)local_128;
        local_110 = _<&T_as_core::fmt::Display>::fmt;
        local_108 = &local_160;
        local_100 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_60 = &DAT_0021ed30;
        local_58 = 3;
        local_40 = 0;
        local_50 = &local_118;
        local_48 = 2;
        local_128 = auVar10;
        std::io::stdio::_eprint(&local_60);
                    /* try { // try from 001b40c9 to 001b40cd has its CatchHandler @ 001b417a */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_160,local_158);
      }
      else {
        local_c8 = local_90;
        local_d8 = local_a0;
        uStack_d0 = uStack_98;
        local_e8 = local_b0;
        uStack_e0 = uStack_a8;
        local_f8 = local_c0;
        uStack_f4 = uStack_bc;
        uStack_f0 = uStack_b8;
        uStack_ec = uStack_b4;
        while( true ) {
                    /* try { // try from 001b3fb0 to 001b4002 has its CatchHandler @ 001b417f */
          auVar10 = std::io::read_until(&local_f8,10,&local_150);
          auVar10._8_8_ = auVar10._8_8_;
          lVar8 = auVar10._0_8_;
          lVar7 = auVar10._8_8_;
          if (lVar8 != 0) {
            lVar7 = local_140;
          }
          if (lVar7 == 0) break;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                    (lVar8,auVar10._8_8_);
          lVar7 = unexpand_line(&local_150,local_88,uVar1,uVar2,uVar9,lVar3,uVar4);
          if (lVar7 != 0) {
                    /* try { // try from 001b4113 to 001b411b has its CatchHandler @ 001b415d */
            auVar10 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(lVar7);
                    /* try { // try from 001b411c to 001b412b has its CatchHandler @ 001b415b */
            core::ptr::
            drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                      (&local_f8);
                    /* try { // try from 001b412c to 001b4135 has its CatchHandler @ 001b4161 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_150);
            core::ptr::
            drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(local_88)
            ;
            return auVar10;
          }
        }
                    /* try { // try from 001b40d0 to 001b40da has its CatchHandler @ 001b415f */
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                  (lVar8,auVar10._8_8_);
                    /* try { // try from 001b40db to 001b40e4 has its CatchHandler @ 001b417a */
        core::ptr::
        drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                  (&local_f8);
      }
      lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_138);
    } while (lVar7 != 0);
  }
                    /* try { // try from 001b40f8 to 001b4101 has its CatchHandler @ 001b4161 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_150);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
            (local_88);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar9;
  return auVar10 << 0x40;
}