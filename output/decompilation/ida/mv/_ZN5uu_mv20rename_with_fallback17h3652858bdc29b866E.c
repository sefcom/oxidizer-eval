__int64 __fastcall uu_mv::rename_with_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = a5;
  v7 = std::fs::rename();
  v10[0] = a1;
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v10[4] = &v9;
  if ( v7 )
    return uu_mv::rename_with_fallback::{{closure}}(v10, v7);
  else
    return 0LL;
}