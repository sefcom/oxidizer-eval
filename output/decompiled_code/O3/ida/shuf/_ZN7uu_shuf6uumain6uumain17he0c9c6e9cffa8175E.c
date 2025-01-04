__int64 __fastcall uu_shuf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  const char *v4; // rsi
  void (__fastcall __noreturn *v5)(); // rax
  const char *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  const char *v13; // rsi
  void (__fastcall __noreturn *v14)(); // rax
  const char *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rax
  char v22; // r13
  __int64 v23; // r15
  const char *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  char flag; // bp
  bool v28; // zf
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  char v32; // al
  char v33; // al
  _OWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v38[24]; // [rsp+0h] [rbp-4D8h] BYREF
  _BYTE v39[48]; // [rsp+20h] [rbp-4B8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-488h]
  __int128 v41; // [rsp+60h] [rbp-478h] BYREF
  __int64 v42; // [rsp+70h] [rbp-468h]
  __int64 v43; // [rsp+80h] [rbp-458h]
  __int128 v44; // [rsp+88h] [rbp-450h] BYREF
  __int64 v45; // [rsp+98h] [rbp-440h]
  __int128 v46; // [rsp+A0h] [rbp-438h] BYREF
  __m256i v47; // [rsp+B0h] [rbp-428h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-408h]
  const char *v49; // [rsp+E8h] [rbp-3F0h]
  __m256i v50; // [rsp+F0h] [rbp-3E8h] BYREF
  __int128 v51; // [rsp+110h] [rbp-3C8h]
  __int64 v52; // [rsp+120h] [rbp-3B8h]
  __int128 v53; // [rsp+128h] [rbp-3B0h] BYREF
  __int64 v54; // [rsp+138h] [rbp-3A0h]
  _QWORD v55[2]; // [rsp+140h] [rbp-398h] BYREF
  __int128 v56; // [rsp+150h] [rbp-388h]
  __int128 v57; // [rsp+160h] [rbp-378h]
  const char *v58; // [rsp+170h] [rbp-368h]
  __int64 v59; // [rsp+178h] [rbp-360h]
  _QWORD v60[2]; // [rsp+180h] [rbp-358h] BYREF
  __int128 v61; // [rsp+190h] [rbp-348h]
  __int128 v62; // [rsp+1A0h] [rbp-338h]
  const char *v63; // [rsp+1B0h] [rbp-328h]
  __int64 v64; // [rsp+1B8h] [rbp-320h]
  __int128 v65; // [rsp+1C0h] [rbp-318h] BYREF
  __m256i v66; // [rsp+1D0h] [rbp-308h]
  __int128 v67; // [rsp+1F0h] [rbp-2E8h]
  _BYTE v68[72]; // [rsp+490h] [rbp-48h] BYREF

  uu_shuf::uu_app(&v65);
  clap_builder::builder::command::Command::try_get_matches_from(v39, &v65, a1, a2);
  if ( *(_QWORD *)v39 != 0x8000000000000000LL )
  {
    v52 = v40;
    v51 = *(_OWORD *)&v39[32];
    v50 = *(__m256i *)v39;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v50,
                            anon_ae22b1c09f715fcd73a906c29609d168_14_llvm_5115542112142487751,
                            *(&uu_shuf::options::ECHO + 1)) )
    {
      v3 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v65,
        &v50,
        anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751,
        v3);
      v4 = anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751;
      clap_builder::parser::error::MatchesError::unwrap(
        v39,
        anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751,
        v3,
        &v65);
      v5 = *(void (__fastcall __noreturn **)())v39;
      if ( *(_QWORD *)v39 )
      {
        v6 = *(const char **)&v39[8];
        v7 = *(_OWORD *)&v39[16];
        v8 = *(_OWORD *)&v39[32];
        v9 = *((_QWORD *)&v40 + 1);
        v4 = (const char *)v40;
      }
      else
      {
        v8 = 0LL;
        v7 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v6 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v5 = core::ops::function::FnOnce::call_once;
        v9 = 0LL;
      }
      v55[0] = v5;
      v55[1] = v6;
      v56 = v7;
      v57 = v8;
      v58 = v4;
      v59 = v9;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v65, v55);
      v45 = v66.m256i_i64[0];
      v44 = v65;
      v43 = 1LL;
