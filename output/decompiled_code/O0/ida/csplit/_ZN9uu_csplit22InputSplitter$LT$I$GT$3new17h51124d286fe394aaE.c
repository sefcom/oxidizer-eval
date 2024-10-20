__int64 __fastcall uu_csplit::InputSplitter<I>::new(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax
  _OWORD src[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  _QWORD v7[5]; // [rsp+50h] [rbp-28h] BYREF

  v6 = *((_QWORD *)a2 + 6);
  v2 = *a2;
  v3 = a2[1];
  src[2] = a2[2];
  src[1] = v3;
  src[0] = v2;
  alloc::vec::Vec<T>::new(v7);
  memcpy((void *)(a1 + 24), src, 0x38uLL);
  result = a1;
  *(_QWORD *)a1 = v7[0];
  *(_QWORD *)(a1 + 8) = v7[1];
  *(_QWORD *)(a1 + 16) = v7[2];
  *(_QWORD *)(a1 + 80) = 1LL;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}
