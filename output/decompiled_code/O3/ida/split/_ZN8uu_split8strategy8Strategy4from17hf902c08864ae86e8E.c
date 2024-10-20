__int64 __fastcall uu_split::strategy::Strategy::from(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char v10; // r9
  bool v11; // bl
  __int64 v12; // r11
  __int64 v13; // rax
  char v14; // r11
  bool v15; // bp
  __int64 v16; // r14
  __int64 v17; // rax
  char v18; // r14
  bool v19; // r15
  __int64 v20; // r12
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r14
  __int128 v24; // kr00_16
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r14
  __int128 v32; // kr10_16
  __int64 v33; // rax
  __int64 v34; // r15
  __int128 v35; // kr20_16
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm0
  __int64 v40; // rcx
  __m256i v42; // [rsp+10h] [rbp-F8h] BYREF
  __m256i *v43; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall **v44)(); // [rsp+38h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C8h]
  char v46; // [rsp+48h] [rbp-C0h]
  __m256i v47; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h]
  __m256i v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h]
  int *v51; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-58h]
  _QWORD v53[10]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = a2[2];
  if ( v3 )
  {
    v4 = a2[1];
    v5 = 16 * v3;
    v6 = 97LL;
    v7 = 0LL;
    v8 = 0LL;
    while ( *(_QWORD *)(v4 + v7 + 8) != 5LL
         || anon_80a68c298b3244c7b6f64951acf55080_12_llvm_4507047988568940441 ^ **(_DWORD **)(v4 + v7) | *(_BYTE *)(*(_QWORD *)(v4 + v7) + 4LL) ^ 0x73 )
    {
      v7 += 16LL;
      v6 += 104LL;
      ++v8;
      if ( v5 == v7 )
      {
        v10 = 3;
        goto LABEL_9;
      }
    }
    v9 = a2[5];
    if ( v8 >= v9 )
      goto LABEL_94;
    v10 = *(_BYTE *)(a2[4] + v6);
LABEL_9:
    v11 = v10 == 2;
    v12 = 97LL;
    v13 = 0LL;
    v8 = 0LL;
    while ( *(_QWORD *)(v4 + v13 + 8) != 5LL
         || anon_80a68c298b3244c7b6f64951acf55080_10_llvm_4507047988568940441 ^ **(_DWORD **)(v4 + v13) | *(_BYTE *)(*(_QWORD *)(v4 + v13) + 4LL) ^ 0x73 )
    {
      v13 += 16LL;
      v12 += 104LL;
      ++v8;
      if ( v5 == v13 )
      {
        v14 = 3;
        goto LABEL_16;
      }
    }
    v9 = a2[5];
    if ( v8 >= v9 )
      goto LABEL_94;
    v14 = *(_BYTE *)(a2[4] + v12);
LABEL_16:
    v15 = v14 == 2;
    v16 = 97LL;
    v17 = 0LL;
    v8 = 0LL;
    while ( *(_QWORD *)(v4 + v17 + 8) != 10LL
         || anon_80a68c298b3244c7b6f64951acf55080_11_llvm_4507047988568940441 ^ **(_QWORD **)(v4 + v17) | *(_WORD *)(*(_QWORD *)(v4 + v17) + 8LL) ^ 0x7365u )
    {
      v17 += 16LL;
      v16 += 104LL;
      ++v8;
      if ( v5 == v17 )
      {
        v18 = 3;
        goto LABEL_23;
      }
    }
    v9 = a2[5];
    if ( v8 >= v9 )
      goto LABEL_94;
    v18 = *(_BYTE *)(a2[4] + v16);
LABEL_23:
    v19 = v18 == 2;
    v20 = 97LL;
    v21 = 0LL;
    v8 = 0LL;
    while ( *(_QWORD *)(v4 + v21 + 8) != 6LL
         || anon_80a68c298b3244c7b6f64951acf55080_15_llvm_4507047988568940441 ^ **(_DWORD **)(v4 + v21) | *(_WORD *)(*(_QWORD *)(v4 + v21) + 4LL) ^ 0x7265 )
    {
      v21 += 16LL;
      v20 += 104LL;
      ++v8;
      if ( v5 == v21 )
        goto LABEL_29;
    }
    v9 = a2[5];
    if ( v8 >= v9 )
LABEL_94:
      core::panicking::panic_bounds_check(v8, v9, &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456);
    v22 = *(_BYTE *)(a2[4] + v20);
    if ( v22 != 3 )
    {
      if ( *a3 == 0x8000000000000000LL )
      {
        if ( v10 == 2 )
        {
          if ( v14 != 2 && v18 != 2 && v22 != 2 )
          {
LABEL_33:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
              &v49,
              a2,
              &anon_80a68c298b3244c7b6f64951acf55080_12_llvm_4507047988568940441,
              5LL);
            v51 = &anon_80a68c298b3244c7b6f64951acf55080_12_llvm_4507047988568940441;
            v52 = 5LL;
            if ( v49.m256i_i32[0] == 2 )
            {
              v23 = v49.m256i_i64[1];
              if ( v49.m256i_i64[1] )
              {
                v24 = *(_OWORD *)(v49.m256i_i64[1] + 8);
                LOWORD(v43) = 0;
                BYTE2(v43) = 0;
                v42.m256i_i64[0] = 0LL;
                v42.m256i_i64[2] = 0LL;
                uucore::parser::parse_size::Parser::parse_u64_max(&v47, &v42, v24, *((_QWORD *)&v24 + 1));
                v25 = v47.m256i_i64[0];
                v26 = a1;
                if ( v47.m256i_i64[0] != 3 )
                {
                  *(_QWORD *)(a1 + 32) = v47.m256i_i64[3];
                  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v47.m256i_u64[1];
                  *(_QWORD *)a1 = 0LL;
                  *(_QWORD *)(a1 + 8) = v25;
                  return v26;
                }
                if ( !v47.m256i_i64[1] )
                {
                  <alloc::string::String as core::clone::Clone>::clone(&v42.m256i_u64[1], v23);
                  v42.m256i_i64[0] = 1LL;
                  *(__m256i *)(a1 + 8) = v42;
                  *(_QWORD *)a1 = 0LL;
                  return v26;
                }
                *(_QWORD *)(a1 + 16) = v47.m256i_i64[1];
                *(_QWORD *)(a1 + 8) = 6LL;
                goto LABEL_47;
              }
LABEL_96:
              core::option::unwrap_failed(&off_10C088);
            }
LABEL_95:
            v48 = v50;
            v47 = v49;
            v53[0] = &v51;
            v53[1] = <&T as core::fmt::Display>::fmt;
            v53[2] = &v47;
            v53[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v42.m256i_i64[0] = (__int64)&anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
            v42.m256i_i64[1] = 2LL;
            v43 = 0LL;
            v42.m256i_i64[2] = (__int64)v53;
            v42.m256i_i64[3] = 2LL;
            core::panicking::panic_fmt(&v42, &anon_fd2000c1cd6eb4266a2a957d594896cc_4_llvm_17375974497823408223);
          }
LABEL_87:
          v26 = a1;
          *(_QWORD *)a1 = 3LL;
          return v26;
        }
        if ( v14 == 2 )
        {
          if ( v18 == 2 || v22 == 2 )
            goto LABEL_87;
          goto LABEL_50;
        }
        if ( v18 == 2 )
        {
          if ( v22 == 2 )
            goto LABEL_87;
          goto LABEL_64;
        }
        if ( v22 == 2 )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
            &v42,
            a2,
            &anon_80a68c298b3244c7b6f64951acf55080_15_llvm_4507047988568940441,
            6LL);
          v37 = clap_builder::parser::error::MatchesError::unwrap(
                  &anon_80a68c298b3244c7b6f64951acf55080_15_llvm_4507047988568940441,
                  6LL,
                  &v42);
          if ( !v37 )
            core::option::unwrap_failed(&off_10C070);
          uu_split::strategy::NumberType::from((__int64)&v42, *(const void **)(v37 + 8), *(_QWORD *)(v37 + 16));
          v26 = a1;
          if ( v42.m256i_i32[0] != 2 )
          {
            v47.m256i_i64[2] = v42.m256i_i64[2];
            v39 = *(_OWORD *)v42.m256i_i8;
            v40 = v42.m256i_i64[3];
            *(_OWORD *)v49.m256i_i8 = *(_OWORD *)v42.m256i_i8;
            v49.m256i_i64[2] = v42.m256i_i64[2];
            *(_QWORD *)(a1 + 24) = v42.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = v39;
            *(_QWORD *)a1 = 2LL;
            *(_QWORD *)(a1 + 32) = v40;
            return v26;
          }
          v38 = *(_OWORD *)&v42.m256i_u64[1];
          *(_OWORD *)v49.m256i_i8 = *(_OWORD *)&v42.m256i_u64[1];
          v49.m256i_i64[2] = v42.m256i_i64[3];
          *(_QWORD *)(a1 + 24) = v42.m256i_i64[3];
          *(_OWORD *)(a1 + 8) = v38;
          goto LABEL_47;
        }
        goto LABEL_39;
      }
      if ( v10 == 2 || v14 == 2 || v18 == 2 || v22 == 2 )
        goto LABEL_87;
