__int64 __fastcall forc_publish::tarball::copy_project_excluding_out(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // kr00_16
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-150h] BYREF
  __int64 v14; // [rsp+10h] [rbp-148h]
  __int64 v15; // [rsp+18h] [rbp-140h]
  __int64 v16; // [rsp+20h] [rbp-138h]
  __int64 v17; // [rsp+28h] [rbp-130h]
  __int128 v18; // [rsp+30h] [rbp-128h] BYREF
  __int64 v19; // [rsp+40h] [rbp-118h]
  __int128 v20; // [rsp+48h] [rbp-110h]
  __int128 v21; // [rsp+58h] [rbp-100h]
  __int128 v22; // [rsp+68h] [rbp-F0h]
  __int64 v23; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-D8h]
  __int64 v25; // [rsp+88h] [rbp-D0h]
  __int64 v26; // [rsp+90h] [rbp-C8h]
  __int128 v27; // [rsp+98h] [rbp-C0h]
  __int64 v28; // [rsp+A8h] [rbp-B0h]
  __int128 v29; // [rsp+B0h] [rbp-A8h]
  __int64 v30; // [rsp+C0h] [rbp-98h]
  __int64 v31; // [rsp+C8h] [rbp-90h]
  __int128 v32; // [rsp+D0h] [rbp-88h]
  __int64 v33; // [rsp+E0h] [rbp-78h]
  __int128 v34; // [rsp+E8h] [rbp-70h]
  __int128 v35; // [rsp+F8h] [rbp-60h]
  __int128 v36; // [rsp+108h] [rbp-50h]
  __int128 v37; // [rsp+118h] [rbp-40h]

  v17 = a3;
  v16 = a2;
  std::env::current_dir(&v23);
  result = v24;
  if ( __OFSUB__(-v23, 1LL) )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    v13 = v23;
    v14 = v24;
    v15 = v25;
    walkdir::WalkDir::new(&v18, &v13);
    v36 = v22;
    v35 = v21;
    v34 = v20;
    v32 = v18;
    v33 = v19;
    v23 = 0LL;
    v25 = 0LL;
    v26 = 8LL;
    v27 = 0LL;
    v28 = 8LL;
    v29 = 0LL;
    v30 = 8LL;
    v31 = 0LL;
    v37 = 0LL;
    while ( 1 )
    {
      core::iter::traits::iterator::Iterator::try_fold(&v18, &v23);
      v4 = v18;
      if ( (_QWORD)v18 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<walkdir::dent::DirEntry>>(
          0x8000000000000000LL,
          *((_QWORD *)&v18 + 1));
        core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<walkdir::IntoIter,forc_publish::tarball::copy_project_excluding_out::{{closure}}>>(&v23);
        *(_BYTE *)a1 = 14;
        return core::ptr::drop_in_place<std::path::PathBuf>(v13, v14);
      }
      v5 = v19;
      v6 = std::path::Path::strip_prefix(*((_QWORD *)&v18 + 1), v19, &v13);
      v8 = v6;
      if ( !v6 )
        break;
      v9 = v7;
      if ( !(unsigned __int8)std::path::Path::starts_with(v6, v7) )
      {
        std::path::Path::join(&v18, v16, v17, v8, v9);
        if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v4 + 1), v5) )
        {
          v10 = std::fs::create_dir_all(&v18);
          if ( v10 )
            goto LABEL_13;
        }
        else
        {
          v11 = std::fs::copy(*((_QWORD *)&v4 + 1), v5, &v18);
          v10 = v12;
          if ( (v11 & 1) != 0 )
          {
LABEL_13:
            *(_BYTE *)a1 = 0;
            *(_QWORD *)(a1 + 8) = v10;
            core::ptr::drop_in_place<std::path::PathBuf>(v18, *((_QWORD *)&v18 + 1));
            goto LABEL_16;
          }
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v18, *((_QWORD *)&v18 + 1));
      }
      core::ptr::drop_in_place<walkdir::Ancestor>(v4, *((_QWORD *)&v4 + 1));
    }
    *(_BYTE *)a1 = 5;
LABEL_16:
    core::ptr::drop_in_place<walkdir::Ancestor>(v4, *((_QWORD *)&v4 + 1));
    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<walkdir::IntoIter,forc_publish::tarball::copy_project_excluding_out::{{closure}}>>(&v23);
    return core::ptr::drop_in_place<std::path::PathBuf>(v13, v14);
  }
  return result;
}