LABEL_11:
      v12 = (__int64)*(&uu_shuf::options::HEAD_COUNT + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v65,
        &v50,
        anon_ae22b1c09f715fcd73a906c29609d168_16_llvm_5115542112142487751,
        v12);
      v13 = anon_ae22b1c09f715fcd73a906c29609d168_16_llvm_5115542112142487751;
      clap_builder::parser::error::MatchesError::unwrap(
        v39,
        anon_ae22b1c09f715fcd73a906c29609d168_16_llvm_5115542112142487751,
        v12,
        &v65);
      v14 = *(void (__fastcall __noreturn **)())v39;
      if ( *(_QWORD *)v39 )
      {
        v15 = *(const char **)&v39[8];
        v16 = *(_OWORD *)&v39[16];
        v17 = *(_OWORD *)&v39[32];
        v18 = *((_QWORD *)&v40 + 1);
        v13 = (const char *)v40;
      }
      else
      {
        v17 = 0LL;
        v16 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v14 = core::ops::function::FnOnce::call_once;
        v18 = 0LL;
      }
      v60[0] = v14;
      v60[1] = v15;
      v61 = v16;
      v62 = v17;
      v63 = v13;
      v64 = v18;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v68, v60);
      uu_shuf::parse_head_count(&v41, v68);
      if ( (_QWORD)v41 != 0x8000000000000000LL )
      {
        v66.m256i_i64[0] = v42;
        v65 = v41;
        v66.m256i_i32[2] = 1;
        v2 = alloc::boxed::Box<T>::new(&v65);
        v22 = 1;
        goto LABEL_62;
      }
      v19 = *((_QWORD *)&v41 + 1);
      v20 = (__int64)*(&uu_shuf::options::OUTPUT + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v65,
        &v50,
        anon_ae22b1c09f715fcd73a906c29609d168_17_llvm_5115542112142487751,
        v20);
      v21 = clap_builder::parser::error::MatchesError::unwrap(
              anon_ae22b1c09f715fcd73a906c29609d168_17_llvm_5115542112142487751,
              v20,
              &v65);
      if ( v21 )
      {
        core::ops::function::FnOnce::call_once(&v65, v21);
        *(_QWORD *)&v38[16] = v66.m256i_i64[0];
        *(_OWORD *)v38 = v65;
      }
      else
      {
        *(_QWORD *)v38 = 0x8000000000000000LL;
      }
      v24 = anon_ae22b1c09f715fcd73a906c29609d168_18_llvm_5115542112142487751;
      v25 = (__int64)*(&uu_shuf::options::RANDOM_SOURCE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v65,
        &v50,
        anon_ae22b1c09f715fcd73a906c29609d168_18_llvm_5115542112142487751,
        v25);
      v26 = clap_builder::parser::error::MatchesError::unwrap(
              anon_ae22b1c09f715fcd73a906c29609d168_18_llvm_5115542112142487751,
              v25,
              &v65);
      if ( v26 )
      {
        core::ops::function::FnOnce::call_once(&v65, v26);
        *(_QWORD *)&v39[16] = v66.m256i_i64[0];
        *(_OWORD *)v39 = v65;
      }
      else
      {
        *(_QWORD *)v39 = 0x8000000000000000LL;
      }
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               &v50,
               anon_ae22b1c09f715fcd73a906c29609d168_19_llvm_5115542112142487751,
               *(&uu_shuf::options::REPEAT + 1));
      v28 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               &v50,
                               anon_ae22b1c09f715fcd73a906c29609d168_20_llvm_5115542112142487751,
                               *(&uu_shuf::options::ZERO_TERMINATED + 1)) == 0;
      v31 = 10;
      if ( !v28 )
        v31 = 0;
      *(_QWORD *)&v48 = v19;
      v46 = *(_OWORD *)v38;
      v47.m256i_i64[0] = *(_QWORD *)&v38[16];
      *(_OWORD *)&v47.m256i_u64[1] = *(_OWORD *)v39;
      v47.m256i_i64[3] = *(_QWORD *)&v39[16];
      BYTE8(v48) = flag;
      BYTE9(v48) = v31;
      if ( v19 )
      {
        if ( v43 )
        {
          if ( (_DWORD)v43 == 1 )
          {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
              v39,
              *((_QWORD *)&v44 + 1),
              *((_QWORD *)&v44 + 1) + 24 * v45,
              *(_QWORD *)&v39[16],
              v29,
              v30,
              v44,
              *((_QWORD *)&v44 + 1),
              v45);
            uu_shuf::find_seps(v39, BYTE9(v48));
            v67 = v48;
            v66 = v47;
            v65 = v46;
            v2 = uu_shuf::shuf_exec(v39, &v65);
            if ( v2 )
            {
              core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v39);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v38);
              v32 = 1;
              v22 = 1;
              goto LABEL_63;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v39);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v38);
