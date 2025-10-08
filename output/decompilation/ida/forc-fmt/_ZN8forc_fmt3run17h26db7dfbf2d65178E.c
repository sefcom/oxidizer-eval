__int64 forc_fmt::run()
{
  _BYTE *v0; // rdi
  __int64 v1; // rbx
  __int128 v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int128 v8; // [rsp+0h] [rbp-368h] BYREF
  __int64 v9; // [rsp+10h] [rbp-358h]
  __int128 v10; // [rsp+20h] [rbp-348h] BYREF
  __int128 v11; // [rsp+30h] [rbp-338h]
  __int128 v12; // [rsp+40h] [rbp-328h]
  __int128 v13; // [rsp+50h] [rbp-318h]
  __int128 v14; // [rsp+60h] [rbp-308h]
  __int128 v15; // [rsp+70h] [rbp-2F8h]
  __int128 v16; // [rsp+80h] [rbp-2E8h]
  __int64 v17; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v18; // [rsp+98h] [rbp-2D0h]
  _BYTE v19[272]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v20[2]; // [rsp+1B0h] [rbp-1B8h] BYREF
  char v21[8]; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+1C8h] [rbp-1A0h]
  __int64 v23; // [rsp+1D0h] [rbp-198h]
  __int64 v24; // [rsp+1E0h] [rbp-188h]
  __int64 v25; // [rsp+1E8h] [rbp-180h]
  __int64 v26; // [rsp+1F0h] [rbp-178h]
  __int64 v27; // [rsp+1F8h] [rbp-170h]
  __int64 v28; // [rsp+200h] [rbp-168h]
  __int64 v29; // [rsp+208h] [rbp-160h]
  __int64 v30; // [rsp+210h] [rbp-158h]
  __int64 v31; // [rsp+218h] [rbp-150h]
  unsigned int v32; // [rsp+220h] [rbp-148h]
  _BYTE v33[24]; // [rsp+228h] [rbp-140h] BYREF
  _BYTE v34[40]; // [rsp+240h] [rbp-128h] BYREF
  __int128 v35; // [rsp+268h] [rbp-100h]
  __int128 v36; // [rsp+278h] [rbp-F0h]
  __int128 v37; // [rsp+288h] [rbp-E0h]
  __int128 v38; // [rsp+298h] [rbp-D0h]
  _BYTE dest[168]; // [rsp+2A8h] [rbp-C0h] BYREF

  clap_builder::derive::Parser::parse(v21);
  if ( !__OFSUB__(0LL, v26) )
  {
    v0 = v19;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v19, v27, v28);
    v9 = *(_QWORD *)&v19[16];
    v8 = *(_OWORD *)v19;
    goto LABEL_6;
  }
  std::env::current_dir(v19);
  v0 = *(_BYTE **)&v19[8];
  if ( *(_QWORD *)v19 != 0x8000000000000000LL )
  {
    v8 = *(_OWORD *)v19;
    v9 = *(_QWORD *)&v19[16];
LABEL_6:
    *(_QWORD *)&v2 = std::thread::local::LocalKey<T>::with(v0);
    *(_OWORD *)&v19[16] = xmmword_80A2E0;
    *(_OWORD *)v19 = *(_OWORD *)&off_80A2D0;
    *(_OWORD *)&v19[32] = v2;
    sway_features::ExperimentalFeatures::new(&v10, v19, v22, v23, v24, v25, v8);
    if ( (_DWORD)v10 != 2 )
    {
      *(_OWORD *)&v34[16] = v11;
      *(_OWORD *)v34 = v10;
      v1 = forc_fmt::run::{{closure}}(v34);
      core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,bool>>(v19);
      goto LABEL_26;
    }
    v3 = DWORD2(v10);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,bool>>(v19);
    swayfmt::formatter::Formatter::from_dir(v19, *((_QWORD *)&v8 + 1), v9, v3);
    v10 = *(_OWORD *)&v19[8];
    v11 = *(_OWORD *)&v19[24];
    v12 = *(_OWORD *)&v19[40];
    v13 = *(_OWORD *)&v19[56];
    v14 = *(_OWORD *)&v19[72];
    v15 = *(_OWORD *)&v19[88];
    if ( *(_QWORD *)v19 == 2LL )
    {
      *(_OWORD *)&v19[80] = v15;
      *(_OWORD *)&v19[64] = v14;
      *(_OWORD *)&v19[48] = v13;
      *(_OWORD *)&v19[32] = v12;
      *(_OWORD *)&v19[16] = v11;
      *(_OWORD *)v19 = v10;
      v1 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v19);
LABEL_26:
      core::ptr::drop_in_place<std::path::PathBuf>(&v8);
      goto LABEL_27;
    }
    memcpy(dest, &v19[104], sizeof(dest));
    *(_OWORD *)&v34[8] = v10;
    *(_OWORD *)&v34[24] = v11;
    v35 = v12;
    v36 = v13;
    v37 = v14;
    v38 = v15;
    *(_QWORD *)v34 = *(_QWORD *)v19;
    if ( v29 == 0x8000000000000000LL )
    {
      <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::from_dir(v19, &v8);
      v1 = *(_QWORD *)&v19[8];
      if ( *(_QWORD *)v19 != 3LL )
      {
        v16 = *(_OWORD *)&v19[96];
        v15 = *(_OWORD *)&v19[80];
        v14 = *(_OWORD *)&v19[64];
        v13 = *(_OWORD *)&v19[48];
        v12 = *(_OWORD *)&v19[32];
        v11 = *(_OWORD *)&v19[16];
        v10 = *(_OWORD *)v19;
        if ( *(_QWORD *)v19 == 2LL )
        {
          v1 = forc_fmt::format_pkg_at_dir(v32, *((_QWORD *)&v8 + 1), v9, v34);
          if ( !v1 )
            goto LABEL_29;
        }
        else
        {
          *(_OWORD *)&v19[96] = v16;
          *(_OWORD *)&v19[80] = v15;
          *(_OWORD *)&v19[64] = v14;
          *(_OWORD *)&v19[48] = v13;
          *(_OWORD *)&v19[32] = v12;
          *(_OWORD *)&v19[16] = v11;
          *(_OWORD *)v19 = v10;
          v1 = forc_fmt::format_workspace_at_dir(v32, v19, *((_QWORD *)&v8 + 1), v9, v3);
          if ( !v1 )
          {
            core::ptr::drop_in_place<forc_pkg::manifest::WorkspaceManifestFile>(v19);
LABEL_29:
            if ( (_DWORD)v10 == 2 )
              core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(&v10);
            core::ptr::drop_in_place<swayfmt::formatter::Formatter>(v34);
            v1 = 0LL;
            goto LABEL_26;
          }
          core::ptr::drop_in_place<forc_pkg::manifest::WorkspaceManifestFile>(v19);
        }
        if ( (_DWORD)v10 == 2 )
          core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(&v10);
      }
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v19, v30, v31);
      v4 = *(_QWORD *)&v19[16];
      *(_QWORD *)&v11 = *(_QWORD *)&v19[16];
      v10 = *(_OWORD *)v19;
      v5 = *(_QWORD *)&v19[8];
      if ( (unsigned __int8)sway_utils::helpers::is_sway_file(*(_QWORD *)&v19[8], *(_QWORD *)&v19[16]) )
      {
        std::path::Path::to_path_buf(v19, v5, v4);
        forc_fmt::format_file(&v17, v32, v19, v34);
        if ( (_BYTE)v17 )
          v1 = v18;
        else
          v1 = 0LL;
      }
      else
      {
        v17 = v5;
        v18 = v4;
        v20[0] = &v17;
        v20[1] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)v19 = &off_80A2B0;
        *(_QWORD *)&v19[8] = 2LL;
        *(_QWORD *)&v19[32] = 0LL;
        *(_QWORD *)&v19[16] = v20;
        *(_QWORD *)&v19[24] = 1LL;
        core::option::Option<T>::map_or_else(v33, 0LL, v6, v19);
        v1 = anyhow::error::<impl anyhow::Error>::msg(v33);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v10);
    }
    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(v34);
    goto LABEL_26;
  }
  v1 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*(_QWORD *)&v19[8]);
LABEL_27:
  core::ptr::drop_in_place<forc_fmt::App>(v21);
  return v1;
}