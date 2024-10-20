__int64 __fastcall uu_touch::filetime_to_datetime(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // eax
  unsigned int v7; // r15d
  __int64 v9; // r12
  int v10; // eax
  char v11; // [rsp+3h] [rbp-55h] BYREF
  _BYTE v12[12]; // [rsp+4h] [rbp-54h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  int v14; // [rsp+18h] [rbp-40h]
  _BYTE v15[12]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[44]; // [rsp+2Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)a2 / 86400LL;
  v3 = *(_QWORD *)a2 % 86400LL;
  v4 = v3 >> 63;
  if ( (unsigned __int64)((v3 >> 63) + v2 - 2146764485) >= 0xFFFFFFFF00000000LL
    && (v5 = *(unsigned int *)(a2 + 8),
        (v6 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt((unsigned int)(v4 + v2 + 719163))) != 0)
    && (v7 = v3 + (v4 & 0x15180), v7 <= 0x1517F)
    && (unsigned int)v5 <= 0x773593FF
    && ((unsigned int)v5 < 0x3B9ACA00 || v7 % 0x3C == 59) )
  {
    v9 = v5 << 32;
    *(_DWORD *)v12 = v6;
    *(_QWORD *)&v12[4] = v9 | v7;
    v13 = *(_QWORD *)v12;
    v14 = HIDWORD(v9);
    v11 = 0;
    std::thread::local::LocalKey<T>::try_with(
      v16,
      &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
      v12,
      &v11);
    core::result::Result<T,E>::expect(
      v15,
      v16,
      anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
      70LL,
      &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
    v10 = chrono::offset::LocalResult<T>::unwrap(
            v15,
            &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
    *(_DWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v13;
    *(_DWORD *)(a1 + 12) = v10;
  }
  else
  {
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
