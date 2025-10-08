__int64 __fastcall versions_replacer::metadata::collect_versions_from_cargo_toml(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _QWORD v11[18]; // [rsp+0h] [rbp-288h] BYREF
  int v12; // [rsp+90h] [rbp-1F8h]
  _OWORD v13[3]; // [rsp+98h] [rbp-1F0h] BYREF
  _QWORD v14[2]; // [rsp+C8h] [rbp-1C0h] BYREF
  _QWORD dest[24]; // [rsp+D8h] [rbp-1B0h] BYREF
  __int64 v16; // [rsp+198h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+1A0h] [rbp-E8h]
  _BYTE src[192]; // [rsp+1A8h] [rbp-E0h] BYREF

  v11[9] = 0x8000000000000000LL;
  v11[12] = 0x8000000000000000LL;
  v11[15] = 0LL;
  v11[17] = 0LL;
  v12 = 0;
  v6 = <&T as core::convert::AsRef<U>>::as_ref(
         a2,
         a2,
         a3,
         a4,
         a5,
         a6,
         0LL,
         8LL,
         0LL,
         0LL,
         8LL,
         0LL,
         0x8000000000000000LL);
  cargo_metadata::MetadataCommand::manifest_path(v11, v6);
  cargo_metadata::MetadataCommand::exec(v14, v11);
  eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err(&v16, v14);
  v7 = v17;
  if ( v16 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = 0LL;
    return core::ptr::drop_in_place<cargo_metadata::MetadataCommand>(v11);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v14[0] = v16;
    v14[1] = v17;
    core::ptr::drop_in_place<cargo_metadata::MetadataCommand>(v11);
    core::iter::traits::iterator::Iterator::collect(v13, v7, v7 + 600LL * dest[0]);
    v9 = v13[0];
    v10 = v13[1];
    *(_OWORD *)(a1 + 32) = v13[2];
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    return core::ptr::drop_in_place<cargo_metadata::Metadata>(v14);
  }
}