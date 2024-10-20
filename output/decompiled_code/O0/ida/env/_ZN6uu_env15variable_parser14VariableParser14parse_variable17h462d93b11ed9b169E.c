__int64 __fastcall uu_env::variable_parser::VariableParser::parse_variable(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  char v4; // cl
  unsigned int current_char; // eax
  __int64 v7; // r12
  __int64 v8; // r14
  void *v9; // r15
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // r13
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(); // r12
  _QWORD *v17; // r15
  __int64 (__fastcall *v18)(); // r14
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD **v25; // rax
  unsigned int v26; // eax
  bool v27; // cl
  bool v28; // dl
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(); // rax
  __int128 v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rbp
  unsigned int v37; // eax
  __int64 v38; // r15
  __int64 v39; // rdi
  __int64 (__fastcall *v40)(); // rdx
  __int64 v41; // rdi
  char **v42; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+10h] [rbp-E8h]
  _QWORD *v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+28h] [rbp-D0h]
  unsigned int v47; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-BCh] BYREF
  _QWORD v49[3]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v50[2]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+68h] [rbp-90h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+70h] [rbp-88h]
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // [rsp+78h] [rbp-80h]
  _QWORD *v54; // [rsp+80h] [rbp-78h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+88h] [rbp-70h]
  __int64 (__fastcall *v56)(_QWORD, _QWORD); // [rsp+90h] [rbp-68h]
  _QWORD v57[2]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v58[2]; // [rsp+A8h] [rbp-50h] BYREF
  _QWORD v59[8]; // [rsp+B8h] [rbp-40h] BYREF

  uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
  if ( v42 )
    goto LABEL_2;
  current_char = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
  if ( current_char != 123 )
  {
    if ( current_char == (_DWORD)&loc_110000 )
    {
      v7 = *(_QWORD *)(*a2 + 32LL);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, 21LL, 0LL);
      v8 = v43;
      if ( v42 )
        alloc::raw_vec::handle_error(v43, v44);
      v9 = v44;
      core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_272C3, v44, 1LL, 1LL, 21LL);
      qmemcpy(v9, "missing variable name", 21);
      *(_DWORD *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = 21LL;
      return a1;
    }
    v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
    v20 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
    if ( v20 != (_DWORD)&loc_110000 )
    {
      LODWORD(v50[0]) = v20;
      if ( v20 - 48 < 0xA )
      {
        v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
        v54 = v50;
        v55 = <char as core::fmt::Display>::fmt;
        v42 = &off_139160;
        v43 = 2LL;
        v25 = &v54;
LABEL_15:
        v44 = v25;
        v45 = 1LL;
        v46 = 0LL;
        alloc::fmt::format::format_inner(v49, &v42, v21, v22, v23, v24);
        v17 = (_QWORD *)v49[0];
        v18 = (__int64 (__fastcall *)())v49[1];
        v19 = 4;
        v10 = (__int64 (__fastcall *)(_QWORD, _QWORD))v49[2];
        goto LABEL_62;
      }
    }
    v26 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
    if ( v26 != (_DWORD)&loc_110000 )
    {
      v10 = uu_env::string_parser::StringParser::consume_chunk;
      while ( v26 >= 0x30 )
      {
        v27 = v26 < 0x3A;
        if ( v26 < 0x41 )
        {
          v28 = 0;
          goto LABEL_24;
        }
        v27 = v26 < 0x5B;
        v28 = v26 - 97 < 0x1A;
        if ( v26 != 95 )
          goto LABEL_24;
LABEL_26:
        uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
        if ( v42 )
          goto LABEL_61;
        v26 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
        if ( v26 == (_DWORD)&loc_110000 )
          goto LABEL_28;
      }
      v28 = 0;
      v27 = 0;
LABEL_24:
      if ( !v28 && !v27 )
        goto LABEL_28;
      goto LABEL_26;
    }
LABEL_28:
    v29 = *a2;
    v30 = *(__int64 (__fastcall **)())(*a2 + 32LL);
    if ( v30 == v16 )
    {
      v10 = (__int64 (__fastcall *)(_QWORD, _QWORD))(&dword_14 + 1);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, 21LL, 0LL);
      v17 = (_QWORD *)v43;
      if ( !v42 )
      {
        v18 = (__int64 (__fastcall *)())v44;
        core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_272AE, v44, 1LL, 1LL, 21LL);
        *(_QWORD *)((char *)v18 + 13) = 0x656D616E20656C62LL;
        v31 = xmmword_272AE;
LABEL_48:
        *(_OWORD *)v18 = v31;
        v19 = 4;
        goto LABEL_62;
      }
      goto LABEL_67;
    }
    v51 = v16;
    v52 = v30;
    v32 = uu_env::string_parser::StringParser::substring(v29, &v51);
    v34 = 0LL;
