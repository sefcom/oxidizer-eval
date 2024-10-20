__int64 __fastcall uu_uniq::uumain(char **a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 (__fastcall **v9)(); // rdx
  __int64 (__fastcall **v10)(); // r13
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int128 v19; // rax
  __int128 v20; // rax
  unsigned int v21; // ebx
  __int128 v22; // kr20_16
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int8 v27; // r12
  __int8 v28; // al
  __int64 v29; // rdi
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rbp
  __int64 (__fastcall **v34)(); // rbx
  __int64 (__fastcall **v35)(); // rdx
  __int8 v36; // [rsp+1h] [rbp-467h]
  __int8 v37; // [rsp+2h] [rbp-466h]
  __int8 v38; // [rsp+3h] [rbp-465h]
  __int8 delimiter; // [rsp+4h] [rbp-464h]
  __int8 flag; // [rsp+5h] [rbp-463h]
  char v41; // [rsp+6h] [rbp-462h] BYREF
  char v42; // [rsp+7h] [rbp-461h] BYREF
  _BYTE v43[40]; // [rsp+8h] [rbp-460h] BYREF
  __int128 v44; // [rsp+30h] [rbp-438h]
  _BYTE v45[24]; // [rsp+40h] [rbp-428h] BYREF
  __int128 v46; // [rsp+60h] [rbp-408h] BYREF
  __int64 v47; // [rsp+70h] [rbp-3F8h]
  __int128 v48; // [rsp+78h] [rbp-3F0h]
  __int128 v49; // [rsp+88h] [rbp-3E0h]
  __int64 v50; // [rsp+98h] [rbp-3D0h]
  __int64 v51; // [rsp+A0h] [rbp-3C8h]
  __int64 v52; // [rsp+A8h] [rbp-3C0h]
  __int128 v53; // [rsp+B0h] [rbp-3B8h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-3A8h]
  __int128 v55; // [rsp+D0h] [rbp-398h]
  _BYTE v56[24]; // [rsp+E0h] [rbp-388h] BYREF
  __m256i v57; // [rsp+F8h] [rbp-370h]
  __int64 v58; // [rsp+118h] [rbp-350h]
  __int64 v59; // [rsp+120h] [rbp-348h]
  __int64 v60; // [rsp+128h] [rbp-340h]
  __int64 v61; // [rsp+130h] [rbp-338h]
  __int64 v62; // [rsp+138h] [rbp-330h]
  unsigned __int64 v63; // [rsp+140h] [rbp-328h] BYREF
  __int128 v64; // [rsp+148h] [rbp-320h]
  __int128 v65; // [rsp+158h] [rbp-310h] BYREF
  __int64 v66; // [rsp+168h] [rbp-300h]
  char **v67; // [rsp+170h] [rbp-2F8h] BYREF
  __int128 v68; // [rsp+178h] [rbp-2F0h]
  __m256i v69; // [rsp+188h] [rbp-2E0h]
  __int64 v70; // [rsp+1A8h] [rbp-2C0h]
  _BYTE v71[696]; // [rsp+1B0h] [rbp-2B8h] BYREF

  v63 = 0x8000000000000000LL;
  *(_QWORD *)v45 = 0x8000000000000000LL;
  v41 = 0;
  v42 = 0;
  v67 = a1;
  *(_QWORD *)&v68 = a2;
  *((_QWORD *)&v68 + 1) = &v63;
  v69.m256i_i64[0] = (__int64)v45;
  v69.m256i_i64[1] = (__int64)&v41;
  v69.m256i_i64[2] = (__int64)&v42;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v46, &v67);
  if ( v63 == 0x8000000000000000LL )
  {
    v3 = 0LL;
    v4 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 == 0x8000000000000000LL )
    {
LABEL_3:
      v5 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    *(_OWORD *)&v43[8] = v64;
    *(_QWORD *)v43 = v63;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v53, v64, *((_QWORD *)&v64 + 1));
    v6 = (unsigned __int8)v53;
    v2 = *((_QWORD *)&v53 + 1);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v43);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v43);
    v3 = v6 ^ 1;
    v4 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 == 0x8000000000000000LL )
      goto LABEL_3;
  }
  *(_OWORD *)&v43[8] = *(_OWORD *)&v45[8];
  *(_QWORD *)v43 = v4;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v53, *(_QWORD *)&v45[8], *(_QWORD *)&v45[16]);
  v7 = (unsigned __int8)v53;
  *(_QWORD *)&v55 = *((_QWORD *)&v53 + 1);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v43);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v43);
  v5 = v7 ^ 1;
