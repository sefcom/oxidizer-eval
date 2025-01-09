__int64 __fastcall uu_cp::copydir::Context::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+0h] [rbp-128h]
  __int64 v14; // [rsp+18h] [rbp-110h] BYREF
  __int128 v15; // [rsp+20h] [rbp-108h]
  __int128 v16; // [rsp+30h] [rbp-F8h]
  __int64 v17; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-D8h]

  v8 = 0x8000000000000000LL;
  std::env::current_dir(&v17);
  result = v17;
  if ( v17 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  *(_QWORD *)v13 = v17;
  *(_OWORD *)&v13[8] = v18;
  std::path::Path::join(&v14, v18, *((_QWORD *)&v18 + 1), a2, a3);
  std::fs::metadata(&v17);
  if ( v17 == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v18);
LABEL_7:
    result = v14;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v13[16];
    *(_OWORD *)a1 = *(_OWORD *)v13;
    *(_QWORD *)(a1 + 24) = result;
    *(_OWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 48) = a4;
    *(_QWORD *)(a1 + 56) = a5;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    return result;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v17, v18);
  std::sys::os_str::bytes::Slice::to_str(&v17, a2, a3);
  if ( v17 )
    core::option::unwrap_failed(&off_1B6288, a2, v10, v11);
  if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v18, *((_QWORD *)&v18 + 1), asc_2D6D7, 2LL) )
    goto LABEL_7;
  v12 = std::path::Path::parent(v15, *((_QWORD *)&v15 + 1));
  if ( v12 )
  {
    std::path::Path::to_path_buf(&v17, v12);
    v8 = v17;
    v16 = v18;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v13[16];
  *(_OWORD *)a1 = *(_OWORD *)v13;
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 32) = v16;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = a3;
  return core::ptr::drop_in_place<std::path::PathBuf>(&v14);
}
