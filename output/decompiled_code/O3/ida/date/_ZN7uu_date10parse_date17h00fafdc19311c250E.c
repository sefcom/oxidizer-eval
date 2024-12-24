__int64 __fastcall uu_date::parse_date(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+8h] [rbp-50h] BYREF
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  parse_datetime::parse_datetime(v4, v2);
  result = 0x8000000000000002LL;
  if ( *(_QWORD *)v4 == 0x8000000000000002LL )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v4[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v6 = *(_QWORD *)&v4[16];
    v5 = *(_OWORD *)v4;
    return uu_date::parse_date::{{closure}}(a1, a2, &v5);
  }
  return result;
}
