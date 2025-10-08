char rg::main()
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  char v8; // al
  __int64 v9; // [rsp+8h] [rbp-420h] BYREF
  __int64 v10; // [rsp+10h] [rbp-418h] BYREF
  _BYTE v11[8]; // [rsp+18h] [rbp-410h] BYREF
  __int64 v12; // [rsp+20h] [rbp-408h]
  __int64 v13; // [rsp+28h] [rbp-400h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-3F8h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-3E8h] BYREF
  __int128 v16; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp-3B8h]
  __int64 v18; // [rsp+88h] [rbp-3A0h]

  rg::flags::parse::parse(&v16);
  rg::run(v11, &v16);
  if ( v11[0] != 1 )
    return v11[1];
  v9 = v12;
  anyhow::error::<impl anyhow::Error>::chain(v15, &v9);
  *(_OWORD *)v17 = v15[1];
  v16 = v15[0];
  while ( 1 )
  {
    v1 = anyhow::chain::<impl core::iter::traits::iterator::Iterator for anyhow::Chain>::next(&v16);
    v3 = (_QWORD *)v1;
    if ( !v1 )
      break;
    if ( (unsigned __int8)<dyn core::error::Error>::is(v1, *(_QWORD *)(v2 + 56))
      && (unsigned __int8)std::io::error::Error::kind(*v3) == 11 )
    {
      core::ptr::drop_in_place<anyhow::Chain>(&v16);
      core::ptr::drop_in_place<anyhow::Error>(&v9);
      return 0;
    }
  }
  core::ptr::drop_in_place<anyhow::Chain>(&v16);
  *(_QWORD *)&v16 = std::io::stdio::stdout();
  v4 = std::io::stdio::Stdout::lock(&v16);
  *(_QWORD *)&v16 = &std::io::stdio::stderr::INSTANCE;
  v10 = std::io::stdio::Stdout::lock(&v16);
  *(_QWORD *)&v16 = &off_3E99C8;
  *((_QWORD *)&v16 + 1) = 1LL;
  *(_QWORD *)v17 = 8LL;
  *(_OWORD *)&v17[8] = 0LL;
  v5 = std::io::Write::write_fmt(&v10, &v16);
  v14[0] = v5;
  if ( v5 )
  {
    *(_QWORD *)&v16 = v5;
    v7 = std::io::error::Error::kind(v5);
    std::process::exit(2 * (v7 != 11));
  }
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v14);
  v14[0] = &v9;
  v14[1] = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
  *(_QWORD *)&v16 = &unk_3EA800;
  *((_QWORD *)&v16 + 1) = 2LL;
  *(_QWORD *)&v17[16] = &unk_87FF8;
  v18 = 1LL;
  *(_QWORD *)v17 = v14;
  *(_QWORD *)&v17[8] = 1LL;
  v6 = std::io::Write::write_fmt(&v10, &v16);
  v13 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = v6;
    v8 = std::io::error::Error::kind(v6);
    std::process::exit(2 * (v8 != 11));
  }
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v13);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v4);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v10);
  core::ptr::drop_in_place<anyhow::Error>(&v9);
  return 2;
}