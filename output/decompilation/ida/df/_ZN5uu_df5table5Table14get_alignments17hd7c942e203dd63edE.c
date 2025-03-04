__int64 __fastcall uu_df::table::Table::get_alignments(__int64 a1, __int64 a2, __int64 a3)
{
  int i; // ebp
  unsigned __int8 *v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v8[0] = a2;
  v8[1] = a2 + a3;
  for ( i = 990; ; alloc::vec::Vec<T,A>::push(&v6, _bittest(&i, *v4)) )
  {
    v4 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v8);
    if ( !v4 )
      break;
  }
  result = v7;
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  return result;
}
