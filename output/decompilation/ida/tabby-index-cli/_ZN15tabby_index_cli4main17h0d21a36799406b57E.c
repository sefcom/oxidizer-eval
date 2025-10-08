__int64 tabby_index_cli::main()
{
  __int64 v0; // rbx
  int v1; // r15d
  __int64 v2; // rbx
  __int128 v4; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v5; // [rsp+10h] [rbp-E8h]
  __int128 v6; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v7; // [rsp+30h] [rbp-C8h]
  __int128 v8; // [rsp+40h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-A8h]
  __int64 v10; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+68h] [rbp-90h] BYREF
  __int128 v12; // [rsp+88h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-60h]
  __int128 v14; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+B0h] [rbp-48h]
  __int128 v16; // [rsp+C0h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-28h]

  clap_builder::derive::Parser::parse(&v10);
  v0 = v12;
  tabby_common::path::index_dir(&v6);
  if ( !__OFSUB__(-v0, 1LL) )
  {
    v5 = v13;
    v4 = v12;
    core::mem::drop(&v6);
    v1 = v10;
    if ( v10 )
      goto LABEL_3;
LABEL_7:
    tabby_index_cli::commands::inspect::run_inspect_cli((__int64)&v14, *((__int64 *)&v4 + 1), v5);
    if ( (_DWORD)v14 != 18 )
    {
      v9 = v17;
      v8 = v16;
      v7 = v15;
      v6 = v14;
      v2 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v6);
      goto LABEL_12;
    }
    goto LABEL_8;
  }
  v5 = v7;
  v4 = v6;
  v1 = v10;
  if ( !v10 )
    goto LABEL_7;
LABEL_3:
  if ( v1 != 1 )
  {
    v2 = tabby_index_cli::commands::head::run_head_cli(*((__int64 *)&v4 + 1), v5, v11);
    core::ptr::drop_in_place<tabby_index_cli::commands::head::HeadArgs>(v11);
    goto LABEL_12;
  }
  tabby_index_cli::commands::bench::run_bench_cli((__int64)&v14, *((__int64 *)&v4 + 1), v5, v11);
  if ( (_QWORD)v14 != 0x8000000000000000LL )
  {
    *(_QWORD *)&v7 = v15;
    v6 = v14;
    v2 = tabby_index_cli::main::{{closure}}(&v6);
    core::ptr::drop_in_place<tabby_index_cli::commands::bench::BenchArgs>(v11);
    goto LABEL_12;
  }
  core::ptr::drop_in_place<tabby_index_cli::commands::bench::BenchArgs>(v11);
LABEL_8:
  v2 = 0LL;
LABEL_12:
  core::mem::drop(&v4);
  return v2;
}