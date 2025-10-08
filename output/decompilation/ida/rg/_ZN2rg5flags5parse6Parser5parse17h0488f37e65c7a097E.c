__int64 __fastcall rg::flags::parse::Parser::parse(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int128 *v7; // r14
  char v8; // al
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 *v15; // r14
  unsigned __int64 v16; // rcx
  __int128 *v17; // rdx
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char **v30; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v31; // [rsp+8h] [rbp-1D0h]
  __int128 *v32; // [rsp+10h] [rbp-1C8h]
  __int64 v33; // [rsp+18h] [rbp-1C0h]
  __int64 v34; // [rsp+20h] [rbp-1B8h]
  __int128 v35; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 *v36; // [rsp+40h] [rbp-198h]
  __int64 (__fastcall *v37)(); // [rsp+48h] [rbp-190h]
  __int128 v38; // [rsp+50h] [rbp-188h] BYREF
  __int128 *v39; // [rsp+60h] [rbp-178h]
  __int128 v40; // [rsp+70h] [rbp-168h] BYREF
  __int64 v41; // [rsp+80h] [rbp-158h]
  __int64 v42; // [rsp+90h] [rbp-148h]
  __int128 *v43; // [rsp+98h] [rbp-140h]
  __int64 v44; // [rsp+A0h] [rbp-138h]
  __int64 v45; // [rsp+A8h] [rbp-130h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-118h]
  __int128 v48; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-F8h]
  __int64 v50; // [rsp+E8h] [rbp-F0h]
  __int128 v51; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+100h] [rbp-D8h]
  __int128 v53; // [rsp+108h] [rbp-D0h] BYREF
  __int128 *v54; // [rsp+118h] [rbp-C0h]
  __int128 v55; // [rsp+120h] [rbp-B8h] BYREF
  __int128 *v56; // [rsp+130h] [rbp-A8h]
  _BYTE v57[160]; // [rsp+138h] [rbp-A0h] BYREF

  v44 = a1;
  lexopt::Parser::from_args(v57);
  v50 = a3 + 176;
  while ( 1 )
  {
    while ( 1 )
    {
      lexopt::Parser::next(&v30, v57);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v35, &v30);
      v5 = *((_QWORD *)&v35 + 1);
      if ( (_QWORD)v35 == 0x8000000000000002LL )
      {
        core::ptr::drop_in_place<core::option::Option<lexopt::Arg>>(0x8000000000000002LL, *((_QWORD *)&v35 + 1));
        v5 = 0LL;
        goto LABEL_28;
      }
      if ( (_QWORD)v35 == 0x8000000000000003LL )
        goto LABEL_28;
      v6 = v35 ^ 0x8000000000000000LL;
      if ( ((unsigned __int64)v35 ^ 0x8000000000000000LL) >= 2 )
        v6 = 2LL;
      if ( !v6 )
        break;
      v7 = v36;
      if ( v6 == 1 )
      {
        v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v35 + 1), v36, aHelp_0, 4LL);
        v4 = 1;
        if ( !v8 )
        {
          v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v7, aVersion, 7LL);
          v4 = 3;
          if ( !v9 )
          {
            v10 = v44;
            rg::flags::parse::Parser::find_long(&v48, v44, v5, v7);
            goto LABEL_16;
          }
        }
LABEL_3:
        *(_BYTE *)(a3 + 603) = v4;
      }
      else
      {
        v53 = v35;
        v54 = v36;
        alloc::vec::Vec<T,A>::push(v50, &v53, &off_3EB5A8);
      }
    }
    v4 = 2;
    if ( DWORD2(v35) == 86 )
      goto LABEL_3;
    if ( DWORD2(v35) == 104 )
    {
      v4 = 0;
      goto LABEL_3;
    }
    v10 = v44;
    rg::flags::parse::Parser::find_short(&v48, v44, DWORD2(v35), 2LL);
