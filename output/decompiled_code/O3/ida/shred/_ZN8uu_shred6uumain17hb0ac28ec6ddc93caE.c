__int64 __fastcall uu_shred::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  __int64 (__fastcall **v4)(); // rdx
  char **v5; // rbx
  __int64 (__fastcall **v6)(); // r15
  __int64 v7; // r13
  __int64 v8; // rbp
  char ***v9; // r12
  char **v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rax
  char **v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // rax
  __int128 v17; // rax
  unsigned int v18; // ebx
  char **v19; // r14
  __int64 (__fastcall *v20)(); // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  char flag; // r14
  bool v26; // bl
  unsigned __int8 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  __int128 v30; // rax
  __int128 v31; // kr00_16
  char v32; // al
  __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int8 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 (__fastcall *v47)(); // rdx
  char *v48; // r13
  void (__fastcall **v49)(char *); // rbx
  void (__fastcall *v50)(char *); // rsi
  char **v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int8 v55; // [rsp+Ch] [rbp-43Ch]
  char **v56; // [rsp+10h] [rbp-438h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+18h] [rbp-430h]
  __m256i *v58; // [rsp+20h] [rbp-428h]
  __int64 (__fastcall *v59)(); // [rsp+28h] [rbp-420h]
  char *v60; // [rsp+30h] [rbp-418h] BYREF
  void (__fastcall **v61)(char *); // [rsp+38h] [rbp-410h]
  char v62; // [rsp+40h] [rbp-408h] BYREF
  __m256i v63; // [rsp+48h] [rbp-400h] BYREF
  __int64 v64; // [rsp+68h] [rbp-3E0h]
  __m256i v65; // [rsp+70h] [rbp-3D8h] BYREF
  __int128 v66; // [rsp+90h] [rbp-3B8h]
  __int64 v67; // [rsp+A0h] [rbp-3A8h]
  __int64 v68; // [rsp+A8h] [rbp-3A0h]
  __int64 v69; // [rsp+B0h] [rbp-398h]
  __m256i v70; // [rsp+B8h] [rbp-390h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-370h]
  __int64 v72; // [rsp+E8h] [rbp-360h]
  __int64 size; // [rsp+F0h] [rbp-358h]
  __int64 v74; // [rsp+F8h] [rbp-350h]
  __int64 v75; // [rsp+100h] [rbp-348h]
  __int64 (__fastcall *v76)(); // [rsp+108h] [rbp-340h]
  __int128 v77; // [rsp+110h] [rbp-338h]
  __int128 v78; // [rsp+120h] [rbp-328h] BYREF
  __int64 v79; // [rsp+130h] [rbp-318h]
  __int128 v80; // [rsp+138h] [rbp-310h] BYREF
  __int64 v81; // [rsp+148h] [rbp-300h]
  __m256i v82; // [rsp+150h] [rbp-2F8h] BYREF
  unsigned __int64 v83; // [rsp+170h] [rbp-2D8h]
  __int64 v84; // [rsp+178h] [rbp-2D0h]
  __int64 v85; // [rsp+180h] [rbp-2C8h]
  __int64 v86; // [rsp+188h] [rbp-2C0h]

  uu_shred::uu_app(&v82);
  clap_builder::builder::command::Command::try_get_matches_from(&v65, &v82, a1, a2);
  v2 = 0x8000000000000000LL;
  if ( v65.m256i_i64[0] == 0x8000000000000000LL )
  {
    v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v65.m256i_i64[1]);
    if ( !v3 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    v5 = (char **)v3;
    v6 = v4;
    goto LABEL_14;
  }
  v72 = v67;
  v71 = v66;
  v70 = v65;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v70, aFile, 4LL) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v82, 20LL, 0LL);
    v12 = v82.m256i_i64[1];
    if ( v82.m256i_i64[0] )
      alloc::raw_vec::handle_error(v82.m256i_i64[1], v82.m256i_i64[2]);
    v13 = v82.m256i_i64[2];
    *(_OWORD *)v82.m256i_i64[2] = xmmword_11A17;
    *(_DWORD *)(v13 + 16) = 1684955506;
    v82.m256i_i32[6] = 1;
    v82.m256i_i64[0] = v12;
    v82.m256i_i64[1] = v13;
    v82.m256i_i64[2] = 20LL;
    v14 = (char **)_rust_alloc(32LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v5 = v14;
    v15 = *(_OWORD *)v82.m256i_i8;
    *((_OWORD *)v14 + 1) = *(_OWORD *)&v82.m256i_u64[2];
    *(_OWORD *)v14 = v15;
    v6 = &off_ECEB0;
    goto LABEL_13;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, &v70, &aRanditerations[4], 10LL);
  v60 = &aRanditerations[4];
  v61 = (void (__fastcall **)(char *))(byte_9 + 1);
  if ( v63.m256i_i32[0] != 2 )
  {
    *(_QWORD *)&v66 = v64;
    v65 = v63;
    v56 = &v60;
    v57 = <&T as core::fmt::Display>::fmt;
    v58 = &v65;
    v59 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v82.m256i_i64[0] = (__int64)&off_ECD88;
    v52 = &off_ECDA8;
    v9 = &v56;
    v53 = 2LL;
LABEL_69:
    v54 = 2LL;
LABEL_70:
    v82.m256i_i64[1] = v53;
    v83 = 0LL;
    v82.m256i_i64[2] = (__int64)v9;
    v82.m256i_i64[3] = v54;
    core::panicking::panic_fmt(&v82, v52);
  }
  if ( !v63.m256i_i64[1] )
    core::panicking::panic(aInternalErrorE, 40LL, &off_ECF20);
  v7 = *(_QWORD *)(v63.m256i_i64[1] + 8);
  v8 = *(_QWORD *)(v63.m256i_i64[1] + 16);
  v9 = &v56;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v56, v7, v8);
  if ( (_BYTE)v56 )
  {
    v65.m256i_i64[0] = 0LL;
    v65.m256i_i64[1] = v7;
    v65.m256i_i64[2] = v8;
    v65.m256i_i8[24] = 1;
    v63.m256i_i64[0] = (__int64)&v65;
    v63.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    v82.m256i_i64[0] = (__int64)&off_ECFA8;
    v82.m256i_i64[1] = 1LL;
    v83 = 0LL;
    v82.m256i_i64[2] = (__int64)&v63;
    v82.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(&v80, &v82);
    v82.m256i_i32[6] = 1;
    *(_OWORD *)v82.m256i_i8 = v80;
    v82.m256i_i64[2] = v81;
    v10 = (char **)_rust_alloc(32LL, 8LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v5 = v10;
    v11 = *(_OWORD *)v82.m256i_i8;
    *((_OWORD *)v10 + 1) = *(_OWORD *)&v82.m256i_u64[2];
    *(_OWORD *)v10 = v11;
    v6 = &off_ECFF0;
LABEL_13:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v70);
LABEL_14:
    v56 = v5;
    v57 = (__int64 (__fastcall *)())v6;
    v65.m256i_i64[0] = (__int64)&v56;
    v65.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v82.m256i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v82.m256i_i64[1] = 1LL;
    v83 = 0LL;
    v82.m256i_i64[2] = (__int64)&v65;
    v82.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(&v78, &v82);
    *(_OWORD *)v65.m256i_i8 = v78;
    v65.m256i_i64[2] = v79;
    if ( v79 )
    {
      *(_QWORD *)&v16 = uucore::util_name();
      *(_OWORD *)v70.m256i_i8 = v16;
      v63.m256i_i64[0] = (__int64)&v70;
      v63.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v82.m256i_i64[0] = (__int64)&unk_ECE30;
      v82.m256i_i64[1] = 2LL;
      v83 = 0LL;
      v82.m256i_i64[2] = (__int64)&v63;
      v82.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v82);
      v70.m256i_i64[0] = (__int64)&v65;
      v70.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v82.m256i_i64[0] = (__int64)&unk_ECE50;
      v82.m256i_i64[1] = 2LL;
      v83 = 0LL;
      v82.m256i_i64[2] = (__int64)&v70;
      v82.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v82);
    }
    if ( (*((unsigned __int8 (__fastcall **)(char **))v57 + 13))(v56) )
    {
      *(_QWORD *)&v17 = uucore::execution_phrase();
      *(_OWORD *)v70.m256i_i8 = v17;
      v63.m256i_i64[0] = (__int64)&v70;
      v63.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v82.m256i_i64[0] = (__int64)&off_ECE70;
      v82.m256i_i64[1] = 2LL;
      v83 = 0LL;
      v82.m256i_i64[2] = (__int64)&v63;
      v82.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v82);
    }
    v18 = (*((__int64 (__fastcall **)(char **))v57 + 12))(v56);
    <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v65);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v65);
    v19 = v56;
    v20 = v57;
    if ( *(_QWORD *)v57 )
      (*(void (__fastcall **)(char **))v57)(v56);
    v21 = *((_QWORD *)v20 + 1);
    if ( v21 )
      _rust_dealloc(v19, v21, *((_QWORD *)v20 + 2));
    return v18;
  }
  v76 = v57;
  v55 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v70, aU, 1LL) )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v70, aRemove, 6LL) )
    {
      v55 = 0;
      goto LABEL_33;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, &v70, aRemove, 6LL);
    v60 = aRemove;
    v61 = (void (__fastcall **)(char *))&byte_6;
    if ( v63.m256i_i32[0] != 2 )
    {
LABEL_66:
      *(_QWORD *)&v66 = v64;
      v65 = v63;
      v56 = &v60;
      v57 = <&T as core::fmt::Display>::fmt;
      v58 = &v65;
      v59 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v82.m256i_i64[0] = (__int64)&off_ECD88;
      v52 = &off_ECDA8;
      v53 = 2LL;
      goto LABEL_69;
    }
    if ( v63.m256i_i64[1] )
    {
      v22 = *(_QWORD *)(v63.m256i_i64[1] + 8);
      v23 = *(_QWORD *)(v63.m256i_i64[1] + 16);
      if ( v23 == 4 )
      {
        v55 = 2;
        if ( *(_DWORD *)v22 == 1701865847 )
          goto LABEL_33;
      }
      else
      {
        if ( v23 != 6 )
        {
          if ( v23 != 8 || *(_QWORD *)v22 != 0x636E797365706977LL )
            goto LABEL_60;
          goto LABEL_33;
        }
        v55 = 1;
        if ( !(*(_DWORD *)v22 ^ 0x696C6E75 | *(unsigned __int16 *)(v22 + 4) ^ 0x6B6E) )
          goto LABEL_33;
      }
    }
