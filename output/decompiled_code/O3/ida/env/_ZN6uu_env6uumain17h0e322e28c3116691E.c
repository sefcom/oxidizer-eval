__int64 __fastcall uu_env::uumain(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  __int64 v3; // r14
  size_t v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  const void *v11; // r12
  size_t v12; // r15
  __int64 v13; // r14
  size_t v14; // r13
  size_t v15; // rdx
  size_t v16; // rcx
  bool v17; // al
  char v18; // r14
  bool v19; // cl
  size_t v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(); // rdx
  __int64 (__fastcall *v24)(); // rdx
  size_t v25; // rdx
  __int128 v26; // rax
  __int128 v27; // rax
  __int128 v28; // kr10_16
  __int64 v29; // rsi
  const void *v31; // r12
  size_t v32; // r15
  size_t v33; // r13
  __int16 v34; // [rsp+Dh] [rbp-4ABh] BYREF
  char v35; // [rsp+Fh] [rbp-4A9h]
  __int128 v36; // [rsp+10h] [rbp-4A8h] BYREF
  size_t n; // [rsp+20h] [rbp-498h]
  __int128 v38; // [rsp+28h] [rbp-490h]
  __int128 v39; // [rsp+38h] [rbp-480h]
  __int128 v40; // [rsp+48h] [rbp-470h] BYREF
  __int64 v41; // [rsp+58h] [rbp-460h]
  __int128 v42; // [rsp+60h] [rbp-458h] BYREF
  __int64 v43; // [rsp+70h] [rbp-448h]
  __int128 v44; // [rsp+80h] [rbp-438h] BYREF
  __int128 v45; // [rsp+90h] [rbp-428h]
  char **v46; // [rsp+A0h] [rbp-418h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+A8h] [rbp-410h]
  __int64 v48; // [rsp+B0h] [rbp-408h] BYREF
  char ***v49; // [rsp+B8h] [rbp-400h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+C0h] [rbp-3F8h]
  __int128 v51; // [rsp+C8h] [rbp-3F0h] BYREF
  size_t v52; // [rsp+D8h] [rbp-3E0h]
  __int128 v53; // [rsp+E0h] [rbp-3D8h] BYREF
  size_t v54; // [rsp+F0h] [rbp-3C8h]
  _BYTE dest[136]; // [rsp+F8h] [rbp-3C0h] BYREF
  _QWORD v56[2]; // [rsp+180h] [rbp-338h] BYREF
  __int128 v57; // [rsp+190h] [rbp-328h]
  size_t v58; // [rsp+1A0h] [rbp-318h]
  __int128 v59; // [rsp+1A8h] [rbp-310h] BYREF
  size_t v60; // [rsp+1B8h] [rbp-300h]
  __int128 v61; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int128 *v62; // [rsp+1D0h] [rbp-2E8h]
  _QWORD v63[17]; // [rsp+1D8h] [rbp-2E0h] BYREF
  _QWORD v64[50]; // [rsp+2E8h] [rbp-1D0h] BYREF
  char v65; // [rsp+47Dh] [rbp-3Bh]
  char v66; // [rsp+47Fh] [rbp-39h]

  v34 = 0;
  v35 = 2;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v51, a1, a2);
  uu_env::EnvAppData::process_all_string_arguments(&v53, &v34, &v51);
  v3 = *((_QWORD *)&v53 + 1);
  v2 = v53;
  v4 = v54;
  if ( (_QWORD)v53 == 0x8000000000000000LL )
  {
LABEL_37:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v51);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v51);
    goto LABEL_38;
  }
  v57 = v53;
  v58 = v54;
  uu_env::uu_app(&v61);
  *(_QWORD *)&v36 = v3;
  n = v2;
  *((_QWORD *)&v36 + 1) = v3;
  *(_QWORD *)&v38 = v3 + 24 * v4;
  clap_lex::RawArgs::new(&v40, &v36);
  *(_QWORD *)&v42 = 0LL;
  if ( (v65 & 8) == 0
    || (v5 = clap_lex::RawArgs::next_os(&v40, &v42)) == 0
    || (v7 = std::path::Path::file_stem(v5, v6)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v36, v7), (_QWORD)v36) )
  {
    if ( (v66 & 2) != 0 )
      goto LABEL_13;
    v8 = clap_lex::RawArgs::next_os(&v40, &v42);
    if ( !v8 )
      goto LABEL_13;
    v10 = std::path::Path::file_name(v8, v9);
    if ( !v10 )
      goto LABEL_13;
    std::sys::os_str::bytes::Slice::to_str(&v36, v10);
    if ( (_QWORD)v36 || v64[0] != 0x8000000000000000LL )
      goto LABEL_13;
    v11 = (const void *)*((_QWORD *)&v36 + 1);
    v12 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, n, 0LL);
    v13 = *((_QWORD *)&v36 + 1);
    if ( !(_QWORD)v36 )
    {
      v14 = n;
      memcpy((void *)n, v11, v12);
      v64[0] = v13;
      v64[1] = v14;
      v64[2] = v12;
LABEL_13:
      clap_builder::builder::command::Command::_do_parse(&v53, &v61, &v40, v42);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
      goto LABEL_14;
    }
