__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_string(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char v4; // [rsp+7h] [rbp-81h] BYREF
  __int128 v5; // [rsp+8h] [rbp-80h] BYREF
  __int64 v6; // [rsp+18h] [rbp-70h]
  _OWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v8[7]; // [rsp+40h] [rbp-48h] BYREF
  char v9; // [rsp+78h] [rbp-10h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 3);
    *(_OWORD *)a1 = *(__int128 *)((char *)a2 + 8);
  }
  else
  {
    v2 = *a2;
    v7[1] = a2[1];
    v7[0] = v2;
    *(_QWORD *)&v5 = 0LL;
    *((_QWORD *)&v5 + 1) = 1LL;
    v6 = 0LL;
    v8[6] = 32LL;
    v9 = 3;
    v8[0] = 0LL;
    v8[2] = 0LL;
    v8[4] = &v5;
    v8[5] = &off_16A8B8;
    if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::fmt::Display>::fmt(v7, v8) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v4, &unk_16A900, &off_16A8E8);
    *(_QWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    if ( *(_QWORD *)&v7[0] )
      _rust_dealloc(*((_QWORD *)&v7[0] + 1), 8LL * *(_QWORD *)&v7[0], 8LL);
  }
  return a1;
}
