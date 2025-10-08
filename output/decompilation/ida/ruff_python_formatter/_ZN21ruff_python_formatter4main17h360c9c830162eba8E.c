__int64 ruff_python_formatter::main()
{
  __int64 v0; // rdx
  __int64 v1; // r12
  __int64 v2; // rbx
  char *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  char **v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  char **v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r12
  char **v17; // rbp
  __int64 v18; // r13
  _BYTE *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  char *v23; // [rsp+0h] [rbp-B8h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+8h] [rbp-B0h]
  __int64 v25; // [rsp+10h] [rbp-A8h]
  __int64 v26; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-98h]
  char **v28; // [rsp+28h] [rbp-90h]
  __int128 v29; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall *v30)(); // [rsp+48h] [rbp-70h]
  char v31[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+68h] [rbp-50h]
  char v35; // [rsp+6Dh] [rbp-4Bh] BYREF
  _BYTE v36[72]; // [rsp+70h] [rbp-48h] BYREF

  clap_builder::derive::Parser::parse(v31);
  if ( v33 )
  {
    v1 = v32;
    v2 = 24 * v33;
    while ( 1 )
    {
      std::fs::read_to_string(&v26, v1);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
        &v23,
        &v26,
        *(_QWORD *)(v1 + 8),
        *(_QWORD *)(v1 + 16));
      v3 = v23;
      v4 = (__int64)v24;
      if ( v23 == (char *)0x8000000000000000LL )
        goto LABEL_29;
      v5 = *(_QWORD *)(v1 + 8);
      v6 = *(_QWORD *)(v1 + 16);
      v30 = v24;
      ruff_python_formatter::cli::format_and_debug_print(&v26, v24, v25, v31, v5, v6);
      v7 = v26;
      v4 = v27;
      if ( v26 == 0x8000000000000000LL )
        goto LABEL_23;
      v8 = v28;
      if ( v35 == 2 || (v35 & 1) == 0 )
      {
        v10 = std::fs::write(v1, v27, v28);
        v11 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                v10,
                *(_QWORD *)(v1 + 8),
                *(_QWORD *)(v1 + 16));
        if ( v11 )
        {
          v12 = v11;
LABEL_22:
          core::ptr::drop_in_place<alloc::string::String>(v7, v4);
          v4 = v12;
LABEL_23:
          v19 = v3;
          v20 = (__int64)v30;
          goto LABEL_28;
        }
      }
      else
      {
        v26 = std::io::stdio::stdout();
        v23 = (char *)std::io::stdio::Stdout::lock(&v26);
        v9 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v23, v4, v8);
        if ( v9 )
        {
          v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v9);
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v23);
          goto LABEL_22;
        }
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v23);
      }
      core::ptr::drop_in_place<alloc::string::String>(v7, v4);
      core::ptr::drop_in_place<alloc::string::String>(v3, v30);
      v1 += 24LL;
      v2 -= 24LL;
      if ( !v2 )
      {
        v4 = 0LL;
        goto LABEL_29;
      }
    }
  }
  if ( v35 == 2 || (v35 & 1) != 0 )
  {
    ruff_python_formatter::read_from_stdin(&v26);
    v13 = v26;
    v4 = v27;
    if ( !__OFSUB__(-v26, 1LL) )
    {
      v14 = v28;
      v15 = v27;
      ruff_python_formatter::cli::format_and_debug_print(&v26, v27, v28, v31, aStdinPy, 8LL);
      v16 = v26;
      v4 = v27;
      if ( v26 != 0x8000000000000000LL )
      {
        v17 = v28;
        if ( v34 )
        {
          if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                  v27,
                                  v28,
                                  v15,
                                  v14) )
          {
            v18 = 0LL;
          }
          else
          {
            v26 = (__int64)&off_57A3F8;
            v27 = 1LL;
            v28 = (char **)&byte_8;
            v29 = 0LL;
            v18 = anyhow::__private::format_err(&v26);
          }
        }
        else
        {
          v26 = std::io::stdio::stdout();
          v23 = (char *)std::io::stdio::Stdout::lock(&v26);
          v21 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v23, v4, v17);
          if ( !v21 )
          {
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v23);
            core::ptr::drop_in_place<alloc::string::String>(v16, v4);
            core::ptr::drop_in_place<alloc::string::String>(v13, v15);
            v4 = 0LL;
            goto LABEL_29;
          }
          v18 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v23);
        }
        core::ptr::drop_in_place<alloc::string::String>(v16, v4);
        v4 = v18;
      }
      v19 = (_BYTE *)v13;
      v20 = v15;
LABEL_28:
      core::ptr::drop_in_place<alloc::string::String>(v19, v20);
    }
  }
  else
  {
    v23 = &v35;
    v24 = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v26 = (__int64)&off_57A3E8;
    v27 = 1LL;
    v28 = &v23;
    v29 = 1uLL;
    core::option::Option<T>::map_or_else(v36, 0LL, v0, &v26);
    v4 = anyhow::error::<impl anyhow::Error>::msg(v36);
  }
LABEL_29:
  core::ptr::drop_in_place<ruff_python_formatter::cli::Cli>(v31);
  return v4;
}