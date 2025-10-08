__int64 __fastcall sniffnet::networking::manage_packets::mac_from_dec_to_hex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+0h] [rbp-98h] BYREF
  _WORD v4[2]; // [rsp+4h] [rbp-94h] BYREF
  char *v5; // [rsp+8h] [rbp-90h] BYREF
  void *v6; // [rsp+10h] [rbp-88h] BYREF
  __int64 v7; // [rsp+18h] [rbp-80h]
  char ***v8; // [rsp+20h] [rbp-78h]
  __int64 v9; // [rsp+28h] [rbp-70h]
  void *v10; // [rsp+30h] [rbp-68h]
  __int64 v11; // [rsp+38h] [rbp-60h]
  char **v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-50h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v3 = a2;
  v4[0] = WORD2(a2);
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  v5 = (char *)&v3;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  v5 = (char *)&v3 + 1;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  v5 = (char *)&v3 + 2;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  v5 = (char *)&v3 + 3;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  v5 = (char *)v4;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  v5 = (char *)v4 + 1;
  v12 = &v5;
  v13 = <&T as core::fmt::LowerHex>::fmt;
  v6 = &unk_2DFEF58;
  v7 = 2LL;
  v10 = &unk_18383C0;
  v11 = 1LL;
  v8 = &v12;
  v9 = 1LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v14, &v6);
  alloc::string::String::pop(&v14);
  result = v15;
  *(_QWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  return result;
}