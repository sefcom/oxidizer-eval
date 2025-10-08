__int64 __fastcall alacritty::config::normalize_import(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int128 v13; // [rsp+0h] [rbp-98h] BYREF
  __int64 v14; // [rsp+10h] [rbp-88h]
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v18 = a3;
  <T as core::convert::Into<U>>::into(&v13, a4, a5);
  v5 = *((_QWORD *)&v13 + 1);
  v6 = v14;
  v7 = std::path::Path::strip_prefix(*((_QWORD *)&v13 + 1), v14);
  v9 = v8;
  home::home_dir(&v19);
  *(_QWORD *)&v15 = v7;
  *((_QWORD *)&v15 + 1) = v9;
  v16 = v19;
  v17 = v20;
  if ( !v7 || __OFSUB__(-(__int64)v16, 1LL) )
  {
    core::ptr::drop_in_place<(core::result::Result<&std::path::Path,std::path::StripPrefixError>,core::option::Option<std::path::PathBuf>)>(&v15);
  }
  else
  {
    std::path::Path::join(&v19, *((_QWORD *)&v16 + 1), v17, v7, v9);
    core::mem::drop(&v13);
    v14 = v20;
    v13 = v19;
    core::mem::drop(&v16);
    v5 = *((_QWORD *)&v13 + 1);
    v6 = v14;
  }
  if ( !(unsigned __int8)std::path::Path::is_absolute(v5, v6) )
  {
    v10 = std::path::Path::parent(a2, v18);
    if ( v10 )
    {
      std::path::Path::join(&v15, v10, v11, &v13);
      v14 = v16;
      v13 = v15;
    }
  }
  result = v14;
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  return result;
}