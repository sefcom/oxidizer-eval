/* WARNING: Type propagation algorithm not settling */

undefined  [16] __rustcall uu_expand::expand(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_R13;
  undefined auVar8 [16];
  long *local_138;
  code *pcStack_130;
  undefined8 **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d0 [5];
  long local_a8;
  undefined local_a0 [12];
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined local_58 [40];
  long lVar7;
  
  uVar4 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_58,0x2000,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_d0[1] = 0;
  local_d0[2] = 1;
  local_d0[3] = 0;
  local_d0[4] = *(long *)(param_1 + 8);
  local_a8 = local_d0[4] + *(long *)(param_1 + 0x10) * 0x18;
  lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(local_d0 + 4)
  ;
  if (lVar5 != 0) {
    do {
      local_d0[0] = lVar5;
                    /* try { // try from 001b3053 to 001b3149 has its CatchHandler @ 001b3374 */
      cVar3 = std::path::Path::is_dir(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      if (cVar3 == '\0') {
        open(local_a0,*(undefined8 *)(local_d0[0] + 8),*(undefined8 *)(local_d0[0] + 0x10));
        if ((long *)local_a0._0_8_ == (long *)0x0) {
          local_e8 = local_a0._8_4_;
          uStack_e4 = uStack_94;
          uStack_e0 = local_90;
          uStack_dc = uStack_8c;
                    /* try { // try from 001b320c to 001b32ca has its CatchHandler @ 001b3360 */
          local_f8 = uucore::util_name();
          local_68 = (undefined8 *)local_f8;
          local_60 = _<&T_as_core::fmt::Display>::fmt;
          local_138 = (long *)&DAT_0021cfa8;
          pcStack_130 = (code *)0x2;
          local_118 = 0;
          local_128 = &local_68;
          uStack_120 = 1;
          std::io::stdio::_eprint(&local_138);
          local_f8._0_8_ = &local_e8;
          local_f8._8_8_ = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_138 = (long *)&DAT_0021cfe8;
          pcStack_130 = (code *)0x2;
          local_118 = 0;
          local_128 = (undefined8 **)local_f8;
          uStack_120 = 1;
          std::io::stdio::_eprint(&local_138);
          uucore::mods::error::set_exit_code(1);
                    /* try { // try from 001b32d5 to 001b32d9 has its CatchHandler @ 001b3374 */
          core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,uStack_e0));
        }
        else {
          local_108 = local_70;
          local_128 = (undefined8 **)CONCAT44(uStack_8c,local_90);
          local_118 = local_80;
          uStack_110 = uStack_78;
          uStack_120 = uStack_88;
          local_138 = (long *)local_a0._0_8_;
          pcStack_130 = stack0xffffffffffffff68;
          while( true ) {
                    /* try { // try from 001b3190 to 001b31f1 has its CatchHandler @ 001b3379 */
            auVar8 = std::io::read_until(&local_138,10,local_d0 + 1);
            lVar7 = auVar8._8_8_;
            lVar5 = auVar8._0_8_;
            bVar2 = lVar7 != 0;
            if (lVar5 != 0) {
              bVar2 = local_d0[3] == 0;
            }
            if (!bVar2) break;
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(lVar5,lVar7)
            ;
            uVar6 = expand_line(local_d0 + 1,local_58,uVar4,uVar1,param_1);
            auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                     ::map_err_context(uVar6);
            uVar6 = auVar8._8_8_;
            lVar5 = auVar8._0_8_;
            if (lVar5 != 0) {
                    /* try { // try from 001b32fe to 001b3308 has its CatchHandler @ 001b3354 */
              core::ptr::
              drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                        (&local_138);
                    /* try { // try from 001b3309 to 001b3312 has its CatchHandler @ 001b335b */
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_d0 + 1);
              core::ptr::
              drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
                        (local_58);
              goto LAB_001b333c;
            }
          }
                    /* try { // try from 001b32df to 001b32e9 has its CatchHandler @ 001b3359 */
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(lVar5,lVar7);
                    /* try { // try from 001b32ea to 001b32f1 has its CatchHandler @ 001b3374 */
          core::ptr::
          drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                    (&local_138);
        }
      }
      else {
        _local_a0 = uucore::util_name();
        local_f8._0_8_ = local_a0;
        local_f8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_138 = (long *)&DAT_0021cfa8;
        pcStack_130 = (code *)0x2;
        local_118 = 0;
        local_128 = (undefined8 **)local_f8;
        uStack_120 = 1;
        std::io::stdio::_eprint(&local_138);
        local_a0._0_8_ = local_d0;
        stack0xffffffffffffff68 = _<&T_as_core::fmt::Display>::fmt;
        local_138 = (long *)&DAT_0021cfc8;
        pcStack_130 = (code *)0x2;
        local_118 = 0;
        local_128 = (undefined8 **)local_a0;
        uStack_120 = 1;
        std::io::stdio::_eprint(&local_138);
        uucore::mods::error::set_exit_code(1);
      }
      lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (local_d0 + 4);
    } while (lVar5 != 0);
  }
                    /* try { // try from 001b3322 to 001b332b has its CatchHandler @ 001b335b */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_d0 + 1);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
            (local_58);
  lVar5 = 0;
  uVar6 = unaff_R13;
LAB_001b333c:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = lVar5;
  return auVar8;
}