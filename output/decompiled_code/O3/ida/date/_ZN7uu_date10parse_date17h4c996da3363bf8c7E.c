__int64 __fastcall uu_date::parse_date(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _BYTE v9[24]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h]
  _OWORD v12[5]; // [rsp+38h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(v3, v4);
  parse_datetime::parse_datetime(v9, v5);
  if ( *(_QWORD *)v9 == 0x8000000000000002LL )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v9[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v11 = *(_QWORD *)&v9[16];
    v10 = *(_OWORD *)v9;
    uu_date::parse_date::{{closure}}(v12, v3, v4, &v10);
    v6 = v12[0];
    v7 = v12[1];
    *(_OWORD *)(a1 + 32) = v12[2];
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}
