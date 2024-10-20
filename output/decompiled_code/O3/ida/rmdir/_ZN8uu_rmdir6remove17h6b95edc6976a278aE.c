__int64 *__fastcall uu_rmdir::remove(__int64 *a1, void *a2, size_t a3, int a4)
{
  void *v6; // r15
  __int64 v7; // rax
  void *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rax
  size_t v12; // rdx
  _OWORD *v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+10h] [rbp-A8h]
  __int64 *v15; // [rsp+18h] [rbp-A0h]
  __int64 (__fastcall *v16)(); // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+28h] [rbp-90h] BYREF
  void *v18; // [rsp+30h] [rbp-88h]
  size_t v19; // [rsp+38h] [rbp-80h]
  char v20; // [rsp+40h] [rbp-78h]
  void *v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+50h] [rbp-68h]
  _QWORD *v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  _OWORD v26[4]; // [rsp+78h] [rbp-40h] BYREF

  v6 = a2;
  if ( (a4 & 0x10000) != 0 )
  {
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v26[0] = xmmword_E0A38;
    v17 = 1LL;
    v18 = a2;
    v19 = a3;
    v20 = 1;
    v13 = v26;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v17;
    v16 = <os_display::Quoted as core::fmt::Display>::fmt;
    v21 = &unk_DC078;
    v22 = 3LL;
    v25 = 0LL;
    v23 = &v13;
    v24 = 2LL;
    std::io::stdio::_print(&v21);
  }
  v7 = std::sys::pal::unix::fs::rmdir(a2, a3);
  if ( v7 )
  {
LABEL_6:
    *a1 = v7;
    a1[1] = (__int64)v6;
    a1[2] = a3;
  }
  else
  {
    if ( (a4 & 0x100) != 0 )
    {
      if ( (a4 & 0x10000) != 0 )
      {
        while ( 1 )
        {
          v11 = std::path::Path::parent(v6, a3);
          if ( !v11 )
            break;
          a3 = v12;
          if ( !v12 )
            break;
          v6 = (void *)v11;
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v26[0] = xmmword_E0A38;
          v17 = 1LL;
          v18 = v6;
          v19 = a3;
          v20 = 1;
          v13 = v26;
          v14 = <&T as core::fmt::Display>::fmt;
          v15 = &v17;
          v16 = <os_display::Quoted as core::fmt::Display>::fmt;
          v21 = &unk_DC078;
          v22 = 3LL;
          v25 = 0LL;
          v23 = &v13;
          v24 = 2LL;
          std::io::stdio::_print(&v21);
          v7 = std::sys::pal::unix::fs::rmdir(v6, a3);
          if ( v7 )
            goto LABEL_6;
        }
      }
      else
      {
        while ( 1 )
        {
          v9 = (void *)std::path::Path::parent(v6, a3);
          if ( !v9 )
            break;
          a3 = v10;
          if ( !v10 )
            break;
          v6 = v9;
          v7 = std::sys::pal::unix::fs::rmdir(v9, v10);
          if ( v7 )
            goto LABEL_6;
        }
      }
    }
    *a1 = 0LL;
  }
  return a1;
}
