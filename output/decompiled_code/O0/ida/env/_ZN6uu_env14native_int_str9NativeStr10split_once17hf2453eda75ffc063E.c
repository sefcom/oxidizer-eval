__int64 __fastcall uu_env::native_int_str::NativeStr::split_once(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v3; // rdx
  char v4; // bp
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  __int128 v11; // xmm0
  char v12; // [rsp+Fh] [rbp-B9h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-98h]
  unsigned __int64 v17; // [rsp+38h] [rbp-90h]
  __int128 v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+88h] [rbp-40h]

  LODWORD(v15) = 0;
  core::char::methods::encode_utf8_raw(*a3, &v15, 4LL);
  if ( v3 == 1 )
  {
    v4 = v15;
    v5 = a2[1];
    v6 = a2[2];
    v17 = 0x8000000000000000LL;
    if ( *a2 != 0x8000000000000000LL )
      core::slice::raw::from_raw_parts::precondition_check(v5, 1LL, 1LL, v6);
    if ( v6 < 0 )
      core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_3_llvm_18365996230866053775, 71LL);
    if ( v6 )
    {
      v7 = 0LL;
      while ( v7 + v5 )
      {
        if ( v4 == *(_BYTE *)(v7 + v5) )
        {
          if ( v7 >= v6 )
            core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_5_llvm_18365996230866053775, 104LL);
          v13 = 0LL;
          v14 = v7;
          uu_env::native_int_str::NativeStr::match_cow(&v15, a2, &v13, &v14, &v13, &v14);
          if ( (_QWORD)v15 == 0x8000000000000001LL )
            core::result::unwrap_failed(
              anon_1c6f9a5923c36a430a7b9bb24b2ecad8_30_llvm_11312083278200569487,
              43LL,
              &v12,
              &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_29_llvm_11312083278200569487,
              &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_45_llvm_11312083278200569487);
          v19 = v16;
          v18 = v15;
          v9 = v7 + 1;
          v10 = a2[2];
          if ( *a2 != v17 )
            core::slice::raw::from_raw_parts::precondition_check(a2[1], 1LL, 1LL, a2[2]);
          v13 = v9;
          v14 = v10;
          uu_env::native_int_str::NativeStr::match_cow(&v15, a2, &v13, &v14, &v13, &v14);
          if ( (_QWORD)v15 == 0x8000000000000001LL )
            core::result::unwrap_failed(
              anon_1c6f9a5923c36a430a7b9bb24b2ecad8_30_llvm_11312083278200569487,
              43LL,
              &v12,
              &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_29_llvm_11312083278200569487,
              &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_45_llvm_11312083278200569487);
          v23 = v16;
          v22 = v15;
          v21 = v19;
          v11 = v18;
          v20 = v18;
          *(_QWORD *)(a1 + 32) = *((_QWORD *)&v15 + 1);
          *(_QWORD *)(a1 + 40) = v23;
          *(_QWORD *)(a1 + 16) = v21;
          *(_QWORD *)(a1 + 24) = v22;
          *(_OWORD *)a1 = v11;
          return a1;
        }
        if ( v6 == ++v7 )
          break;
      }
    }
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return a1;
}
