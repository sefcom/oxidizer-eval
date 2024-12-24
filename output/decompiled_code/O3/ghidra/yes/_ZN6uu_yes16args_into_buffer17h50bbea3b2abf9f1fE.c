void __rustcall uu_yes::args_into_buffer(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_c0 [104];
  undefined local_58 [64];
  
  if (*param_2 != 0) {
    core::iter::traits::iterator::Iterator::map(local_58);
    itertools::free::intersperse(local_c0,local_58," ",1);
    auVar2 = _<itertools::intersperse::IntersperseWith<I,ElemF>as_core::iter::traits::iterator::Iterator>
             ::next(local_c0);
    if (auVar2._0_8_ != 0) {
      do {
        uVar1 = core::slice::iter::Iter<T>::make_slice(auVar2._0_8_,auVar2._8_8_ + auVar2._0_8_);
        ::alloc::vec::Vec<T,A>::append_elements(param_1,uVar1);
        auVar2 = _<itertools::intersperse::IntersperseWith<I,ElemF>as_core::iter::traits::iterator::Iterator>
                 ::next(local_c0);
      } while (auVar2._0_8_ != 0);
    }
    ::alloc::vec::Vec<T,A>::push(param_1);
    return;
  }
  uVar1 = core::slice::iter::Iter<T>::make_slice
                    ("y\n",
                     "Disabling rust signal handlers failed/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/yes/src/yes.rs"
                    );
  ::alloc::vec::Vec<T,A>::append_elements(param_1,uVar1);
  return;
}