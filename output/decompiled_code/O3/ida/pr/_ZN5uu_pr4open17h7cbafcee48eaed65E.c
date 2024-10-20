unsigned __int64 *__fastcall uu_pr::open(unsigned __int64 *a1, _BYTE *a2, signed __int64 a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  void *v10; // r13
  __int16 v11; // bp
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // rdi
  unsigned __int64 v15; // r15
  signed __int64 v16; // rbp
  void *v17; // rax
  __int64 v18; // r13
  __int64 (__fastcall **v19)(); // r12
  int v21; // ebp
  _DWORD *v22; // rax
  _DWORD v23[2]; // [rsp+8h] [rbp-F0h] BYREF
  signed __int64 v24; // [rsp+10h] [rbp-E8h]
  __int64 dest; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+20h] [rbp-D8h]
  int v27; // [rsp+50h] [rbp-A8h]

  if ( a3 == 1 && *a2 == 45 )
  {
    v5 = std::io::stdio::stdin();
    v6 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v6 = v5;
    a1[1] = (unsigned __int64)v6;
    a1[2] = (unsigned __int64)&unk_28EC30;
    *a1 = 0x8000000000000005LL;
    return a1;
  }
  std::sys::pal::unix::fs::stat(&dest);
  if ( (_DWORD)dest == 2 )
  {
    v7 = v26;
    if ( a3 )
    {
      if ( a3 < 0 )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = 1LL;
        v9 = _rust_alloc(a3, 1LL);
        if ( v9 )
        {
          v10 = (void *)v9;
LABEL_15:
          memcpy(v10, a2, a3);
          *a1 = 0x8000000000000004LL;
          a1[1] = a3;
          a1[2] = (unsigned __int64)v10;
          a1[3] = a3;
          core::ptr::drop_in_place<std::io::error::Error>(v7);
          return a1;
        }
      }
      alloc::raw_vec::handle_error(v8, a3);
    }
    v10 = &dword_0 + 1;
    goto LABEL_15;
  }
  v11 = v27;
  if ( a3 )
  {
    if ( a3 < 0 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = 1LL;
      v13 = _rust_alloc(a3, 1LL);
      if ( v13 )
      {
        v14 = (char *)v13;
        goto LABEL_17;
      }
    }
    alloc::raw_vec::handle_error(v12, a3);
  }
  v14 = (char *)&dword_0 + 1;
LABEL_17:
  v15 = 0x8000000000000005LL;
  memcpy(v14, a2, a3);
  switch ( ((v11 & 0xF000u) - 4096) >> 12 )
  {
    case 3u:
      v15 = 0x8000000000000002LL;
      goto LABEL_24;
    case 7u:
    case 9u:
      dest = 0x1B600000000LL;
      LODWORD(v26) = 1;
      WORD2(v26) = 0;
      std::fs::OpenOptions::_open(v23, &dest, a2, a3);
      if ( v23[0] )
      {
        v16 = v24;
        if ( a3 )
        {
          v17 = (void *)_rust_alloc(a3, 1LL);
          if ( !v17 )
            alloc::raw_vec::handle_error(1LL, a3);
          v18 = (__int64)v17;
          memcpy(v17, a2, a3);
          _rust_dealloc(v14, a3, 1LL);
          v15 = a3;
          v19 = (__int64 (__fastcall **)())a3;
        }
        else
        {
          v18 = 1LL;
          v15 = 0LL;
          v19 = 0LL;
        }
      }
      else
      {
        v21 = v23[1];
        v22 = (_DWORD *)_rust_alloc(4LL, 4LL);
        if ( !v22 )
          alloc::alloc::handle_alloc_error(4LL, 4LL);
        v18 = (__int64)v22;
        *v22 = v21;
        v19 = &off_28EC88;
        if ( a3 )
        {
          _rust_dealloc(v14, a3, 1LL);
          v16 = a3;
        }
        else
        {
          v16 = 0LL;
        }
      }
      goto LABEL_27;
    case 0xBu:
      v15 = 0x8000000000000003LL;
LABEL_24:
      v18 = a3;
      goto LABEL_26;
    default:
      v18 = a3;
      v15 = 0x8000000000000000LL;
LABEL_26:
      v16 = a3;
      v19 = (__int64 (__fastcall **)())v14;
LABEL_27:
      *a1 = v15;
      a1[1] = v18;
      a1[2] = (unsigned __int64)v19;
      a1[3] = v16;
      break;
  }
  return a1;
}
