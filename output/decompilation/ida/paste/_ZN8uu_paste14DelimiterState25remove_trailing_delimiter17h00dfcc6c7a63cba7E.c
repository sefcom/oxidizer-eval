char __fastcall uu_paste::DelimiterState::remove_trailing_delimiter(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  LOBYTE(v3) = a1 == 0;
  if ( a1 != 0 && a2 != 0 )
  {
    v3 = *(_QWORD *)(a3 + 16);
    v5 = v3;
    if ( v3 >= a2 )
    {
      *(_QWORD *)(a3 + 16) = v3 - a2;
    }
    else if ( v3 )
    {
      v6[0] = 0LL;
      ((void (__fastcall __noreturn *)(_QWORD, unsigned __int64 *, char *, _QWORD *, char **))core::panicking::assert_failed)(
        0LL,
        &v5,
        "",
        v6,
        &off_DEDA0);
    }
  }
  return v3;
}