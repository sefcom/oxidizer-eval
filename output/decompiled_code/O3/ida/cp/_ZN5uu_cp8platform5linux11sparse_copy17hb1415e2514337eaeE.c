unsigned __int64 __fastcall uu_cp::platform::linux::sparse_copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // rax
  int v20; // [rsp+0h] [rbp-F8h] BYREF
  int v21; // [rsp+4h] [rbp-F4h] BYREF
  int v22; // [rsp+8h] [rbp-F0h] BYREF
  int fd; // [rsp+Ch] [rbp-ECh]
  unsigned __int64 v24; // [rsp+10h] [rbp-E8h]
  __int64 v25; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-D8h]
  __off_t length; // [rsp+68h] [rbp-90h]
  __int64 v28; // [rsp+70h] [rbp-88h]

  v25 = 0x1B600000000LL;
  LODWORD(v26) = 1;
  WORD2(v26) = 0;
  std::fs::OpenOptions::_open(&v22, &v25, a1, a2);
  if ( v22 )
    return v24;
  v20 = fd;
  v25 = 0x1B600000000LL;
  LODWORD(v26) = 16777472;
  WORD2(v26) = 1;
  std::fs::OpenOptions::_open(&v22, &v25, a3, a4);
  if ( v22 )
  {
    v6 = v24;
LABEL_12:
    close(v20);
    return v6;
  }
  v7 = fd;
  v21 = fd;
  std::fs::File::metadata(&v25, &v20);
  if ( (_DWORD)v25 == 2 )
    goto LABEL_9;
  v8 = length;
  if ( length < 0 )
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v25, &unk_155A10, &off_155A68);
  if ( ftruncate(v7, length) < 0 )
  {
    v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno(v7) << 32) | 2;
    goto LABEL_11;
  }
  std::fs::File::metadata(&v25, &v21);
  if ( (_DWORD)v25 == 2 )
  {
LABEL_9:
    v6 = v26;
LABEL_11:
    close(v21);
    goto LABEL_12;
  }
  v10 = v28;
  if ( v28 )
  {
    if ( v28 < 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = 1LL;
      v12 = _rust_alloc_zeroed(v28, 1LL);
      if ( v12 )
      {
        v13 = v12;
        goto LABEL_19;
      }
    }
    alloc::raw_vec::handle_error(v11, v10);
  }
  v13 = 1LL;
LABEL_19:
  if ( v8 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = <std::fs::File as std::io::Read>::read(&v20, v13, v10);
      v6 = v16;
      if ( v15 )
        break;
      if ( v10 < v16 )
        core::slice::index::slice_end_index_len_fail(v16, v10, &off_155A80);
      v17 = 0LL;
      while ( v16 != v17 )
      {
        if ( *(_BYTE *)(v13 + v17++) != 0 )
        {
          v19 = std::os::unix::fs::FileExt::write_all_at(&v21, v13, v16, v14);
          if ( v19 )
          {
            v6 = v19;
            goto LABEL_29;
          }
          break;
        }
      }
      v14 += v6;
      if ( v8 <= v14 )
        goto LABEL_31;
    }
LABEL_29:
    if ( v10 )
      _rust_dealloc(v13, v10, 1LL);
    goto LABEL_11;
  }
LABEL_31:
  if ( v10 )
    _rust_dealloc(v13, v10, 1LL);
  close(v21);
  close(v20);
  return 0LL;
}
