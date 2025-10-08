__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_list(
        __int64 a1,
        const char *a2,
        __int64 a3)
{
  const char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v23; // [rsp+8h] [rbp-90h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+18h] [rbp-80h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  int v28; // [rsp+30h] [rbp-68h]
  void *v29; // [rsp+38h] [rbp-60h] BYREF
  __int64 v30; // [rsp+40h] [rbp-58h]
  __int64 **v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v29 = (void *)std::io::stdio::stdout();
  v22 = std::io::stdio::Stdout::lock(&v29);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(a1 + 75) & 1) != 0 )
  {
    if ( __OFSUB__(-v6, 1LL) )
    {
      while ( 1 )
      {
        v9 = zoxide::db::stream::Stream::next(v4, a2, v5);
        if ( !v9 )
          break;
        v25 = 1LL;
        v26 = a3;
        v27 = v9;
        v28 = 32;
        v23 = &v25;
        v24 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
        v29 = &unk_134950;
        v30 = 2LL;
        v33 = 0LL;
        v31 = &v23;
        v32 = 1LL;
        v10 = std::io::Write::write_fmt(&v22, &v29);
        a2 = aStdout;
        v11 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
                v10,
                aStdout,
                6LL);
        if ( v11 )
          goto LABEL_17;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = zoxide::db::stream::Stream::next(v4, a2, v5);
        v15 = v14;
        if ( !v14 )
          break;
        a2 = *(const char **)(v14 + 16);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v14 + 8), a2, v7, v8) )
        {
          v25 = 1LL;
          v26 = a3;
          v27 = v15;
          v28 = 32;
          v23 = &v25;
          v24 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
          v29 = &unk_134950;
          v30 = 2LL;
          v33 = 0LL;
          v31 = &v23;
          v32 = 1LL;
          v16 = std::io::Write::write_fmt(&v22, &v29);
          a2 = aStdout;
          v11 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
                  v16,
                  aStdout,
                  6LL);
          if ( v11 )
            goto LABEL_17;
        }
      }
    }
  }
  else if ( __OFSUB__(-v6, 1LL) )
  {
    while ( 1 )
    {
      v12 = zoxide::db::stream::Stream::next(v4, a2, v5);
      if ( !v12 )
        break;
      v27 = v12;
      v25 = 0LL;
      v28 = 32;
      v23 = &v25;
      v24 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
      v29 = &unk_134950;
      v30 = 2LL;
      v33 = 0LL;
      v31 = &v23;
      v32 = 1LL;
      v13 = std::io::Write::write_fmt(&v22, &v29);
      a2 = aStdout;
      v11 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
              v13,
              aStdout,
              6LL);
      if ( v11 )
        goto LABEL_17;
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = zoxide::db::stream::Stream::next(v4, a2, v5);
      v18 = v17;
      if ( !v17 )
        break;
      a2 = *(const char **)(v17 + 16);
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v17 + 8), a2, v7, v8) )
      {
        v27 = v18;
        v25 = 0LL;
        v28 = 32;
        v23 = &v25;
        v24 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
        v29 = &unk_134950;
        v30 = 2LL;
        v33 = 0LL;
        v31 = &v23;
        v32 = 1LL;
        v19 = std::io::Write::write_fmt(&v22, &v29);
        a2 = aStdout;
        v11 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
                v19,
                aStdout,
                6LL);
        if ( v11 )
        {
LABEL_17:
          v20 = v11;
          goto LABEL_19;
        }
      }
    }
  }
  v20 = 0LL;
LABEL_19:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v22);
  return v20;
}