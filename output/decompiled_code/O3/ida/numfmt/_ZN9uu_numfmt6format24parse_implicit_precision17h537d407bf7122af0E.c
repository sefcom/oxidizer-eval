__int64 __fastcall uu_numfmt::format::parse_implicit_precision(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  char v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+30h] [rbp-8h]

  core::str::<impl str>::split_once(&v8, a1, a2);
  if ( !v8 )
    return 0LL;
  v6[0] = v9;
  v6[1] = v9 + v10;
  v7 = 0;
  return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(
           v6,
           a1,
           v2,
           v9 + v10,
           v3,
           v4);
}
