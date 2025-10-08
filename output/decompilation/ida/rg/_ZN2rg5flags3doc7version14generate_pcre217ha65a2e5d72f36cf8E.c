__int64 __fastcall rg::flags::doc::version::generate_pcre2(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 result; // rax
  __int128 v3; // [rsp+8h] [rbp-50h] BYREF
  __int64 v4; // [rsp+18h] [rbp-40h]
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h]

  *(_QWORD *)&v3 = 0LL;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = 0LL;
  v5[0] = &off_3EABD8;
  v5[1] = 1LL;
  v5[2] = 8LL;
  v6 = 0LL;
  v1 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v3, v5);
  core::result::Result<T,E>::unwrap(v1, &off_3EABE8);
  result = v4;
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_BYTE *)(a1 + 24) = 0;
  return result;
}