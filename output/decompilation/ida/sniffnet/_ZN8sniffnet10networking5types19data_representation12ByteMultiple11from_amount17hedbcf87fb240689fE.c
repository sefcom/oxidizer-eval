char __fastcall sniffnet::networking::types::data_representation::ByteMultiple::from_amount(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+18h] [rbp-20h]

  v15 = 0LL;
  v17 = 0LL;
  v16 = 1000LL;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int128 *, __int64, __int64))core::ops::range::RangeBounds::contains)(
                          &v15,
                          a1,
                          a2) )
    return 0;
  v15 = 0x3E8uLL;
  v17 = 0LL;
  v16 = (__int64)&stru_F4240;
  v6 = (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ops::range::RangeBounds::contains)(
                       &v15,
                       a1,
                       a2,
                       v2,
                       v3,
                       v4);
  result = 1;
  if ( !(_BYTE)v6 )
  {
    *((_QWORD *)&v15 + 1) = 0LL;
    *(_QWORD *)&v15 = &stru_F4240;
    v17 = 0LL;
    v16 = 1000000000LL;
    v9 = (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ops::range::RangeBounds::contains)(
                         &v15,
                         a1,
                         a2,
                         v6,
                         v7,
                         v8);
    result = 2;
    if ( !(_BYTE)v9 )
    {
      v15 = 0x3B9ACA00uLL;
      v16 = 1000000000000LL;
      v17 = 0LL;
      v12 = (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ops::range::RangeBounds::contains)(
                            &v15,
                            a1,
                            a2,
                            v9,
                            v10,
                            v11);
      result = 3;
      if ( !(_BYTE)v12 )
      {
        v15 = 0xE8D4A51000uLL;
        v16 = 1000000000000000LL;
        v17 = 0LL;
        return ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ops::range::RangeBounds::contains)(
                 &v15,
                 a1,
                 a2,
                 v12,
                 v13,
                 v14) ^ 5;
      }
    }
  }
  return result;
}