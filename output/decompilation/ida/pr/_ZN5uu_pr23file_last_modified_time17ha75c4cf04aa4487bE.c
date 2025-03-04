__int64 __fastcall uu_pr::file_last_modified_time(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+8h] [rbp-D0h] BYREF
  int v5; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+28h] [rbp-B0h]

  std::fs::metadata(&v5, a2, a3);
  if ( v5 == 2 )
  {
    v4[1] = v6;
    v4[0] = 0x8000000000000000LL;
  }
  else
  {
    uu_pr::file_last_modified_time::{{closure}}(v4, &v5);
  }
  return core::result::Result<T,E>::unwrap_or_default(a1, v4);
}
