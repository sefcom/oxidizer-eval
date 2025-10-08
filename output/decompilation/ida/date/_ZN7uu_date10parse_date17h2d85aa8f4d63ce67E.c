__int64 __fastcall uu_date::parse_date(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+8h] [rbp-60h]
  _OWORD v10[5]; // [rsp+18h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(v2, v3);
  parse_datetime::parse_datetime(&v8, v4);
  if ( v8 == 0x8000000000000002LL )
  {
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    uu_date::parse_date::{{closure}}(v10, v2, v3, &v8);
    v5 = v10[0];
    v6 = v10[1];
    *(_OWORD *)(a1 + 32) = v10[2];
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}