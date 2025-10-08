__int64 __fastcall uu_tail::tail_stdin(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+10h] [rbp-C8h]
  __int128 v20; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-B0h]
  __int128 v22; // [rsp+38h] [rbp-A0h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  __int128 v24; // [rsp+50h] [rbp-88h] BYREF
  __int128 v25; // [rsp+60h] [rbp-78h]
  __int128 v26; // [rsp+70h] [rbp-68h]
  _QWORD v27[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+90h] [rbp-48h] BYREF

  uu_tail::paths::Input::resolve(v28, a3);
  v6 = v28[0];
  if ( !__OFSUB__(-v28[0], 1LL) )
  {
    v19 = v28[1];
    v23 = v28[2];
    same_file::Handle::stdin(&v20);
    if ( BYTE4(v21) == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v20);
      v12 = 0LL;
    }
    else
    {
      *(_QWORD *)&v25 = v21;
      v24 = v20;
      v13 = same_file::Handle::as_file_mut(&v24);
      v27[0] = <std::fs::File as std::io::Seek>::stream_position(v13);
      v27[1] = v14;
      v12 = 0LL;
      if ( (v27[0] & 1) == 0 )
        v12 = v14;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v27);
      core::ptr::drop_in_place<same_file::Handle>(&v24);
      if ( BYTE4(v21) == 2 )
        core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v20);
    }
    v15 = uu_tail::tail_file(a1, a2, a3, v19, v23, a4, v12);
    v16 = v6;
    if ( v15 )
    {
      v11 = v15;
      core::ptr::drop_in_place<std::path::PathBuf>(v16, v19);
      return v11;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v19);
    return 0LL;
  }
  v7 = a3[1];
  v8 = a3[2];
  uu_tail::paths::HeaderPrinter::print_input(a2, v7, v8);
  v9 = std::io::stdio::stdin();
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v20, v9);
  v10 = uu_tail::unbounded_tail(&v20, a1);
  if ( v10 )
  {
    v11 = v10;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(&v20);
    return v11;
  }
  v26 = v22;
  v25 = v21;
  v24 = v20;
  v18 = alloc::boxed::Box<T>::new(&v24);
  result = uu_tail::follow::watch::Observer::add_stdin(a4, v7, v8, v18);
  if ( !result )
    return 0LL;
  return result;
}