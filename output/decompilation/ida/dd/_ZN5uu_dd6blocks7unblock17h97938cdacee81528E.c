__int64 __fastcall uu_dd::blocks::unblock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int128 v8; // [rsp+18h] [rbp-30h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a4 )
  {
    v5 = &off_13D1A0;
    v6 = 1LL;
    v7 = 8LL;
    v8 = 0LL;
    ((void (__fastcall __noreturn *)(char ***, char **))core::panicking::panic_fmt)(&v5, &off_13D710);
  }
  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  v5 = 0LL;
  v6 = 1LL;
  v7 = 0LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD *, char ***))core::iter::traits::iterator::Iterator::fold)(
           a1,
           v9,
           &v5);
}