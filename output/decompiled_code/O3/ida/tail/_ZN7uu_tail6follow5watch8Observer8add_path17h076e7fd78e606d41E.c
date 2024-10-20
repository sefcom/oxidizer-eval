        char a8)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int128 v14; // kr00_16
  _OWORD *v15; // rax
  _OWORD *v16; // r14
  __int128 v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  void *v24; // rbx
  __int64 v25; // r14
  __int64 v28; // [rsp+10h] [rbp-288h]
  _QWORD v30[3]; // [rsp+20h] [rbp-278h] BYREF
  _OWORD src[11]; // [rsp+38h] [rbp-260h] BYREF
  signed __int64 v32; // [rsp+E8h] [rbp-1B0h]
  void *v33; // [rsp+F0h] [rbp-1A8h]
  signed __int64 v34; // [rsp+F8h] [rbp-1A0h]
  __int64 v35; // [rsp+100h] [rbp-198h]
  __int64 v36; // [rsp+108h] [rbp-190h]
  _QWORD dest[22]; // [rsp+110h] [rbp-188h] BYREF
  _BYTE v38[168]; // [rsp+1C0h] [rbp-D8h] BYREF

  if ( *(_BYTE *)(a1 + 142) == 2 )
  {
    if ( !a6 )
      return 0LL;
    if ( *(_QWORD *)a7 )
      (*(void (__fastcall **)(__int64))a7)(a6);
    v9 = *(_QWORD *)(a7 + 8);
    if ( !v9 )
      return 0LL;
    v10 = *(_QWORD *)(a7 + 16);
    v11 = a6;
    goto LABEL_30;
  }
  if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3) )
  {
    std::path::Path::to_path_buf(v30, a2, a3);
    goto LABEL_18;
  }
  std::env::current_dir(src);
  v14 = src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
  {
    std::path::Path::_join(v30, *((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1], a2, a3);
    if ( (_QWORD)v14 )
      _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
LABEL_18:
    v19 = v30[1];
    v20 = v30[2];
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      dest[1] = *((_QWORD *)&src[0] + 1);
      dest[0] = 2LL;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      v21 = dest[0];
      if ( dest[0] != 2LL )
      {
        memcpy(v38, &dest[1], sizeof(v38));
LABEL_23:
        v28 = v20;
        if ( a5 )
        {
          if ( a5 < 0 )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = 1LL;
            v23 = _rust_alloc(a5, 1LL);
            if ( v23 )
            {
              v24 = (void *)v23;
              v25 = v19;
LABEL_28:
              memcpy(v24, a4, a5);
              v35 = a6;
              v36 = a7;
              *(_QWORD *)&src[0] = v21;
              memcpy((char *)src + 8, v38, 0xA8uLL);
              v32 = a5;
              v33 = v24;
              v34 = a5;
              uu_tail::follow::files::FileHandling::insert((size_t *)(a1 + 56), v25, v28, src, a8);
              v9 = v30[0];
              if ( !v30[0] )
                return 0LL;
              v10 = 1LL;
              v11 = v25;
LABEL_30:
              _rust_dealloc(v11, v9, v10);
              return 0LL;
            }
          }
          alloc::raw_vec::handle_error(v22, a5);
        }
        v25 = v19;
        v24 = &dword_0 + 1;
        goto LABEL_28;
      }
    }
    v21 = 2LL;
    core::ptr::drop_in_place<std::io::error::Error>(&dest[1]);
    goto LABEL_23;
  }
  *(_QWORD *)&src[0] = 0x8000000000000000LL;
  *((_QWORD *)&src[1] + 1) = *((_QWORD *)&v14 + 1);
  v15 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v15 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v16 = v15;
  v17 = src[0];
  v15[1] = src[1];
  *v15 = v17;
  if ( a6 )
  {
    if ( *(_QWORD *)a7 )
      (*(void (__fastcall **)(__int64))a7)(a6);
    v18 = *(_QWORD *)(a7 + 8);
    if ( v18 )
      _rust_dealloc(a6, v18, *(_QWORD *)(a7 + 16));
  }
  return v16;
}
