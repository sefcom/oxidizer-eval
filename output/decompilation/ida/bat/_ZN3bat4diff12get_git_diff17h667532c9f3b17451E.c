__int64 __fastcall bat::diff::get_git_diff(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r15
  __int128 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  char v11; // [rsp+Fh] [rbp-179h] BYREF
  __int64 v12; // [rsp+10h] [rbp-178h] BYREF
  __int64 v13; // [rsp+18h] [rbp-170h] BYREF
  __int128 v14; // [rsp+20h] [rbp-168h] BYREF
  __int128 v15; // [rsp+30h] [rbp-158h]
  __int128 v16; // [rsp+40h] [rbp-148h]
  __int64 v17; // [rsp+50h] [rbp-138h] BYREF
  __int128 v18; // [rsp+58h] [rbp-130h]
  __int64 v19; // [rsp+68h] [rbp-120h] BYREF
  __int128 v20; // [rsp+70h] [rbp-118h]
  _QWORD v21[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v22[3]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 dest; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-D8h]
  int v25; // [rsp+130h] [rbp-58h]
  _BYTE v26[48]; // [rsp+158h] [rbp-30h] BYREF

  git2::repo::Repository::discover(&dest);
  if ( !dest )
  {
    v12 = v24;
    v2 = git2::repo::Repository::workdir(&v12);
    if ( !v2 )
    {
LABEL_6:
      *(_QWORD *)a1 = 0LL;
LABEL_18:
      core::ptr::drop_in_place<git2::repo::Repository>(&v12);
      return a1;
    }
    std::fs::canonicalize(&dest, v2);
    if ( __OFSUB__(-dest, 1LL) )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&dest);
      goto LABEL_6;
    }
    v20 = v24;
    v19 = dest;
    std::fs::canonicalize(&dest, a2);
    if ( dest == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&dest);
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v18 = v24;
      v17 = dest;
      v3 = std::path::Path::strip_prefix(v24, *((_QWORD *)&v24 + 1), &v19);
      v5 = v3;
      if ( v3 )
      {
        v6 = v4;
        v21[0] = v3;
        v21[1] = v4;
        git2::diff::DiffOptions::new(&dest);
        <&std::path::Path as git2::util::IntoCString>::into_c_string(&v14, v5, v6);
        if ( (_QWORD)v14 )
        {
          core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,git2::error::Error>>(&v14);
        }
        else
        {
          git2::diff::DiffOptions::pathspec(&dest, *((_QWORD *)&v14 + 1), v15);
          v25 = 0;
          git2::repo::Repository::diff_index_to_workdir(&v14, &v12, 0LL, &dest);
          if ( !(_QWORD)v14 )
          {
            v13 = *((_QWORD *)&v14 + 1);
            *(_QWORD *)&v8 = std::thread::local::LocalKey<T>::with();
            v15 = xmmword_6CBB90;
            v14 = *(_OWORD *)&off_6CBB80;
            v16 = v8;
            v22[0] = v21;
            v22[1] = &v11;
            v22[2] = &v14;
            git2::diff::Diff::foreach(
              (unsigned int)v26,
              (unsigned int)&v13,
              (unsigned int)&v11,
              (unsigned int)&unk_6CE3D8,
              0,
              (unsigned int)v22,
              (__int64)v22,
              (__int64)&unk_6CE400,
              0LL);
            core::ptr::drop_in_place<core::result::Result<(),git2::error::Error>>(v26);
            v9 = v14;
            v10 = v15;
            *(_OWORD *)(a1 + 32) = v16;
            *(_OWORD *)(a1 + 16) = v10;
            *(_OWORD *)a1 = v9;
            core::ptr::drop_in_place<git2::diff::Diff>(&v13);
            core::ptr::drop_in_place<git2::diff::DiffOptions>(&dest);
            core::ptr::drop_in_place<std::path::PathBuf>(&v17);
            goto LABEL_17;
          }
          core::ptr::drop_in_place<core::result::Result<git2::diff::Diff,git2::error::Error>>(&v14);
        }
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<git2::diff::DiffOptions>(&dest);
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    }
LABEL_17:
    core::ptr::drop_in_place<std::path::PathBuf>(&v19);
    goto LABEL_18;
  }
  core::ptr::drop_in_place<core::result::Result<git2::repo::Repository,git2::error::Error>>(&dest);
  *(_QWORD *)a1 = 0LL;
  return a1;
}