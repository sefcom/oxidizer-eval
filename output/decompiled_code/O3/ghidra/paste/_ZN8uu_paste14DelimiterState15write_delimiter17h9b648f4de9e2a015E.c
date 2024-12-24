void __rustcall uu_paste::DelimiterState::write_delimiter(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      uVar4 = core::slice::iter::Iter<T>::make_slice(param_1[1],param_1[2] + param_1[1]);
      ::alloc::vec::Vec<T,A>::append_elements(param_2,uVar4);
      return;
    }
    plVar5 = (long *)_<core::iter::adapters::cycle::Cycle<I>as_core::iter::traits::iterator::Iterator>
                     ::next(param_1 + 5);
    if (plVar5 == (long *)0x0) {
      core::option::unwrap_failed(&PTR_s_src_uu_paste_src_paste_rs_002145c8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    uVar4 = core::slice::iter::Iter<T>::make_slice(lVar1,lVar1 + lVar2);
    ::alloc::vec::Vec<T,A>::append_elements(param_2,uVar4);
    param_1[1] = lVar1;
    param_1[2] = lVar2;
  }
  return;
}