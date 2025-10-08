__int64 __fastcall just::search::Search::find_global_justfile(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  __int128 v5; // xmm0
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // [rsp+8h] [rbp-170h] BYREF
  char v9; // [rsp+10h] [rbp-168h]
  _QWORD *v10; // [rsp+18h] [rbp-160h]
  __int64 v11; // [rsp+20h] [rbp-158h] BYREF
  char v12; // [rsp+28h] [rbp-150h]
  _BYTE v13[24]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v14; // [rsp+48h] [rbp-130h]
  __int128 v15; // [rsp+50h] [rbp-128h] BYREF
  __int64 v16; // [rsp+60h] [rbp-118h]
  _BYTE v17[8]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v18; // [rsp+78h] [rbp-100h]
  __int64 v19; // [rsp+80h] [rbp-F8h]
  __int128 v20; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-D8h]
  __int64 v22; // [rsp+A8h] [rbp-D0h]
  __int64 v23; // [rsp+B0h] [rbp-C8h]
  _QWORD v24[2]; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-B0h]
  __int64 v26; // [rsp+D8h] [rbp-A0h]
  _BYTE v27[32]; // [rsp+E0h] [rbp-98h] BYREF
  int v28; // [rsp+100h] [rbp-78h] BYREF
  __int64 v29; // [rsp+108h] [rbp-70h]
  __int64 v30; // [rsp+110h] [rbp-68h]
  __int128 v31; // [rsp+118h] [rbp-60h]
  __int64 v32; // [rsp+128h] [rbp-50h]
  __int128 v33; // [rsp+130h] [rbp-48h]
  __int64 v34; // [rsp+140h] [rbp-38h]

  v10 = a1;
  just::search::Search::global_justfile_paths((__int64)&v28);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v27, &v28);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
  if ( !__OFSUB__(0LL, (_QWORD)v20) )
  {
    do
    {
      v16 = v21;
      v15 = v20;
      v2 = v22;
      v3 = v23;
      std::fs::read_dir(&v8, &v15);
      if ( v9 == 2 )
      {
LABEL_4:
        core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v8);
      }
      else
      {
        v11 = v8;
        v12 = v9;
        while ( 1 )
        {
          <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v28, &v11);
          if ( v28 != 1 )
            break;
          if ( !v29 )
          {
            just::search::Search::find_global_justfile::{{closure}}(v13, *((_QWORD *)&v15 + 1), v16, v30);
            v4 = *(_QWORD *)v13;
            v5 = *(_OWORD *)&v13[8];
            v33 = *(_OWORD *)&v13[8];
            v34 = v14;
            v6 = v10;
            v10[3] = v14;
            *(_OWORD *)(v6 + 1) = v5;
            *v6 = v4;
LABEL_17:
            core::ptr::drop_in_place<std::fs::ReadDir>(&v11);
            if ( v9 == 2 )
              core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v8);
            core::ptr::drop_in_place<std::path::PathBuf>(&v15);
            return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,&str)>>(v27);
          }
          v26 = v32;
          v25 = v31;
          v24[0] = v29;
          v24[1] = v30;
          std::fs::DirEntry::file_name(v17, v24);
          core::str::converts::from_utf8(v13, v18, v19);
          if ( *(_DWORD *)v13 != 1
            && (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(
                                  *(_QWORD *)&v13[8],
                                  *(_QWORD *)&v13[16],
                                  v2,
                                  v3) )
          {
            std::fs::DirEntry::path(v13, v24);
            v7 = v10;
            v10[3] = *(_QWORD *)&v13[16];
            *(_OWORD *)(v7 + 1) = *(_OWORD *)v13;
            *v7 = 0x8000000000000006LL;
            core::ptr::drop_in_place<std::fs::DirEntry>(v24);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v17);
            goto LABEL_17;
          }
          core::ptr::drop_in_place<std::fs::DirEntry>(v24);
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(v17);
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v11);
        if ( v9 == 2 )
          goto LABEL_4;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v15);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
    }
    while ( (_QWORD)v20 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,&str)>>(v27);
  result = (__int64)v10;
  *v10 = 0x8000000000000001LL;
  return result;
}