LABEL_32:
    *(_QWORD *)(a1 + 8) = v32;
    *(_QWORD *)(a1 + 16) = v33;
    *(_QWORD *)(a1 + 24) = v34;
    *(_QWORD *)(a1 + 32) = v16;
    *(_DWORD *)a1 = 8;
    return a1;
  }
  uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
  if ( v42 )
  {
LABEL_2:
    v3 = v43;
    v4 = (unsigned __int8)v44 & 1;
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 16) = v3;
    *(_BYTE *)(a1 + 24) = v4;
    return a1;
  }
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*a2 + 32LL);
  v11 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
  if ( v11 != (_DWORD)&loc_110000 )
  {
    v48 = v11;
    if ( v11 - 48 < 0xA )
    {
      v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
      v50[0] = &v48;
      v50[1] = <char as core::fmt::Display>::fmt;
      v42 = &off_139160;
      v43 = 2LL;
      v44 = v50;
      v45 = 1LL;
      v46 = 0LL;
      alloc::fmt::format::format_inner(&v51, &v42, v12, v13, v14, v15);
      v17 = v51;
      v18 = v52;
      v19 = 4;
      v10 = v53;
      goto LABEL_62;
    }
  }
  v35 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
  if ( v35 == (_DWORD)&loc_110000 )
  {
LABEL_46:
    v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
    v10 = (__int64 (__fastcall *)(_QWORD, _QWORD))(&dword_14 + 1);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, 21LL, 0LL);
    v17 = (_QWORD *)v43;
    if ( !v42 )
    {
      v18 = (__int64 (__fastcall *)())v44;
      core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_27240, v44, 1LL, 1LL, 21LL);
      *(_QWORD *)((char *)v18 + 13) = 0x656361726220676ELL;
      v31 = xmmword_27240;
      goto LABEL_48;
    }
LABEL_67:
    alloc::raw_vec::handle_error(v17, v44);
  }
  v16 = (__int64 (__fastcall *)())uu_env::string_parser::StringParser::consume_chunk;
  while ( 1 )
  {
    if ( v35 >= 0x80 )
      goto LABEL_44;
    if ( v35 < 0x30 )
    {
      v21 = 0LL;
      v22 = 0LL;
      goto LABEL_42;
    }
    LOBYTE(v22) = v35 < 0x3A;
    if ( v35 < 0x41 )
      break;
    LOBYTE(v22) = v35 < 0x5B;
    v21 = v35 - 97;
    LOBYTE(v21) = (unsigned int)v21 < 0x1A;
    if ( v35 != 95 )
      goto LABEL_42;
LABEL_44:
    uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
    if ( v42 )
      goto LABEL_61;
    v35 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
    if ( v35 == (_DWORD)&loc_110000 )
      goto LABEL_46;
  }
  v21 = 0LL;
LABEL_42:
  if ( (_BYTE)v21 || (_BYTE)v22 )
    goto LABEL_44;
  if ( v35 == 58 )
  {
    v36 = *(_QWORD *)(*a2 + 32LL);
    while ( 1 )
    {
      v37 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
      if ( v37 == 125 )
        break;
      if ( v37 == (_DWORD)&loc_110000 )
      {
        v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
        <T as core::convert::Into<U>>::into(&v54, aMissingClosing, 41LL, &off_139180);
        v17 = v54;
        v18 = v55;
        v19 = 4;
        v10 = v56;
        goto LABEL_62;
      }
      uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
      if ( v42 )
        goto LABEL_61;
    }
    v38 = *(_QWORD *)(*a2 + 32LL);
    uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
    if ( v42 )
      goto LABEL_61;
    if ( v36 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_139198);
    v39 = *a2;
    v58[0] = v36 + 1;
    v58[1] = v38;
    v34 = uu_env::string_parser::StringParser::substring(v39, v58);
    v16 = v40;
LABEL_65:
    v41 = *a2;
    v59[0] = v10;
    v59[1] = v36;
    v32 = uu_env::string_parser::StringParser::substring(v41, v59);
    goto LABEL_32;
  }
  if ( v35 != 125 )
  {
    v47 = v35;
    v16 = *(__int64 (__fastcall **)())(*a2 + 32LL);
    v57[0] = &v47;
    v57[1] = <char as core::fmt::Display>::fmt;
    v42 = &off_1391B0;
    v43 = 2LL;
    v25 = (_QWORD **)v57;
    goto LABEL_15;
  }
  v36 = *(_QWORD *)(*a2 + 32LL);
  uu_env::string_parser::StringParser::consume_chunk(&v42, *a2);
  if ( !v42 )
  {
    v34 = 0LL;
    goto LABEL_65;
  }
LABEL_61:
  v16 = (__int64 (__fastcall *)())v43;
  v18 = (__int64 (__fastcall *)())((unsigned __int8)v44 & 1);
  v19 = 5;
  v17 = (_QWORD *)v43;
LABEL_62:
  *(_DWORD *)a1 = v19;
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 32) = v10;
  return a1;
}
