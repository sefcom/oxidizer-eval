__int64 __fastcall uu_env::variable_parser::VariableParser::parse_variable(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rax
  char v5; // cl
  unsigned __int64 v6; // r15
  void *v7; // rax
  unsigned __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // r12
  int v11; // eax
  char **v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int char_from_native_int; // eax
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // edx
  __int64 (__fastcall *v22)(_QWORD); // r13
  int v23; // eax
  int v24; // ecx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r12
  unsigned int v31; // eax
  unsigned int v32; // ecx
  void *v33; // rax
  __int64 v34; // rbp
  int v35; // eax
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rdx
  char v41; // si
  int v42; // edi
  __int16 v43; // r8
  char v44; // r9
  __int64 v45; // r10
  __int64 v47; // r15
  __int64 (__fastcall *v48)(_QWORD); // rdx
  char **v49; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+8h] [rbp-D0h]
  _QWORD **v51; // [rsp+10h] [rbp-C8h]
  __int128 v52; // [rsp+18h] [rbp-C0h]
  int v53; // [rsp+34h] [rbp-A4h]
  __int64 v54; // [rsp+40h] [rbp-98h] BYREF
  void *v55; // [rsp+48h] [rbp-90h]
  __int64 v56; // [rsp+50h] [rbp-88h]
  int v57; // [rsp+5Ch] [rbp-7Ch] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v59; // [rsp+70h] [rbp-68h]
  char **v60; // [rsp+78h] [rbp-60h]
  _QWORD *v61; // [rsp+80h] [rbp-58h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+88h] [rbp-50h]
  _QWORD v63[9]; // [rsp+90h] [rbp-48h] BYREF

  v3 = (_QWORD *)*a2;
  uu_env::string_parser::StringParser::consume_chunk(&v49, *a2);
  if ( v49 )
    goto LABEL_2;
  v6 = v3[4];
  if ( v3[1] < v6 )
    goto LABEL_52;
  if ( v3[1] == v6 )
  {
    v7 = (void *)_rust_alloc(21LL, 1LL);
    if ( v7 )
    {
      qmemcpy(v7, "missing variable name", 21);
      *(_DWORD *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = 21LL;
      *(_QWORD *)(a1 + 24) = v7;
      *(_QWORD *)(a1 + 32) = 21LL;
      return a1;
    }
    goto LABEL_80;
  }
  if ( (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(unsigned __int8 *)(*v3 + v6)) != 123 )
  {
    v13 = v3[4];
    if ( v3[1] < v13 )
      goto LABEL_52;
    if ( v3[1] == v13 )
    {
      v14 = v3[4];
      v15 = v14;
    }
    else
    {
      char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*(unsigned __int8 *)(*v3 + v13));
      if ( char_from_native_int != (_DWORD)&unk_110000 )
      {
        v57 = char_from_native_int;
        if ( (unsigned int)(char_from_native_int - 48) < 0xA )
        {
          v13 = v3[4];
          v58[0] = &v57;
          v58[1] = <char as core::fmt::Display>::fmt;
          v49 = &off_10CA08;
          v50 = 2LL;
          v51 = (_QWORD **)v58;
          v52 = 1uLL;
          alloc::fmt::format::format_inner(v63, &v49);
          v17 = HIDWORD(v61);
          v18 = v63[0];
          v19 = v63[1];
          v20 = v63[2];
          v21 = 4;
          goto LABEL_40;
        }
      }
      v14 = v3[1];
      v15 = v3[4];
      if ( v14 < v15 )
        goto LABEL_52;
    }
    v22 = uu_env::native_int_str::get_char_from_native_int;
    while ( 1 )
    {
      if ( v14 == v15 )
        goto LABEL_32;
      v23 = uu_env::native_int_str::get_char_from_native_int(*(unsigned __int8 *)(*v3 + v15));
      v24 = 65533;
      if ( v23 != (_DWORD)&unk_110000 )
        v24 = v23;
      if ( v24 != 95 && (unsigned int)(v24 - 48) >= 0xA && (v24 & 0x1FFFDFu) - 65 >= 0x1A )
        break;
      v20 = (__int64)v3;
      uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
      if ( v49 )
      {
        v13 = v50;
        v19 = (unsigned __int8)v51;
        v21 = 5;
        v18 = v50;
        goto LABEL_40;
      }
      v14 = v3[1];
      v15 = v3[4];
      if ( v14 < v15 )
        goto LABEL_52;
    }
    v14 = v3[4];
LABEL_32:
    v25 = v14 - v13;
    if ( v25 )
    {
      v26 = v3[1];
      v27 = v26 < v13;
      v28 = v26 - v13;
      if ( v27 )
      {
        v49 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
        v50 = 1LL;
        v51 = (_QWORD **)&byte_8;
        v52 = 0LL;
        core::panicking::panic_fmt(&v49, &anon_c479f575d13bdc6af5496164023f20a6_11_llvm_1842864401518779319);
      }
      if ( v25 > v28 )
      {
        v49 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
        v50 = 1LL;
        v51 = (_QWORD **)&byte_8;
        v52 = 0LL;
        core::panicking::panic_fmt(&v49, &anon_c479f575d13bdc6af5496164023f20a6_12_llvm_1842864401518779319);
      }
      v29 = *v3 + v13;
      v30 = 0LL;
      goto LABEL_38;
    }
    v18 = 21LL;
    v19 = _rust_alloc(21LL, 1LL);
    if ( !v19 )
LABEL_80:
      alloc::raw_vec::handle_error(1LL, 21LL);
    qmemcpy((void *)v19, "Missing variable name", 21);
    v17 = 543517794;
    v21 = 4;
    v20 = 21LL;
LABEL_40:
    *(_DWORD *)a1 = v21;
    *(_DWORD *)(a1 + 4) = v17;
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 32) = v20;
    return a1;
  }
  uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
  if ( v49 )
  {
LABEL_2:
    v4 = v50;
    v5 = (char)v51;
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v4;
    *(_BYTE *)(a1 + 24) = v5;
    return a1;
  }
  v8 = v3[4];
  v9 = v3[1] == v8;
  if ( v3[1] < v8 )
    goto LABEL_52;
  v10 = v3[4];
  v60 = (char **)v10;
  if ( !v9 )
  {
    v11 = uu_env::native_int_str::get_char_from_native_int(*((unsigned __int8 *)v60 + *v3));
    if ( v11 != (_DWORD)&unk_110000 )
    {
      LODWORD(v58[0]) = v11;
      if ( (unsigned int)(v11 - 48) < 0xA )
      {
        v10 = v3[4];
        v61 = v58;
        v62 = <char as core::fmt::Display>::fmt;
        v12 = &off_10CA08;
LABEL_70:
        v49 = v12;
        v50 = 2LL;
        v51 = &v61;
        v52 = 1uLL;
        alloc::fmt::format::format_inner(&v54, &v49);
        goto LABEL_71;
      }
    }
    v10 = v3[1];
    v8 = v3[4];
    if ( v10 < v8 )
    {
LABEL_52:
      v49 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
      v50 = 1LL;
      v51 = (_QWORD **)&byte_8;
      v52 = 0LL;
      core::panicking::panic_fmt(&v49, &anon_c479f575d13bdc6af5496164023f20a6_7_llvm_1842864401518779319);
    }
  }
  v22 = uu_env::native_int_str::get_char_from_native_int;
  while ( 1 )
  {
    if ( v10 == v8 )
    {
      v33 = (void *)_rust_alloc(21LL, 1LL);
      if ( !v33 )
        goto LABEL_80;
      qmemcpy(v33, "Missing closing brace", 21);
      v54 = 21LL;
      v55 = v33;
      v56 = 21LL;
LABEL_71:
      v35 = 4;
LABEL_72:
      v39 = v53;
      v40 = v54;
      v41 = (char)v55;
      v42 = *(_DWORD *)((char *)&v55 + 1);
      v43 = *(_WORD *)((char *)&v55 + 5);
      v44 = HIBYTE(v55);
      v45 = v56;
      *(_DWORD *)a1 = v35;
      *(_DWORD *)(a1 + 4) = v39;
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)(a1 + 16) = v40;
      *(_BYTE *)(a1 + 24) = v41;
      *(_DWORD *)(a1 + 25) = v42;
      *(_WORD *)(a1 + 29) = v43;
      *(_BYTE *)(a1 + 31) = v44;
      *(_QWORD *)(a1 + 32) = v45;
      return a1;
    }
    v31 = uu_env::native_int_str::get_char_from_native_int(*(unsigned __int8 *)(*v3 + v8));
    v32 = 65533;
    if ( v31 != (_DWORD)&unk_110000 )
      v32 = v31;
    if ( v32 < 0x80 && v32 - 48 >= 0xA && (v32 & 0x5F) - 65 > 0x19 && v32 != 95 )
      break;
    uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
    if ( v49 )
      goto LABEL_58;
    v10 = v3[1];
    v8 = v3[4];
    if ( v10 < v8 )
      goto LABEL_52;
  }
  if ( v32 == 58 )
  {
    v10 = v3[1];
    v59 = v3[4];
    if ( v10 >= v59 )
    {
      v36 = v59;
      while ( 1 )
      {
        if ( v10 == v36 )
          goto LABEL_79;
        v37 = uu_env::native_int_str::get_char_from_native_int(*(unsigned __int8 *)(*v3 + v36));
        v38 = 65533;
        if ( v37 != (_DWORD)&unk_110000 )
          v38 = v37;
        if ( v38 == 125 )
          break;
        if ( v38 == (_DWORD)&unk_110000 )
        {
          v10 = v3[4];
LABEL_79:
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v54);
          goto LABEL_71;
        }
        uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
        if ( v49 )
          goto LABEL_58;
        v10 = v3[1];
        v36 = v3[4];
        if ( v10 < v36 )
          goto LABEL_52;
      }
      v47 = v3[4];
      uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
      if ( v49 )
        goto LABEL_58;
      v34 = v59;
      v49 = (char **)(v59 + 1);
      v50 = v47;
      v30 = uu_env::string_parser::StringParser::substring(v3, &v49);
      v22 = v48;
      goto LABEL_75;
    }
    goto LABEL_52;
  }
  if ( v32 != 125 )
  {
    LODWORD(v58[0]) = v32;
    v10 = v3[4];
    v61 = v58;
    v62 = <char as core::fmt::Display>::fmt;
    v12 = &off_10CA28;
    goto LABEL_70;
  }
  v34 = v3[4];
  uu_env::string_parser::StringParser::consume_chunk(&v49, v3);
  if ( v49 )
  {
LABEL_58:
    v10 = v50;
    v54 = v50;
    LOBYTE(v55) = (_BYTE)v51;
    v35 = 5;
    goto LABEL_72;
  }
  v30 = 0LL;
LABEL_75:
  v49 = v60;
  v50 = v34;
  v29 = uu_env::string_parser::StringParser::substring(v3, &v49);
LABEL_38:
  *(_QWORD *)(a1 + 8) = v29;
  *(_QWORD *)(a1 + 16) = v25;
  *(_QWORD *)(a1 + 24) = v30;
  *(_QWORD *)(a1 + 32) = v22;
  *(_DWORD *)a1 = 8;
  return a1;
}
