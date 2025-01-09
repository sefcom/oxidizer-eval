long __rustcall
uu_factor::write_result(long *param_1,undefined *param_2,undefined8 param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  undefined **local_158;
  code *local_150;
  undefined4 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong *local_118;
  undefined *local_110;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined local_70 [8];
  undefined8 local_68;
  ulong local_60;
  undefined4 *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong *local_38;
  
  local_a8 = (undefined *)&local_158;
  local_158 = &local_c0;
  local_150 = _<&T_as_core::fmt::Display>::fmt;
  local_b8 = (undefined **)&DAT_0028adc0;
  local_b0 = 2;
  uStack_98 = 0;
  local_a0 = 1;
                    /* try { // try from 001a3b57 to 001a3b63 has its CatchHandler @ 001a3ed8 */
  local_c0 = param_2;
  lVar2 = std::io::Write::write_fmt(param_1,&local_b8);
  if (lVar2 == 0) {
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::iter::traits::collect::IntoIterator>::
    into_iter(&local_b8,param_3);
    if (param_4 == '\0') {
                    /* try { // try from 001a3cf0 to 001a3d01 has its CatchHandler @ 001a3f19 */
      while (_<alloc::collections::btree::map::IntoIter<K,V,A>as_core::iter::traits::iterator::Iterator>
             ::next(&local_e0,&local_b8), uVar1 = local_c8,
            CONCAT44(uStack_dc,local_e0) != -0x8000000000000000) {
        local_e8 = local_d0;
        local_f8 = local_e0;
        uStack_f4 = uStack_dc;
        uStack_f0 = uStack_d8;
        uStack_ec = uStack_d4;
        local_100 = local_c8;
        local_50 = PTR_fmt_002933a0;
        local_158 = &PTR_s___0028ae00;
        local_150 = (code *)0x1;
        local_138 = 0;
        local_148 = &local_58;
        local_140 = 1;
                    /* try { // try from 001a3d85 to 001a3d94 has its CatchHandler @ 001a3efb */
        local_58 = &local_f8;
        core::option::Option<T>::map_or_else(&local_48,&local_158);
        local_128 = (undefined4 *)CONCAT44(uStack_44,local_48);
        uStack_120 = (undefined *)CONCAT44(uStack_3c,uStack_40);
        local_118 = local_38;
                    /* try { // try from 001a3db4 to 001a3dbf has its CatchHandler @ 001a3f00 */
        (*(code *)PTR_repeat_00293460)(local_70,uStack_120,local_38,uVar1);
        uVar1 = local_60;
        lVar2 = param_1[2];
        if (local_60 < (ulong)(*param_1 - lVar2)) {
          (*(code *)PTR_memcpy_00293338)(param_1[1] + lVar2,local_68,local_60);
          param_1[2] = lVar2 + uVar1;
        }
        else {
                    /* try { // try from 001a3e00 to 001a3e0a has its CatchHandler @ 001a3ee5 */
          lVar2 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                            (param_1,local_68,local_60);
          if (lVar2 != 0) {
                    /* try { // try from 001a3e9f to 001a3eab has its CatchHandler @ 001a3ed4 */
            core::ptr::drop_in_place<alloc::string::String>(local_70);
                    /* try { // try from 001a3eac to 001a3eb5 has its CatchHandler @ 001a3ed2 */
            core::ptr::drop_in_place<alloc::string::String>(&local_128);
            goto LAB_001a3eb6;
          }
        }
                    /* try { // try from 001a3e17 to 001a3e1e has its CatchHandler @ 001a3f00 */
        core::ptr::drop_in_place<alloc::string::String>(local_70);
                    /* try { // try from 001a3e1f to 001a3e26 has its CatchHandler @ 001a3efb */
        core::ptr::drop_in_place<alloc::string::String>(&local_128);
                    /* try { // try from 001a3e27 to 001a3e2e has its CatchHandler @ 001a3f19 */
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_f8);
      }
    }
    else {
                    /* try { // try from 001a3bc0 to 001a3bcc has its CatchHandler @ 001a3ef9 */
      while (_<alloc::collections::btree::map::IntoIter<K,V,A>as_core::iter::traits::iterator::Iterator>
             ::next(&local_e0,&local_b8), CONCAT44(uStack_dc,local_e0) != -0x8000000000000000) {
        local_e8 = local_d0;
        local_f8 = local_e0;
        uStack_f4 = uStack_dc;
        uStack_f0 = uStack_d8;
        uStack_ec = uStack_d4;
        local_100 = local_c8;
        local_148 = (undefined4 **)&local_128;
        local_128 = &local_f8;
        if (local_c8 < 2) {
          uStack_120 = PTR_fmt_002933a0;
          local_158 = &PTR_s___0028ae00;
          local_150 = (code *)0x1;
          local_138 = 0;
          local_140 = 1;
          lVar2 = std::io::Write::write_fmt(param_1,&local_158);
        }
        else {
          uStack_120 = PTR_fmt_002933a0;
          local_118 = &local_100;
          local_110 = PTR_fmt_00293458;
          local_158 = &PTR_s___0028ade0;
          local_150 = (code *)0x2;
          local_138 = 0;
          local_140 = 2;
                    /* try { // try from 001a3c5e to 001a3cb6 has its CatchHandler @ 001a3ef7 */
          lVar2 = std::io::Write::write_fmt(param_1,&local_158);
        }
        if (lVar2 != 0) {
LAB_001a3eb6:
                    /* try { // try from 001a3eb6 to 001a3ebf has its CatchHandler @ 001a3ed6 */
          core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_f8);
          core::ptr::
          drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>
                    (&local_b8);
          return lVar2;
        }
                    /* try { // try from 001a3cc3 to 001a3cca has its CatchHandler @ 001a3ef9 */
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_f8);
      }
    }
    core::ptr::
    drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>
              (&local_b8);
    local_b8 = &PTR_s___warning____0028ae10;
    local_b0 = 1;
    local_a8 = (undefined *)0x8;
    local_a0 = 0;
    uStack_98 = 0;
    lVar2 = std::io::Write::write_fmt(param_1,&local_b8);
    if (lVar2 == 0) {
      lVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_1);
    }
  }
  else {
    core::ptr::
    drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>
              (param_3);
  }
  return lVar2;
}