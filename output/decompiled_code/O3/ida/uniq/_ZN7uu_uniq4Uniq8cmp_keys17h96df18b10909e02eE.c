__int64 __fastcall uu_uniq::Uniq::cmp_keys(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a4;
  v6[2] = a5;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))uu_uniq::Uniq::cmp_key)(a1, a2, a3, v6);
}
