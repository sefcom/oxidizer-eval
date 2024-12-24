undefined  [16] __rustcall
uu_base32::base_common::fast_decode::fast_decode
          (undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,undefined param_5)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  undefined uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  ulong local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined local_190 [8];
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char local_130 [256];
  
  local_198 = param_2;
  auVar10 = (**(code **)(param_4 + 0x18))(param_3);
  local_1a8 = param_3;
  local_1a0 = param_4;
  lVar5 = (**(code **)(param_4 + 0x38))(param_3);
  uVar9 = lVar5 * 0x400;
  if (uVar9 == 0) {
    (*(code *)PTR_panic_0024eaf8)(&DAT_0010d2e6,0x2e,&PTR_DAT_00247990);
  }
  else {
    (*(code *)PTR_alphabet_to_table_0024ec30)(local_130,auVar10._0_8_,auVar10._8_8_,param_5);
    _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_190);
    if (local_180 != 0) {
      local_1f8 = 0;
      local_1f0 = 1;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 1;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 1;
      local_1b8 = 0;
      local_150 = *param_1;
      local_158 = param_1[1];
      local_1b0 = &PTR_DAT_00247a28;
      do {
        while( true ) {
                    /* try { // try from 00179c2a to 00179c65 has its CatchHandler @ 00179f43 */
          auVar10 = std::io::impls::_<impl_std::io::Read_for_alloc::boxed::Box<R>>::read
                              (local_150,local_158,local_188,local_180);
          lVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 0) {
            uVar4 = std::io::error::Error::kind(lVar5);
                    /* try { // try from 00179db7 to 00179dff has its CatchHandler @ 00179f25 */
            (*(code *)PTR_format_read_error_0024eaf0)(&local_148,uVar4);
            local_160 = 1;
            local_178 = CONCAT44(uStack_144,local_148);
            uStack_170 = CONCAT44(uStack_13c,uStack_140);
            local_168 = local_138;
            uVar7 = ::alloc::boxed::Box<T>::new(&local_178);
                    /* try { // try from 00179e00 to 00179e5c has its CatchHandler @ 00179f41 */
            core::ptr::drop_in_place<std::io::error::Error>(lVar5);
            auVar10._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00247a90;
            auVar10._0_8_ = uVar7;
            goto LAB_00179e63;
          }
          if (lVar5 == 0) {
            auVar10 = (**(code **)(local_1a0 + 0x20))(local_1a8,local_1f0,local_1e8,&local_1e0);
            if (auVar10._0_8_ == 0) {
              lVar5 = (*(code *)PTR_write_to_output_0024ec40)(&local_1e0,&local_198,&DAT_002479c0);
              if (lVar5 == 0) {
                    /* try { // try from 00179ea1 to 00179eaa has its CatchHandler @ 00179f37 */
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1c8);
                    /* try { // try from 00179eab to 00179eb4 has its CatchHandler @ 00179f32 */
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1e0);
                    /* try { // try from 00179eb5 to 00179ebc has its CatchHandler @ 00179f3c */
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1f8);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_190);
                auVar2._8_8_ = 0;
                auVar2._0_8_ = param_3;
                return auVar2 << 0x40;
              }
              auVar10 = (*(code *)PTR_from_0024eae8)(lVar5);
            }
            goto LAB_00179e63;
          }
          auVar11 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                              (lVar5,local_188,local_180);
          lVar5 = auVar11._0_8_;
          param_3 = lVar5 + auVar11._8_8_;
          local_178 = lVar5;
          uStack_170 = param_3;
          cVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                            (&local_178,local_130);
          if (cVar3 != '\0') {
            local_1b8 = 0;
            local_178 = lVar5;
            uStack_170 = param_3;
            pbVar6 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>
                             ::next(&local_178);
            if (pbVar6 == (byte *)0x0) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = local_1c0;
            }
            else {
              do {
                if (local_130[*pbVar6] != '\0') {
                    /* try { // try from 00179cea to 00179cf4 has its CatchHandler @ 00179f45 */
                  ::alloc::vec::Vec<T,A>::push(&local_1c8,*pbVar6);
                }
                pbVar6 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>
                                 ::next(&local_178);
                auVar11._8_8_ = local_1b8;
                auVar11._0_8_ = local_1c0;
              } while (pbVar6 != (byte *)0x0);
            }
          }
          uVar8 = auVar11._8_8_;
          lVar5 = auVar11._0_8_;
          if (uVar8 < uVar9 - local_1e8) break;
          auVar10 = (*(code *)PTR_decode_in_chunks_to_buffer_0024ec38)
                              (local_1a8,local_1a0,uVar9,uVar9 - local_1e8,lVar5,uVar8,&local_1e0,
                               &local_1f8);
          if (auVar10._0_8_ != 0) goto LAB_00179e63;
          if (uVar9 <= local_1e8) goto LAB_00179ed8;
          lVar5 = (*(code *)PTR_write_to_output_0024ec40)(&local_1e0,&local_198,&DAT_002479c0);
          if (lVar5 != 0) {
                    /* try { // try from 00179d9e to 00179da6 has its CatchHandler @ 00179f41 */
            auVar10 = (*(code *)PTR_from_0024eae8)(lVar5);
LAB_00179e63:
                    /* try { // try from 00179e63 to 00179e6c has its CatchHandler @ 00179f37 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1c8);
                    /* try { // try from 00179e6d to 00179e76 has its CatchHandler @ 00179f32 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1e0);
                    /* try { // try from 00179e77 to 00179e7e has its CatchHandler @ 00179f3c */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1f8);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_190);
            return auVar10;
          }
        }
                    /* try { // try from 00179d1a to 00179d94 has its CatchHandler @ 00179f43 */
        _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>
        ::spec_extend(&local_1f8,lVar5,uVar8 + lVar5);
      } while (local_1e8 < uVar9);
      local_1b0 = &PTR_DAT_00247a40;
LAB_00179ed8:
                    /* try { // try from 00179ed8 to 00179eee has its CatchHandler @ 00179f41 */
      (*(code *)PTR_panic_0024eaf8)(&DAT_0010d39e,0x42,local_1b0);
      goto LAB_00179f23;
    }
  }
                    /* try { // try from 00179f0a to 00179f22 has its CatchHandler @ 00179f3c */
  (*(code *)PTR_panic_0024eaf8)(&DAT_0010d374,0x2a,&PTR_DAT_002479a8);
LAB_00179f23:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}