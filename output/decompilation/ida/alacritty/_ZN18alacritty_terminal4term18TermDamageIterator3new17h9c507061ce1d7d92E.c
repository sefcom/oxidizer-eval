__int64 *__fastcall alacritty_terminal::term::TermDamageIterator::new(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx

  v6 = 0LL;
  if ( a3 >= a4 )
    v6 = a3 - a4;
  v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6);
  *a1 = v7;
  a1[1] = v7 + 24 * v8;
  a1[2] = a4;
  return a1;
}