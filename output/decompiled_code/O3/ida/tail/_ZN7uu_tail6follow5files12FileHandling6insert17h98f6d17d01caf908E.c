        char a5)
{
  const void *v8; // r12
  size_t v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  void *v12; // r13
  size_t v13; // rsi
  __int64 result; // rax
  __int128 v15; // [rsp+0h] [rbp-218h] BYREF
  size_t n; // [rsp+10h] [rbp-208h]
  __int128 v17; // [rsp+20h] [rbp-1F8h] BYREF
  size_t v18; // [rsp+30h] [rbp-1E8h]
  _BYTE dest[216]; // [rsp+38h] [rbp-1E0h] BYREF
  _DWORD v20[66]; // [rsp+110h] [rbp-108h] BYREF

  if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3)
    || (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a2, a3) )
  {
LABEL_5:
    std::path::Path::to_path_buf(&v15, a2, a3);
    if ( !a5 )
      goto LABEL_15;
    goto LABEL_6;
  }
  std::sys::pal::unix::fs::canonicalize(dest, a2, a3);
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&dest[8]);
    goto LABEL_5;
  }
  n = *(_QWORD *)&dest[16];
  v15 = *(_OWORD *)dest;
  if ( !a5 )
    goto LABEL_15;
LABEL_6:
  v8 = (const void *)*((_QWORD *)&v15 + 1);
  v9 = n;
  if ( n )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = 1LL;
      v11 = _rust_alloc(n, 1LL);
      if ( v11 )
      {
        v12 = (void *)v11;
        goto LABEL_11;
      }
    }
    alloc::raw_vec::handle_error(v10, v9);
  }
  v12 = &dword_0 + 1;
LABEL_11:
  memcpy(v12, v8, v9);
  v13 = *a1;
  if ( *a1 != 0x8000000000000000LL && v13 )
    _rust_dealloc(a1[1], v13, 1LL);
  *a1 = v9;
  a1[1] = (size_t)v12;
  a1[2] = v9;
LABEL_15:
  v18 = n;
  v17 = v15;
  memcpy(dest, a4, sizeof(dest));
  result = hashbrown::map::HashMap<K,V,S,A>::insert(v20, a1 + 3, &v17, dest);
  if ( v20[0] != 3 )
    return core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v20);
  return result;
}
