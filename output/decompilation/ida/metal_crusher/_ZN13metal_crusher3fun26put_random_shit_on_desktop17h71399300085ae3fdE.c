__int64 metal_crusher::fun::put_random_shit_on_desktop()
{
  int v1; // r15d
  __int64 v2; // rax
  int u32; // [rsp+4h] [rbp-114h] BYREF
  __int64 v4; // [rsp+8h] [rbp-110h] BYREF
  __int128 v5; // [rsp+10h] [rbp-108h] BYREF
  __int64 v6; // [rsp+20h] [rbp-F8h]
  __int64 v7; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v8; // [rsp+30h] [rbp-E8h]
  _QWORD v9[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+70h] [rbp-A8h]
  __int128 v13; // [rsp+80h] [rbp-98h] BYREF
  __int64 v14; // [rsp+90h] [rbp-88h]
  _QWORD v15[6]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v16[72]; // [rsp+D0h] [rbp-48h] BYREF

  xdg_user::desktop(v10);
  if ( v10[0] == 0x8000000000000001LL )
    return core::ptr::drop_in_place<core::result::Result<core::option::Option<std::path::PathBuf>,xdg_user::Error>>(v10);
  core::result::Result<T,E>::unwrap(&v11, v10);
  if ( v11 == 0x8000000000000000LL )
    return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v11);
  v8 = v12;
  v7 = v11;
  v1 = 12;
  do
  {
    v4 = rand::rngs::thread::rng();
    u32 = <rand_core::block::BlockRng<R> as rand_core::RngCore>::next_u32(v4 + 16);
    v9[0] = &u32;
    v9[1] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v15[0] = &off_596658;
    v15[1] = 1LL;
    v15[4] = 0LL;
    v15[2] = v9;
    v15[3] = 1LL;
    core::option::Option<T>::map_or_else(&v5, v15);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v4);
    v13 = v5;
    v14 = v6;
    std::path::Path::join(v16, v8, *((_QWORD *)&v8 + 1), &v13);
    std::fs::File::create(v15, v16);
    LODWORD(v5) = core::result::Result<T,E>::unwrap(v15);
    v2 = std::io::Write::write_all(&v5, &unk_3263B, 13LL);
    core::result::Result<T,E>::unwrap(v2);
    std::thread::sleep(0LL, 500000000LL);
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v5);
    --v1;
  }
  while ( v1 );
  return core::ptr::drop_in_place<std::path::PathBuf>(&v7);
}