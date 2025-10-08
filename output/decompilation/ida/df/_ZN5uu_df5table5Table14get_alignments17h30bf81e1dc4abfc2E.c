__int64 __fastcall uu_df::table::Table::get_alignments(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // ebp
  unsigned int v6; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]

  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 1LL;
  v9 = 0LL;
  v4 = 0LL;
  v5 = 990;
  while ( a3 != v4 )
  {
    v6 = *(unsigned __int8 *)(a2 + v4++);
    alloc::vec::Vec<T,A>::push(&v8, _bittest(&v5, v6));
  }
  result = v9;
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  return result;
}