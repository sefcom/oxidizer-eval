/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall
uu_base32::base_common::fast_decode::alphabet_to_table
          (undefined8 param_1,long param_2,long param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  undefined auVar3 [16];
  long local_130;
  long local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_4 == 0) {
    local_28 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_20 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_38 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_30 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_48 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_40 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_58 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_50 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_68 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_60 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_78 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_70 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_88 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_80 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_98 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_90 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_a8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_a0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_b8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_b0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_c8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_c0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_d8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_d0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_e8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_e0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_f8 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_f0 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_108 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_100 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_118 = CONCAT44(_UNK_0010c744,_DAT_0010c740);
    uStack_110 = CONCAT44(_UNK_0010c74c,_UNK_0010c748);
    local_130 = 0;
    local_128 = 2;
    local_120 = 0xd0a;
    while( true ) {
                    /* try { // try from 001c4db0 to 001c4db7 has its CatchHandler @ 001c4e2c */
      auVar3 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                         (&local_130);
      if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      uVar2 = auVar3._8_8_ & 0xff;
      if (*(char *)((long)&local_118 + uVar2) == '\0') {
                    /* try { // try from 001c4df8 to 001c4e10 has its CatchHandler @ 001c4e2a */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_00119e50,0x1b,&PTR_s_src_uu_base32_src_base_common_rs_00249b58);
      }
      *(undefined *)((long)&local_118 + uVar2) = 0;
    }
    core::ptr::drop_in_place<core::array::iter::IntoIter<u8,2_usize>>(&local_130);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = param_3 + param_2;
    local_130 = param_2;
    pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_130);
    if (pbVar1 != (byte *)0x0) {
      do {
        if (*(char *)((long)&local_118 + (ulong)*pbVar1) != '\0') {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_00119e6b,0x1c,&PTR_s_src_uu_base32_src_base_common_rs_00249b70);
        }
        *(undefined *)((long)&local_118 + (ulong)*pbVar1) = 1;
        pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_130);
      } while (pbVar1 != (byte *)0x0);
    }
  }
  (*(code *)PTR_memcpy_0024dea8)(param_1,&local_118,0x100);
  return param_1;
}