LABEL_52:
    alloc::raw_vec::handle_error(v13, n);
  }
  v31 = (const void *)*((_QWORD *)&v36 + 1);
  v32 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, n, 0LL);
  v13 = *((_QWORD *)&v36 + 1);
  if ( (_QWORD)v36 )
    goto LABEL_52;
  v33 = n;
  memcpy((void *)n, v31, v32);
  *(_QWORD *)&v36 = v13;
  *((_QWORD *)&v36 + 1) = v33;
  n = v32;
  clap_lex::RawArgs::insert(&v40, &v42, &v36);
  v64[33] = 1LL;
  v64[34] = 0LL;
  if ( v64[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v64);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v64);
  }
  v64[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v53, &v61, &v40, v42);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v36);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
LABEL_14:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v61);
  if ( (_QWORD)v53 == 0x8000000000000000LL )
  {
    v48 = *((_QWORD *)&v53 + 1);
    if ( (*(unsigned __int8 *)(*((_QWORD *)&v53 + 1) + 213LL) | 2) == 0xE )
    {
      v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v53 + 1));
      v4 = v15;
    }
    else
    {
      *(_QWORD *)&v42 = &v48;
      *((_QWORD *)&v42 + 1) = <clap_builder::error::Error<F> as core::fmt::Display>::fmt;
      *(_QWORD *)&v36 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      *((_QWORD *)&v36 + 1) = 1LL;
      n = (size_t)&v42;
      v38 = 1uLL;
      alloc::fmt::format::format_inner(&v40, &v36);
      v42 = v40;
      v43 = v41;
      if ( v41 )
      {
        v56[0] = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v42 + 1));
        v56[1] = v22;
        v46 = (char **)uucore::util_name();
        v47 = v23;
        v49 = &v46;
        v50 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v36 = &unk_1096D0;
        *((_QWORD *)&v36 + 1) = 2LL;
        n = (size_t)&v49;
        v38 = 1uLL;
        std::io::stdio::_eprint(&v36);
        v46 = (char **)v56;
        v47 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v36 = &unk_1096F0;
        *((_QWORD *)&v36 + 1) = 2LL;
        n = (size_t)&v46;
        v38 = 1uLL;
        std::io::stdio::_eprint(&v36);
      }
      v46 = (char **)uucore::util_name();
      v47 = v24;
      v49 = &v46;
      v50 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v36 = &unk_1096D0;
      *((_QWORD *)&v36 + 1) = 2LL;
      n = (size_t)&v49;
      v38 = 1uLL;
      std::io::stdio::_eprint(&v36);
      v46 = &off_109710;
      v47 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v36 = &unk_1096F0;
      *((_QWORD *)&v36 + 1) = 2LL;
      n = (size_t)&v46;
      v38 = 1uLL;
      std::io::stdio::_eprint(&v36);
      v3 = uucore::mods::error::ExitCode::new(125LL);
      v4 = v25;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42);
      core::ptr::drop_in_place<clap_builder::error::Error>(v48);
    }
    goto LABEL_37;
  }
  v16 = v54;
  v44 = *(_OWORD *)dest;
  v45 = *(_OWORD *)&dest[16];
  v3 = *((_QWORD *)&v51 + 1);
  v4 = v52;
  if ( (_QWORD)v51 != 0x8000000000000000LL )
  {
    v39 = v45;
    v38 = v44;
    v44 = v51;
    *(_QWORD *)&v45 = v52;
    v36 = v53;
    n = v54;
    v17 = 1;
    if ( !(_BYTE)v34 )
      v17 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v36, aDebug, 5LL, v54) != 0;
    LOBYTE(v34) = v17;
    v18 = v35;
    v19 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v36, aDebug, 5LL, v16) >= 2u;
    if ( v18 != 2 )
      v19 = v18;
    v35 = v19;
    if ( v19 )
    {
      uu_env::debug_print_args(*((_QWORD *)&v44 + 1), v45);
      v35 = 0;
    }
    uu_env::make_options(&v61, &v36);
    v3 = *((_QWORD *)&v61 + 1);
    v4 = (size_t)v62;
    if ( (_QWORD)v61 != 0x8000000000000000LL )
    {
      memcpy(dest, v63, sizeof(dest));
      v53 = v61;
      v54 = (size_t)v62;
      v3 = uu_env::apply_change_directory(&v53);
      if ( !v3 )
      {
        uu_env::apply_removal_of_all_env_vars(&v53);
        v3 = uu_env::load_config_file(&v53);
        if ( !v3 )
        {
          v3 = uu_env::apply_unset_env_vars(&v53);
          if ( !v3 )
          {
            uu_env::apply_specified_env_vars(&v53);
            v3 = uu_env::apply_ignore_signal(&v53);
            if ( !v3 )
            {
              if ( !*(_QWORD *)&dest[64] )
              {
                uu_env::print_env(dest[129]);
                core::ptr::drop_in_place<uu_env::Options>(&v53);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
                core::ptr::drop_in_place<clap_lex::RawArgs>(&v44);
                return (unsigned int)uucore::mods::error::get_exit_code();
              }
              v3 = uu_env::EnvAppData::run_program(&v34, &v53, (unsigned __int8)v34);
            }
          }
        }
      }
      v4 = v20;
      core::ptr::drop_in_place<uu_env::Options>(&v53);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
    if ( !v3 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
LABEL_38:
  *(_QWORD *)&v40 = v3;
  *((_QWORD *)&v40 + 1) = v4;
  *(_QWORD *)&v53 = &v40;
  *((_QWORD *)&v53 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v61 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v61 + 1) = 1LL;
  v63[1] = 0LL;
  v62 = &v53;
  v63[0] = 1LL;
  alloc::fmt::format::format_inner(&v59, &v61);
  v53 = v59;
  v54 = v60;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v59 + 1), v60, 1LL, 0LL) )
  {
    *(_QWORD *)&v26 = uucore::util_name();
    v36 = v26;
    *(_QWORD *)&v44 = &v36;
    *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &unk_1096D0;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63[1] = 0LL;
    v62 = &v44;
    v63[0] = 1LL;
    std::io::stdio::_eprint(&v61);
    *(_QWORD *)&v36 = &v53;
    *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &unk_1096F0;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63[1] = 0LL;
    v62 = &v36;
    v63[0] = 1LL;
    std::io::stdio::_eprint(&v61);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 104LL))(v40) )
  {
    *(_QWORD *)&v27 = uucore::execution_phrase();
    v36 = v27;
    *(_QWORD *)&v44 = &v36;
    *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &off_109720;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63[1] = 0LL;
    v62 = &v44;
    v63[0] = 1LL;
    std::io::stdio::_eprint(&v61);
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 96LL))(v40);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v53);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v53);
  v28 = v40;
  if ( **((_QWORD **)&v40 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v40 + 1))(v40);
  v29 = *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8LL);
  if ( v29 )
    _rust_dealloc(v28, v29, *(_QWORD *)(*((_QWORD *)&v28 + 1) + 16LL));
  return v21;
}
