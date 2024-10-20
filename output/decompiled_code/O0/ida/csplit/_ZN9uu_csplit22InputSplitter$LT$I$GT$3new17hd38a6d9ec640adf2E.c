__int64 __fastcall uu_csplit::InputSplitter<I>::new(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+10h] [rbp-48h]
  __int64 v4; // [rsp+20h] [rbp-38h]
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v3 = *a2;
  alloc::vec::Vec<T>::new(v5);
  result = a1;
  *(_OWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)a1 = v5[0];
  *(_QWORD *)(a1 + 8) = v5[1];
  *(_QWORD *)(a1 + 16) = v5[2];
  *(_QWORD *)(a1 + 48) = 1LL;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
