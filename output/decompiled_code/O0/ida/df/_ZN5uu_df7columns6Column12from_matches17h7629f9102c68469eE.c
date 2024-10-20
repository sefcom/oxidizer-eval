_QWORD *__fastcall uu_df::columns::Column::from_matches(_QWORD *a1, __int64 a2)
{
  char *one; // rax
  char v3; // bp
  char *v4; // rax
  char v5; // bl
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 *v9; // r13
  signed __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  char v18; // bp
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *result; // rax
  __int64 v22; // r14
  void *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // [rsp+17h] [rbp-1C1h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v29; // [rsp+28h] [rbp-1B0h]
  __int128 v30; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-198h]
  char **v32; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v33[64]; // [rsp+50h] [rbp-188h]
  const char *v34; // [rsp+90h] [rbp-148h] BYREF
  __int64 v35; // [rsp+98h] [rbp-140h]
  _QWORD *v36; // [rsp+A0h] [rbp-138h]
  __int64 v37; // [rsp+A8h] [rbp-130h]
  __int64 v38; // [rsp+B0h] [rbp-128h]
  _QWORD v39[2]; // [rsp+C0h] [rbp-118h] BYREF
  _OWORD v40[4]; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v41[4]; // [rsp+110h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+130h] [rbp-A8h]
  __int128 v43; // [rsp+140h] [rbp-98h]
  __int128 v44; // [rsp+150h] [rbp-88h]
  __int64 v45; // [rsp+160h] [rbp-78h]
  __int64 v46; // [rsp+168h] [rbp-70h] BYREF
  __int128 v47; // [rsp+170h] [rbp-68h]
  __int128 v48; // [rsp+180h] [rbp-58h]
  __int128 v49; // [rsp+190h] [rbp-48h]
  __int64 v50; // [rsp+1A0h] [rbp-38h]

  v34 = anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511;
  v35 = 10LL;
  one = (char *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                  a2,
                  anon_6295e1784fd24e8d722933e78c148adb_77_llvm_17845274406068090511,
                  10LL,
                  &off_12BE00);
  if ( !one
    || (v3 = *one,
        v34 = anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511,
        v35 = 6LL,
        (v4 = (char *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                        a2,
                        anon_6295e1784fd24e8d722933e78c148adb_68_llvm_17845274406068090511,
                        6LL,
                        &off_12BE18)) == 0LL) )
  {
    *(_QWORD *)&v40[0] = &v34;
    *((_QWORD *)&v40[0] + 1) = <&T as core::fmt::Display>::fmt;
    v32 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_411_llvm_13186119769495240950;
    *(_QWORD *)v33 = 2LL;
    *(_QWORD *)&v33[24] = 0LL;
    *(_QWORD *)&v33[8] = v40;
    *(_QWORD *)&v33[16] = 1LL;
    core::panicking::panic_fmt(&v32, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_412_llvm_13186119769495240950);
  }
  v5 = *v4;
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511,
         6LL,
         &off_12BE30);
  if ( (v3 & 1) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( v6 == 2 )
        goto LABEL_80;
      v7 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 7LL, 0LL);
      if ( v7 )
      {
        *(_DWORD *)v7 = 117836544;
        *(_WORD *)(v7 + 4) = 2312;
        goto LABEL_63;
      }
    }
    else
    {
      if ( v6 == 2 )
        goto LABEL_80;
      v7 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 7LL, 0LL);
      if ( v7 )
      {
        *(_DWORD *)v7 = 33622784;
        *(_WORD *)(v7 + 4) = 1027;
LABEL_63:
        *(_BYTE *)(v7 + 6) = 5;
        a1[1] = 7LL;
        a1[2] = v7;
        result = a1;
        a1[3] = 7LL;
        *a1 = 0LL;
        return result;
      }
    }
    alloc::alloc::handle_alloc_error(1LL, 7LL);
  }
  if ( (v5 & 1) != 0 )
  {
    if ( v6 != 2 )
    {
      v20 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 6LL, 0LL);
      if ( v20 )
      {
        *(_DWORD *)v20 = 134678016;
        *(_WORD *)(v20 + 4) = 1289;
LABEL_66:
        a1[1] = 6LL;
        a1[2] = v20;
        result = a1;
        a1[3] = 6LL;
        *a1 = 0LL;
        return result;
      }
LABEL_84:
      alloc::alloc::handle_alloc_error(1LL, 6LL);
    }
