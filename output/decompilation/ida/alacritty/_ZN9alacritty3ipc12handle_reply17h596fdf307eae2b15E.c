__int64 __fastcall alacritty::ipc::handle_reply(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v6; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-B8h]
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-98h]
  __int64 v10; // [rsp+38h] [rbp-90h]
  __int64 v11; // [rsp+40h] [rbp-88h]
  _QWORD v12[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v13; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+78h] [rbp-50h]
  _QWORD *v16; // [rsp+80h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+88h] [rbp-40h] BYREF

  v6 = 0LL;
  v7 = 1uLL;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v17, a1);
  *(_QWORD *)&v2 = std::io::append_to_string(&v6, v17);
  v8 = v2;
  if ( v2 & 1 | (*((_QWORD *)&v2 + 1) == 0LL) )
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v8);
LABEL_8:
    v4 = 0LL;
    goto LABEL_9;
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v8);
  v8 = v7;
  v9 = 0LL;
  serde_json::de::from_trait(&v13, &v8);
  if ( !__OFSUB__(-v13, 1LL) )
  {
    v12[0] = v13;
    v12[1] = v14;
    v12[2] = v15;
    if ( a2 == 0x8000000000000001LL )
    {
      v16 = v12;
      v13 = (__int64)&v16;
      v14 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v8 = &unk_882F40;
      *((_QWORD *)&v8 + 1) = 2LL;
      v11 = 0LL;
      v9 = &v13;
      v10 = 1LL;
      std::io::stdio::_print(&v8);
    }
    core::ptr::drop_in_place<<toml::value::MapDeserializer as serde::de::MapAccess>::next_value_seed<core::marker::PhantomData<u8>>::{{closure}}>(v12);
    goto LABEL_8;
  }
  v4 = alacritty::ipc::handle_reply::{{closure}}(v14, &v8, v3, -v13);
LABEL_9:
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&std::os::unix::net::stream::UnixStream>>(
    v17[0],
    v17[1]);
  core::ptr::drop_in_place<alloc::string::String>(&v6);
  return v4;
}