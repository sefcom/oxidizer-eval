__int64 __fastcall uu_chcon::fts::EntryRef::path(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // [rsp+0h] [rbp-18h] BYREF
  __int64 v4; // [rsp+8h] [rbp-10h]

  if ( !*(_WORD *)(a1 + 64) )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    return 0LL;
  core::ffi::c_str::CStr::from_bytes_with_nul(&v3, v1, *(unsigned __int16 *)(a1 + 64) + 1LL);
  if ( v3 == 1 )
    return 0LL;
  else
    return v4;
}