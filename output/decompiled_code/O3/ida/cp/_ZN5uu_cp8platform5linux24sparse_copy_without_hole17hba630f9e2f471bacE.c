        __int64 a4)
{
  unsigned __int64 v6; // rbp
  int v7; // ebx
  unsigned __int64 v8; // r14
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  int v20; // ebp
  __int64 v21; // r14
  __off_t v22; // rax
  int v24; // [rsp+8h] [rbp-130h] BYREF
  int v25; // [rsp+Ch] [rbp-12Ch] BYREF
  __int64 v26; // [rsp+10h] [rbp-128h]
  unsigned __int64 v27; // [rsp+18h] [rbp-120h]
  unsigned __int64 v28; // [rsp+20h] [rbp-118h]
  int v29; // [rsp+28h] [rbp-110h] BYREF
  int fd; // [rsp+2Ch] [rbp-10Ch]
  unsigned __int64 v31; // [rsp+30h] [rbp-108h]
  int v32; // [rsp+3Ch] [rbp-FCh]
  __off_t offset; // [rsp+40h] [rbp-F8h]
  __int64 v34; // [rsp+48h] [rbp-F0h]
  __int64 v35; // [rsp+50h] [rbp-E8h]
  __int64 v36; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-D8h]
  __off_t length; // [rsp+A8h] [rbp-90h]

  v36 = 0x1B600000000LL;
  LODWORD(v37) = 1;
  WORD2(v37) = 0;
  std::fs::OpenOptions::_open(&v29, &v36, a1, a2);
  if ( !v29 )
  {
    v24 = fd;
    v36 = 0x1B600000000LL;
    LODWORD(v37) = 16777472;
    WORD2(v37) = 1;
    std::fs::OpenOptions::_open(&v29, &v36, a3, a4);
    if ( v29 )
    {
      v6 = v31;
LABEL_44:
      close(v24);
      return v6;
    }
    v7 = fd;
    v25 = fd;
    std::fs::File::metadata(&v36, &v24);
    if ( (_DWORD)v36 == 2 )
    {
      v6 = v37;
LABEL_43:
      close(v25);
      goto LABEL_44;
    }
    v8 = length;
    if ( length < 0 )
      core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v36, &unk_155A10, &off_155A50);
    if ( ftruncate(v7, length) < 0 )
    {
      v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
      goto LABEL_43;
    }
    v9 = v24;
    v10 = 0x1000000LL;
    if ( v8 < 0x1000000 )
      v10 = v8;
    v28 = v8;
    v27 = v10;
    if ( v8 )
    {
      v26 = _rust_alloc_zeroed(v10, 1LL);
      if ( !v26 )
        alloc::raw_vec::handle_error(1LL, v27);
      v11 = lseek(v9, 0LL, 3);
      v12 = lseek(v9, v11, 4);
      if ( v11 != -1 && v12 != -1 )
      {
        v35 = -(__int64)v27;
        v32 = v9;
        while ( v11 >= -1 && v12 >= -1 )
        {
          offset = v12;
          v34 = v12 - v11;
          if ( v12 > v11 )
          {
            v13 = v27;
            if ( v34 < v27 )
              v13 = v34;
            v6 = std::os::unix::fs::FileExt::read_exact_at(&v24, v26, v13, v11);
            if ( v6 )
              goto LABEL_41;
            v6 = std::os::unix::fs::FileExt::write_all_at(&v25, v26, v13, v11);
            if ( v6 )
              goto LABEL_41;
            v14 = v35 + offset - v11;
            v15 = v27 + v11;
            v16 = 0LL;
            while ( 1 )
            {
              v17 = v27 + v16;
              if ( (__int64)(v27 + v16) < v16 + 1 || v17 >= v34 )
                break;
              v18 = v14 - v27;
              if ( v14 >= v27 )
                v14 = v27;
              v19 = v15 + v16;
              v6 = std::os::unix::fs::FileExt::read_exact_at(&v24, v26, v14, v19);
              if ( !v6 )
              {
                v6 = std::os::unix::fs::FileExt::write_all_at(&v25, v26, v14, v19);
                v14 = v18;
                v16 = v17;
                if ( !v6 )
                  continue;
              }
              goto LABEL_41;
            }
          }
          v20 = v32;
          v11 = lseek(v32, offset, 3);
          v12 = lseek(v20, v11, 4);
          if ( v11 == -1 || v12 == -1 )
          {
            if ( !v28 )
              goto LABEL_46;
            goto LABEL_34;
          }
        }
        goto LABEL_40;
      }
LABEL_34:
      _rust_dealloc(v26, v27, 1LL);
    }
    else
    {
      v21 = lseek(v24, 0LL, 3);
      v22 = lseek(v9, v21, 4);
      if ( v21 != -1 && v22 != -1 )
      {
        v26 = 1LL;
        if ( v21 >= -1 && v22 >= -1 )
        {
          v26 = 1LL;
          core::panicking::panic(aAssertionFaile_19, 27LL, &off_1559F8);
        }
LABEL_40:
        v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
LABEL_41:
        if ( v28 )
          _rust_dealloc(v26, v27, 1LL);
        goto LABEL_43;
      }
    }
LABEL_46:
    close(v25);
    close(v24);
    return 0LL;
  }
  return v31;
}
