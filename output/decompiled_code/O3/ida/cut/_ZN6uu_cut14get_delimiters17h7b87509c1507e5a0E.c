__int64 *__fastcall uu_cut::get_delimiters(__int64 *a1, __int64 a2, char a3)
{
  char flag; // r15
  __int64 v6; // r12
  void *v7; // rax
  void *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  const char *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r15
  _WORD *v14; // rsi
  _WORD *v15; // r13
  unsigned __int64 v16; // rax
  void *v17; // rax
  void *v18; // r14
  __int64 v19; // rcx
  _WORD *v20; // rax
  char v21; // cl
  const char *v23; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-D8h]
  char **v25; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+20h] [rbp-C8h]
  _QWORD *v27; // [rsp+28h] [rbp-C0h]
  __int64 v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v31[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-60h]
  _OWORD v33[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-38h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aWhitespaceDeli_0, 20LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v31, a2, aDelimiter_0, 9LL);
  v23 = aDelimiter_0;
  v24 = 9LL;
  if ( LODWORD(v31[0]) != 2 )
    goto LABEL_38;
  v6 = *((_QWORD *)&v31[0] + 1);
  if ( *((_QWORD *)&v31[0] + 1) )
  {
    if ( flag )
    {
      v7 = (void *)_rust_alloc(73LL, 1LL);
      if ( !v7 )
        alloc::raw_vec::handle_error(1LL, 73LL);
      v8 = v7;
      qmemcpy(v7, "invalid input: Only one of --delimiter (-d) or -w option can be specified", 73);
      v9 = _rust_alloc(32LL, 8LL);
      if ( !v9 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v9 = 73LL;
      *(_QWORD *)(v9 + 8) = v8;
      *(_QWORD *)(v9 + 16) = 73LL;
LABEL_7:
      *(_DWORD *)(v9 + 24) = 1;
      a1[1] = v9;
      a1[2] = (__int64)&off_F0F88;
      v10 = 1LL;
      goto LABEL_37;
    }
    v12 = 1LL;
    if ( a3 )
    {
      v11 = (const char *)&unk_19D91;
    }
    else
    {
      v13 = *(_QWORD *)(*((_QWORD *)&v31[0] + 1) + 16LL);
      v11 = (const char *)&unk_19D90;
      if ( v13 )
      {
        v14 = *(_WORD **)(*((_QWORD *)&v31[0] + 1) + 8LL);
        if ( v13 != 2 || *v14 != 10023 )
        {
          v15 = *(_WORD **)(*((_QWORD *)&v31[0] + 1) + 8LL);
          std::sys::os_str::bytes::Slice::to_str(&v25, v14, *(_QWORD *)(*((_QWORD *)&v31[0] + 1) + 16LL));
          if ( !v25
            && ((unsigned __int64)v27 >= 0x20
              ? (v16 = core::str::count::do_count_chars(v26))
              : (v16 = core::str::count::char_count_general_case(v26)),
                v14 = v15,
                v16 > 1)
            || (std::sys::os_str::bytes::Slice::to_str(&v25, v14, v13), v13 != 1) && v25 )
          {
            v17 = (void *)_rust_alloc(40LL, 1LL);
            if ( !v17 )
              alloc::raw_vec::handle_error(1LL, 40LL);
            v18 = v17;
            qmemcpy(v17, "the delimiter must be a single character", 40);
            v9 = _rust_alloc(32LL, 8LL);
            if ( !v9 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v9 = 40LL;
            *(_QWORD *)(v9 + 8) = v18;
            *(_QWORD *)(v9 + 16) = 40LL;
            goto LABEL_7;
          }
          v11 = *(const char **)(v6 + 8);
          v12 = *(_QWORD *)(v6 + 16);
        }
      }
    }
  }
  else
  {
    v11 = 0LL;
    if ( !flag )
      v11 = asc_19D36;
    v12 = 1LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v31, a2, &unk_11470, 16LL);
  v23 = (const char *)&unk_11470;
  v24 = 16LL;
  if ( LODWORD(v31[0]) != 2 )
  {
LABEL_38:
    v34 = v32;
    v33[1] = v31[1];
    v33[0] = v31[0];
    v30[0] = &v23;
    v30[1] = <&T as core::fmt::Display>::fmt;
    v30[2] = v33;
    v30[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v25 = &anon_df4789226972a4341794054d7353bee8_4_llvm_10989571036595044754;
    v26 = 2LL;
    v29 = 0LL;
    v27 = v30;
    v28 = 2LL;
    core::panicking::panic_fmt(&v25, &anon_df4789226972a4341794054d7353bee8_6_llvm_10989571036595044754);
  }
  if ( *((_QWORD *)&v31[0] + 1) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)&v31[0] + 1) + 16LL);
    if ( v19 )
    {
      v20 = *(_WORD **)(*((_QWORD *)&v31[0] + 1) + 8LL);
      if ( v19 == 2 )
      {
        v21 = ~(*v20 != 10023);
        if ( *v20 == 10023 )
          v20 = &unk_19D90;
        v19 = 2LL - (v21 & 1);
      }
    }
    else
    {
      v19 = 1LL;
      v20 = &unk_19D90;
    }
  }
  else
  {
    v20 = 0LL;
  }
  a1[1] = (__int64)v11;
  a1[2] = v12;
  a1[3] = (__int64)v20;
  a1[4] = v19;
  v10 = 0LL;
LABEL_37:
  *a1 = v10;
  return a1;
}
