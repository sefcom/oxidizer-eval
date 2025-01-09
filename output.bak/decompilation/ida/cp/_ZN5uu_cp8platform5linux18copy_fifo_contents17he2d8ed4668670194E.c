__int64 __fastcall uu_cp::platform::linux::copy_fifo_contents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // ebx
  __int16 umask; // ax
  unsigned int v9; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v10; // [rsp+4h] [rbp-F4h] BYREF
  _DWORD v11[2]; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C0h] BYREF
  int v15; // [rsp+3Ch] [rbp-BCh]
  int v16; // [rsp+40h] [rbp-B8h]
  __int16 v17; // [rsp+44h] [rbp-B4h]
  unsigned int v18; // [rsp+70h] [rbp-88h]

  v12[0] = a1;
  v12[1] = a2;
  v13[0] = a3;
  v13[1] = a4;
  std::fs::File::open(&v14, v12);
  if ( v14 )
    return 1LL;
  v7 = v15;
  v9 = v15;
  umask = uucore::features::mode::get_umask(&v14, v12, v4, v5);
  v14 = 0;
  v17 = 1;
  v16 = 256;
  v15 = ~umask & 0x192;
  std::fs::OpenOptions::open(v11, &v14, v13);
  if ( v11[0] )
    goto LABEL_8;
  v10 = v11[1];
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v9, &v10)
    || (std::fs::File::metadata(&v14, &v9), v14 == 2)
    || std::fs::File::set_permissions(&v10, v18) )
  {
    core::ptr::drop_in_place<std::fs::File>(v10);
    v7 = v9;
LABEL_8:
    core::ptr::drop_in_place<std::fs::File>(v7);
    return 1LL;
  }
  core::ptr::drop_in_place<std::fs::File>(v10);
  core::ptr::drop_in_place<std::fs::File>(v9);
  return 0LL;
}
