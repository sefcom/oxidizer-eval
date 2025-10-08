__int64 __fastcall rg::haystack::HaystackBuilder::build_from_result(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  char v9; // al
  char v10; // al
  __int64 v11; // [rsp+0h] [rbp-A8h] BYREF
  char **v12; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h]
  _QWORD *v14; // [rsp+18h] [rbp-90h]
  __int128 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+80h] [rbp-28h]

  if ( *(_DWORD *)a3 != 3 )
    return rg::haystack::HaystackBuilder::build(a1, a2);
  v19 = *(_QWORD *)(a3 + 56);
  v3 = *(_OWORD *)(a3 + 8);
  v4 = *(_OWORD *)(a3 + 24);
  v18[2] = *(_OWORD *)(a3 + 40);
  v18[1] = v4;
  v18[0] = v3;
  rg::messages::set_errored();
  if ( rg::messages::messages() )
  {
    v12 = (char **)std::io::stdio::stdout();
    v5 = std::io::stdio::Stdout::lock(&v12);
    v12 = (char **)&std::io::stdio::stderr::INSTANCE;
    v11 = std::io::stdio::Stdout::lock(&v12);
    v12 = &off_3E99C8;
    v13 = 1LL;
    v14 = (_QWORD *)&byte_8;
    v15 = 0LL;
    v6 = std::io::Write::write_fmt(&v11, &v12);
    v17[0] = v6;
    if ( v6 )
    {
      v12 = (char **)v6;
      v9 = std::io::error::Error::kind(v6);
      std::process::exit(2 * (v9 != 11));
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v17);
    v17[0] = v18;
    v17[1] = <ignore::Error as core::fmt::Display>::fmt;
    v12 = (char **)&unk_3EA800;
    v13 = 2LL;
    v14 = v17;
    v15 = 1uLL;
    v7 = std::io::Write::write_fmt(&v11, &v12);
    v16 = v7;
    if ( v7 )
    {
      v12 = (char **)v7;
      v10 = std::io::error::Error::kind(v7);
      std::process::exit(2 * (v10 != 11));
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v16);
    core::ptr::drop_in_place<std::io::stdio::StderrLock>(v5);
    core::ptr::drop_in_place<std::io::stdio::StderrLock>(v11);
  }
  *a1 = 3LL;
  return core::ptr::drop_in_place<ignore::Error>(v18);
}