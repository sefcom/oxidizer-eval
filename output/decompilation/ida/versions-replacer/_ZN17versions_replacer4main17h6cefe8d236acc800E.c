__int64 versions_replacer::main()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-258h] BYREF
  __int64 v15; // [rsp+8h] [rbp-250h]
  __int64 v16; // [rsp+10h] [rbp-248h]
  __int128 v17; // [rsp+18h] [rbp-240h] BYREF
  _BYTE v18[40]; // [rsp+28h] [rbp-230h]
  __int128 v19; // [rsp+50h] [rbp-208h]
  _OWORD v20[3]; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-1B8h]
  __int128 v23; // [rsp+B0h] [rbp-1A8h]
  char **v24; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-190h]
  __int128 v26; // [rsp+D0h] [rbp-188h]
  __int128 v27; // [rsp+E0h] [rbp-178h]
  __int64 v28; // [rsp+F0h] [rbp-168h]
  __int128 v29; // [rsp+F8h] [rbp-160h]
  __int64 v30; // [rsp+108h] [rbp-150h]
  __int64 v31; // [rsp+110h] [rbp-148h]
  __int128 v32; // [rsp+118h] [rbp-140h]
  __int64 v33; // [rsp+128h] [rbp-130h]
  __int128 v34; // [rsp+130h] [rbp-128h]
  __int128 v35; // [rsp+140h] [rbp-118h]
  __int128 v36; // [rsp+150h] [rbp-108h]
  __int128 v37; // [rsp+160h] [rbp-F8h]
  _OWORD v38[3]; // [rsp+170h] [rbp-E8h] BYREF
  _BYTE v39[24]; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v40[24]; // [rsp+1B8h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+1D0h] [rbp-88h]
  __int64 v42; // [rsp+1D8h] [rbp-80h]
  _QWORD v43[13]; // [rsp+1F0h] [rbp-68h] BYREF

  argh::from_env(v39);
  versions_replacer::metadata::collect_versions_from_cargo_toml((__int64)&v24, (__int64)v40, v0, v1, v2, v3);
  v4 = v25;
  if ( v24 )
  {
    v23 = v27;
    v22 = v26;
    v21[0] = v24;
    v21[1] = v25;
    v14 = 0LL;
    v15 = 8LL;
    v16 = 0LL;
    walkdir::WalkDir::new(&v17, v39);
    v36 = v19;
    v35 = *(_OWORD *)&v18[24];
    v34 = *(_OWORD *)&v18[8];
    v32 = v17;
    v33 = *(_QWORD *)v18;
    v24 = 0LL;
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = 8LL;
    v27 = 0LL;
    v28 = 8LL;
    v29 = 0LL;
    v30 = 8LL;
    v31 = 0LL;
    v37 = 0LL;
    while ( 1 )
    {
      <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(v43, &v24);
      if ( v43[0] == 0x8000000000000002LL )
      {
        core::ptr::drop_in_place<walkdir::IntoIter>(&v24);
        v11 = v16;
        *(_QWORD *)&v20[0] = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                               v15,
                               v15 + 8 * v16);
        *(_QWORD *)&v38[0] = v11;
        *(_QWORD *)&v17 = v20;
        *((_QWORD *)&v17 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)v18 = v38;
        *(_QWORD *)&v18[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v24 = &off_22C388;
        v25 = 3LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v17;
        *((_QWORD *)&v26 + 1) = 2LL;
        std::io::stdio::_print(&v24);
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
          v14,
          v15);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::string::String>>(v21);
        v4 = 0LL;
        goto LABEL_19;
      }
      eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err(&v17, v43);
      v4 = *((_QWORD *)&v17 + 1);
      if ( (_QWORD)v17 == 0x8000000000000000LL )
        break;
      v20[2] = *(_OWORD *)&v18[16];
      v20[1] = *(_OWORD *)v18;
      v20[0] = v17;
      v5 = *(_QWORD *)v18;
      if ( (unsigned __int8)std::path::Path::is_file(*((_QWORD *)&v17 + 1), *(_QWORD *)v18) )
      {
        if ( !v41 )
          goto LABEL_11;
        v6 = std::path::Path::file_name(v4, v5);
        if ( !v6 )
        {
          v12 = versions_replacer::main::{{closure}}(v4, v5);
LABEL_16:
          v4 = v12;
LABEL_17:
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(v20);
          break;
        }
        core::str::converts::from_utf8(&v17, v6);
        if ( (_DWORD)v17 == 1 )
        {
          *(_QWORD *)&v17 = &off_22C378;
          *((_QWORD *)&v17 + 1) = 1LL;
          *(_QWORD *)v18 = 8LL;
          *(_OWORD *)&v18[8] = 0LL;
          v12 = eyre::private::format_err(&v17, &off_22C3D0);
          goto LABEL_16;
        }
        LODWORD(v17) = 0;
        *(_QWORD *)&v18[8] = 0LL;
        *(_QWORD *)&v18[16] = *(_QWORD *)v18;
        v18[24] = 1;
        regex_automata::util::search::Input::set_span(&v17);
        v38[2] = *(_OWORD *)&v18[16];
        v38[1] = *(_OWORD *)v18;
        v38[0] = v17;
        regex_automata::meta::regex::Regex::search_half(&v17, v41, v42, v38);
        if ( (v17 & 1) != 0 )
        {
LABEL_11:
          v7 = versions_replacer::replace::replace_versions_in_file(v4, v5, (__int64)v21);
          v9 = eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err_with(v7, v8, v4, v5);
          v4 = v10;
          if ( (v9 & 1) != 0 )
            goto LABEL_17;
          if ( v10 )
            alloc::vec::Vec<T,A>::push(&v14, v10);
        }
      }
      core::ptr::drop_in_place<walkdir::dent::DirEntry>(v20);
    }
    core::ptr::drop_in_place<walkdir::IntoIter>(&v24);
    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
      v14,
      v15);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::string::String>>(v21);
  }
LABEL_19:
  core::ptr::drop_in_place<versions_replacer::VersionsReplacer>(v39);
  return v4;
}