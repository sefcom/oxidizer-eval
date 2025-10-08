__int64 __fastcall ruff_python_formatter::expression::binary_like::OperatorIndex::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v8[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v9; // [rsp+20h] [rbp-18h]

  v7 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v8[0] = &off_57D790;
    v8[1] = 1LL;
    v8[2] = 8LL;
    v9 = 0LL;
    ((void (__fastcall __noreturn *)(_QWORD, __int64 *, void *, _QWORD *, char **, __int64))core::panicking::assert_failed)(
      0LL,
      &v7,
      &unk_862A0,
      v8,
      &off_57D7A0,
      a6);
  }
  return a1;
}