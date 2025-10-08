__int64 __fastcall forc_fmt::format_workspace_at_dir(
        unsigned __int8 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  char *v13; // r13
  __int64 v14; // r12
  __int64 v15; // r15
  char *v16; // r14
  __int64 v17; // rsi
  int v18; // r13d
  bool v19; // zf
  __int64 v20; // r13
  __int128 v22; // [rsp+10h] [rbp-488h] BYREF
  __int64 v23; // [rsp+20h] [rbp-478h]
  __int64 v24; // [rsp+30h] [rbp-468h] BYREF
  __int64 v25; // [rsp+38h] [rbp-460h]
  __int64 v26; // [rsp+48h] [rbp-450h]
  __int64 v27; // [rsp+50h] [rbp-448h]
  unsigned int v28; // [rsp+5Ch] [rbp-43Ch]
  _BYTE v29[48]; // [rsp+60h] [rbp-438h] BYREF
  __int128 v30; // [rsp+90h] [rbp-408h]
  __int128 v31; // [rsp+A0h] [rbp-3F8h]
  __int128 v32; // [rsp+B0h] [rbp-3E8h]
  _QWORD v33[3]; // [rsp+C0h] [rbp-3D8h] BYREF
  __int128 v34; // [rsp+D8h] [rbp-3C0h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-3B0h]
  __int128 v36; // [rsp+F0h] [rbp-3A8h]
  __int128 v37; // [rsp+100h] [rbp-398h]
  __int128 v38; // [rsp+110h] [rbp-388h]
  __int128 v39; // [rsp+120h] [rbp-378h]
  __int128 v40; // [rsp+130h] [rbp-368h]
  __int128 v41; // [rsp+140h] [rbp-358h]
  _BYTE v42[104]; // [rsp+150h] [rbp-348h] BYREF
  _BYTE src[168]; // [rsp+1B8h] [rbp-2E0h] BYREF
  _BYTE v44[8]; // [rsp+268h] [rbp-230h] BYREF
  __int64 v45; // [rsp+270h] [rbp-228h]
  __int64 v46; // [rsp+278h] [rbp-220h]
  __int64 v47; // [rsp+280h] [rbp-218h] BYREF
  __int128 v48; // [rsp+288h] [rbp-210h]
  _BYTE v49[24]; // [rsp+298h] [rbp-200h] BYREF
  __int64 v50; // [rsp+2B0h] [rbp-1E8h] BYREF
  __int128 v51; // [rsp+2B8h] [rbp-1E0h]
  __int128 v52; // [rsp+2C8h] [rbp-1D0h]
  __int128 v53; // [rsp+2D8h] [rbp-1C0h]
  __int128 v54; // [rsp+2E8h] [rbp-1B0h]
  __int128 v55; // [rsp+2F8h] [rbp-1A0h]
  __int128 v56; // [rsp+308h] [rbp-190h]
  _BYTE dest[168]; // [rsp+318h] [rbp-180h] BYREF
  char v58; // [rsp+3C0h] [rbp-D8h] BYREF

  v26 = a3;
  v27 = a4;
  v28 = a5;
  swayfmt::formatter::Formatter::from_dir(v42, a3, a4, a5);
  *(_OWORD *)v29 = *(_OWORD *)&v42[8];
  *(_OWORD *)&v29[16] = *(_OWORD *)&v42[24];
  *(_OWORD *)&v29[32] = *(_OWORD *)&v42[40];
  v30 = *(_OWORD *)&v42[56];
  v31 = *(_OWORD *)&v42[72];
  v32 = *(_OWORD *)&v42[88];
  if ( *(_QWORD *)v42 == 2LL )
  {
    *(_OWORD *)&v42[80] = v32;
    *(_OWORD *)&v42[64] = v31;
    *(_OWORD *)&v42[48] = v30;
    *(_OWORD *)&v42[32] = *(_OWORD *)&v29[32];
    *(_OWORD *)&v42[16] = *(_OWORD *)&v29[16];
    *(_OWORD *)v42 = *(_OWORD *)v29;
    return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v42);
  }
  memcpy(dest, src, sizeof(dest));
  v51 = *(_OWORD *)v29;
  v52 = *(_OWORD *)&v29[16];
  v53 = *(_OWORD *)&v29[32];
  v54 = v30;
  v55 = v31;
  v56 = v32;
  v50 = *(_QWORD *)v42;
  v33[0] = 0LL;
  v33[1] = 8LL;
  v33[2] = 0LL;
  v5 = a2[6];
  if ( v5 )
  {
    v6 = a2[5];
    v7 = a2[12];
    v8 = a2[13];
    v9 = 24 * v5;
    do
    {
      v10 = forc_pkg::manifest::GenericManifestFile::dir(v7, v8);
      std::path::Path::join(v42, v10, v11, v6);
      *(_OWORD *)v29 = *(_OWORD *)&v42[8];
      if ( *(_QWORD *)v42 == 0x8000000000000000LL )
        break;
      v47 = *(_QWORD *)v42;
      v48 = *(_OWORD *)v29;
      alloc::vec::Vec<T,A>::push(v33, &v47, &off_80A3F0);
      v6 += 24LL;
      v9 -= 24LL;
    }
    while ( v9 );
  }
  std::fs::read_dir(&v22, v26, v27);
  if ( BYTE8(v22) == 2 )
    goto LABEL_16;
  v24 = v22;
  LOBYTE(v25) = BYTE8(v22);
  while ( 1 )
  {
    core::iter::traits::iterator::Iterator::try_fold(v42, &v24);
    if ( !*(_QWORD *)v42 )
      break;
    *(_OWORD *)&v29[24] = *(_OWORD *)&v42[24];
    *(_OWORD *)&v29[8] = *(_OWORD *)&v42[8];
    *(_QWORD *)v29 = *(_QWORD *)v42;
    std::fs::DirEntry::path(v44, v29);
    if ( (unsigned __int8)sway_utils::helpers::is_sway_file(v45, v46) )
    {
      forc_fmt::format_file((__int64)v42, a1, (__int64)v44, (__int64)&v50);
      if ( v42[0] == 1 )
      {
        v12 = *(_QWORD *)&v42[8];
        core::ptr::drop_in_place<std::fs::DirEntry>(v29);
        core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v24);
        if ( BYTE8(v22) == 2 )
          core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v22);
        goto LABEL_31;
      }
    }
    else
    {
      core::ptr::drop_in_place<std::path::PathBuf>(v44);
    }
    core::ptr::drop_in_place<std::fs::DirEntry>(v29);
  }
  core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<std::fs::DirEntry>>(v42);
  core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v24);
  if ( BYTE8(v22) == 2 )
