_OWORD *__fastcall flealib::fileencrypter::FileEncrypter::new(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 *v6; // rax
  __int128 v7; // xmm0
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = *(__int128 **)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 != 32 )
  {
    v10[0] = 0LL;
    ((void (__fastcall __noreturn *)(_QWORD, __int64 *, char *, _QWORD *, char **, __int64))core::panicking::assert_failed)(
      0LL,
      &v9,
      " ",
      v10,
      &off_709D40,
      a6);
  }
  v7 = *v6;
  a1[1] = v6[1];
  *a1 = v7;
  core::ptr::drop_in_place<alloc::string::String>(a2);
  return a1;
}