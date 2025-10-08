__int64 __fastcall uu_cp::platform::linux::copy_stream(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rdx
  unsigned int v7; // r14d
  __int16 umask; // ax
  unsigned int v10; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v11; // [rsp+Ch] [rbp-FCh] BYREF
  _DWORD v12[2]; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h]
  unsigned int v17; // [rsp+78h] [rbp-90h]

  v13[0] = a1;
  v13[1] = a2;
  v14[0] = a3;
  v14[1] = a4;
  std::fs::File::open(&v15, v13);
  if ( (_DWORD)v15 == 1 )
    return 1LL;
  v7 = HIDWORD(v15);
  v10 = HIDWORD(v15);
  umask = uucore::features::mode::get_umask(&v15, v13, v6);
  LODWORD(v15) = 0;
  WORD2(v16) = 1;
  LODWORD(v16) = 256;
  HIDWORD(v15) = ~umask & 0x192;
  std::fs::OpenOptions::open(v12, &v15, v14);
  if ( v12[0] == 1 )
  {
LABEL_6:
    core::ptr::drop_in_place<std::fs::File>(v7);
    return 1LL;
  }
  v11 = v12[1];
  uucore::features::buf_copy::linux::copy_stream(&v15, &v10, &v11);
  if ( v15 )
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v15, v16);
LABEL_5:
    core::ptr::drop_in_place<std::fs::File>(v11);
    v7 = v10;
    goto LABEL_6;
  }
  if ( a5 )
  {
    std::fs::File::metadata(&v15, &v10);
    if ( (_DWORD)v15 == 2 || std::fs::File::set_permissions(&v11, v17) )
      goto LABEL_5;
  }
  core::ptr::drop_in_place<std::fs::File>(v11);
  core::ptr::drop_in_place<std::fs::File>(v10);
  return 0LL;
}