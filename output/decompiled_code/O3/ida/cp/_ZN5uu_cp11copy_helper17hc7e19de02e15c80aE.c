        __int64 a11)
{
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebp
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _BYTE v28[64]; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-78h] BYREF
  __int64 v30; // [rsp+50h] [rbp-68h]
  _QWORD v31[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+70h] [rbp-48h]
  _DWORD v34[2]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v35; // [rsp+80h] [rbp-38h]

  if ( *(_BYTE *)(a6 + 68) )
  {
    v15 = std::path::Path::parent(a4, a5);
    if ( !v15 )
    {
      v16 = a5;
      v15 = a4;
    }
    result = std::fs::create_dir_all(v15, v16);
    if ( result )
    {
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
  }
  if ( (unsigned __int8)uucore::features::fs::path_ends_with_terminator(a4, a5)
    && !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    result = std::path::Path::to_path_buf(a1 + 8, a4);
    *(_QWORD *)a1 = 12LL;
    return result;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aDevNull, 9LL) )
  {
    std::fs::File::create(v34, a4, a5);
    v31[0] = a4;
    v31[1] = a5;
    <T as alloc::string::ToString>::to_string(&v29, v31);
    *(_QWORD *)&v28[16] = v30;
    *(_OWORD *)v28 = v29;
    if ( v34[0] )
    {
      result = v35;
      v18 = *(_QWORD *)v28;
      v19 = *(_DWORD *)&v28[8];
      v32 = *(_QWORD *)&v28[12];
      v33 = *(_DWORD *)&v28[20];
      if ( *(_QWORD *)v28 != 0x8000000000000000LL )
      {
        *(_DWORD *)(a1 + 28) = v33;
        *(_QWORD *)(a1 + 20) = v32;
        *(_QWORD *)a1 = 3LL;
        *(_QWORD *)(a1 + 8) = v18;
        *(_DWORD *)(a1 + 16) = v19;
        *(_QWORD *)(a1 + 32) = result;
        return result;
      }
    }
    else
    {
      v19 = v34[1];
      core::ptr::drop_in_place<<core::result::Result<std::fs::File,std::io::error::Error> as quick_error::ResultExt<std::fs::File,std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(v28);
    }
    result = core::ptr::drop_in_place<std::fs::File>(v19);
    goto LABEL_23;
  }
  if ( a10 && *(_BYTE *)(a6 + 70) && !*(_BYTE *)(a6 + 63) )
  {
    result = uu_cp::copy_fifo(v28, a4, a5, *(unsigned int *)(a6 + 60), *(unsigned __int8 *)(a6 + 71));
    if ( *(_DWORD *)v28 == 13 )
      goto LABEL_23;
    goto LABEL_20;
  }
  if ( a9 )
  {
    result = uu_cp::copy_link(v28, a2, a3, a4, a5, a11);
    if ( *(_DWORD *)v28 == 13 )
    {
LABEL_23:
      *(_QWORD *)a1 = 13LL;
      return result;
    }
LABEL_20:
    v20 = *(_OWORD *)v28;
    v21 = *(_OWORD *)&v28[16];
    v22 = *(_OWORD *)&v28[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v28[48];
    *(_OWORD *)(a1 + 32) = v22;
    *(_OWORD *)(a1 + 16) = v21;
    *(_OWORD *)a1 = v20;
    return result;
  }
  uu_cp::platform::linux::copy_on_write(
    (unsigned int)v28,
    a2,
    a3,
    a4,
    a5,
    *(unsigned __int8 *)(a6 + 75),
    *(_BYTE *)(a6 + 74),
    a7,
    a8,
    a10);
  result = *(_QWORD *)v28;
  LOWORD(v29) = *(_WORD *)&v28[8];
  BYTE2(v29) = v28[10];
  if ( *(_QWORD *)v28 == 13LL )
  {
    LOWORD(v31[0]) = v29;
    result = BYTE2(v29);
    BYTE2(v31[0]) = BYTE2(v29);
    if ( !*(_BYTE *)(a6 + 62) )
    {
      if ( *(_BYTE *)(a6 + 71) )
        result = uu_cp::show_debug(v31, a2, v23, v28[10], v24, v25);
    }
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 56) = *(_QWORD *)&v28[56];
  v26 = *(_OWORD *)&v28[11];
  v27 = *(_OWORD *)&v28[27];
  *(_OWORD *)(a1 + 43) = *(_OWORD *)&v28[43];
  *(_OWORD *)(a1 + 27) = v27;
  *(_OWORD *)(a1 + 11) = v26;
  *(_BYTE *)(a1 + 10) = BYTE2(v29);
  *(_WORD *)(a1 + 8) = v29;
  *(_QWORD *)a1 = result;
  return result;
}
