__int64 __fastcall bat::line_range::LineRanges::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-C0h]
  __int64 v12; // [rsp+10h] [rbp-B8h]
  _QWORD v13[22]; // [rsp+18h] [rbp-B0h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = v2 + 32LL * *(_QWORD *)(a2 + 16);
  v4 = core::iter::traits::iterator::Iterator::reduce(v2, v3);
  v6 = v5;
  v13[0] = 0LL;
  v13[7] = 0LL;
  v13[14] = v2;
  v13[15] = v3;
  itertools::minmax::minmax_impl(&v10, v13);
  v7 = v10;
  if ( v10 )
  {
    if ( (_DWORD)v10 != 1 )
    {
      v7 = v11;
      v8 = v12;
      goto LABEL_6;
    }
    v7 = v11;
  }
  v8 = v7;
LABEL_6:
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = v6 | -(__int64)((v4 & 1) == 0);
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  return a1;
}