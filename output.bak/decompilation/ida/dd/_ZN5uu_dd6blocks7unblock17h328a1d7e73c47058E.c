__int64 __fastcall uu_dd::blocks::unblock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  __int128 v10; // [rsp+18h] [rbp-30h]
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a4 )
  {
    v7 = &off_161910;
    v8 = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    core::panicking::panic_fmt(&v7, &off_161920);
  }
  v11[0] = a2;
  v11[1] = a3;
  v11[2] = a4;
  v7 = 0LL;
  v8 = 1LL;
  v9 = 0LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD *, char ***, __int64, __int64, __int64))core::iter::traits::iterator::Iterator::fold)(
           a1,
           v11,
           &v7,
           a4,
           a5,
           a6);
}
