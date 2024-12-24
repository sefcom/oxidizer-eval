__int64 __fastcall uu_cp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int128 v11; // rax
  _BYTE **v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r14d
  __int64 (__fastcall *v16)(); // rdx
  __int128 v18; // [rsp+0h] [rbp-4B8h] BYREF
  __m256i v19; // [rsp+10h] [rbp-4A8h]
  __int128 v20; // [rsp+30h] [rbp-488h]
  __int128 v21; // [rsp+40h] [rbp-478h]
  __int128 v22; // [rsp+50h] [rbp-468h]
  __int128 v23; // [rsp+60h] [rbp-458h]
  __int128 v24; // [rsp+70h] [rbp-448h] BYREF
  _BYTE **v25; // [rsp+80h] [rbp-438h]
  __int64 v26; // [rsp+88h] [rbp-430h]
  __int64 v27; // [rsp+90h] [rbp-428h]
  _BYTE *v28; // [rsp+A0h] [rbp-418h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+A8h] [rbp-410h]
  __int128 v30; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-3F8h]
  __int128 v32; // [rsp+D0h] [rbp-3E8h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-3D8h]
  _OWORD v34[3]; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v35; // [rsp+120h] [rbp-398h]
  __int64 v36; // [rsp+128h] [rbp-390h] BYREF
  __int128 v37; // [rsp+130h] [rbp-388h]
  __m256i v38; // [rsp+140h] [rbp-378h]
  __int128 v39; // [rsp+160h] [rbp-358h]
  __int64 v40; // [rsp+170h] [rbp-348h]
  _QWORD v41[2]; // [rsp+178h] [rbp-340h] BYREF
  _OWORD v42[3]; // [rsp+188h] [rbp-330h] BYREF
  __int64 v43; // [rsp+1B8h] [rbp-300h]
  _BYTE v44[80]; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int128 v45; // [rsp+210h] [rbp-2A8h]
  __int128 v46; // [rsp+220h] [rbp-298h]

  uu_cp::uu_app(v44, a2);
  clap_builder::builder::command::Command::try_get_matches_from(v42, v44, a1, a2);
  if ( *(_QWORD *)&v42[0] != 0x8000000000000000LL )
  {
    v35 = v43;
    v34[2] = v42[2];
    v34[1] = v42[1];
    v34[0] = v42[0];
    uu_cp::Options::from_matches((__int64)v44, (__int64)v34);
    v18 = *(_OWORD *)&v44[8];
    v19 = *(__m256i *)&v44[24];
    v20 = *(_OWORD *)&v44[56];
    if ( *(_QWORD *)v44 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v44[48] = v20;
      *(__m256i *)&v44[16] = v19;
      *(_OWORD *)v44 = v18;
      v8 = alloc::boxed::Box<T>::new(v44);
    }
    else
    {
      v9 = *(_QWORD *)&v44[72];
      v39 = v20;
      v37 = v18;
      v38 = v19;
      v36 = *(_QWORD *)v44;
      v40 = *(_QWORD *)&v44[72];
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(DWORD1(v20))
        && (v9 & 0xFF00000000LL) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v18);
        *(_QWORD *)&v44[16] = v19.m256i_i64[0];
        *(_OWORD *)v44 = v18;
        *(_DWORD *)&v44[24] = 1;
        v8 = alloc::boxed::Box<T>::new(v44);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(v44, v34, aPaths, 5LL);
        clap_builder::parser::error::MatchesError::unwrap(&v18, aPaths, 5LL, v44);
        if ( (_QWORD)v18 )
        {
          v46 = v23;
          v45 = v22;
          *(_OWORD *)&v44[64] = v21;
          *(_OWORD *)&v44[48] = v20;
          *(__m256i *)&v44[16] = v19;
          *(_OWORD *)v44 = v18;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, v44);
          v11 = v24;
          v12 = v25;
        }
        else
        {
          *(_QWORD *)&v11 = 0x8000000000000000LL;
        }
        if ( (_QWORD)v11 == 0x8000000000000000LL )
          v12 = 0LL;
        v13 = 8LL;
        if ( (_QWORD)v11 == 0x8000000000000000LL )
          *(_QWORD *)&v11 = 0LL;
        else
          v13 = *((_QWORD *)&v11 + 1);
        *(_QWORD *)&v24 = v11;
        *((_QWORD *)&v24 + 1) = v13;
        v25 = v12;
        uu_cp::parse_path_args((__int64)v44, &v24, (__int64)&v36);
        v18 = *(_OWORD *)&v44[8];
        v19 = *(__m256i *)&v44[24];
        if ( *(_QWORD *)v44 == 13LL )
        {
          v31 = v19.m256i_i64[0];
          v30 = v18;
          v33 = v19.m256i_i64[3];
          v32 = *(_OWORD *)&v19.m256i_u64[1];
          v14 = *((_QWORD *)&v18 + 1);
          uu_cp::copy(
            (__int64)&v18,
            *((__int64 *)&v18 + 1),
            v19.m256i_u64[0],
            (__int64 (__fastcall *)())v19.m256i_i64[2],
            (char ***)v19.m256i_i64[3],
            (unsigned __int8 *)&v36);
          v15 = v18;
          if ( (_QWORD)v18 != 13LL )
          {
            *(_OWORD *)v44 = v18;
            *(_OWORD *)&v44[48] = v20;
            *(__m256i *)&v44[16] = v19;
            if ( (_DWORD)v18 != 5 )
            {
              v28 = (_BYTE *)uucore::util_name(&v18, v14);
              v29 = v16;
              v41[0] = &v28;
              v41[1] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v24 = &unk_1B1B88;
              *((_QWORD *)&v24 + 1) = 2LL;
              v27 = 0LL;
              v25 = (_BYTE **)v41;
              v26 = 1LL;
              std::io::stdio::_eprint(&v24);
              v28 = v44;
              v29 = <uu_cp::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&v24 = &unk_1B1BA8;
              *((_QWORD *)&v24 + 1) = 2LL;
              v27 = 0LL;
              v25 = &v28;
              v26 = 1LL;
              std::io::stdio::_eprint(&v24);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(v44);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v32);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v30);
          core::ptr::drop_in_place<uu_cp::Options>(&v36);
          if ( v15 == 13 && (_DWORD)v18 != 13 )
            core::ptr::drop_in_place<uu_cp::Error>(&v18);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
          return 0LL;
        }
        *(__m256i *)&v44[24] = v19;
        *(_OWORD *)&v44[8] = v18;
        v8 = alloc::boxed::Box<T>::new(v44);
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v36);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
    return v8;
  }
  v2 = *((_QWORD *)&v42[0] + 1);
  uu_cp::uu_app(v44, (__int64)v44);
  v3 = *(unsigned __int8 *)(v2 + 213);
  if ( v3 == 12 )
  {
    v10 = clap_builder::builder::command::Command::print_help(v44);
    if ( !v10 )
      goto LABEL_12;
    v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v44);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
    if ( v3 == 14 )
    {
      clap_builder::builder::command::Command::render_version(&v36, v44);
      *(_QWORD *)&v34[0] = &v36;
      *((_QWORD *)&v34[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &unk_1E8A0;
      *((_QWORD *)&v18 + 1) = 1LL;
      v19.m256i_i64[0] = (__int64)v34;
      *(_OWORD *)&v19.m256i_u64[1] = 1uLL;
      std::io::stdio::_print(&v18, v44, v4, v5, v6, v7);
      core::ptr::drop_in_place<alloc::string::String>(&v36);
LABEL_12:
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v44);
      core::ptr::drop_in_place<clap_builder::error::Error>(v2);
      return 0LL;
    }
    v8 = alloc::boxed::Box<T>::new(v2);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v44);
  }
  return v8;
}
