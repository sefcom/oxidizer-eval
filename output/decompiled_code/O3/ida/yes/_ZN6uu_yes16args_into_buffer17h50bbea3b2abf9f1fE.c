__int64 __fastcall uu_yes::args_into_buffer(__int64 a1, _QWORD *a2)
{
  __int64 i; // rax
  __int64 v3; // rdx
  __int64 slice; // rax
  __int64 v6; // rax
  _BYTE v7[104]; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v8[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( *a2 )
  {
    core::iter::traits::iterator::Iterator::map(v8);
    itertools::free::intersperse(v7, v8, asc_13716, 1LL);
    for ( i = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(v7);
          i;
          i = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(v7) )
    {
      slice = core::slice::iter::Iter<T>::make_slice(i, i + v3);
      alloc::vec::Vec<T,A>::append_elements(a1, slice);
    }
    return alloc::vec::Vec<T,A>::push(a1);
  }
  else
  {
    v6 = core::slice::iter::Iter<T>::make_slice(&unk_13717, aDisablingRustS);
    return alloc::vec::Vec<T,A>::append_elements(a1, v6);
  }
}
