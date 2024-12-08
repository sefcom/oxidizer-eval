__int64 __fastcall uu_cp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE **v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r14d
  __int64 (__fastcall *v12)(); // rdx
  __int128 v14; // [rsp+0h] [rbp-4B8h] BYREF
  __m256i v15; // [rsp+10h] [rbp-4A8h]
  __int128 v16; // [rsp+30h] [rbp-488h]
  __int128 v17; // [rsp+40h] [rbp-478h]
  __int128 v18; // [rsp+50h] [rbp-468h]
  __int128 v19; // [rsp+60h] [rbp-458h]
  void *v20; // [rsp+70h] [rbp-448h] BYREF
  __int64 v21; // [rsp+78h] [rbp-440h]
  _BYTE **v22; // [rsp+80h] [rbp-438h]
  __int64 v23; // [rsp+88h] [rbp-430h]
  __int64 v24; // [rsp+90h] [rbp-428h]
  _BYTE *v25; // [rsp+A0h] [rbp-418h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+A8h] [rbp-410h]
  __int128 v27; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-3F8h]
  __int128 v29; // [rsp+D0h] [rbp-3E8h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-3D8h]
  _OWORD v31[3]; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v32; // [rsp+120h] [rbp-398h]
  __int64 v33; // [rsp+128h] [rbp-390h] BYREF
  __int128 v34; // [rsp+130h] [rbp-388h]
  __m256i v35; // [rsp+140h] [rbp-378h]
  __int128 v36; // [rsp+160h] [rbp-358h]
  __int64 v37; // [rsp+170h] [rbp-348h]
  _QWORD v38[2]; // [rsp+178h] [rbp-340h] BYREF
  _OWORD v39[3]; // [rsp+188h] [rbp-330h] BYREF
  __int64 v40; // [rsp+1B8h] [rbp-300h]
  _BYTE v41[80]; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int128 v42; // [rsp+210h] [rbp-2A8h]
  __int128 v43; // [rsp+220h] [rbp-298h]

  uu_cp::uu_app(v41);
  clap_builder::builder::command::Command::try_get_matches_from(v39, v41, a1, a2);
  if ( *(_QWORD *)&v39[0] != 0x8000000000000000LL )
  {
    v32 = v40;
    v31[2] = v39[2];
    v31[1] = v39[1];
    v31[0] = v39[0];
    uu_cp::Options::from_matches(v41, v31);
    v14 = *(_OWORD *)&v41[8];
    v15 = *(__m256i *)&v41[24];
    v16 = *(_OWORD *)&v41[56];
    if ( *(_QWORD *)v41 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v41[48] = v16;
      *(__m256i *)&v41[16] = v15;
      *(_OWORD *)v41 = v14;
      v4 = alloc::boxed::Box<T>::new(v41);
    }
    else
    {
      v5 = *(_QWORD *)&v41[72];
      v36 = v16;
      v34 = v14;
      v35 = v15;
      v33 = *(_QWORD *)v41;
      v37 = *(_QWORD *)&v41[72];
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(DWORD1(v16))
        && (v5 & 0xFF00000000LL) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v14);
        *(_QWORD *)&v41[16] = v15.m256i_i64[0];
        *(_OWORD *)v41 = v14;
        *(_DWORD *)&v41[24] = 1;
        v4 = alloc::boxed::Box<T>::new(v41);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(v41, v31, aPaths, 5LL);
        clap_builder::parser::error::MatchesError::unwrap(&v14, aPaths, 5LL, v41);
        if ( (_QWORD)v14 )
        {
          v43 = v19;
          v42 = v18;
          *(_OWORD *)&v41[64] = v17;
          *(_OWORD *)&v41[48] = v16;
          *(__m256i *)&v41[16] = v15;
          *(_OWORD *)v41 = v14;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v20, v41);
          v9 = (unsigned __int64)v20;
          v7 = v21;
          v8 = v22;
        }
        else
        {
          v9 = 0x8000000000000000LL;
        }
        if ( v9 == 0x8000000000000000LL )
          v8 = 0LL;
        v10 = 8LL;
        if ( v9 == 0x8000000000000000LL )
          v9 = 0LL;
        else
          v10 = v7;
        v20 = (void *)v9;
        v21 = v10;
        v22 = v8;
        uu_cp::parse_path_args(v41, &v20, &v33);
        v14 = *(_OWORD *)&v41[8];
        v15 = *(__m256i *)&v41[24];
        if ( *(_QWORD *)v41 == 13LL )
        {
          v28 = v15.m256i_i64[0];
          v27 = v14;
          v30 = v15.m256i_i64[3];
          v29 = *(_OWORD *)&v15.m256i_u64[1];
          uu_cp::copy(&v14, *((_QWORD *)&v14 + 1), v15.m256i_i64[0], v15.m256i_i64[2], v15.m256i_i64[3], &v33);
          v11 = v14;
          if ( (_QWORD)v14 != 13LL )
          {
            *(_OWORD *)v41 = v14;
            *(_OWORD *)&v41[48] = v16;
            *(__m256i *)&v41[16] = v15;
            if ( (_DWORD)v14 != 5 )
            {
              v25 = (_BYTE *)uucore::util_name();
              v26 = v12;
              v38[0] = &v25;
              v38[1] = <&T as core::fmt::Display>::fmt;
              v20 = &unk_1B1B88;
              v21 = 2LL;
              v24 = 0LL;
              v22 = (_BYTE **)v38;
              v23 = 1LL;
              std::io::stdio::_eprint(&v20);
              v25 = v41;
              v26 = <uu_cp::Error as core::fmt::Display>::fmt;
              v20 = &unk_1B1BA8;
              v21 = 2LL;
              v24 = 0LL;
              v22 = &v25;
              v23 = 1LL;
              std::io::stdio::_eprint(&v20);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(v41);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v29);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v27);
          core::ptr::drop_in_place<uu_cp::Options>(&v33);
          if ( v11 == 13 && (_DWORD)v14 != 13 )
            core::ptr::drop_in_place<uu_cp::Error>(&v14);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
          return 0LL;
        }
        *(__m256i *)&v41[24] = v15;
        *(_OWORD *)&v41[8] = v14;
        v4 = alloc::boxed::Box<T>::new(v41);
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v33);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
    return v4;
  }
  v2 = *((_QWORD *)&v39[0] + 1);
  uu_cp::uu_app(v41);
  v3 = *(unsigned __int8 *)(v2 + 213);
  if ( v3 == 12 )
  {
    v6 = clap_builder::builder::command::Command::print_help(v41);
    if ( !v6 )
      goto LABEL_12;
    v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v41);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
    if ( v3 == 14 )
    {
      clap_builder::builder::command::Command::render_version(&v33, v41);
      *(_QWORD *)&v31[0] = &v33;
      *((_QWORD *)&v31[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &unk_1E8A0;
      *((_QWORD *)&v14 + 1) = 1LL;
      v15.m256i_i64[0] = (__int64)v31;
      *(_OWORD *)&v15.m256i_u64[1] = 1uLL;
      ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v14);
      core::ptr::drop_in_place<alloc::string::String>(&v33);
LABEL_12:
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v41);
      core::ptr::drop_in_place<clap_builder::error::Error>(v2);
      return 0LL;
    }
    v4 = alloc::boxed::Box<T>::new(v2);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v41);
  }
  return v4;
}