LABEL_44:
      v27 = a3[1];
      v29 = a3[2];
      LOWORD(v43) = 0;
      BYTE2(v43) = 0;
      v42.m256i_i64[0] = 0LL;
      v42.m256i_i64[2] = 0LL;
      uucore::parser::parse_size::Parser::parse_u64_max(&v47, &v42, v27, v29);
      v30 = v47.m256i_i64[1];
      if ( v47.m256i_i32[0] == 3 )
      {
        v49.m256i_i64[0] = v47.m256i_i64[1];
        v26 = a1;
        if ( v47.m256i_i64[1] )
        {
          *(_QWORD *)(a1 + 8) = 6LL;
          *(_QWORD *)(a1 + 16) = v30;
          goto LABEL_47;
        }
        v47.m256i_i64[0] = 0LL;
        *(_OWORD *)&v47.m256i_u64[1] = 1uLL;
        v45 = 32LL;
        v46 = 3;
        v42.m256i_i64[0] = 0LL;
        v42.m256i_i64[2] = 0LL;
        v43 = &v47;
        v44 = &off_10BFC8;
        if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v49, &v42) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, v53, &unk_10C010, &off_10BFF8);
        *(_QWORD *)(a1 + 32) = v47.m256i_i64[2];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v47.m256i_i8;
      }
      else
      {
        v34 = v47.m256i_i64[2];
        <alloc::string::String as core::clone::Clone>::clone(&v42, a3);
        v26 = a1;
        *(_QWORD *)(a1 + 32) = v42.m256i_i64[2];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v42.m256i_i8;
        if ( v30 )
          _rust_dealloc(v34, v30, 1LL);
      }
      *(_QWORD *)v26 = 0LL;
      *(_QWORD *)(v26 + 8) = 1LL;
      return v26;
    }