LABEL_80:
    core::panicking::panic(aInternalErrorE_3, 40LL, &off_12BE90);
  }
  if ( v6 != 2 )
  {
    v20 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 6LL, 0LL);
    if ( v20 )
    {
      *(_DWORD *)v20 = 50462976;
      *(_WORD *)(v20 + 4) = 1284;
      goto LABEL_66;
    }
    goto LABEL_84;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v32,
    a2,
    anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511,
    6LL);
  v39[0] = anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511;
  v39[1] = 6LL;
  if ( v32 )
  {
    v40[3] = *(_OWORD *)&v33[48];
    v40[2] = *(_OWORD *)&v33[32];
    v40[1] = *(_OWORD *)&v33[16];
    v40[0] = *(_OWORD *)v33;
    v41[0] = v39;
    v41[1] = <&T as core::fmt::Display>::fmt;
    v41[2] = v40;
    v41[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v34 = (const char *)&anon_6218007a20280e3719fcdd1ea18f6230_8_llvm_8855673205947102191;
    v35 = 2LL;
    v38 = 0LL;
    v36 = v41;
    v37 = 2LL;
    core::panicking::panic_fmt(&v34, &off_12BE48);
  }
  v42 = *(_OWORD *)&v33[8];
  v43 = *(_OWORD *)&v33[24];
  v44 = *(_OWORD *)&v33[40];
  v45 = *(_QWORD *)&v33[56];
  if ( !*(_QWORD *)v33 )
    core::option::unwrap_failed(&off_12BE60);
  v50 = v45;
  v49 = v44;
  v48 = v43;
  v47 = v42;
  v27 = 0LL;
  v28 = 8LL;
  v29 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 1LL;
  v31 = 0LL;
  v46 = *(_QWORD *)v33;
  while ( 1 )
  {
    v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v46);
    if ( !v8 )
    {
      a1[3] = v31;
      *(_OWORD *)(a1 + 1) = v30;
      *a1 = 0LL;
      goto LABEL_70;
    }
    v9 = *(unsigned __int8 **)(v8 + 8);
    if ( !v9 || (v10 = *(_QWORD *)(v8 + 16), v10 < 0) )
      core::panicking::panic_nounwind(
        "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the "
        "total size of the slice not to exceed `isize::MAX`Error message contains invalid UTF-8",
        162LL);
    v11 = v28;
    if ( !v28 || (v28 & 7) != 0 || (v12 = v29, v29 >> 59) )
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    if ( v29 )
      break;
LABEL_26:
    if ( v12 == v27 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v27);
      v11 = v28;
    }
    v15 = 16 * v12;
    *(_QWORD *)(v11 + v15) = v9;
    *(_QWORD *)(v11 + v15 + 8) = v10;
    v29 = v12 + 1;
    if ( v10 == 4 )
    {
      if ( *(_DWORD *)v9 == 1702521203 )
      {
        v18 = 1;
      }
      else if ( *(_DWORD *)v9 == 1684370293 )
      {
        v18 = 2;
      }
      else
      {
        v18 = 10;
        if ( *(_DWORD *)v9 != 1701603686 )
LABEL_85:
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v26, &unk_12BDE0, &off_12BE78);
      }
    }
    else
    {
      if ( v10 == 5 )
      {
        if ( !(*(_DWORD *)v9 ^ 0x65737569 | v9[4] ^ 0x64) )
        {
          v18 = 7;
          goto LABEL_55;
        }
        if ( !(*(_DWORD *)v9 ^ 0x69617661 | v9[4] ^ 0x6C) )
        {
          v18 = 3;
          goto LABEL_55;
        }
        v16 = *(_DWORD *)v9 ^ 0x6E656370;
        v17 = v9[4] ^ 0x74;
        v18 = 4;
      }
      else
      {
        if ( v10 != 6 )
          goto LABEL_85;
        if ( !(*(_DWORD *)v9 ^ 0x72756F73 | *((unsigned __int16 *)v9 + 2) ^ 0x6563) )
        {
          v18 = 0;
          goto LABEL_55;
        }
        if ( !(*(_DWORD *)v9 ^ 0x79747366 | *((unsigned __int16 *)v9 + 2) ^ 0x6570) )
        {
          v18 = 11;
          goto LABEL_55;
        }
        if ( !(*(_DWORD *)v9 ^ 0x746F7469 | *((unsigned __int16 *)v9 + 2) ^ 0x6C61) )
        {
          v18 = 6;
          goto LABEL_55;
        }
        if ( !(*(_DWORD *)v9 ^ 0x61766169 | *((unsigned __int16 *)v9 + 2) ^ 0x6C69) )
        {
          v18 = 8;
          goto LABEL_55;
        }
        if ( !(*(_DWORD *)v9 ^ 0x65637069 | *((unsigned __int16 *)v9 + 2) ^ 0x746E) )
        {
          v18 = 9;
          goto LABEL_55;
        }
        v16 = *(_DWORD *)v9 ^ 0x67726174;
        v17 = *((unsigned __int16 *)v9 + 2) ^ 0x7465;
        v18 = 5;
      }
      if ( v16 | v17 )
        goto LABEL_85;
    }
LABEL_55:
    v19 = v31;
    if ( v31 == (_QWORD)v30 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v30);
    *(_BYTE *)(*((_QWORD *)&v30 + 1) + v19) = v18;
    v31 = v19 + 1;
  }
  v13 = 16 * v29;
  v14 = 0LL;
  while ( *(_QWORD *)(v11 + v14 + 8) != v10 || bcmp(*(const void **)(v11 + v14), v9, v10) )
  {
    v14 += 16LL;
    if ( v13 == v14 )
      goto LABEL_26;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v32, v10, 0LL);
  v22 = *(_QWORD *)v33;
  if ( v32 )
    alloc::raw_vec::handle_error(*(_QWORD *)v33, *(_QWORD *)&v33[8]);
  v23 = *(void **)&v33[8];
  core::intrinsics::copy_nonoverlapping::precondition_check(v9, *(_QWORD *)&v33[8], 1LL, 1LL, v10);
  memcpy(v23, v9, v10);
  a1[1] = v22;
  a1[2] = v23;
  a1[3] = v10;
  *a1 = 1LL;
  if ( (_QWORD)v30 )
    _rust_dealloc(*((_QWORD *)&v30 + 1));
LABEL_70:
  if ( v27 )
  {
    if ( v27 >> 60 )
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    v24 = 16 * v27;
    v32 = (char **)v28;
    *(_QWORD *)v33 = 8LL;
    v25 = 16LL;
  }
  else
  {
    v25 = 8LL;
    v24 = 0LL;
  }
  *(_QWORD *)&v33[v25 - 8] = v24;
  if ( *(_QWORD *)v33 )
  {
    if ( *(_QWORD *)&v33[8] )
      _rust_dealloc(v32);
  }
  return a1;
}
