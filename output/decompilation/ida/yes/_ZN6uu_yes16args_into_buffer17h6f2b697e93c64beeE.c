__int64 __fastcall uu_yes::args_into_buffer(__int64 a1, _QWORD *a2)
{
  __int64 i; // rax
  __int64 v3; // rdx
  _BYTE v5[104]; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v6[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( !*a2 )
    return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
             a1,
             &unk_1723C,
             &unk_1723E);
  core::iter::traits::iterator::Iterator::map(v6);
  itertools::free::intersperse(v5, v6);
  for ( i = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(v5);
        i;
        i = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(v5) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a1,
      i,
      i + v3);
  }
  return alloc::vec::Vec<T,A>::push(a1);
}