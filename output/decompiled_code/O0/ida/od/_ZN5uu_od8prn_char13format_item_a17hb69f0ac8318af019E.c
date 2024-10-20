__int64 __fastcall uu_od::prn_char::format_item_a(__int64 a1, char a2)
{
  char **v3; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v5[6]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v6; // [rsp+50h] [rbp-58h] BYREF
  __int64 v7; // [rsp+60h] [rbp-48h]
  _QWORD v8[6]; // [rsp+68h] [rbp-40h] BYREF
  char v9; // [rsp+98h] [rbp-10h]

  v3 = &(&uu_od::prn_char::A_CHARS)[2 * (a2 & 0x7Fu)];
  v4[0] = &v3;
  v4[1] = <&T as core::fmt::Display>::fmt;
  v8[0] = 2LL;
  v8[2] = 0LL;
  v8[3] = 4LL;
  v8[4] = 0LL;
  v8[5] = 32LL;
  v9 = 1;
  v5[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
  v5[1] = 1LL;
  v5[2] = v4;
  v5[3] = 1LL;
  v5[4] = v8;
  v5[5] = 1LL;
  alloc::fmt::format::format_inner(&v6, v5);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  return a1;
}
