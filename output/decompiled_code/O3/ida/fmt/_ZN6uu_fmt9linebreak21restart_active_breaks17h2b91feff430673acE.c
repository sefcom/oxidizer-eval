        __int64 a9)
{
  _QWORD *result; // rax
  int v11; // xmm0_4
  char v12; // bp
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+10h] [rbp-38h]

  result = a7;
  v11 = -1082130432;
  if ( a5 )
  {
    v12 = 0;
  }
  else
  {
    v13 = a6;
    v14 = a7[5];
    v12 = 0;
    if ( (__int64)(v14 + uu_fmt::linebreak::BreakArgs::compute_width(a2, a7, a4, 0) + a4 + a8 - *(_QWORD *)(a2 + 48)) <= a9 - a4 )
    {
      a6 = v13;
      result = a7;
      v11 = -1082130432;
    }
    else
    {
      a3 += v14;
      v12 = 1;
      v11 = 1065353216;
      a6 = v13;
      result = a7;
    }
  }
  *(_QWORD *)a1 = a6;
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 24) = a3;
  *(_BYTE *)(a1 + 37) = v12 ^ 1;
  return result;
}
