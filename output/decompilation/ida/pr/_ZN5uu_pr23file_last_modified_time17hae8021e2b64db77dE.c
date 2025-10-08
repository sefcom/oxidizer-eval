__int64 __fastcall uu_pr::file_last_modified_time(__int64 a1)
{
  _QWORD v2[3]; // [rsp+8h] [rbp-D0h] BYREF
  int dest; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+28h] [rbp-B0h]

  std::fs::metadata(&dest);
  if ( dest == 2 )
  {
    v2[1] = v4;
    v2[0] = 0x8000000000000000LL;
  }
  else
  {
    uu_pr::file_last_modified_time::{{closure}}(v2, &dest);
  }
  return core::result::Result<T,E>::unwrap_or_default(a1, v2);
}