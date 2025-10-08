__int64 __fastcall uu_join::Line::get_field(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[2] )
    return 0LL;
  else
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             *(_QWORD *)(a1[1] + 16 * a2),
             *(_QWORD *)(a1[1] + 16 * a2 + 8),
             a1[4],
             a1[5],
             &off_FE3C8);
}