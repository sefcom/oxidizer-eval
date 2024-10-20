__int64 __fastcall uu_sort::GlobalSettings::init_precomputed(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    goto LABEL_14;
  if ( (v2 & 7) != 0 )
    goto LABEL_14;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 > 0x249249249249249LL )
    goto LABEL_14;
  v4 = 56 * v3;
  v5 = v2 + 56 * v3;
  v6 = v2;
  do
  {
    v7 = v4;
    if ( !v4 )
      break;
    v8 = (*(_BYTE *)(v6 + 54) & 1) == 0;
    v6 += 56LL;
    v4 -= 56LL;
  }
  while ( v8 );
  *(_BYTE *)(a1 + 96) = v7 != 0;
  *(_QWORD *)(a1 + 88) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v2, v5, 0LL, v6);
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9
    || (v9 & 7) != 0
    || (v10 = *(_QWORD *)(a1 + 16), v10 > 0x249249249249249LL)
    || (*(_QWORD *)(a1 + 72) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                                 v9,
                                 v9 + 56 * v10,
                                 0LL),
        (v11 = *(_QWORD *)(a1 + 8)) == 0)
    || (v11 & 7) != 0
    || (v12 = *(_QWORD *)(a1 + 16), v12 > 0x249249249249249LL) )
  {
LABEL_14:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  }
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v11, v11 + 56 * v12, 0LL);
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
