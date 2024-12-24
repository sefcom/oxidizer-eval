undefined  [16] __rustcall
uu_base32::base_common::fast_encode::fast_encode
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulong uVar6;
  
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = param_2;
  lVar4 = (**(code **)(param_4 + 0x30))(param_3);
  uVar7 = lVar4 * 0x400;
  if (uVar7 == 0) {
    (*(code *)PTR_panic_0024eaf8)
              ("assertion failed: encode_in_chunks_of_size > 0",0x2e,
               &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00247500);
  }
  else {
    if (param_5 == 0) {
      local_100 = 0;
      local_f8 = 1;
      local_f0 = 0;
      local_e8 = 0x4c;
    }
    else if (param_6 == 0) {
      local_100 = 0x8000000000000000;
    }
    else {
      local_100 = 0;
      local_f8 = 1;
      local_f0 = 0;
      local_e8 = param_6;
    }
                    /* try { // try from 001741fd to 00174206 has its CatchHandler @ 00174500 */
    _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_c0);
    if (local_b0 != 0) {
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 1;
      local_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_80 = 1;
      uVar5 = *param_1;
      uVar1 = param_1[1];
      local_e0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00247598;
      do {
        while( true ) {
                    /* try { // try from 0017427a to 0017433d has its CatchHandler @ 00174507 */
          auVar8 = std::io::impls::_<impl_std::io::Read_for_alloc::boxed::Box<R>>::read
                             (uVar5,uVar1,local_b8,local_b0);
          uVar6 = auVar8._8_8_;
          if (auVar8._0_8_ != 0) {
            uVar3 = std::io::error::Error::kind(uVar6);
                    /* try { // try from 0017435d to 001743a5 has its CatchHandler @ 001744e9 */
            (*(code *)PTR_format_read_error_0024eaf0)(&local_48,uVar3);
            local_50 = 1;
            local_68 = local_48;
            uStack_64 = uStack_44;
            uStack_60 = uStack_40;
            uStack_5c = uStack_3c;
            local_58 = local_38;
            uVar5 = ::alloc::boxed::Box<T>::new(&local_68);
                    /* try { // try from 001743a6 to 00174416 has its CatchHandler @ 00174505 */
            core::ptr::drop_in_place<std::io::error::Error>(uVar6);
            auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00247600;
            auVar8._0_8_ = uVar5;
            goto LAB_0017441d;
          }
          if (uVar6 == 0) {
            auVar8 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&local_a8);
            auVar8 = (**(code **)(local_d0 + 0x28))(local_d8,auVar8._0_8_,auVar8._8_8_,&local_88);
            if (auVar8._0_8_ == 0) {
              lVar4 = (*(code *)PTR_write_to_output_0024eae0)
                                (&local_100,&local_88,&local_c8,&DAT_00247530,1);
              if (lVar4 == 0) {
                    /* try { // try from 00174460 to 0017446c has its CatchHandler @ 001744f6 */
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&local_88);
                    /* try { // try from 0017446d to 00174476 has its CatchHandler @ 001744fb */
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&local_a8);
                    /* try { // try from 00174477 to 00174480 has its CatchHandler @ 00174500 */
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_c0);
                core::ptr::
                drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>
                          (&local_100);
                return ZEXT816(0);
              }
              auVar8 = (*(code *)PTR_from_0024eae8)(lVar4);
            }
            goto LAB_0017441d;
          }
          auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (uVar6,local_b8,local_b0);
          lVar4 = auVar8._0_8_;
          if (uVar6 < uVar7 - uStack_90) break;
          auVar8 = (*(code *)PTR_encode_in_chunks_to_buffer_0024ead8)
                             (local_d8,local_d0,uVar7,uVar7 - uStack_90,lVar4,auVar8._8_8_,&local_88
                              ,&local_a8);
          if (auVar8._0_8_ != 0) goto LAB_0017441d;
          if (uVar7 <= uStack_90) goto LAB_0017449c;
          lVar4 = (*(code *)PTR_write_to_output_0024eae0)
                            (&local_100,&local_88,&local_c8,&DAT_00247530,0);
          if (lVar4 != 0) {
                    /* try { // try from 00174347 to 0017434f has its CatchHandler @ 00174505 */
            auVar8 = (*(code *)PTR_from_0024eae8)(lVar4);
LAB_0017441d:
                    /* try { // try from 0017441d to 00174429 has its CatchHandler @ 001744f6 */
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&local_88);
                    /* try { // try from 0017442a to 00174433 has its CatchHandler @ 001744fb */
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&local_a8);
                    /* try { // try from 00174434 to 0017443d has its CatchHandler @ 00174500 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_c0);
            core::ptr::
            drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>
                      (&local_100);
            return auVar8;
          }
        }
        _<alloc::collections::vec_deque::VecDeque<T,A>as_alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>
        ::spec_extend(&local_a8,lVar4,lVar4 + auVar8._8_8_);
      } while (uStack_90 < uVar7);
      local_e0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002475b0;
LAB_0017449c:
                    /* try { // try from 0017449c to 001744b2 has its CatchHandler @ 00174505 */
      (*(code *)PTR_panic_0024eaf8)
                ("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size",0x42,local_e0)
      ;
      goto LAB_001744e7;
    }
  }
                    /* try { // try from 001744ce to 001744e6 has its CatchHandler @ 001744fb */
  (*(code *)PTR_panic_0024eaf8)
            ("assertion failed: !input_buffer.is_empty()",0x2a,
             &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00247518);
LAB_001744e7:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}