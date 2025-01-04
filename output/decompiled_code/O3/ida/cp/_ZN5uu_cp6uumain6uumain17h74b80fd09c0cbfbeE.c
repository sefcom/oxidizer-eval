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
  bool v10; // zf
  __int64 v11; // rdi
  int v12; // r14d
  __int64 (__fastcall *v13)(); // rdx
  __int128 v15; // [rsp+0h] [rbp-4B8h] BYREF
  __m256i v16; // [rsp+10h] [rbp-4A8h]
  __int128 v17; // [rsp+30h] [rbp-488h]
  __int128 v18; // [rsp+40h] [rbp-478h]
  __int128 v19; // [rsp+50h] [rbp-468h]
  __int128 v20; // [rsp+60h] [rbp-458h]
  void *v21; // [rsp+70h] [rbp-448h] BYREF
  __int64 v22; // [rsp+78h] [rbp-440h]
  _BYTE **v23; // [rsp+80h] [rbp-438h]
  __int64 v24; // [rsp+88h] [rbp-430h]
  __int64 v25; // [rsp+90h] [rbp-428h]
  _BYTE *v26; // [rsp+A0h] [rbp-418h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+A8h] [rbp-410h]
  __int128 v28; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-3F8h]
  __int128 v30; // [rsp+D0h] [rbp-3E8h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-3D8h]
  _OWORD v32[3]; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v33; // [rsp+120h] [rbp-398h]
  __int64 v34; // [rsp+128h] [rbp-390h] BYREF
  __int128 v35; // [rsp+130h] [rbp-388h]
  __m256i v36; // [rsp+140h] [rbp-378h]
  __int128 v37; // [rsp+160h] [rbp-358h]
  __int64 v38; // [rsp+170h] [rbp-348h]
  _QWORD v39[2]; // [rsp+178h] [rbp-340h] BYREF
  _OWORD v40[3]; // [rsp+188h] [rbp-330h] BYREF
  __int64 v41; // [rsp+1B8h] [rbp-300h]
  _BYTE v42[80]; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int128 v43; // [rsp+210h] [rbp-2A8h]
  __int128 v44; // [rsp+220h] [rbp-298h]

  uu_cp::uu_app(v42);
  clap_builder::builder::command::Command::try_get_matches_from(v40, v42, a1, a2);
  if ( *(_QWORD *)&v40[0] != 0x8000000000000000LL )
  {
    v33 = v41;
    v32[2] = v40[2];
    v32[1] = v40[1];
    v32[0] = v40[0];
    uu_cp::Options::from_matches(v42, v32);
    v15 = *(_OWORD *)&v42[8];
    v16 = *(__m256i *)&v42[24];
    v17 = *(_OWORD *)&v42[56];
    if ( *(_QWORD *)v42 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v42[48] = v17;
      *(__m256i *)&v42[16] = v16;
      *(_OWORD *)v42 = v15;
      v4 = alloc::boxed::Box<T>::new(v42);
    }
    else
    {
      v5 = *(_QWORD *)&v42[72];
      v37 = v17;
      v35 = v15;
      v36 = v16;
      v34 = *(_QWORD *)v42;
      v38 = *(_QWORD *)&v42[72];
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(DWORD1(v17))
        && (v5 & 0xFF00000000LL) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v15);
        *(_QWORD *)&v42[16] = v16.m256i_i64[0];
        *(_OWORD *)v42 = v15;
        *(_DWORD *)&v42[24] = 1;
        v4 = alloc::boxed::Box<T>::new(v42);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(v42, v32, aPaths, 5LL);
        clap_builder::parser::error::MatchesError::unwrap(&v15, aPaths, 5LL, v42);
        if ( (_QWORD)v15 )
        {
          v44 = v20;
          v43 = v19;
          *(_OWORD *)&v42[64] = v18;
          *(_OWORD *)&v42[48] = v17;
          *(__m256i *)&v42[16] = v16;
          *(_OWORD *)v42 = v15;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, v42);
          v9 = (unsigned __int64)v21;
          v7 = v22;
          v8 = v23;
        }
        else
        {
          v9 = 0x8000000000000000LL;
        }
        v10 = v9 == 0x8000000000000000LL;
        if ( v9 == 0x8000000000000000LL )
          v9 = 0LL;
        v11 = 8LL;
        if ( v10 )
          v8 = 0LL;
        else
          v11 = v7;
        v21 = (void *)v9;
        v22 = v11;
        v23 = v8;
        uu_cp::parse_path_args(v42, &v21, &v34);
        v15 = *(_OWORD *)&v42[8];
        v16 = *(__m256i *)&v42[24];
        if ( *(_QWORD *)v42 == 13LL )
        {
          v29 = v16.m256i_i64[0];
          v28 = v15;
          v31 = v16.m256i_i64[3];
          v30 = *(_OWORD *)&v16.m256i_u64[1];
          uu_cp::copy(&v15, *((_QWORD *)&v15 + 1), v16.m256i_i64[0], v16.m256i_i64[2], v16.m256i_i64[3], &v34);
          v12 = v15;
          if ( (_QWORD)v15 != 13LL )
          {
            *(_OWORD *)v42 = v15;
            *(_OWORD *)&v42[48] = v17;
            *(__m256i *)&v42[16] = v16;
            if ( (_DWORD)v15 != 5 )
            {
              v26 = (_BYTE *)uucore::util_name();
              v27 = v13;
              v39[0] = &v26;
              v39[1] = <&T as core::fmt::Display>::fmt;
              v21 = &unk_1B2220;
              v22 = 2LL;
              v25 = 0LL;
              v23 = (_BYTE **)v39;
              v24 = 1LL;
              std::io::stdio::_eprint(&v21);
              v26 = v42;
              v27 = <uu_cp::Error as core::fmt::Display>::fmt;
              v21 = &unk_1B2240;
              v22 = 2LL;
              v25 = 0LL;
              v23 = &v26;
              v24 = 1LL;
              std::io::stdio::_eprint(&v21);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(v42);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v30);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v28);
          core::ptr::drop_in_place<uu_cp::Options>(&v34);
          if ( v12 == 13 && (_DWORD)v15 != 13 )
            core::ptr::drop_in_place<uu_cp::Error>(&v15);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
          return 0LL;
        }
        *(__m256i *)&v42[24] = v16;
        *(_OWORD *)&v42[8] = v15;
        v4 = alloc::boxed::Box<T>::new(v42);
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v34);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
    return v4;
  }
  v2 = *((_QWORD *)&v40[0] + 1);
  uu_cp::uu_app(v42);
  v3 = *(unsigned __int8 *)(v2 + 213);
  if ( v3 == 12 )
  {
    v6 = clap_builder::builder::command::Command::print_help(v42);
    if ( !v6 )
      goto LABEL_12;
    v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v42);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
    if ( v3 == 14 )
    {
      clap_builder::builder::command::Command::render_version(&v34, v42);
      *(_QWORD *)&v32[0] = &v34;
      *((_QWORD *)&v32[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = &unk_1E7F0;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16.m256i_i64[0] = (__int64)v32;
      *(_OWORD *)&v16.m256i_u64[1] = 1uLL;
      ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v15);
      core::ptr::drop_in_place<alloc::string::String>(&v34);
LABEL_12:
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v42);
      core::ptr::drop_in_place<clap_builder::error::Error>(v2);
      return 0LL;
    }
    v4 = alloc::boxed::Box<T>::new(v2);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v42);
  }
  return v4;
}
