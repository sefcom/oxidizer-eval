__int64 __fastcall forc_publish::validate::validate_dir(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+8h] [rbp-190h] BYREF
  __int64 v14; // [rsp+10h] [rbp-188h]
  _BYTE v15[23]; // [rsp+21h] [rbp-177h]
  __int64 v16; // [rsp+38h] [rbp-160h]
  _QWORD v17[2]; // [rsp+40h] [rbp-158h] BYREF
  __int128 v18; // [rsp+50h] [rbp-148h]
  __int128 v19; // [rsp+60h] [rbp-138h]
  __int128 v20; // [rsp+70h] [rbp-128h]
  __int128 v21; // [rsp+80h] [rbp-118h]
  __int128 v22; // [rsp+90h] [rbp-108h]
  __int128 v23; // [rsp+A0h] [rbp-F8h]
  __int128 v24; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-D8h]
  __int64 dest; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-C8h]
  __int128 v28; // [rsp+D8h] [rbp-C0h]
  __int128 v29; // [rsp+E8h] [rbp-B0h]
  __int128 v30; // [rsp+F8h] [rbp-A0h]
  __int128 v31; // [rsp+108h] [rbp-90h]
  __int128 v32; // [rsp+118h] [rbp-80h]
  __int128 v33; // [rsp+128h] [rbp-70h]

  std::path::Path::join(&v13, a2, a3, aForcToml, 9LL);
  v3 = v14;
  v4 = v14;
  std::fs::metadata(&dest);
  v5 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v4);
  if ( v5 == 2 )
  {
    *(_BYTE *)a1 = 7;
    core::ptr::drop_in_place<std::path::PathBuf>(v13, v3);
    return a1;
  }
  <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::from_file(&dest, &v13);
  v6 = v27;
  if ( dest == 3 )
  {
    *(_BYTE *)a1 = 8;
    *(_QWORD *)(a1 + 8) = v6;
    return a1;
  }
  v23 = v33;
  v22 = v32;
  v21 = v31;
  v20 = v30;
  v19 = v29;
  v18 = v28;
  v17[0] = dest;
  v17[1] = v27;
  if ( dest != 2 )
  {
    *(_BYTE *)a1 = 10;
    goto LABEL_16;
  }
  if ( *(_QWORD *)(v27 + 696) )
  {
    v7 = 0LL;
    if ( *(_BYTE *)v27 )
      v7 = v27 + 8;
    dest = 1LL;
    v27 = v7;
    *(_QWORD *)&v28 = 2LL;
    *((_QWORD *)&v32 + 1) = 2LL;
    while ( 1 )
    {
      v9 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&dest);
      if ( !v9 )
        break;
      if ( !forc_pkg::manifest::Dependency::version(v8) )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v24, v9);
        v16 = v25;
        *(_OWORD *)&v15[7] = v24;
        *(_BYTE *)a1 = 11;
        v10 = *(_QWORD *)&v15[15];
        v11 = v16;
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v15;
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)(a1 + 24) = v11;
        goto LABEL_15;
      }
    }
    core::ptr::drop_in_place<alloc::boxed::Box<forc_pkg::manifest::PackageManifestFile>>(v6);
    *(_BYTE *)a1 = 14;
    if ( LODWORD(v17[0]) == 2 )
      return a1;
LABEL_16:
    core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(v17);
    return a1;
  }
  *(_BYTE *)a1 = 9;
LABEL_15:
  core::ptr::drop_in_place<alloc::boxed::Box<forc_pkg::manifest::PackageManifestFile>>(v6);
  if ( v17[0] != 2LL )
    goto LABEL_16;
  return a1;
}