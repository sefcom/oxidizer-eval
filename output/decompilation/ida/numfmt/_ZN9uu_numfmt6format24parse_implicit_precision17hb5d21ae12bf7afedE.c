__int64 __fastcall uu_numfmt::format::parse_implicit_precision(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-38h] BYREF
  char v4; // [rsp+10h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+30h] [rbp-8h]

  core::str::<impl str>::split_once(&v5, a1, a2);
  if ( !v5 )
    return 0LL;
  v3[0] = v6;
  v3[1] = v6 + v7;
  v4 = 0;
  return ((__int64 (__fastcall *)(_QWORD *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(v3);
}