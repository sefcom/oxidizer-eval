__int64 __fastcall uu_tail::tail_stdin(__int64 a1, _BYTE *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int128 v17; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-C8h]
  __int128 v19; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-A8h]
  __int128 v21; // [rsp+50h] [rbp-98h]
  __int128 v22; // [rsp+60h] [rbp-88h] BYREF
  __int128 v23; // [rsp+70h] [rbp-78h]
  __int128 v24; // [rsp+80h] [rbp-68h]
  _QWORD v25[2]; // [rsp+98h] [rbp-50h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-30h]

  uu_tail::paths::Input::resolve(&v26, a3);
  if ( (_QWORD)v26 != 0x8000000000000000LL )
  {
    v18 = v27;
    v17 = v26;
    same_file::Handle::stdin(&v19);
    if ( BYTE4(v20) == 2 )
    {
      v9 = 0LL;
    }
    else
    {
      *(_QWORD *)&v23 = v20;
      v22 = v19;
      v10 = same_file::Handle::as_file_mut(&v22);
      v25[0] = <std::fs::File as std::io::Seek>::seek(v10, 2LL, 0LL);
      v25[1] = v11;
      v9 = 0LL;
      if ( !v25[0] )
        v9 = v11;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v25);
      core::ptr::drop_in_place<same_file::Handle>(&v22);
      if ( BYTE4(v20) != 2 )
        goto LABEL_10;
    }
    core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v19);
LABEL_10:
    v12 = uu_tail::tail_file(a1, a2, a3, *((__int64 *)&v17 + 1), v18, a4, v9);
    if ( v12 )
    {
      v8 = v12;
      core::ptr::drop_in_place<std::path::PathBuf>(&v17);
      return v8;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    return 0LL;
  }
  uu_tail::paths::HeaderPrinter::print_input(a2, (__int64)a3);
  v6 = std::io::stdio::stdin();
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v19, 0x2000LL, v6);
  v7 = uu_tail::unbounded_tail((__int64)&v19, a1);
  if ( v7 )
  {
    v8 = v7;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(&v19);
    return v8;
  }
  v14 = a3[1];
  v15 = a3[2];
  v24 = v21;
  v23 = v20;
  v22 = v19;
  v16 = alloc::boxed::Box<T>::new(&v22);
  result = uu_tail::follow::watch::Observer::add_stdin(a4, v14, v15, v16, (__int64)&off_1BB9D0, 1);
  if ( !result )
    return 0LL;
  return result;
}
