undefined4 * __rustcall
uu_cp::aligned_ancestors
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined local_a8 [8];
  undefined8 local_a0;
  long local_98;
  undefined local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(local_a8);
                    /* try { // try from 002059b1 to 002059c0 has its CatchHandler @ 00205ad5 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_90,param_4,param_5);
                    /* try { // try from 002059cf to 00205a0c has its CatchHandler @ 00205ada */
  auVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (1,local_98 + -1,local_a0,local_98,&PTR_s_src_uu_cp_src_cp_rs_002b5848);
  local_78 = 1;
  local_68 = 0;
  local_70 = auVar3._8_8_;
  auVar4 = _<core::ops::range::RangeInclusive<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (&local_78,local_88,local_80);
  local_c0 = 0;
  uStack_b8 = 8;
  local_b0 = 0;
  core::iter::traits::iterator::Iterator::zip
            (&local_78,auVar3._0_8_,auVar3._8_8_ * 0x10 + auVar3._0_8_,auVar4._0_8_,
             auVar4._8_8_ * 0x10 + auVar4._0_8_);
  auVar3 = _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::next
                     (&local_78);
  if (auVar3._0_8_ != 0) {
    do {
      puVar2 = auVar3._8_8_;
      puVar1 = auVar3._0_8_;
      local_40 = *puVar1;
      uStack_3c = puVar1[1];
      uStack_38 = puVar1[2];
      uStack_34 = puVar1[3];
      local_30 = *puVar2;
      uStack_2c = puVar2[1];
      uStack_28 = puVar2[2];
      uStack_24 = puVar2[3];
                    /* try { // try from 00205a86 to 00205a90 has its CatchHandler @ 00205adf */
      ::alloc::vec::Vec<T,A>::push(&local_c0,&local_40);
      auVar3 = _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::
               next(&local_78);
    } while (auVar3._0_8_ != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_b0;
  *param_1 = (undefined4)local_c0;
  param_1[1] = local_c0._4_4_;
  param_1[2] = (undefined4)uStack_b8;
  param_1[3] = uStack_b8._4_4_;
                    /* try { // try from 00205aaf to 00205ab8 has its CatchHandler @ 00205ad5 */
  core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(local_90);
  core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(local_a8);
  return param_1;
}