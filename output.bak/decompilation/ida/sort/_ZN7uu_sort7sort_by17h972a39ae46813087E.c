__int64 __fastcall uu_sort::sort_by(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rsi

  v6 = *(_WORD *)(a2 + 131) == 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    return rayon::slice::ParallelSliceMut::par_sort_unstable_by(v7, v8, a2, a3);
  else
    return rayon::slice::ParallelSliceMut::par_sort_by(v7, v8, a2, a3);
}
