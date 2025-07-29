_OWORD *__fastcall flealib::fileencrypter::FileEncrypter::new(_OWORD *a1, __int64 a2)
{
  __int128 *v2; // rax
  __int128 v3; // xmm0
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(__int128 **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 != 32 )
  {
    v6[0] = 0LL;
    ((void (__fastcall __noreturn *)(_QWORD, __int64 *, char *, _QWORD *, char **))core::panicking::assert_failed)(
      0LL,
      &v5,
      " ",
      v6,
      &off_709D40);
  }
  v3 = *v2;
  a1[1] = v2[1];
  *a1 = v3;
  core::ptr::drop_in_place<alloc::string::String>(a2);
  return a1;
}