LABEL_72:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v50);
            return 0LL;
          }
          *(_QWORD *)&v39[16] = v45;
          *(_OWORD *)v39 = v44;
          v67 = v48;
          v66 = v47;
          v65 = v46;
          v2 = uu_shuf::shuf_exec(v39, &v65);
          if ( !v2 )
            goto LABEL_72;
          v22 = 1;
LABEL_62:
          v32 = 0;
LABEL_63:
          if ( v43 )
          {
            if ( (_DWORD)v43 == 1 && !v32 )
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v44);
          }
          else if ( v22 )
          {
            core::ptr::drop_in_place<alloc::string::String>(&v44);
          }
          goto LABEL_69;
        }
        v42 = v45;
        v41 = v44;
        uu_shuf::read_input_file(&v65, *((_QWORD *)&v44 + 1));
        v2 = *((_QWORD *)&v65 + 1);
        LOBYTE(v24) = (_QWORD)v65 != 0x8000000000000000LL;
        if ( (_QWORD)v65 == 0x8000000000000000LL )
        {
          v49 = v24;
        }
        else
        {
          *(_OWORD *)v38 = v65;
          *(_QWORD *)&v38[16] = v66.m256i_i64[0];
          v34 = (_OWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL);
          if ( !v34 )
            alloc::alloc::handle_alloc_error(8LL, 16LL);
          *v34 = *(_OWORD *)&v38[8];
          alloc::slice::hack::into_vec(v39, v34, 1LL);
          uu_shuf::find_seps(v39, BYTE9(v48));
          v67 = v48;
          v66 = v47;
          v65 = v46;
          v2 = uu_shuf::shuf_exec(v39, &v65);
          if ( !v2 )
          {
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v39);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v38);
            core::ptr::drop_in_place<alloc::string::String>(&v41);
            goto LABEL_72;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v39);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v38);
          v49 = v24;
        }
        core::ptr::drop_in_place<alloc::string::String>(&v41);
        v22 = 0;
        v33 = (char)v49;
      }
      else
      {
        if ( (_QWORD)v46 != 0x8000000000000000LL )
        {
          v66.m256i_i64[0] = v47.m256i_i64[0];
          v65 = v46;
          std::fs::File::create(v39, *((_QWORD *)&v46 + 1));
          <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v38,
            v39,
            &v65);
          v2 = *(_QWORD *)v38;
          if ( *(_QWORD *)v38 )
          {
            core::ptr::drop_in_place<alloc::string::String>(&v65);
            v22 = 1;
          }
          else
          {
            LODWORD(v41) = *(_DWORD *)&v38[8];
            core::ptr::drop_in_place<std::fs::File>(&v41);
            core::ptr::drop_in_place<alloc::string::String>(&v65);
            v22 = 1;
            v2 = 0LL;
          }
LABEL_61:
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v47.m256i_u64[1]);
          goto LABEL_62;
        }
        v22 = 1;
        v2 = 0LL;
        v33 = 0;
      }
      if ( v33 || (_QWORD)v46 == 0x8000000000000000LL )
      {
        if ( v33 )
          goto LABEL_62;
      }
      else
      {
        core::ptr::drop_in_place<alloc::string::String>(&v46);
      }
      goto LABEL_61;
    }
    v10 = (__int64)*(&uu_shuf::options::INPUT_RANGE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v65,
      &v50,
      anon_ae22b1c09f715fcd73a906c29609d168_15_llvm_5115542112142487751,
      v10);
    v11 = clap_builder::parser::error::MatchesError::unwrap(
            anon_ae22b1c09f715fcd73a906c29609d168_15_llvm_5115542112142487751,
            v10,
            &v65);
    if ( v11 )
    {
      uu_shuf::parse_range(v39, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      if ( !*(_QWORD *)v39 )
      {
        v45 = *(_QWORD *)&v39[24];
        v44 = *(_OWORD *)&v39[8];
        v43 = 2LL;
        goto LABEL_11;
      }
      v66.m256i_i64[0] = *(_QWORD *)&v39[24];
      v65 = *(_OWORD *)&v39[8];
      v66.m256i_i32[2] = 1;
      v2 = alloc::boxed::Box<T>::new(&v65);
    }
    else
    {
      v23 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v65,
        &v50,
        anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751,
        v23);
      clap_builder::parser::error::MatchesError::unwrap(
        v39,
        anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751,
        v23,
        &v65);
      if ( *(_QWORD *)v39 )
      {
        v48 = v40;
        v47 = *(__m256i *)&v39[16];
        v46 = *(_OWORD *)v39;
      }
      else
      {
        *(_QWORD *)&v46 = core::ops::function::FnOnce::call_once;
        *((_QWORD *)&v46 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v47.m256i_i64[0] = (__int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v47.m256i_i64[1] = 0LL;
        v47.m256i_i64[3] = 0LL;
        *((_QWORD *)&v48 + 1) = 0LL;
      }
      v35 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v46);
      if ( v35 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v65, v35);
        *(_QWORD *)&v38[16] = v66.m256i_i64[0];
        *(_OWORD *)v38 = v65;
      }
      else
      {
        *(_QWORD *)v38 = 0x8000000000000000LL;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v65, asc_164C7, 1LL);
      *(_QWORD *)&v39[16] = v66.m256i_i64[0];
      *(_OWORD *)v39 = v65;
      if ( *(_QWORD *)v38 == 0x8000000000000000LL )
      {
        v42 = *(_QWORD *)&v39[16];
        v41 = *(_OWORD *)v39;
      }
      else
      {
        v42 = *(_QWORD *)&v38[16];
        v41 = *(_OWORD *)v38;
        core::ptr::drop_in_place<alloc::string::String>(v39);
      }
      v36 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v46);
      if ( !v36 )
      {
        v45 = v42;
        v44 = v41;
        v43 = 0LL;
        goto LABEL_11;
      }
      *(_QWORD *)v38 = v36;
      *(_QWORD *)v39 = v38;
      *(_QWORD *)&v39[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &off_134DA0;
      *((_QWORD *)&v65 + 1) = 2LL;
      v66.m256i_i64[0] = (__int64)v39;
      *(_OWORD *)&v66.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v53, &v65);
      v66.m256i_i32[2] = 1;
      v65 = v53;
      v66.m256i_i64[0] = v54;
      v2 = alloc::boxed::Box<T>::new(&v65);
      core::ptr::drop_in_place<alloc::string::String>(&v41);
    }
LABEL_69:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v50);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v39[8]);
}
