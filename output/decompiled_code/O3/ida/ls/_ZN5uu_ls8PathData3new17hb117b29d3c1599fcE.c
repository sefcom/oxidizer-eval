        unsigned __int8 a7)
{
  unsigned __int8 v7; // r13
  char v9; // al
  unsigned __int8 v10; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  __int16 v15; // bp
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int file_type; // r14d
  int v19; // edx
  __int128 v20; // xmm0
  __int64 result; // rax
  __int128 v24; // [rsp+20h] [rbp-138h]
  __int64 v25; // [rsp+30h] [rbp-128h]
  __int128 v26; // [rsp+40h] [rbp-118h] BYREF
  __int128 v27; // [rsp+50h] [rbp-108h]
  __int64 v28; // [rsp+60h] [rbp-F8h]
  __int128 v29; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+80h] [rbp-D8h]
  __int64 v31; // [rsp+90h] [rbp-C8h]
  int v32; // [rsp+A8h] [rbp-B0h]

  v7 = a6;
  if ( *(_QWORD *)a4 == 0x8000000000000000LL )
  {
    if ( a7 )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v29, a2);
      v25 = v30;
      v24 = v29;
      v9 = 1;
      switch ( v7 )
      {
        case 0u:
          v10 = 0;
          v7 = 1;
          break;
        case 1u:
          goto LABEL_10;
        case 2u:
          goto LABEL_12;
        case 3u:
          goto LABEL_11;
      }
    }
    else
    {
      v11 = std::path::Path::file_name(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      if ( !v11 )
        v11 = uu_ls::PathData::new::{{closure}}(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      std::sys::os_str::bytes::Slice::to_owned(&v29, v11, v12);
      v25 = v30;
      v24 = v29;
      v9 = 1;
      v10 = 0;
      v13 = v7;
      v7 = 1;
      switch ( v13 )
      {
        case 0LL:
          break;
        case 1LL:
          goto LABEL_9;
        case 2LL:
          goto LABEL_12;
        case 3LL:
          goto LABEL_11;
      }
    }
  }
  else
  {
    v25 = *((_QWORD *)a4 + 2);
    v24 = *a4;
    v9 = 0;
    v10 = 0;
    v7 = 0;
    switch ( a6 )
    {
      case 0u:
        break;
      case 1u:
LABEL_9:
        if ( a7 )
        {
LABEL_10:
          std::fs::metadata(&v29, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
          v14 = v29;
          v15 = v32;
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v29);
          v10 = v14 != 2 && (v15 & 0xF000) == 0x4000;
        }
        else
        {
          v10 = 0;
        }
        break;
      case 2u:
LABEL_12:
        v7 = v9;
        v10 = a7;
        break;
      case 3u:
LABEL_11:
        v10 = 1;
        v7 = v9;
        break;
    }
  }
  if ( *(_QWORD *)a3 )
  {
    v16 = *(_OWORD *)(a3 + 24);
    v29 = *(_OWORD *)(a3 + 8);
    v31 = *(_QWORD *)(a3 + 40);
    v30 = v16;
    if ( (_QWORD)v29 )
    {
      v28 = *(_QWORD *)(a3 + 40);
      v17 = *(_OWORD *)(a3 + 8);
      v27 = *(_OWORD *)(a3 + 24);
      v26 = v17;
    }
    else
    {
      *(_QWORD *)&v26 = 0LL;
      core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&v29);
    }
    if ( (_QWORD)v26 )
    {
      file_type = uu_ls::PathData::new::get_file_type((__int64)&v26, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v10);
      LODWORD(a3) = v19;
      if ( a5 )
        goto LABEL_22;
    }
    else
    {
      file_type = 2;
      if ( a5 )
        goto LABEL_22;
    }
LABEL_18:
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = 1LL;
    *(_QWORD *)&v30 = 0LL;
    goto LABEL_23;
  }
  *(_QWORD *)&v26 = 0LL;
  file_type = 2;
  if ( !a5 )
    goto LABEL_18;
LABEL_22:
  uu_ls::get_security_context((__int64)&v29, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v10);
LABEL_23:
  *(_QWORD *)(a1 + 288) = v28;
  v20 = v26;
  *(_OWORD *)(a1 + 272) = v27;
  *(_OWORD *)(a1 + 256) = v20;
  *(_QWORD *)(a1 + 16) = v25;
  *(_OWORD *)a1 = v24;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 48) = v29;
  *(_QWORD *)(a1 + 64) = v30;
  *(_QWORD *)(a1 + 72) = 3LL;
  *(_DWORD *)(a1 + 248) = file_type;
  *(_DWORD *)(a1 + 252) = a3;
  *(_BYTE *)(a1 + 296) = v10;
  result = a7;
  *(_BYTE *)(a1 + 297) = a7;
  if ( v7 )
  {
    result = 0x8000000000000000LL;
    if ( *(_QWORD *)a4 != 0x8000000000000000LL )
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(a4);
  }
  return result;
}
