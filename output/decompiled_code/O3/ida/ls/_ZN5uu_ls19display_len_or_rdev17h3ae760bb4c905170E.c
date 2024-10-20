unsigned __int64 __fastcall uu_ls::display_len_or_rdev(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rax
  __int128 v5; // kr00_16
  unsigned __int64 v6; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rtt
  char v13; // [rsp+7h] [rbp-91h] BYREF
  __int128 v14; // [rsp+8h] [rbp-90h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-80h]
  unsigned int v16; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+24h] [rbp-74h] BYREF
  _QWORD v18[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int128 *v20; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h]
  char v23; // [rsp+60h] [rbp-38h]

  if ( (*(_DWORD *)(a2 + 56) & 0xB000 | 0x4000) == 0x6000 )
  {
    v4 = *(_QWORD *)(a2 + 72);
    v16 = ((unsigned int)v4 >> 8) & 0xFFF | HIDWORD(v4) & 0xFFFFF000;
    v17 = (unsigned __int8)v4 | (v4 >> 12) & 0xFFFFFF00;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = 0LL;
    v22 = 32LL;
    v23 = 3;
    v18[0] = 0LL;
    v19 = 0LL;
    v20 = &v14;
    v21 = &off_1AC0E8;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v16, v18) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v13, &unk_1AC1A0, &off_1AC118);
    v5 = v14;
    v6 = v15;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = 0LL;
    v22 = 32LL;
    v23 = 3;
    v18[0] = 0LL;
    v19 = 0LL;
    v20 = &v14;
    v21 = &off_1AC0E8;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v17, v18) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v13, &unk_1AC1A0, &off_1AC118);
    result = v15;
    *(_QWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(_OWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v6;
  }
  else
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_1ACB48);
    v8 = *(_QWORD *)(a2 + 80);
    v9 = a3;
    if ( (a3 | v8) >> 32 )
    {
      v12 = v8;
      v10 = v8 / a3;
      v11 = v12 % a3;
    }
    else
    {
      v11 = (unsigned int)v8 % (unsigned int)a3;
      v10 = (unsigned int)v8 / v9;
    }
    uucore::features::format::human::human_readable(a1, v10 - ((v11 == 0) - 1LL), a4);
    result = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  }
  return result;
}
