__int64 __fastcall uu_sort::tmp_dir::remove_tmp_dir(void *a1, size_t a2)
{
  size_t v2; // rbx
  void *v3; // r14
  char v4; // dl
  volatile signed __int64 *v5; // rcx
  volatile signed __int64 **v6; // r15
  volatile signed __int64 **v7; // r12
  void (__fastcall *v8)(volatile signed __int64 **, volatile signed __int64 **); // r14
  __int64 v9; // rsi
  char *v10; // rdx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rax
  volatile signed __int64 **v13; // rbx
  volatile signed __int64 **v14; // r15
  void (__fastcall *v15)(volatile signed __int64 **, volatile signed __int64 **); // r12
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rsi
  void *v19; // rbp
  __int64 v20; // r13
  volatile signed __int64 *v21; // rdi
  __int64 v23; // [rsp+8h] [rbp-130h]
  volatile signed __int64 *v24; // [rsp+10h] [rbp-128h] BYREF
  char v25; // [rsp+18h] [rbp-120h]
  volatile signed __int64 *v26; // [rsp+20h] [rbp-118h] BYREF
  volatile signed __int64 *v27; // [rsp+28h] [rbp-110h]
  _BYTE v28[24]; // [rsp+30h] [rbp-108h]
  char *v29; // [rsp+48h] [rbp-F0h]
  __int128 v30; // [rsp+50h] [rbp-E8h]
  char *v31; // [rsp+60h] [rbp-D8h]
  void *v32; // [rsp+68h] [rbp-D0h]
  size_t v33; // [rsp+70h] [rbp-C8h]
  __int64 v34; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+80h] [rbp-B8h] BYREF
  void *src; // [rsp+88h] [rbp-B0h]
  size_t n; // [rsp+90h] [rbp-A8h]
  volatile signed __int64 *v38; // [rsp+98h] [rbp-A0h] BYREF
  char v39; // [rsp+A0h] [rbp-98h]
  __int64 v40; // [rsp+C8h] [rbp-70h]
  volatile signed __int64 *v41; // [rsp+F8h] [rbp-40h] BYREF
  char v42; // [rsp+100h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  std::sys::pal::unix::fs::readdir(&v38, a1, a2);
  v4 = 2;
  if ( v39 != 2 )
    v4 = v39 != 0;
  v5 = v38;
  v24 = v38;
  v25 = v4;
  if ( v39 == 2 )
  {
LABEL_29:
    core::ptr::drop_in_place<std::io::error::Error>(&v24);
    return std::sys::pal::unix::fs::rmdir(v3, v2);
  }
  v32 = a1;
  v33 = a2;
  v38 = 0LL;
  v40 = 0LL;
  v6 = &v41;
  v41 = v5;
  v42 = v39 != 0;
  v7 = &v26;
  v8 = (void (__fastcall *)(volatile signed __int64 **, volatile signed __int64 **))<std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next;
  while ( 1 )
  {
    v9 = (__int64)v6;
    v8(v7, v6);
    if ( !v26 )
      break;
    v11 = v27;
    v12 = *(_QWORD *)v28;
    v30 = *(_OWORD *)&v28[8];
    v31 = v29;
LABEL_13:
    if ( v11 )
    {
      *(_QWORD *)&v28[16] = v31;
      *(_OWORD *)v28 = v30;
      v26 = v11;
      v27 = (volatile signed __int64 *)v12;
      std::fs::DirEntry::path(&v35, v7);
      v19 = src;
      v20 = std::sys::pal::unix::fs::unlink(src, n);
      if ( v35 )
        _rust_dealloc(v19, v35, 1LL);
      v34 = v20;
      if ( v20 )
        core::ptr::drop_in_place<std::io::error::Error>(&v34);
      if ( !_InterlockedDecrement64(v26) )
        alloc::sync::Arc<T,A>::drop_slow(v7);
      v21 = v27;
      v9 = *(_QWORD *)v28;
      *(_BYTE *)v27 = 0;
      if ( v9 )
        _rust_dealloc(v21, v9, 1LL);
    }
    else
    {
      v11 = (volatile signed __int64 *)(v12 & 3);
      v10 = (char *)v11 - 2;
      if ( (unsigned __int64)v11 - 2 >= 2 && (v12 & 3) != 0 )
      {
        v13 = v6;
        v14 = v7;
        v15 = v8;
        v23 = v12 - 1;
        v16 = *(_QWORD *)(v12 - 1);
        v17 = *(_QWORD *)(v12 + 7);
        if ( *(_QWORD *)v17 )
          (*(void (__fastcall **)(__int64))v17)(v16);
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
          _rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16));
        v9 = 24LL;
        _rust_dealloc(v23, 24LL, 8LL);
        v8 = v15;
        v7 = v14;
        v6 = v13;
      }
    }
    if ( v42 == 2 )
      goto LABEL_28;
  }
  if ( v42 != 2 && !_InterlockedDecrement64(v41) )
    alloc::sync::Arc<T,A>::drop_slow(v6);
  v42 = 2;
  v11 = v27;
  v12 = *(_QWORD *)v28;
  v30 = *(_OWORD *)&v28[8];
  v10 = v29;
  v31 = v29;
  if ( v26 )
    goto LABEL_13;
LABEL_28:
  core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(&v38, v9, v10, v11);
  v2 = v33;
  v3 = v32;
  if ( v25 == 2 )
    goto LABEL_29;
  return std::sys::pal::unix::fs::rmdir(v3, v2);
}