LABEL_6:
  v54 = v47;
  v53 = v46;
  uu_uniq::uu_app(&v67);
  *(_QWORD *)&v45[16] = v54;
  *(_OWORD *)v45 = v53;
  clap_builder::builder::command::Command::try_get_matches_from(v43, &v67, v45);
  if ( *(_QWORD *)v43 == 0x8000000000000000LL )
  {
    v8 = uu_uniq::map_clap_errors(*(_QWORD *)&v43[8]);
    v10 = v9;
    goto LABEL_20;
  }
  v62 = v2;
  v48 = *(_OWORD *)&v43[24];
  v49 = v44;
  v46 = *(_OWORD *)v43;
  v47 = *(_QWORD *)&v43[16];
  v11 = (__int64)*(&uu_uniq::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v67, &v46, aFiles, v11);
  clap_builder::parser::error::MatchesError::unwrap(v56, aFiles, v11, &v67);
  if ( *(_QWORD *)v56 )
  {
    v70 = v58;
    v69 = v57;
    v68 = *(_OWORD *)&v56[8];
    v67 = *(char ***)v56;
    v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v67);
    if ( v12 )
    {
      v13 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v71, v12);
      v61 = v14;
      v15 = v13;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v67);
    if ( v16 )
    {
      v52 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v71, v16);
      v60 = v17;
    }
    else
    {
      v52 = 0LL;
    }
  }
  else
  {
    v52 = 0LL;
    v15 = 0LL;
  }
  uu_uniq::opt_parsed(
    &v67,
    anon_f9427813c0255ce4c25516664eb43cb9_13_llvm_11736109415790202195,
    *(&uu_uniq::options::SKIP_FIELDS + 1),
    &v46);
  if ( v67
    || (v51 = *((_QWORD *)&v68 + 1),
        v18 = v68,
        uu_uniq::opt_parsed(
          &v67,
          anon_f9427813c0255ce4c25516664eb43cb9_14_llvm_11736109415790202195,
          *(&uu_uniq::options::SKIP_CHARS + 1),
          &v46),
        v67) )
  {
    v10 = (__int64 (__fastcall **)())*((_QWORD *)&v68 + 1);
    v8 = v68;
    goto LABEL_19;
  }
  v50 = *((_QWORD *)&v68 + 1);
  v59 = v68;
  v37 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           &v46,
                           anon_f9427813c0255ce4c25516664eb43cb9_12_llvm_11736109415790202195,
                           *(&uu_uniq::options::REPEATED + 1)) )
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            &v46,
            anon_f9427813c0255ce4c25516664eb43cb9_8_llvm_11736109415790202195,
            *(&uu_uniq::options::ALL_REPEATED + 1));
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           &v46,
           anon_f9427813c0255ce4c25516664eb43cb9_15_llvm_11736109415790202195,
           *(&uu_uniq::options::UNIQUE + 1));
  v36 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           &v46,
                           anon_f9427813c0255ce4c25516664eb43cb9_8_llvm_11736109415790202195,
                           *(&uu_uniq::options::ALL_REPEATED + 1)) )
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            &v46,
            &anon_f9427813c0255ce4c25516664eb43cb9_17_llvm_11736109415790202195,
            *(&uu_uniq::options::GROUP + 1));
  delimiter = uu_uniq::get_delimiter(&v46);
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v46,
          anon_f9427813c0255ce4c25516664eb43cb9_10_llvm_11736109415790202195,
          *(&uu_uniq::options::COUNT + 1));
  v25 = v51;
  if ( !v18 )
    v25 = v62;
  v51 = v25;
  if ( v18 )
    v3 = 1LL;
  if ( v59 )
    v5 = 1LL;
  v26 = v50;
  if ( !v59 )
    v26 = v55;
  v50 = v26;
  uu_uniq::opt_parsed(
    v43,
    anon_f9427813c0255ce4c25516664eb43cb9_9_llvm_11736109415790202195,
    *(&uu_uniq::options::CHECK_CHARS + 1),
    &v46);
  if ( *(_QWORD *)v43 )
  {
    v8 = *(_QWORD *)&v43[8];
    v10 = *(__int64 (__fastcall ***)())&v43[16];
    goto LABEL_19;
  }
  v55 = *(_OWORD *)&v43[8];
  v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v46,
          anon_f9427813c0255ce4c25516664eb43cb9_11_llvm_11736109415790202195,
          *(&uu_uniq::options::IGNORE_CASE + 1));
  v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v46,
          anon_f9427813c0255ce4c25516664eb43cb9_16_llvm_11736109415790202195,
          *(&uu_uniq::options::ZERO_TERMINATED + 1));
  v69.m256i_i8[24] = v37;
  v69.m256i_i8[25] = flag;
  v69.m256i_i8[26] = v36;
  v69.m256i_i8[30] = delimiter;
  v69.m256i_i8[27] = v38;
  v67 = (char **)v3;
  *(_QWORD *)&v68 = v51;
  *((_QWORD *)&v68 + 1) = v5;
  v69.m256i_i64[0] = v50;
  *(_OWORD *)&v69.m256i_u64[1] = v55;
  v69.m256i_i8[28] = v27;
  v69.m256i_i8[29] = v28;
  if ( ((unsigned __int8)v38 & (unsigned __int8)v36) != 0 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43, 102LL, 0LL);
    v29 = *(_QWORD *)&v43[8];
    if ( *(_QWORD *)v43 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v43[8], *(_QWORD *)&v43[16]);
    v30 = *(_QWORD *)&v43[16];
    *(_OWORD *)(*(_QWORD *)&v43[16] + 80LL) = xmmword_122C7;
    qmemcpy((void *)v30, "printing all duplicated lines and repeat counts is meaningless\nTry 'uniq --help'", 80);
    *(_QWORD *)(v30 + 94) = 0x2E6E6F6974616D72LL;
    *(_DWORD *)&v43[24] = 1;
    *(_QWORD *)v43 = v29;
    *(_QWORD *)&v43[8] = v30;
    *(_QWORD *)&v43[16] = 102LL;
    v31 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v31 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v8 = (__int64)v31;
    v32 = *(_OWORD *)v43;
    v31[1] = *(_OWORD *)&v43[16];
    *v31 = v32;
    v10 = &off_F02A0;
    goto LABEL_19;
  }
  uu_uniq::open_input_file(v43, v15, v61);
  v8 = *(_QWORD *)&v43[8];
  v10 = *(__int64 (__fastcall ***)())&v43[16];
  if ( *(_QWORD *)v43 )
  {
LABEL_19:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v46);
    goto LABEL_20;
  }
  uu_uniq::open_output_file(v43, v52, v60);
  v33 = *(_QWORD *)&v43[8];
  v34 = *(__int64 (__fastcall ***)())&v43[16];
  if ( *(_QWORD *)v43 )
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v8, v10);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v46);
    v8 = v33;
    v10 = v34;
  }
  else
  {
    v8 = uu_uniq::Uniq::print_uniq(&v67, v8, (__int64)v10, *(__int64 *)&v43[8], *(__int64 *)&v43[16]);
    v10 = v35;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v46);
    if ( !v8 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
LABEL_20:
  *(_QWORD *)v45 = v8;
  *(_QWORD *)&v45[8] = v10;
  *(_QWORD *)v56 = v45;
  *(_QWORD *)&v56[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v67 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v68 = 1LL;
  *((_QWORD *)&v68 + 1) = v56;
  *(_OWORD *)v69.m256i_i8 = 1uLL;
  alloc::fmt::format::format_inner(&v65, &v67);
  *(_OWORD *)v56 = v65;
  *(_QWORD *)&v56[16] = v66;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v65 + 1), v66, 1LL, 0LL) )
  {
    *(_QWORD *)&v19 = uucore::util_name();
    *(_OWORD *)v43 = v19;
    *(_QWORD *)&v46 = v43;
    *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
    v67 = (char **)&unk_F0208;
    *(_QWORD *)&v68 = 2LL;
    *((_QWORD *)&v68 + 1) = &v46;
    *(_OWORD *)v69.m256i_i8 = 1uLL;
    std::io::stdio::_eprint(&v67);
    *(_QWORD *)v43 = v56;
    *(_QWORD *)&v43[8] = <alloc::string::String as core::fmt::Display>::fmt;
    v67 = (char **)&unk_F0228;
    *(_QWORD *)&v68 = 2LL;
    *((_QWORD *)&v68 + 1) = v43;
    *(_OWORD *)v69.m256i_i8 = 1uLL;
    std::io::stdio::_eprint(&v67);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)&v45[8] + 104LL))(*(_QWORD *)v45) )
  {
    *(_QWORD *)&v20 = uucore::execution_phrase();
    *(_OWORD *)v43 = v20;
    *(_QWORD *)&v46 = v43;
    *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
    v67 = &off_F0248;
    *(_QWORD *)&v68 = 2LL;
    *((_QWORD *)&v68 + 1) = &v46;
    *(_OWORD *)v69.m256i_i8 = 1uLL;
    std::io::stdio::_eprint(&v67);
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&v45[8] + 96LL))(*(_QWORD *)v45);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v56);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v56);
  v22 = *(_OWORD *)v45;
  if ( **(_QWORD **)&v45[8] )
    (**(void (__fastcall ***)(_QWORD))&v45[8])(*(_QWORD *)v45);
  v23 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL);
  if ( v23 )
    _rust_dealloc(v22, v23, *(_QWORD *)(*((_QWORD *)&v22 + 1) + 16LL));
  return v21;
}