LABEL_29:
    if ( *a3 == 0x8000000000000000LL )
    {
      if ( v10 == 2 )
      {
        if ( v14 != 2 && v18 != 2 )
          goto LABEL_33;
        goto LABEL_87;
      }
      if ( v14 == 2 )
      {
        if ( v18 == 2 )
          goto LABEL_87;
LABEL_50:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          &v49,
          a2,
          &anon_80a68c298b3244c7b6f64951acf55080_10_llvm_4507047988568940441,
          5LL);
        v51 = &anon_80a68c298b3244c7b6f64951acf55080_10_llvm_4507047988568940441;
        v52 = 5LL;
        if ( v49.m256i_i32[0] != 2 )
          goto LABEL_95;
        v31 = v49.m256i_i64[1];
        if ( !v49.m256i_i64[1] )
          goto LABEL_96;
        v32 = *(_OWORD *)(v49.m256i_i64[1] + 8);
        LOWORD(v43) = 0;
        BYTE2(v43) = 0;
        v42.m256i_i64[0] = 0LL;
        v42.m256i_i64[2] = 0LL;
        uucore::parser::parse_size::Parser::parse_u64_max(&v47, &v42, v32, *((_QWORD *)&v32 + 1));
        v33 = v47.m256i_i64[0];
        v26 = a1;
        if ( v47.m256i_i64[0] == 3 )
        {
          if ( v47.m256i_i64[1] )
          {
            *(_QWORD *)(a1 + 16) = v47.m256i_i64[1];
            *(_QWORD *)(a1 + 8) = 7LL;
            goto LABEL_47;
          }
LABEL_84:
          <alloc::string::String as core::clone::Clone>::clone(&v42.m256i_u64[1], v31);
          v42.m256i_i64[0] = 1LL;
          *(__m256i *)(v26 + 8) = v42;
          *(_QWORD *)v26 = 1LL;
          return v26;
        }
        goto LABEL_78;
      }
      if ( v18 == 2 )
      {
LABEL_64:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          &v49,
          a2,
          &anon_80a68c298b3244c7b6f64951acf55080_11_llvm_4507047988568940441,
          10LL);
        v51 = (int *)&anon_80a68c298b3244c7b6f64951acf55080_11_llvm_4507047988568940441;
        v52 = 10LL;
        if ( v49.m256i_i32[0] != 2 )
          goto LABEL_95;
        v31 = v49.m256i_i64[1];
        if ( !v49.m256i_i64[1] )
          goto LABEL_96;
        v35 = *(_OWORD *)(v49.m256i_i64[1] + 8);
        LOWORD(v43) = 0;
        BYTE2(v43) = 0;
        v42.m256i_i64[0] = 0LL;
        v42.m256i_i64[2] = 0LL;
        uucore::parser::parse_size::Parser::parse_u64_max(&v47, &v42, v35, *((_QWORD *)&v35 + 1));
        v33 = v47.m256i_i64[0];
        v26 = a1;
        if ( v47.m256i_i64[0] == 3 )
        {
          if ( v47.m256i_i64[1] )
          {
            *(_QWORD *)(a1 + 16) = v47.m256i_i64[1];
            *(_QWORD *)(a1 + 8) = 8LL;
            goto LABEL_47;
          }
          goto LABEL_84;
        }
LABEL_78:
        *(_QWORD *)(v26 + 32) = v47.m256i_i64[3];
        *(_OWORD *)(v26 + 16) = *(_OWORD *)&v47.m256i_u64[1];
        *(_QWORD *)v26 = 1LL;
        *(_QWORD *)(v26 + 8) = v33;
        return v26;
      }
      goto LABEL_39;
    }
LABEL_41:
    if ( v15 || v11 || v19 )
      goto LABEL_87;
    goto LABEL_44;
  }
  if ( *a3 != 0x8000000000000000LL )
  {
    v19 = 0;
    v11 = 0;
    v15 = 0;
    goto LABEL_41;
  }
LABEL_39:
  v26 = a1;
  *(_QWORD *)(a1 + 8) = 6LL;
  *(_QWORD *)(a1 + 16) = 1000LL;
LABEL_47:
  *(_QWORD *)v26 = 4LL;
  return v26;
}
