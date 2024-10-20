__int64 __fastcall uu_split::strategy::NumberType::from::{{closure}}(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  char v6; // [rsp+Fh] [rbp-69h] BYREF
  __int128 v7; // [rsp+10h] [rbp-68h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[7]; // [rsp+28h] [rbp-50h] BYREF
  char v10; // [rsp+60h] [rbp-18h]

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  v9[6] = 32LL;
  v10 = 3;
  v9[0] = 0LL;
  v9[2] = 0LL;
  v9[4] = &v7;
  v9[5] = &off_10BFC8;
  if ( (unsigned __int8)<str as core::fmt::Display>::fmt(*a2, a2[1], v9) )
    core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v6, &unk_10C010, &off_10BFF8);
  result = v8;
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 1LL;
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
    return _rust_dealloc(*(_QWORD *)(a3 + 16), v5, 1LL);
  return result;
}
