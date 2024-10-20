__int64 __fastcall uu_sort::sort_by(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 *v16; // [rsp+10h] [rbp-8h] BYREF

  if ( (*(_BYTE *)(a2 + 131) & 1) != 0 || (*(_BYTE *)(a2 + 132) & 1) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v11 )
    {
      if ( (v11 & 7) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        if ( v12 <= 0x555555555555555LL )
        {
          v14 = a2;
          v15 = a3;
          return rayon::slice::mergesort::par_mergesort(v11, v12, &v14);
        }
      }
    }
LABEL_14:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( !v7 )
    goto LABEL_14;
  if ( (v7 & 7) != 0 )
    goto LABEL_14;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 > 0x555555555555555LL )
    goto LABEL_14;
  v14 = a2;
  v15 = a3;
  v16 = &v14;
  if ( v8 )
  {
    _BitScanReverse64(&v9, v8);
    v10 = v9 ^ 0x3F;
  }
  else
  {
    v10 = 64;
  }
  return ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64 **, _QWORD, _QWORD, __int64, __int64, __int64))rayon::slice::quicksort::recurse)(
           v7,
           v8,
           &v16,
           0LL,
           (unsigned int)(64 - v10),
           a6,
           v14,
           v15);
}
