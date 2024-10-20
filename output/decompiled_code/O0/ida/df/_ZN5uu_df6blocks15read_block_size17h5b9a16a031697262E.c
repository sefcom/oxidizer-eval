__int64 __fastcall uu_df::blocks::read_block_size(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 (__fastcall *v12)(); // r12
  char v13; // bp
  __int64 v15; // rax
  __int64 v16; // rcx
  __m256i *v17; // [rsp+0h] [rbp-218h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+8h] [rbp-210h]
  __int128 v19; // [rsp+10h] [rbp-208h]
  const char *v20; // [rsp+28h] [rbp-1F0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-1D8h] BYREF
  __int128 v23; // [rsp+50h] [rbp-1C8h]
  __int128 v24; // [rsp+60h] [rbp-1B8h]
  __int128 v25; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-198h]
  __int128 v27; // [rsp+90h] [rbp-188h]
  __int128 v28; // [rsp+A0h] [rbp-178h]
  __m256i v29; // [rsp+B0h] [rbp-168h] BYREF
  char **v30; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-140h]
  _QWORD *v32; // [rsp+E0h] [rbp-138h]
  __int64 v33; // [rsp+E8h] [rbp-130h]
  __int64 v34; // [rsp+F0h] [rbp-128h]
  __int64 v35; // [rsp+100h] [rbp-118h] BYREF
  __int128 v36; // [rsp+108h] [rbp-110h] BYREF
  __int64 v37; // [rsp+118h] [rbp-100h]
  __m256i v38; // [rsp+120h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+160h] [rbp-B8h]
  _QWORD v42[2]; // [rsp+178h] [rbp-A0h] BYREF
  _QWORD v43[2]; // [rsp+188h] [rbp-90h] BYREF
  _QWORD v44[3]; // [rsp+198h] [rbp-80h] BYREF
  char v45; // [rsp+1B0h] [rbp-68h]
  __int128 v46; // [rsp+1B8h] [rbp-60h] BYREF
  __int64 v47; // [rsp+1C8h] [rbp-50h]
  __int128 v48; // [rsp+1D0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+1E0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    &v20,
    a2,
    anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511,
    9LL);
  v29.m256i_i64[0] = (__int64)anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
  v29.m256i_i64[1] = 9LL;
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    v28 = v24;
    v27 = v23;
    v26 = v22;
    v25 = v21;
    v17 = &v29;
    v18 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &v25;
    *((_QWORD *)&v19 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v31 = 2LL;
    v34 = 0LL;
    v32 = &v17;
    v33 = 2LL;
    core::panicking::panic_fmt(&v30, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  if ( (BYTE1(v20) & 1) == 0 )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511,
                            11LL,
                            &off_12BD38) )
    {
      std::env::_var(&v20, aPosixlyCorrect, 15LL);
      if ( v20 )
      {
        v2 = 1024LL;
        if ( (_QWORD)v21 == 0x8000000000000000LL )
          goto LABEL_48;
        goto LABEL_44;
      }
      goto LABEL_45;
    }
    v20 = aDfBlockSize;
    *(_QWORD *)&v21 = 13LL;
    *((_QWORD *)&v21 + 1) = aBlockSize_0;
    *(_QWORD *)&v22 = 10LL;
    *((_QWORD *)&v22 + 1) = aBlocksize;
    *(_QWORD *)&v23 = 9LL;
    *(_QWORD *)&v24 = 3LL;
    *((_QWORD *)&v23 + 1) = 1LL;
    std::env::_var(&v35, aDfBlockSize, 13LL);
    if ( v35 )
    {
      if ( (_QWORD)v36 != 0x8000000000000000LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
      *((_QWORD *)&v23 + 1) = 2LL;
      std::env::_var(&v35, aBlockSize_0, 10LL);
      if ( v35 )
      {
        if ( (_QWORD)v36 != 0x8000000000000000LL )
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
        *((_QWORD *)&v23 + 1) = 3LL;
        std::env::_var(&v35, aBlocksize, 9LL);
        if ( v35 )
        {
          if ( (_QWORD)v36 != 0x8000000000000000LL )
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
          goto LABEL_42;
        }
      }
    }
    v39 = v36;
    v11 = v37;
    v40 = v37;
    v12 = (__int64 (__fastcall *)())*((_QWORD *)&v36 + 1);
    if ( *((_QWORD *)&v36 + 1) && v37 >= 0 )
    {
      LOWORD(v34) = 0;
      BYTE2(v34) = 0;
      v30 = 0LL;
      v32 = 0LL;
      uucore::parser::parse_size::Parser::parse(&v29, &v30, *((_QWORD *)&v39 + 1), v37);
      if ( v29.m256i_i64[0] == 3 )
      {
        if ( !v29.m256i_i64[3] )
        {
          v11 = v29.m256i_i64[2];
          v38.m256i_i64[1] = v29.m256i_i64[2];
          v38.m256i_i64[0] = 3LL;
          v13 = 1;
LABEL_35:
          alloc::raw_vec::RawVec<T,A>::current_memory(&v25, &v39);
          if ( *((_QWORD *)&v25 + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v40, v25, *((_QWORD *)&v25 + 1), v26);
          if ( v35 && (_QWORD)v36 != 0x8000000000000000LL )
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
          if ( !v13 )
          {
LABEL_42:
            std::env::_var(&v20, aPosixlyCorrect, 15LL);
            if ( v20 )
            {
              v2 = 1024LL;
              if ( (_QWORD)v21 == 0x8000000000000000LL )
              {
LABEL_48:
                *(_QWORD *)(a1 + 8) = v2;
                goto LABEL_49;
              }
LABEL_44:
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21);
              goto LABEL_48;
            }
LABEL_45:
            alloc::raw_vec::RawVec<T,A>::current_memory(&v25, &v21);
            if ( *((_QWORD *)&v25 + 1) )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v22, v25, *((_QWORD *)&v25 + 1), v26);
            v2 = 512LL;
            goto LABEL_48;
          }
          *(_QWORD *)(a1 + 8) = v11;
LABEL_49:
          *(_QWORD *)a1 = 3LL;
          return a1;
        }
        v17 = 0LL;
        v18 = v12;
        *(_QWORD *)&v19 = v11;
        BYTE8(v19) = 1;
        v43[0] = &v17;
        v43[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        *((_QWORD *)&v25 + 1) = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = v43;
        *((_QWORD *)&v26 + 1) = 1LL;
        alloc::fmt::format(&v48, &v25);
        v38.m256i_i64[0] = 2LL;
        *(_OWORD *)&v38.m256i_u64[1] = v48;
        v38.m256i_i64[3] = v49;
      }
      else
      {
        v38 = v29;
      }
      core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v38);
      v13 = 0;
      goto LABEL_35;
    }
