__int64 __fastcall uu_cp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // rax
  __int128 v6; // rax
  _BYTE **v7; // rcx
  __int64 v8; // rdi
  __int64 (__fastcall *v10)(); // rdx
  __int128 v11; // [rsp+0h] [rbp-538h] BYREF
  __m256i v12; // [rsp+10h] [rbp-528h]
  __int64 v13; // [rsp+30h] [rbp-508h]
  void *v14; // [rsp+40h] [rbp-4F8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-4F0h]
  _BYTE **v16; // [rsp+50h] [rbp-4E8h]
  __int64 v17; // [rsp+58h] [rbp-4E0h]
  __int64 v18; // [rsp+60h] [rbp-4D8h]
  _BYTE *v19; // [rsp+70h] [rbp-4C8h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+78h] [rbp-4C0h]
  _OWORD v21[3]; // [rsp+80h] [rbp-4B8h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-488h]
  __int128 v23; // [rsp+C0h] [rbp-478h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-468h]
  __int128 v25; // [rsp+E0h] [rbp-458h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-448h]
  void *v27; // [rsp+F8h] [rbp-440h] BYREF
  __int128 v28; // [rsp+100h] [rbp-438h]
  __int128 v29; // [rsp+110h] [rbp-428h]
  __int128 v30; // [rsp+120h] [rbp-418h]
  __int64 v31; // [rsp+130h] [rbp-408h]
  __int128 v32; // [rsp+138h] [rbp-400h]
  __int128 v33; // [rsp+148h] [rbp-3F0h]
  __int64 v34; // [rsp+158h] [rbp-3E0h]
  _QWORD v35[2]; // [rsp+160h] [rbp-3D8h] BYREF
  __int128 v36; // [rsp+170h] [rbp-3C8h] BYREF
  __int128 v37; // [rsp+180h] [rbp-3B8h]
  __int128 v38; // [rsp+190h] [rbp-3A8h]
  __int64 v39; // [rsp+1A0h] [rbp-398h]
  _OWORD v40[3]; // [rsp+1A8h] [rbp-390h] BYREF
  __int64 v41; // [rsp+1D8h] [rbp-360h]
  _BYTE dest[56]; // [rsp+1E0h] [rbp-358h] BYREF
  __int64 v43; // [rsp+218h] [rbp-320h]
  __int128 v44; // [rsp+220h] [rbp-318h]
  __int128 v45; // [rsp+230h] [rbp-308h]
  __int64 v46; // [rsp+240h] [rbp-2F8h]
  _QWORD v47[18]; // [rsp+4A8h] [rbp-90h] BYREF

  uu_cp::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v40, dest, a1, a2);
  if ( !__OFSUB__(0LL, *(_QWORD *)&v40[0]) )
  {
    v22 = v41;
    v21[2] = v40[2];
    v21[1] = v40[1];
    v21[0] = v40[0];
    uu_cp::Options::from_matches(dest, v21);
    v36 = *(_OWORD *)&dest[8];
    v37 = *(_OWORD *)&dest[24];
    v38 = *(_OWORD *)&dest[40];
    v39 = v43;
    if ( *(_QWORD *)dest == 0x8000000000000000LL )
    {
      v4 = alloc::boxed::Box<T>::new(&v36);
    }
    else
    {
      v34 = v46;
      v33 = v45;
      v32 = v44;
      v28 = v36;
      v29 = v37;
      v30 = v38;
      v31 = v39;
      v27 = *(void **)dest;
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(DWORD1(v45)) && BYTE5(v34) )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, aOptionsBackupA, 56LL);
        *(_QWORD *)&dest[16] = v12.m256i_i64[0];
        *(_OWORD *)dest = v11;
        *(_DWORD *)&dest[24] = 1;
        v4 = alloc::boxed::Box<T>::new(dest);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(dest, v21);
        clap_builder::parser::error::MatchesError::unwrap(v47, dest);
        if ( v47[0] )
        {
          core::iter::traits::iterator::Iterator::collect(dest, v47);
          v6 = *(_OWORD *)dest;
          v7 = *(_BYTE ***)&dest[16];
        }
        else
        {
          *(_QWORD *)&v6 = 0x8000000000000000LL;
        }
        if ( (_QWORD)v6 == 0x8000000000000000LL )
          v7 = 0LL;
        v8 = 8LL;
        if ( (_QWORD)v6 == 0x8000000000000000LL )
          *(_QWORD *)&v6 = 0LL;
        else
          v8 = *((_QWORD *)&v6 + 1);
        v14 = (void *)v6;
        v15 = v8;
        v16 = v7;
        uu_cp::parse_path_args(dest, &v14, &v27);
        v11 = *(_OWORD *)&dest[8];
        v12 = *(__m256i *)&dest[24];
        if ( *(_QWORD *)dest == 0x800000000000000CLL )
        {
          v24 = v12.m256i_i64[0];
          v23 = v11;
          v26 = v12.m256i_i64[3];
          v25 = *(_OWORD *)&v12.m256i_u64[1];
          uu_cp::copy(&v11, *((_QWORD *)&v11 + 1), v12.m256i_i64[0], v12.m256i_i64[2], v12.m256i_i64[3], &v27);
          if ( (_QWORD)v11 == 0x800000000000000CLL )
          {
            core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&v11);
          }
          else
          {
            *(_OWORD *)dest = v11;
            *(_QWORD *)&dest[48] = v13;
            *(__m256i *)&dest[16] = v12;
            if ( (_QWORD)v11 != 0x8000000000000004LL )
            {
              v19 = (_BYTE *)uucore::util_name();
              v20 = v10;
              v35[0] = &v19;
              v35[1] = <&T as core::fmt::Display>::fmt;
              v14 = &unk_15CCB8;
              v15 = 2LL;
              v18 = 0LL;
              v16 = (_BYTE **)v35;
              v17 = 1LL;
              std::io::stdio::_eprint(&v14);
              v19 = dest;
              v20 = <uu_cp::Error as core::fmt::Display>::fmt;
              v14 = &unk_15CCD8;
              v15 = 2LL;
              v18 = 0LL;
              v16 = &v19;
              v17 = 1LL;
              std::io::stdio::_eprint(&v14);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(dest);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v25);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v23);
          core::ptr::drop_in_place<uu_cp::Options>(&v27);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v21);
          return 0LL;
        }
        *(__m256i *)&dest[24] = v12;
        *(_OWORD *)&dest[8] = v11;
        v4 = alloc::boxed::Box<T>::new(dest);
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v27);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v21);
    return v4;
  }
  v2 = *((_QWORD *)&v40[0] + 1);
  uu_cp::uu_app(dest);
  v3 = *(unsigned __int8 *)(v2 + 221);
  if ( v3 != 12 )
  {
    if ( v3 != 14 )
    {
      v4 = alloc::boxed::Box<T>::new(v2);
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
      return v4;
    }
    clap_builder::builder::command::Command::render_version(&v11, dest);
    *(_QWORD *)&v21[0] = &v11;
    *((_QWORD *)&v21[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v27 = &unk_20910;
    *(_QWORD *)&v28 = 1LL;
    *((_QWORD *)&v28 + 1) = v21;
    v29 = 1uLL;
    std::io::stdio::_print(&v27);
    core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
    goto LABEL_12;
  }
  v5 = clap_builder::builder::command::Command::print_help(dest);
  if ( !v5 )
  {
LABEL_12:
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
    return 0LL;
  }
  v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  return v4;
}