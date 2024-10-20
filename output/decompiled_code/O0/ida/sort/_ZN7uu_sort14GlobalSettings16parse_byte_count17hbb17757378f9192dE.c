__int64 __fastcall uu_sort::GlobalSettings::parse_byte_count(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-98h]
  _QWORD v12[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-78h] BYREF
  __int16 v14; // [rsp+60h] [rbp-58h]
  char v15; // [rsp+62h] [rbp-56h]
  __int128 v16; // [rsp+68h] [rbp-50h] BYREF
  __int64 v17; // [rsp+78h] [rbp-40h]
  _QWORD v18[7]; // [rsp+80h] [rbp-38h] BYREF

  v14 = 0;
  v13[0] = &off_1D2A80;
  v13[1] = 13LL;
  v13[2] = aK_1;
  v13[3] = 1LL;
  v15 = 1;
  v3 = core::str::<impl str>::trim_matches(a2, a3);
  uucore::parser::parse_size::Parser::parse(v10, v13, v3, v4);
  if ( v10[0] == 3LL )
  {
    v9 = v11;
    if ( *((_QWORD *)&v11 + 1) )
    {
      v12[0] = &v9;
      v12[1] = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v18[0] = &anon_b48a01bb6feb0400357d4af0fdbfc6b7_98_llvm_10676135426869736008;
      v18[1] = 2LL;
      v18[2] = v12;
      v18[3] = 1LL;
      v18[4] = 0LL;
      alloc::fmt::format::format_inner(&v16, v18);
      *(_QWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      v5 = 2LL;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v11;
      v5 = 3LL;
    }
    *(_QWORD *)a1 = v5;
  }
  else
  {
    v6 = v10[1];
    v7 = v11;
    *(_QWORD *)a1 = v10[0];
    *(_QWORD *)(a1 + 8) = v6;
    *(_OWORD *)(a1 + 16) = v7;
  }
  return a1;
}
