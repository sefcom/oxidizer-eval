__int64 __fastcall uu_cp::copydir::Context::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-130h]
  _BYTE v14[24]; // [rsp+10h] [rbp-128h]
  __int64 v15; // [rsp+28h] [rbp-110h] BYREF
  __int128 v16; // [rsp+30h] [rbp-108h]
  __int128 v17; // [rsp+40h] [rbp-F8h]
  unsigned __int64 dest; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-D8h]

  v8 = 0x8000000000000000LL;
  std::env::current_dir(&dest);
  result = dest;
  if ( __OFSUB__(-(__int64)dest, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    *(_QWORD *)v14 = dest;
    *(_OWORD *)&v14[8] = v19;
    std::path::Path::join(&v15, v19, *((_QWORD *)&v19 + 1), a2, a3);
    v13 = a5;
    std::fs::metadata(&dest);
    v10 = dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a4);
    if ( v10 == 2 )
      goto LABEL_6;
    core::str::converts::from_utf8(&dest, a2, a3);
    if ( (_DWORD)dest == 1 )
      core::option::unwrap_failed(&off_15E5E8);
    if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v19, *((_QWORD *)&v19 + 1), asc_236EB, 2LL) )
    {
LABEL_6:
      v11 = v15;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v14[16];
      *(_OWORD *)a1 = *(_OWORD *)v14;
      *(_QWORD *)(a1 + 24) = v11;
      *(_OWORD *)(a1 + 32) = v16;
      *(_QWORD *)(a1 + 48) = a4;
      result = v13;
      *(_QWORD *)(a1 + 56) = v13;
      *(_QWORD *)(a1 + 64) = a2;
      *(_QWORD *)(a1 + 72) = a3;
    }
    else
    {
      v12 = std::path::Path::parent(v16, *((_QWORD *)&v16 + 1));
      if ( v12 )
      {
        std::path::Path::to_path_buf(&dest, v12);
        v8 = dest;
        v17 = v19;
      }
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v14[16];
      *(_OWORD *)a1 = *(_OWORD *)v14;
      *(_QWORD *)(a1 + 24) = v8;
      *(_OWORD *)(a1 + 32) = v17;
      *(_QWORD *)(a1 + 48) = a4;
      *(_QWORD *)(a1 + 56) = v13;
      *(_QWORD *)(a1 + 64) = a2;
      *(_QWORD *)(a1 + 72) = a3;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v15);
    }
  }
  return result;
}