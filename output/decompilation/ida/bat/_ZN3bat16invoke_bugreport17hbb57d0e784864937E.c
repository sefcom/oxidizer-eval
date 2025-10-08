__int64 __fastcall bat::invoke_bugreport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-198h]
  const char *v15; // [rsp+18h] [rbp-190h]
  __int64 v16; // [rsp+20h] [rbp-188h]
  const char *v17; // [rsp+28h] [rbp-180h]
  __int64 v18; // [rsp+30h] [rbp-178h]
  const char *v19; // [rsp+38h] [rbp-170h]
  __int64 v20; // [rsp+40h] [rbp-168h]
  __int128 v21; // [rsp+50h] [rbp-158h] BYREF
  __int128 v22; // [rsp+60h] [rbp-148h]
  __int128 v23; // [rsp+70h] [rbp-138h]
  __int128 v24; // [rsp+80h] [rbp-128h]
  __int64 v25; // [rsp+90h] [rbp-118h]
  __int128 v26; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-F8h]
  __int128 v28; // [rsp+C0h] [rbp-E8h]
  __int128 v29; // [rsp+D0h] [rbp-D8h]
  __int64 v30; // [rsp+E0h] [rbp-C8h]
  __int128 v31; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+100h] [rbp-A8h]
  __int128 v33; // [rsp+110h] [rbp-98h] BYREF
  __int64 v34; // [rsp+120h] [rbp-88h]
  __int64 v35; // [rsp+128h] [rbp-80h] BYREF
  _BYTE v36[24]; // [rsp+130h] [rbp-78h] BYREF
  _BYTE v37[96]; // [rsp+148h] [rbp-60h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a1, aPager, 5LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aPager, 5LL, &v13);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v6 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    v7 = 0LL;
  }
  bat::config::get_pager_executable(&v13, v7, v6);
  if ( __OFSUB__(0LL, (_QWORD)v13) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v31, aLess_0, 4LL);
  }
  else
  {
    v32 = v14;
    v31 = v13;
  }
  std::path::Path::to_path_buf(&v33, a2, a3);
  std::path::PathBuf::push(&v33, aMetadataYaml, 13LL);
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  v14 = 0LL;
  v15 = aBat;
  v16 = 3LL;
  v17 = a0250_0;
  v18 = 6LL;
  v19 = aV0250285G2c87b;
  v20 = 21LL;
  *(_QWORD *)&v21 = 0x8000000000000000LL;
  ((void (__fastcall *)(__int128 *, __int128 *, __int128 *))bugreport::BugReport::info)(&v26, &v13, &v21);
  bugreport::BugReport::info(&v13, &v26);
  bugreport::BugReport::info(&v26, &v13);
  bugreport::collector::EnvironmentVariables::list(&v21);
  bugreport::BugReport::info(&v13, &v26, &v21);
  bat::config::system_config_file((__int64)&v26);
  bugreport::collector::FileContent::new(&v21, aSystemConfigFi, 18LL, &v26);
  bugreport::BugReport::info(&v26, &v13, &v21);
  bat::config::config_file((__int64)&v13);
  bugreport::collector::FileContent::new(&v21, aConfigFile_0, 11LL, &v13);
  bugreport::BugReport::info(&v13, &v26, &v21);
  *(_QWORD *)&v27 = v34;
  v26 = v33;
  bugreport::collector::FileContent::new(&v21, aCustomAssetsMe, 22LL, &v26);
  bugreport::BugReport::info(&v26, &v13, &v21);
  bugreport::collector::directory_entries::DirectoryEntries::new(&v21, a2, a3);
  bugreport::BugReport::info(&v13, &v26, &v21);
  bugreport::BugReport::info(&v21, &v13);
  grep_cli::decompress::resolve_binary(&v35, &v31);
  if ( v35 )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(&v35);
  }
  else
  {
    bugreport::collector::CommandOutput::new(
      v37,
      v36,
      v8,
      v9,
      v10,
      v11,
      v21,
      *((_QWORD *)&v21 + 1),
      v22,
      *((_QWORD *)&v22 + 1),
      v23,
      *((_QWORD *)&v23 + 1),
      v24,
      *((_QWORD *)&v24 + 1),
      v25);
    bugreport::BugReport::info(&v26, &v13, v37);
    v21 = v26;
    v22 = v27;
    v23 = v28;
    v24 = v29;
    v25 = v30;
  }
  bugreport::BugReport::print(&v21);
  return core::ptr::drop_in_place<bugreport::BugReport>(&v21);
}