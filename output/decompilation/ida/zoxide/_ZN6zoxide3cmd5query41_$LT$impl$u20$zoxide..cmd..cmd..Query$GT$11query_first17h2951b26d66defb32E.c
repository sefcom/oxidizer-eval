__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_first(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-80h] BYREF
  int v23; // [rsp+40h] [rbp-68h]
  _QWORD v24[12]; // [rsp+48h] [rbp-60h] BYREF

  v20 = std::io::stdio::stdout();
  v6 = zoxide::db::stream::Stream::next(a2, a2, v5);
  v7 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(
         v6,
         aNoMatchFound,
         14LL);
  v9 = v8;
  if ( (v7 & 1) == 0 )
  {
    if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 24)) )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 40);
      while ( 1 )
      {
        v13 = *(_QWORD *)(v9 + 16);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v9 + 8), v13, v11, v12) )
          break;
        v15 = zoxide::db::stream::Stream::next(a2, v13, v14);
        v16 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(
                v15,
                &unk_1AA24,
                33LL);
        v9 = v17;
        if ( (v16 & 1) != 0 )
          return v9;
      }
    }
    if ( *(_BYTE *)(a1 + 75) )
    {
      v22[1] = a3;
      v10 = 1LL;
    }
    else
    {
      v10 = 0LL;
    }
    v22[0] = v10;
    v22[2] = v9;
    v23 = 32;
    v21[0] = v22;
    v21[1] = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
    v24[0] = &unk_134950;
    v24[1] = 2LL;
    v24[4] = 0LL;
    v24[2] = v21;
    v24[3] = 1LL;
    v18 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v20, v24);
    return <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
             v18,
             aStdout,
             6LL);
  }
  return v9;
}