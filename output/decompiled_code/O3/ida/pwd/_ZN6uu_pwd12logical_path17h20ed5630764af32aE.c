_QWORD *__fastcall uu_pwd::logical_path(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 *v5; // rcx
  unsigned __int8 *v6; // r14
  unsigned __int8 *v7; // r9
  unsigned __int8 *v8; // r11
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // r8
  int v12; // r10d
  int v13; // r11d
  int v14; // r14d
  int v15; // ebp
  unsigned __int8 *v16; // r8
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r14
  bool v21; // r13
  unsigned __int8 *v22; // r12
  unsigned __int8 *v24; // [rsp+0h] [rbp-F8h]
  unsigned __int8 *v25; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v26; // [rsp+10h] [rbp-E8h]
  __int64 dest; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int8 *v28; // [rsp+20h] [rbp-D8h]
  unsigned __int8 *v29; // [rsp+28h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C0h]
  __int64 v31; // [rsp+40h] [rbp-B8h]
  char v32; // [rsp+52h] [rbp-A6h]

  std::env::_var_os(&dest, aPwd, 3LL);
  v1 = dest;
  if ( dest != 0x8000000000000000LL )
  {
    v24 = v28;
    v25 = v29;
    std::path::Path::components(&dest);
    if ( v32 || (unsigned __int8)((_BYTE)v29 - 5) >= 2u )
    {
      std::sys::os_str::bytes::Slice::to_string_lossy(&dest, v24, v25);
      v5 = &v29[(_QWORD)v28];
      v6 = 0LL;
      v7 = v28;
      v8 = 0LL;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = v7;
          v11 = v8;
          if ( v7 == v5 )
            break;
          v12 = *v7;
          if ( (v12 & 0x80u) == 0 )
          {
            ++v7;
          }
          else
          {
            v13 = v12 & 0x1F;
            v14 = v7[1] & 0x3F;
            if ( (unsigned __int8)v12 <= 0xDFu )
            {
              v7 += 2;
              v12 = v14 | (v13 << 6);
            }
            else
            {
              v15 = (v14 << 6) | v7[2] & 0x3F;
              if ( (unsigned __int8)v12 < 0xF0u )
              {
                v7 += 3;
                v12 = (v13 << 12) | v15;
              }
              else
              {
                v7 += 4;
                v12 = ((v12 & 7) << 18) | (v15 << 6) | v10[3] & 0x3F;
              }
            }
          }
          v8 = &v11[v7 - v10];
          v6 = v8;
          if ( v12 == 47 )
            goto LABEL_20;
        }
        v7 = &v29[(_QWORD)v28];
        v6 = v9;
        v11 = v29;
LABEL_20:
        v16 = (unsigned __int8 *)(v11 - v9);
        if ( v16 == (_BYTE *)&dword_0 + 2 )
        {
          if ( *(_WORD *)&v9[(_QWORD)v28] == 11822 )
            goto LABEL_23;
        }
        else if ( v16 == (_BYTE *)&dword_0 + 1 && v9[(_QWORD)v28] == 46 )
        {
LABEL_23:
          if ( 2 * dest )
            _rust_dealloc(v28, dest, 1LL, v5, v16, v7);
          goto LABEL_2;
        }
      }
      while ( v10 != v5 );
      if ( 2 * dest )
        _rust_dealloc(v28, dest, 1LL, v5, v16, v7);
      std::sys::pal::unix::fs::stat(&dest);
      v17 = dest;
      v26 = v28;
      v18 = v30;
      v19 = v31;
      std::sys::pal::unix::fs::stat(&dest);
      v20 = dest;
      v21 = dest != 2 && (_DWORD)v17 != 2 && (v30 ^ v18 | v31 ^ v19) == 0;
      v22 = v28;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v17, v26);
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v20, v22);
      if ( v21 )
      {
        *a1 = v1;
        a1[1] = v24;
        a1[2] = v25;
        return a1;
      }
    }
  }
LABEL_2:
  std::env::current_dir(a1);
  if ( 2 * v1 )
    _rust_dealloc(v24, v1, 1LL, v2, v3, v4);
  return a1;
}
