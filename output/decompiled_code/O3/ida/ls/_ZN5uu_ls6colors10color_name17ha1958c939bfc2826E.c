        unsigned __int8 a8)
{
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 *v15; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // r9
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  _BYTE *v22; // rbp
  __int64 v23; // r15
  _BYTE *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v29; // [rsp+0h] [rbp-248h]
  __int64 v31; // [rsp+8h] [rbp-240h]
  __int64 v33; // [rsp+18h] [rbp-230h] BYREF
  __int64 v34; // [rsp+20h] [rbp-228h]
  _BYTE src[160]; // [rsp+28h] [rbp-220h] BYREF
  _BYTE v36[176]; // [rsp+C8h] [rbp-180h] BYREF
  _BYTE dest[160]; // [rsp+178h] [rbp-D0h] BYREF

  v10 = a3;
  v11 = a1;
  if ( *(_BYTE *)(a4 + 296) )
  {
    if ( a7 )
    {
      v31 = a2;
      std::sys::pal::unix::fs::stat(&v33);
      goto LABEL_4;
    }
  }
  else
  {
    if ( *(_QWORD *)(a4 + 256) )
    {
      v17 = lscolors::LsColors::style_for(*a5, a4 + 256);
      v18 = a8;
      v19 = a5;
      v20 = v17;
      v21 = a2;
LABEL_25:
      v26 = v10;
      goto LABEL_26;
    }
    if ( a7 )
    {
      v31 = a2;
      std::sys::pal::unix::fs::lstat(&v33);
LABEL_4:
      v12 = v33;
      v13 = v34;
      if ( v33 != 2 )
        memcpy(dest, src, sizeof(dest));
      if ( (_DWORD)v33 == 2 )
      {
        v29 = v10;
        std::sys::pal::unix::fs::lstat(&v33);
        v12 = v33;
        v14 = v34;
        if ( v33 == 2 )
        {
          core::ptr::drop_in_place<std::io::error::Error>(v13);
          v33 = 2LL;
          core::ptr::drop_in_place<std::io::error::Error>(v14);
          v15 = 0LL;
          v10 = v29;
LABEL_24:
          v27 = lscolors::LsColors::style_for_path_with_metadata(*a5, a4 + 24, v15);
          v18 = a8;
          v19 = a5;
          v20 = v27;
          v21 = v31;
          goto LABEL_25;
        }
        memcpy(v36, src, 0xA0uLL);
        core::ptr::drop_in_place<std::io::error::Error>(v13);
        v13 = v14;
        v10 = v29;
      }
      else
      {
        memcpy(v36, dest, 0xA0uLL);
      }
      memcpy(src, v36, sizeof(src));
      v33 = v12;
      v34 = v13;
      v15 = &v33;
      goto LABEL_24;
    }
  }
  v22 = (_BYTE *)(a4 + 72);
  v23 = *(_QWORD *)(a4 + 72);
  if ( v23 == 3 )
  {
    core::cell::once::OnceCell<T>::try_init(a4 + 72, a4, a6);
    v23 = *(_QWORD *)(a4 + 72);
  }
  std::sys::pal::unix::fs::lstat(&v33);
  if ( v33 == 2 )
  {
    *(_QWORD *)v36 = 2LL;
    core::ptr::drop_in_place<std::io::error::Error>(v34);
    v24 = 0LL;
  }
  else
  {
    memcpy(&v36[16], src, 0xA0uLL);
    *(_QWORD *)v36 = v33;
    *(_QWORD *)&v36[8] = v34;
    v24 = v36;
  }
  if ( v23 == 2 )
    v22 = v24;
  v25 = lscolors::LsColors::style_for_path_with_metadata(*a5, a4 + 24, v22);
  v18 = a8;
  v11 = a1;
  v19 = a5;
  v20 = v25;
  v21 = a2;
  v26 = a3;
LABEL_26:
  uu_ls::colors::StyleManager::apply_style(a1, v19, v20, v21, v26, v18);
  return v11;
}
