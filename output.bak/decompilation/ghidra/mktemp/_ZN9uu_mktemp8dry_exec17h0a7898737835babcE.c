undefined8 __rustcall
uu_mktemp::dry_exec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   long param_5,long param_6,long param_7,long param_8)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined auVar5 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined local_48 [24];
  
  local_78 = param_2;
  local_70 = param_3;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_a0,param_6 + param_5 + param_8,0);
  if (local_a0 == 0) {
    local_b8 = local_98;
    uStack_b0 = local_90;
    local_a8 = 0;
                    /* try { // try from 001c0071 to 001c00c9 has its CatchHandler @ 001c01ce */
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::
    spec_extend(&local_b8,param_4,param_4 + param_5);
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
              (&local_b8,param_6,0x58);
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::
    spec_extend(&local_b8,param_7,param_8 + param_7);
    auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                       (param_5,param_6 + param_5,uStack_b0,local_a8,
                        &PTR_s_src_uu_mktemp_src_mktemp_rs_00236a88);
    lVar1 = auVar5._0_8_;
    local_a0 = rand::rngs::thread::thread_rng();
                    /* try { // try from 001c00cf to 001c00de has its CatchHandler @ 001c01bf */
    rand::rng::Rng::fill(&local_a0,lVar1,auVar5._8_8_);
                    /* try { // try from 001c00df to 001c00e8 has its CatchHandler @ 001c01ce */
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&local_a0);
    local_98 = lVar1 + auVar5._8_8_;
    local_a0 = lVar1;
    pbVar2 = (byte *)_<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_a0);
    if (pbVar2 != (byte *)0x0) {
      do {
        bVar4 = *pbVar2 % 0x3e;
        if (bVar4 < 10) {
          bVar4 = bVar4 | 0x30;
        }
        else if (bVar4 < 0x24) {
          bVar4 = bVar4 + 0x57;
        }
        else {
          bVar4 = bVar4 + 0x1d;
        }
        *pbVar2 = bVar4;
        pbVar2 = (byte *)_<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_a0);
      } while (pbVar2 != (byte *)0x0);
    }
    local_58 = local_a8;
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    uStack_60 = (undefined4)uStack_b0;
    uStack_5c = uStack_b0._4_4_;
    ::alloc::string::String::from_utf8(&local_a0,&local_68);
    core::result::Result<T,E>::unwrap(local_48,&local_a0);
    std::path::Path::join(param_1,local_78,local_70,local_48);
    return param_1;
  }
  uVar3 = ::alloc::raw_vec::handle_error(local_98,local_90);
                    /* catch() { ... } // from try @ 001c00cf with catch @ 001c01bf */
                    /* try { // try from 001c01c2 to 001c01d8 has its CatchHandler @ 001c01e1 */
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&local_a0);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_b8);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}