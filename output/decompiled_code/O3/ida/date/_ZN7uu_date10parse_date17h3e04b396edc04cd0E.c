__int64 __fastcall uu_date::parse_date(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _BYTE v8[24]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h]
  _OWORD v11[5]; // [rsp+38h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(v2, v3);
  parse_datetime::parse_datetime(v8, v4);
  if ( *(_QWORD *)v8 == 0x8000000000000002LL )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v8[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v10 = *(_QWORD *)&v8[16];
    v9 = *(_OWORD *)v8;
    uu_date::parse_date::{{closure}}(v11, v2, v3, &v9);
    v5 = v11[0];
    v6 = v11[1];
    *(_OWORD *)(a1 + 32) = v11[2];
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}
