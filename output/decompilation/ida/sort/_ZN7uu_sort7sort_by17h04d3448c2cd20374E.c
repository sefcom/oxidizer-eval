__int64 __fastcall uu_sort::sort_by(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(a3 + 131) || *(_BYTE *)(a3 + 132) == 1 )
    return rayon::slice::ParallelSliceMut::par_sort_by();
  else
    return rayon::slice::ParallelSliceMut::par_sort_unstable_by();
}