LABEL_55:
    core::panicking::panic_nounwind(
      "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the to"
      "tal size of the slice not to exceed `isize::MAX`Error message contains invalid UTF-8",
      162LL);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v20,
    a2,
    anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511,
    9LL);
  v29.m256i_i64[0] = (__int64)anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
  v29.m256i_i64[1] = 9LL;
  if ( v20 )
  {
    v28 = v24;
    v27 = v23;
    v26 = v22;
    v25 = v21;
    v17 = &v29;
    v18 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &v25;
    *((_QWORD *)&v19 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v30 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v31 = 2LL;
    v34 = 0LL;
    v32 = &v17;
    v33 = 2LL;
    core::panicking::panic_fmt(&v30, &off_12BD50);
  }
  v3 = v21;
  if ( !(_QWORD)v21 )
    core::option::unwrap_failed(&off_12BD68);
  v4 = *(_QWORD *)(v21 + 8);
  if ( !v4 )
    goto LABEL_55;
  v5 = *(_QWORD *)(v21 + 16);
  if ( v5 < 0 )
    goto LABEL_55;
  LOWORD(v27) = 0;
  BYTE2(v27) = 0;
  *(_QWORD *)&v25 = 0LL;
  *(_QWORD *)&v26 = 0LL;
  uucore::parser::parse_size::Parser::parse(&v17, &v25, v4, v5);
  v9 = (__int64)v17;
  if ( v17 == (__m256i *)((char *)&dword_0 + 3) )
  {
    if ( !*((_QWORD *)&v19 + 1) )
    {
      if ( (_QWORD)v19 )
      {
        *(_QWORD *)(a1 + 8) = v19;
        goto LABEL_49;
      }
      v15 = *(_QWORD *)(v3 + 8);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v3 + 16);
        if ( v16 >= 0 )
        {
          v44[0] = 0LL;
          v44[1] = v15;
          v44[2] = v16;
          v45 = 1;
          v42[0] = v44;
          v42[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v20 = (const char *)&anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          *(_QWORD *)&v21 = 1LL;
          *((_QWORD *)&v21 + 1) = v42;
          v22 = 1uLL;
          alloc::fmt::format::format_inner(&v46, &v20, v6, v16, v7, v8);
          *(_QWORD *)a1 = 1LL;
          *(_OWORD *)(a1 + 8) = v46;
          *(_QWORD *)(a1 + 24) = v47;
          return a1;
        }
      }
      goto LABEL_55;
    }
    v30 = 0LL;
    v31 = v4;
    v32 = (_QWORD *)v5;
    LOBYTE(v33) = 1;
    v38.m256i_i64[0] = (__int64)&v30;
    v38.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    v20 = (const char *)&anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    *(_QWORD *)&v21 = 2LL;
    *((_QWORD *)&v21 + 1) = &v38;
    v22 = 1uLL;
    alloc::fmt::format(&v29, &v20);
    v10 = v29.m256i_i64[0];
    v41 = *(_OWORD *)&v29.m256i_u64[1];
    v9 = 2LL;
  }
  else
  {
    v10 = (__int64)v18;
    v41 = v19;
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  *(_OWORD *)(a1 + 16) = v41;
  return a1;
}
