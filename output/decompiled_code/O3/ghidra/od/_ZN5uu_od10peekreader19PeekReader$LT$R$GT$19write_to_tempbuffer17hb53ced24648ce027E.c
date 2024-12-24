void __rustcall
uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined local_80 [24];
  undefined local_68 [32];
  undefined local_48 [40];
  
  param_1 = param_1 + 0x48;
  ::alloc::vec::Vec<T,A>::drain(local_48,param_1);
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_80,local_48);
  uVar1 = core::slice::iter::Iter<T>::make_slice(param_2,param_3 + param_2);
                    /* try { // try from 00177623 to 0017762d has its CatchHandler @ 00177657 */
  ::alloc::vec::Vec<T,A>::append_elements(param_1,uVar1);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_68,local_80);
  _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>
  ::spec_extend(param_1,local_68);
  return;
}