LABEL_16:
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v22);
  std::path::Path::to_path_buf(v42, v26, v27);
  forc_fmt::get_sway_dirs((__int64)&v24, (__int64)v42);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v29, &v24);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34, v29);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
  {
LABEL_24:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v29);
    std::path::Path::join(v49, v26, v27, aForcToml, 9LL);
    forc_fmt::format_manifest(v42, a1, v49);
    if ( v42[0] )
    {
      v12 = *(_QWORD *)&v42[8];
      goto LABEL_31;
    }
    if ( (a1 & 1) != 0 && (v42[1] & 1) != 0 )
    {
      *(_QWORD *)v42 = &off_80A3E0;
      *(_QWORD *)&v42[8] = 1LL;
      *(_QWORD *)&v42[16] = 8LL;
      *(_OWORD *)&v42[24] = 0LL;
      v12 = anyhow::__private::format_err(v42);
      goto LABEL_31;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v33);
    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v50);
    return 0LL;
  }
  v13 = &v58;
  while ( 1 )
  {
    v14 = v35;
    v23 = v35;
    v22 = v34;
    v15 = *((_QWORD *)&v34 + 1);
    std::path::Path::join(&v24, *((_QWORD *)&v34 + 1), v35, aForcToml, 9LL);
    v16 = v13;
    v17 = v25;
    std::fs::metadata(v42);
    v18 = *(_DWORD *)v42;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v42, v17);
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
    v19 = v18 == 2;
    v13 = v16;
    if ( v19 )
      goto LABEL_22;
    swayfmt::formatter::Formatter::from_dir(v42, v15, v14, v28);
    v20 = *(_QWORD *)v42;
    v36 = *(_OWORD *)&v42[8];
    v37 = *(_OWORD *)&v42[24];
    v38 = *(_OWORD *)&v42[40];
    v39 = *(_OWORD *)&v42[56];
    v40 = *(_OWORD *)&v42[72];
    v41 = *(_OWORD *)&v42[88];
    if ( *(_QWORD *)v42 == 2LL )
      break;
    memcpy(v16, src, 0xA8uLL);
    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v50);
    v50 = v20;
    v56 = v41;
    v55 = v40;
    v54 = v39;
    v53 = v38;
    v52 = v37;
    v51 = v36;
    memcpy(dest, v16, sizeof(dest));
    v13 = v16;
LABEL_22:
    v12 = forc_fmt::format_pkg_at_dir(a1, v15, v14, &v50);
    if ( v12 )
      goto LABEL_30;
    core::ptr::drop_in_place<std::path::PathBuf>(&v34);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34, v29);
    if ( (_QWORD)v34 == 0x8000000000000000LL )
      goto LABEL_24;
  }
  *(_OWORD *)&v42[80] = v41;
  *(_OWORD *)&v42[64] = v40;
  *(_OWORD *)&v42[48] = v39;
  *(_OWORD *)&v42[32] = v38;
  *(_OWORD *)&v42[16] = v37;
  *(_OWORD *)v42 = v36;
  v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v42);
LABEL_30:
  core::ptr::drop_in_place<std::path::PathBuf>(&v34);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v29);
LABEL_31:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v33);
  core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v50);
  return v12;
}