LABEL_60:
    v82.m256i_i64[0] = (__int64)&off_ECF38;
    v52 = &off_ECF48;
    v9 = (char ***)&v62;
    v53 = 1LL;
    v54 = 0LL;
    goto LABEL_70;
  }
LABEL_33:
  LOBYTE(v69) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v70, aForce, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, &v70, aSize, 4LL);
  v60 = aSize;
  v61 = (void (__fastcall **)(char *))&byte_4;
  if ( v63.m256i_i32[0] != 2 )
    goto LABEL_66;
  if ( v63.m256i_i64[1] )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v82);
    v2 = v82.m256i_i64[0];
    v77 = *(_OWORD *)&v82.m256i_u64[1];
  }
  v82.m256i_i64[0] = v2;
  *(_OWORD *)&v82.m256i_u64[1] = v77;
  size = uu_shred::get_size(&v82);
  v75 = v24;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v70, aExact, 5LL);
  v26 = size == 1;
  v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v70, aZero, 4LL);
  LOBYTE(v68) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v70, aVerbose, 7LL);
  v28 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v70, aFile, 4LL);
  v29 = v28;
  if ( !v28 )
    core::option::unwrap_failed(&off_ECF60);
  v65.m256i_i64[0] = 0x838CBAD8DA52F225LL;
  v65.m256i_i64[1] = 0xD5B29837CF1E5FA5LL;
  *(_QWORD *)&v30 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
                      v28,
                      0x838CBAD8DA52F225LL,
                      0xD5B29837CF1E5FA5LL);
  *(_OWORD *)v82.m256i_i8 = v30;
  v74 = v29;
  v31 = v30;
  v32 = <clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v65, &v82);
  v33 = v74;
  if ( !v32 )
  {
    v56 = (char **)aFile;
    v57 = (__int64 (__fastcall *)())&byte_4;
    v65.m256i_i64[0] = 0LL;
    *(_OWORD *)&v65.m256i_u64[1] = v31;
    v65.m256i_i64[3] = 0x838CBAD8DA52F225LL;
    *(_QWORD *)&v66 = 0xD5B29837CF1E5FA5LL;
    v63.m256i_i64[0] = (__int64)&v56;
    v63.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v63.m256i_i64[2] = (__int64)&v65;
    v63.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v82.m256i_i64[0] = (__int64)&off_ECD88;
    v52 = &off_ECDA8;
    v53 = 2LL;
    v9 = (char ***)&v63;
    goto LABEL_69;
  }
  v34 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v74, &v82, *((_QWORD *)&v31 + 1), v31);
  v35 = v26 | flag;
  v36 = *(_QWORD *)(v33 + 56);
  v37 = v36 + 24LL * *(_QWORD *)(v33 + 64);
  v82.m256i_i64[0] = (__int64)clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
  v82.m256i_i64[1] = v36;
  *(_OWORD *)&v82.m256i_u64[2] = (unsigned __int64)v37;
  v83 = 0xD5B29837CF1E5FA5LL;
  v84 = 0LL;
  v86 = v34;
  v69 = (unsigned __int8)v69;
  v68 = (unsigned __int8)v68;
  while ( 1 )
  {
    while ( v36 && v36 != v37 )
    {
      v82.m256i_i64[1] = v36 + 24;
      v38 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter();
      v39 = v41;
      v82.m256i_i64[3] = v38;
      v83 = v41;
      v36 += 24LL;
      if ( v38 )
      {
LABEL_40:
        v40 = 0LL;
        if ( v38 != v39 )
          v40 = v38 + 32;
        v82.m256i_i64[3] = v40;
        if ( v38 != v39 )
          goto LABEL_51;
      }
    }
    v38 = v84;
    if ( !v84 )
      break;
    v42 = 0LL;
    if ( v84 != v85 )
      v42 = v84 + 32;
    v84 = v42;
    if ( v38 == v85 )
      break;
LABEL_51:
    v43 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v82, v38);
    --v86;
    v44 = uu_shred::wipe_file(*(_QWORD *)(v43 + 8), *(_QWORD *)(v43 + 16), v76, v55, size, v75, v35, v27, v68, v69);
    if ( v44 )
    {
      v60 = (char *)v44;
      v61 = (void (__fastcall **)(char *))v45;
      v46 = (*(__int64 (__fastcall **)(__int64))(v45 + 96))(v44);
      uucore::mods::error::set_exit_code(v46);
      v56 = (char **)uucore::util_name();
      v57 = v47;
      v63.m256i_i64[0] = (__int64)&v56;
      v63.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v63.m256i_i64[2] = (__int64)&v60;
      v63.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v65.m256i_i64[0] = (__int64)&unk_ECF78;
      v65.m256i_i64[1] = 3LL;
      *(_QWORD *)&v66 = 0LL;
      v65.m256i_i64[2] = (__int64)&v63;
      v65.m256i_i64[3] = 2LL;
      std::io::stdio::_eprint(&v65);
      v48 = v60;
      v49 = v61;
      if ( *v61 )
        (*v61)(v60);
      v50 = v49[1];
      if ( v50 )
        _rust_dealloc(v48, v50, v49[2]);
    }
    v38 = v82.m256i_i64[3];
    v37 = v82.m256i_i64[2];
    v36 = v82.m256i_i64[1];
    v39 = v83;
    if ( v82.m256i_i64[3] )
      goto LABEL_40;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v70);
  return (unsigned int)uucore::mods::error::get_exit_code();
}