LABEL_16:
    v14 = v48 ^ 0x8000000000000000LL;
    if ( ((unsigned __int64)v48 ^ 0x8000000000000000LL) >= 2 )
      v14 = 2LL;
    if ( v14 )
      break;
    v15 = (__int64 *)*((_QWORD *)&v48 + 1);
    v45 = *((_QWORD *)&v48 + 1);
    if ( *(_BYTE *)(*((_QWORD *)&v48 + 1) + 32LL) == 1 )
    {
      LOBYTE(v5) = 0;
      v16 = 0x8000000000000000LL;
      v17 = v43;
      v18 = v42;
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)&v48 + 1) + 8LL) + 32LL))(**((_QWORD **)&v48 + 1));
      LOBYTE(v5) = 1;
      v16 = 0x8000000000000000LL;
      v17 = v43;
      v18 = v42;
      if ( !v19 )
      {
        lexopt::Parser::value(&v30, v57, v43, 0x8000000000000000LL);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v35, &v30, &v45);
        v5 = *((_QWORD *)&v35 + 1);
        v16 = v35;
        if ( (_QWORD)v35 == 0x8000000000000000LL )
          goto LABEL_28;
        v17 = v36;
        v18 = *((_QWORD *)&v35 + 1) >> 8;
      }
    }
    v20 = *v15;
    v21 = v15[1];
    v30 = (char **)v16;
    LOBYTE(v31) = v5;
    HIBYTE(v31) = BYTE6(v18);
    *(_WORD *)((char *)&v31 + 5) = WORD2(v18);
    v42 = v18;
    *(_DWORD *)((char *)&v31 + 1) = v18;
    v43 = v17;
    v32 = v17;
    v22 = (*(__int64 (__fastcall **)(__int64, char ***, __int64))(v21 + 120))(v20, &v30, a3);
    v5 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v22, &v45);
    if ( v5 )
      goto LABEL_28;
  }
  if ( v14 == 2 )
  {
    v47 = v49;
    v46 = v48;
    *(_QWORD *)&v40 = &v46;
    *((_QWORD *)&v40 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v30 = &off_3EB578;
    v31 = 1LL;
    v34 = 0LL;
    v32 = &v40;
    v33 = 1LL;
    core::option::Option<T>::map_or_else(&v35, 0LL, v11, &v30);
    v38 = v35;
    v39 = v36;
    v24 = *((_QWORD *)&v46 + 1);
    rg::flags::parse::suggest(&v51, *((_QWORD *)&v46 + 1), v47);
    if ( (_QWORD)v51 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v51);
    }
    else
    {
      v41 = v52;
      v40 = v51;
      *(_QWORD *)&v35 = &v38;
      *((_QWORD *)&v35 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v36 = &v40;
      v37 = <alloc::string::String as core::fmt::Display>::fmt;
      v30 = (char **)&unk_3EB588;
      v31 = 2LL;
      v34 = 0LL;
      v32 = &v35;
      v33 = 2LL;
      v24 = 0LL;
      core::option::Option<T>::map_or_else(&v55, 0LL, v25, &v30);
      core::ptr::drop_in_place<alloc::string::String>(&v38);
      v39 = v56;
      v38 = v55;
      core::ptr::drop_in_place<alloc::string::String>(&v40);
    }
    *(_QWORD *)&v35 = &v38;
    *((_QWORD *)&v35 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v30 = (char **)asc_62330;
    v31 = 1LL;
    v34 = 0LL;
    v32 = &v35;
    v33 = 1LL;
    v5 = anyhow::__private::format_err(&v30, v24, v26, v27, v28, v29);
    core::ptr::drop_in_place<alloc::string::String>(&v38);
    core::ptr::drop_in_place<alloc::string::String>(&v46);
  }
  else
  {
    LODWORD(v40) = DWORD2(v48);
    *(_QWORD *)&v35 = &v40;
    *((_QWORD *)&v35 + 1) = <char as core::fmt::Display>::fmt;
    v30 = &off_3EB568;
    v31 = 1LL;
    v34 = 0LL;
    v32 = &v35;
    v33 = 1LL;
    v5 = anyhow::__private::format_err(&v30, v10, v11, 2LL, v12, v13);
  }
LABEL_28:
  core::ptr::drop_in_place<lexopt::Parser>(v57);
  return v5;
}