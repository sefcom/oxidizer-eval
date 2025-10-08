__int64 __fastcall forc_fmt::get_sway_dirs(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  int v9; // r14d
  _OWORD *v10; // rcx
  __int64 v12; // [rsp+0h] [rbp-1C8h] BYREF
  char v13; // [rsp+8h] [rbp-1C0h]
  __int128 v14; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-1A8h]
  __int128 v16; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-190h]
  __int64 v18; // [rsp+40h] [rbp-188h] BYREF
  __int64 v19; // [rsp+48h] [rbp-180h]
  __int64 v20; // [rsp+50h] [rbp-178h]
  __int64 v21; // [rsp+58h] [rbp-170h] BYREF
  char v22; // [rsp+60h] [rbp-168h]
  __int64 v23; // [rsp+68h] [rbp-160h]
  __int128 v24; // [rsp+70h] [rbp-158h] BYREF
  __int64 v25; // [rsp+80h] [rbp-148h]
  char v26[8]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v27; // [rsp+90h] [rbp-138h]
  __int64 v28; // [rsp+98h] [rbp-130h]
  __int128 v29; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-118h]
  __int64 v31; // [rsp+C0h] [rbp-108h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-100h]
  __int128 v33; // [rsp+D8h] [rbp-F0h]
  _BYTE dest[24]; // [rsp+E8h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+100h] [rbp-C8h]

  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  v2 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v23 = a1;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v2 = *(_OWORD *)a2;
  v18 = 1LL;
  v19 = v2;
  v3 = 1LL;
  while ( 1 )
  {
    v20 = v3 - 1;
    v4 = 3 * (v3 - 1);
    v24 = *(_OWORD *)(v19 + 8 * v4);
    v25 = *(_QWORD *)(v19 + 8 * v4 + 16);
    if ( (_QWORD)v24 == 0x8000000000000000LL )
      break;
    v5 = v19 + 8 * v4;
    v30 = *(_QWORD *)(v5 + 16);
    v29 = *(_OWORD *)v5;
    std::fs::read_dir(&v12, &v29);
    if ( v13 == 2 )
      goto LABEL_3;
    v21 = v12;
    v22 = v13;
    while ( 1 )
    {
      core::iter::traits::iterator::Iterator::try_fold(dest, &v21);
      if ( !*(_QWORD *)dest )
        break;
      v33 = v35;
      v32 = *(_OWORD *)&dest[8];
      v31 = *(_QWORD *)dest;
      std::fs::DirEntry::path(v26, &v31);
      v6 = v27;
      v7 = v28;
      if ( !(unsigned __int8)std::path::Path::is_dir(v27, v28) )
        goto LABEL_8;
      <&str as alloc::string::SpecToString>::spec_to_string(dest, v6, v7);
      v15 = *(_QWORD *)&dest[16];
      v14 = *(_OWORD *)dest;
      alloc::vec::Vec<T,A>::push(&v18, &v14, &off_80A2F0);
      std::path::Path::join(&v14, v6, v7, aForcToml, 9LL);
      v8 = *((_QWORD *)&v14 + 1);
      std::fs::metadata(dest);
      v9 = *(_DWORD *)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v8);
      core::ptr::drop_in_place<std::path::PathBuf>(&v14);
      if ( v9 == 2 )
LABEL_8:
        core::ptr::drop_in_place<std::path::PathBuf>(v26);
      else
        alloc::vec::Vec<T,A>::push(&v16, v26, &off_80A308);
      core::ptr::drop_in_place<std::fs::DirEntry>(&v31);
    }
    core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<std::fs::DirEntry>>(dest);
    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v21);
    if ( v13 == 2 )
LABEL_3:
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v12);
    v3 = v20;
    if ( !v20 )
    {
      *(_QWORD *)&v24 = 0x8000000000000000LL;
      break;
    }
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v24);
  v10 = (_OWORD *)v23;
  *(_QWORD *)(v23 + 16) = v17;
  *v10 = v16;
  return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
}