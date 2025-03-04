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
  unsigned __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r14d
  __int64 (__fastcall *v17)(); // rdx
  __int128 v19; // [rsp+0h] [rbp-4B8h] BYREF
  __m256i v20; // [rsp+10h] [rbp-4A8h]
  __int128 v21; // [rsp+30h] [rbp-488h]
  __int128 v22; // [rsp+40h] [rbp-478h]
  __int128 v23; // [rsp+50h] [rbp-468h]
  __int128 v24; // [rsp+60h] [rbp-458h]
  __int128 v25; // [rsp+70h] [rbp-448h] BYREF
  _BYTE **v26; // [rsp+80h] [rbp-438h]
  __int64 v27; // [rsp+88h] [rbp-430h]
  __int64 v28; // [rsp+90h] [rbp-428h]
  _BYTE *v29; // [rsp+A0h] [rbp-418h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+A8h] [rbp-410h]
  __int128 v31; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-3F8h]
  __int128 v33; // [rsp+D0h] [rbp-3E8h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-3D8h]
  _OWORD v35[3]; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v36; // [rsp+120h] [rbp-398h]
  __int64 v37; // [rsp+128h] [rbp-390h] BYREF
  __int128 v38; // [rsp+130h] [rbp-388h]
  __m256i v39; // [rsp+140h] [rbp-378h]
  __int128 v40; // [rsp+160h] [rbp-358h]
  __int64 v41; // [rsp+170h] [rbp-348h]
  _QWORD v42[2]; // [rsp+178h] [rbp-340h] BYREF
  _OWORD v43[3]; // [rsp+188h] [rbp-330h] BYREF
  __int64 v44; // [rsp+1B8h] [rbp-300h]
  _BYTE v45[80]; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int128 v46; // [rsp+210h] [rbp-2A8h]
  __int128 v47; // [rsp+220h] [rbp-298h]

  uu_cp::uu_app(v45, a2);
  clap_builder::builder::command::Command::try_get_matches_from(v43, v45, a1, a2);
  if ( *(_QWORD *)&v43[0] != 0x8000000000000000LL )
  {
    v36 = v44;
    v35[2] = v43[2];
    v35[1] = v43[1];
    v35[0] = v43[0];
    uu_cp::Options::from_matches((__int64)v45, (__int64)v35);
    v19 = *(_OWORD *)&v45[8];
    v20 = *(__m256i *)&v45[24];
    v21 = *(_OWORD *)&v45[56];
    if ( *(_QWORD *)v45 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v45[48] = v21;
      *(__m256i *)&v45[16] = v20;
      *(_OWORD *)v45 = v19;
      v8 = alloc::boxed::Box<T>::new(v45);
    }
    else
    {
      v9 = *(_QWORD *)&v45[72];
      v40 = v21;
      v38 = v19;
      v39 = v20;
      v37 = *(_QWORD *)v45;
      v41 = *(_QWORD *)&v45[72];
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(DWORD1(v21))
        && (v9 & 0xFF00000000LL) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v19);
        *(_QWORD *)&v45[16] = v20.m256i_i64[0];
        *(_OWORD *)v45 = v19;
        *(_DWORD *)&v45[24] = 1;
        v8 = alloc::boxed::Box<T>::new(v45);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(v45, v35, aPaths, 5LL);
        clap_builder::parser::error::MatchesError::unwrap(&v19, aPaths, 5LL, v45);
        if ( (_QWORD)v19 )
        {
          v47 = v24;
          v46 = v23;
          *(_OWORD *)&v45[64] = v22;
          *(_OWORD *)&v45[48] = v21;
          *(__m256i *)&v45[16] = v20;
          *(_OWORD *)v45 = v19;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v25, v45);
          v11 = v25;
          v12 = (unsigned __int64)v26;
        }
        else
        {
          *(_QWORD *)&v11 = 0x8000000000000000LL;
        }
        v13 = (_QWORD)v11 == 0x8000000000000000LL;
        if ( (_QWORD)v11 == 0x8000000000000000LL )
          *(_QWORD *)&v11 = 0LL;
        v14 = 8LL;
        if ( v13 )
          v12 = 0LL;
        else
          v14 = *((_QWORD *)&v11 + 1);
        *(_QWORD *)&v25 = v11;
        *((_QWORD *)&v25 + 1) = v14;
        v26 = (_BYTE **)v12;
        uu_cp::parse_path_args((__int64)v45, &v25, (__int64)&v37, v12);
        v19 = *(_OWORD *)&v45[8];
        v20 = *(__m256i *)&v45[24];
        if ( *(_QWORD *)v45 == 13LL )
        {
          v32 = v20.m256i_i64[0];
          v31 = v19;
          v34 = v20.m256i_i64[3];
          v33 = *(_OWORD *)&v20.m256i_u64[1];
          v15 = *((_QWORD *)&v19 + 1);
          uu_cp::copy(
            (__int64)&v19,
            *((__int64 *)&v19 + 1),
            v20.m256i_u64[0],
            v20.m256i_i64[2],
            v20.m256i_i64[3],
            (unsigned __int8 *)&v37);
          v16 = v19;
          if ( (_QWORD)v19 != 13LL )
          {
            *(_OWORD *)v45 = v19;
            *(_OWORD *)&v45[48] = v21;
            *(__m256i *)&v45[16] = v20;
            if ( (_DWORD)v19 != 5 )
            {
              v29 = (_BYTE *)uucore::util_name(&v19, v15);
              v30 = v17;
              v42[0] = &v29;
              v42[1] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v25 = &unk_1B2220;
              *((_QWORD *)&v25 + 1) = 2LL;
              v28 = 0LL;
              v26 = (_BYTE **)v42;
              v27 = 1LL;
              std::io::stdio::_eprint(&v25);
              v29 = v45;
              v30 = <uu_cp::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&v25 = &unk_1B2240;
              *((_QWORD *)&v25 + 1) = 2LL;
              v28 = 0LL;
              v26 = &v29;
              v27 = 1LL;
              std::io::stdio::_eprint(&v25);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(v45);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v33);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v31);
          core::ptr::drop_in_place<uu_cp::Options>(&v37);
          if ( v16 == 13 && (_DWORD)v19 != 13 )
            core::ptr::drop_in_place<uu_cp::Error>(&v19);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
          return 0LL;
        }
        *(__m256i *)&v45[24] = v20;
        *(_OWORD *)&v45[8] = v19;
        v8 = alloc::boxed::Box<T>::new(v45);
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v37);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
    return v8;
  }
  v2 = *((_QWORD *)&v43[0] + 1);
  uu_cp::uu_app(v45, (__int64)v45);
  v3 = *(unsigned __int8 *)(v2 + 213);
  if ( v3 == 12 )
  {
    v10 = clap_builder::builder::command::Command::print_help(v45);
    if ( !v10 )
      goto LABEL_12;
    v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v45);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
    if ( v3 == 14 )
    {
      clap_builder::builder::command::Command::render_version(&v37, v45);
      *(_QWORD *)&v35[0] = &v37;
      *((_QWORD *)&v35[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v19 = &unk_1E7F0;
      *((_QWORD *)&v19 + 1) = 1LL;
      v20.m256i_i64[0] = (__int64)v35;
      *(_OWORD *)&v20.m256i_u64[1] = 1uLL;
      std::io::stdio::_print(&v19, v45, v4, v5, v6, v7);
      core::ptr::drop_in_place<alloc::string::String>(&v37);
LABEL_12:
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v45);
      core::ptr::drop_in_place<clap_builder::error::Error>(v2);
      return 0LL;
    }
    v8 = alloc::boxed::Box<T>::new(v2);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v45);
  }
  return v8;
}
