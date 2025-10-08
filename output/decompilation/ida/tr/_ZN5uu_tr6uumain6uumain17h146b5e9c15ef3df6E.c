__int64 __fastcall uu_tr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  unsigned __int8 flag; // bp
  unsigned __int8 v5; // r15
  char v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // r13
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int128 v17; // rax
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int128 v22; // xmm0
  int v23; // ecx
  __int128 v24; // kr00_16
  __int64 v25; // r14
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // r14
  char v30; // bl
  __int128 v31; // kr10_16
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int8 v34; // [rsp+8h] [rbp-900h]
  __int64 v35; // [rsp+8h] [rbp-900h]
  __int128 v36; // [rsp+10h] [rbp-8F8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-8E8h]
  __int64 v38; // [rsp+28h] [rbp-8E0h] BYREF
  unsigned int v39; // [rsp+30h] [rbp-8D8h]
  __int128 v40; // [rsp+38h] [rbp-8D0h]
  __m256i v41; // [rsp+48h] [rbp-8C0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-8A0h]
  __int64 v43; // [rsp+78h] [rbp-890h]
  __int128 v44; // [rsp+80h] [rbp-888h] BYREF
  __int64 v45; // [rsp+90h] [rbp-878h]
  _BYTE v46[8]; // [rsp+A0h] [rbp-868h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-860h]
  unsigned __int64 v48; // [rsp+B0h] [rbp-858h]
  __int64 v49; // [rsp+B8h] [rbp-850h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-848h]
  __int64 v51; // [rsp+D0h] [rbp-838h]
  __m256i v52; // [rsp+D8h] [rbp-830h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-810h]
  __int64 v54; // [rsp+108h] [rbp-800h]
  _BYTE src[56]; // [rsp+110h] [rbp-7F8h] BYREF
  __int128 v56; // [rsp+148h] [rbp-7C0h]
  __int64 v57; // [rsp+158h] [rbp-7B0h]
  __int64 v58; // [rsp+198h] [rbp-770h]
  __int128 v59; // [rsp+3E0h] [rbp-528h]
  __int64 v60; // [rsp+3F0h] [rbp-518h]
  __int128 v61; // [rsp+3F8h] [rbp-510h] BYREF
  __int64 v62; // [rsp+408h] [rbp-500h]
  __int128 v63; // [rsp+410h] [rbp-4F8h] BYREF
  __int128 v64; // [rsp+420h] [rbp-4E8h]
  __int128 v65; // [rsp+438h] [rbp-4D0h] BYREF
  __int64 v66; // [rsp+448h] [rbp-4C0h]
  __int128 v67; // [rsp+450h] [rbp-4B8h] BYREF
  __int64 v68; // [rsp+460h] [rbp-4A8h]
  __int128 v69; // [rsp+468h] [rbp-4A0h] BYREF
  __int64 v70; // [rsp+478h] [rbp-490h]
  __int64 v71; // [rsp+480h] [rbp-488h] BYREF
  __int128 v72; // [rsp+488h] [rbp-480h]
  __int128 v73; // [rsp+498h] [rbp-470h]
  __int64 v74; // [rsp+4A8h] [rbp-460h]
  __int128 v75; // [rsp+4B0h] [rbp-458h] BYREF
  __int64 v76; // [rsp+4C0h] [rbp-448h]
  __int128 v77; // [rsp+4C8h] [rbp-440h]
  __int128 v78; // [rsp+4D8h] [rbp-430h]
  __int128 v79; // [rsp+4E8h] [rbp-420h]
  __int64 v80; // [rsp+4F8h] [rbp-410h]
  _OWORD v81[2]; // [rsp+500h] [rbp-408h] BYREF
  __int64 v82; // [rsp+520h] [rbp-3E8h]
  __int64 v83; // [rsp+528h] [rbp-3E0h]
  __int128 v84; // [rsp+530h] [rbp-3D8h]
  __int128 v85; // [rsp+540h] [rbp-3C8h]
  __int128 v86; // [rsp+550h] [rbp-3B8h]
  __int64 v87; // [rsp+560h] [rbp-3A8h]
  _OWORD v88[3]; // [rsp+568h] [rbp-3A0h] BYREF
  __int64 v89; // [rsp+598h] [rbp-370h]
  _OWORD v90[3]; // [rsp+5A0h] [rbp-368h] BYREF
  __int64 v91; // [rsp+5D0h] [rbp-338h]
  __int128 dest; // [rsp+5D8h] [rbp-330h] BYREF
  __int128 v93; // [rsp+5E8h] [rbp-320h]
  __int128 v94; // [rsp+5F8h] [rbp-310h]
  __int128 v95; // [rsp+608h] [rbp-300h]
  _BYTE v96[104]; // [rsp+8A0h] [rbp-68h] BYREF

  uu_tr::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&v41, &dest, a1, a2);
  if ( __OFSUB__(-v41.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v41.m256i_i64[1],
             &dest,
             v2,
             -v41.m256i_i64[0]);
  v54 = v43;
  v53 = v42;
  v52 = v41;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aDelete, 6LL);
  v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aComplement, 10LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aSqueezeRepeats, 15LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aTruncateSet1, 13LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, &v52);
  clap_builder::parser::error::MatchesError::unwrap(&dest, src);
  *(_OWORD *)&src[8] = dest;
  *(_OWORD *)&src[24] = v93;
  *(_OWORD *)&src[40] = v94;
  v56 = v95;
  *(_QWORD *)src = 1LL;
  v57 = 0LL;
  v58 = 0LL;
  core::iter::traits::iterator::Iterator::collect(v46, src);
  v7 = v48;
  if ( !v48 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aMissingOperand, 15LL);
    *(_QWORD *)&src[16] = v93;
    *(_OWORD *)src = dest;
    *(_DWORD *)&src[24] = 1;
    v10 = alloc::boxed::Box<T>::new(src);
    goto LABEL_9;
  }
  if ( (((unsigned __int8)(v5 | flag) ^ 1) & (v48 == 1)) != 0 )
  {
    v8 = *(_QWORD *)(v47 + 8);
    v9 = *(_QWORD *)(v47 + 16);
    *(_QWORD *)&dest = 1LL;
    *((_QWORD *)&dest + 1) = v8;
    *(_QWORD *)&v93 = v9;
    BYTE8(v93) = 1;
    v41.m256i_i64[0] = (__int64)&dest;
    v41.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)src = &off_FCF68;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v41;
    *(_QWORD *)&src[24] = 1LL;
    core::option::Option<T>::map_or_else(&v65, src);
    *(_DWORD *)&src[24] = 1;
    *(_OWORD *)src = v65;
    *(_QWORD *)&src[16] = v66;
    v10 = alloc::boxed::Box<T>::new(src);
LABEL_9:
    v3 = v10;
LABEL_10:
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v46);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v52);
    return v3;
  }
  if ( ((v48 == 1) & (unsigned __int8)(v5 & flag)) != 0 )
  {
    v11 = *(_QWORD *)(v47 + 8);
    v12 = *(_QWORD *)(v47 + 16);
    *(_QWORD *)&dest = 1LL;
    *((_QWORD *)&dest + 1) = v11;
    *(_QWORD *)&v93 = v12;
    BYTE8(v93) = 1;
    v41.m256i_i64[0] = (__int64)&dest;
    v41.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)src = &off_FCF88;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v41;
    *(_QWORD *)&src[24] = 1LL;
    core::option::Option<T>::map_or_else(&v67, src);
    *(_DWORD *)&src[24] = 1;
    *(_OWORD *)src = v67;
    *(_QWORD *)&src[16] = v68;
    v10 = alloc::boxed::Box<T>::new(src);
    goto LABEL_9;
  }
  if ( v48 != 1 )
  {
    *(_QWORD *)&v44 = aExtraOperand;
    *((_QWORD *)&v44 + 1) = 13LL;
    if ( (v5 | flag ^ 1) != 1 )
    {
      v27 = *(_OWORD *)(v47 + 32);
      v41.m256i_i64[0] = 1LL;
      *(_OWORD *)&v41.m256i_u64[1] = v27;
      v41.m256i_i8[24] = 1;
      *(_QWORD *)&dest = &v44;
      *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v93 = &v41;
      *((_QWORD *)&v93 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      if ( v48 == 2 )
      {
        *(_QWORD *)src = &unk_FCFA8;
        *(_QWORD *)&src[8] = 3LL;
      }
      else
      {
        *(_QWORD *)src = &unk_FCFD8;
        *(_QWORD *)&src[8] = 2LL;
      }
      *(_QWORD *)&src[32] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)&src[24] = 2LL;
      core::option::Option<T>::map_or_else(&v36, src);
      v50 = v36;
      v51 = v37;
      *(_DWORD *)&src[24] = 1;
      *(_OWORD *)src = v36;
      *(_QWORD *)&src[16] = v37;
      v10 = alloc::boxed::Box<T>::new(src);
      goto LABEL_9;
    }
    if ( v48 > 2 )
    {
      v22 = *(_OWORD *)(v47 + 56);
      v41.m256i_i64[0] = 1LL;
      *(_OWORD *)&v41.m256i_u64[1] = v22;
      v41.m256i_i8[24] = 1;
      *(_QWORD *)&dest = &v44;
      *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v93 = &v41;
      *((_QWORD *)&v93 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &unk_FCFD8;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&src[32] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)&src[24] = 2LL;
      core::option::Option<T>::map_or_else(&v69, src);
      *(_DWORD *)&src[24] = 1;
      *(_OWORD *)src = v69;
      *(_QWORD *)&src[16] = v70;
      v10 = alloc::boxed::Box<T>::new(src);
      goto LABEL_9;
    }
  }
  v14 = (_QWORD *)v47;
  v15 = *(_QWORD *)(v47 + 8) + *(_QWORD *)(v47 + 16);
  *(_QWORD *)src = *(_QWORD *)(v47 + 8);
  *(_QWORD *)&src[8] = v15;
  src[16] = 0;
  if ( (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(src) & 1) != 0 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aWarningAnUnesc, 64LL);
    *(_QWORD *)&src[16] = v93;
    *(_OWORD *)src = dest;
    *(_DWORD *)&src[24] = 0;
    *(_QWORD *)&v36 = alloc::boxed::Box<T>::new(src);
    *((_QWORD *)&v36 + 1) = &off_FD0D0;
    v16 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v36);
    uucore::mods::error::set_exit_code(v16);
    *(_QWORD *)&v17 = uucore::util_name();
    *(_OWORD *)v41.m256i_i8 = v17;
    *(_QWORD *)&dest = &v41;
    *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v93 = &v36;
    *((_QWORD *)&v93 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_FCFF8;
    *(_QWORD *)&src[8] = 3LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &dest;
    *(_QWORD *)&src[24] = 2LL;
    std::io::stdio::_eprint(src);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      v36,
      *((_QWORD *)&v36 + 1));
  }
  v49 = std::io::stdio::stdin();
  v38 = std::io::stdio::Stdin::lock(&v49);
  LOBYTE(v39) = v18 & 1;
  *(_QWORD *)src = std::io::stdio::stdout();
  v19 = std::io::stdio::Stdout::lock(src);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&dest, v19);
  if ( v7 == 1 )
  {
    v21 = 0LL;
  }
  else
  {
    v21 = v14[4];
    v20 = v14[5];
  }
  if ( !v21 )
    LODWORD(v20) = 0;
  v23 = 1;
  if ( v21 )
    v23 = v21;
  uu_tr::operation::Sequence::solve_set_characters(
    (unsigned int)src,
    v14[1],
    v14[2],
    v23,
    v20,
    v34,
    (v7 != 1) & (flag ^ 1) & v6,
    (v7 != 1) & (flag ^ 1));
  v24 = *(_OWORD *)src;
  v25 = *(_QWORD *)&src[16];
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
    *(_OWORD *)src = *(_OWORD *)&src[8];
    *(_OWORD *)&src[16] = *(_OWORD *)&src[24];
    v26 = alloc::boxed::Box<T>::new(src);
LABEL_27:
    v3 = v26;
LABEL_53:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&dest);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v38, v39);
    goto LABEL_10;
  }
  v35 = *(_QWORD *)&src[24];
  v40 = *(_OWORD *)&src[32];
  if ( (unsigned __int8)uucore::features::fs::is_stdin_directory(&v49) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v41, aReadErrorIsADi, 26LL);
    *(_QWORD *)&src[16] = v41.m256i_i64[2];
    *(_OWORD *)src = *(_OWORD *)v41.m256i_i8;
    *(_DWORD *)&src[24] = 1;
    v3 = alloc::boxed::Box<T>::new(src);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v35, v40);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24, *((_QWORD *)&v24 + 1));
    goto LABEL_53;
  }
  if ( !flag )
  {
    v28 = v40;
    if ( !v5 )
    {
      v36 = v24;
      v37 = v25;
      v29 = v35;
      v41.m256i_i64[0] = v35;
      *(_OWORD *)&v41.m256i_u64[1] = v40;
      uu_tr::operation::TranslateOperation::new(src, &v36, &v41);
      v63 = *(_OWORD *)&src[8];
      v64 = *(_OWORD *)&src[24];
      if ( !*(_QWORD *)src )
      {
        v26 = alloc::boxed::Box<T>::new(&v63);
        goto LABEL_27;
      }
      v71 = *(_QWORD *)src;
      v72 = v63;
      v73 = v64;
      v74 = *(_QWORD *)&src[40];
      v3 = uu_tr::operation::translate_input(&v38, &dest, &v71);
      if ( v3 )
        goto LABEL_53;
      goto LABEL_49;
    }
    if ( v7 != 1 )
    {
      v36 = v24;
      v37 = v25;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v41, v40, *((_QWORD *)&v40 + 1));
      v29 = v35;
      uu_tr::operation::TranslateOperation::new(src, &v36, &v41);
      v31 = *(_OWORD *)src;
      v44 = *(_OWORD *)&src[16];
      v45 = *(_QWORD *)&src[32];
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[24] = v45;
        *(_OWORD *)&src[8] = v44;
        *(_QWORD *)src = *((_QWORD *)&v31 + 1);
        v3 = alloc::boxed::Box<T>::new(src);
        goto LABEL_52;
      }
      v32 = *(_QWORD *)&src[40];
      v59 = v44;
      v60 = v45;
      *(_QWORD *)src = v35;
      *(_QWORD *)&src[8] = v28;
      *(_QWORD *)&src[16] = *((_QWORD *)&v40 + 1);
      uu_tr::operation::SqueezeOperation::new(v90, src);
      v81[1] = v59;
      v82 = v60;
      v81[0] = v31;
      v83 = v32;
      v84 = v90[0];
      v85 = v90[1];
      v86 = v90[2];
      v87 = v91;
      v3 = uu_tr::operation::translate_input(&v38, &dest, v81);
      if ( v3 )
        goto LABEL_53;
      goto LABEL_49;
    }
    *(_OWORD *)src = v24;
    *(_QWORD *)&src[16] = v25;
    v29 = v35;
    uu_tr::operation::SqueezeOperation::new(v96, src);
    v3 = uu_tr::operation::translate_input(&v38, &dest, v96);
    if ( v3 )
      goto LABEL_52;
LABEL_41:
    v30 = 1;
    goto LABEL_50;
  }
  v28 = v40;
  if ( !v5 )
  {
    v61 = v24;
    v62 = v25;
    v29 = v35;
    v3 = uu_tr::operation::translate_input(&v38, &dest, &v61);
    if ( v3 )
      goto LABEL_52;
    goto LABEL_41;
  }
  *(_QWORD *)src = v35;
  *(_OWORD *)&src[8] = v40;
  uu_tr::operation::SqueezeOperation::new(v88, src);
  v75 = v24;
  v76 = v25;
  v77 = v88[0];
  v78 = v88[1];
  v79 = v88[2];
  v80 = v89;
  v3 = uu_tr::operation::translate_input(&v38, &dest, &v75);
  v29 = v35;
  if ( v3 )
    goto LABEL_53;
LABEL_49:
  v30 = 0;
LABEL_50:
  v33 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&dest);
  v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v33);
  if ( v3 )
  {
    if ( !v30 )
      goto LABEL_53;
LABEL_52:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v29, v28);
    goto LABEL_53;
  }
  if ( v30 )
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v29, v28);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&dest);
  core::ptr::drop_in_place<std::io::stdio::StdinLock>(v38, v39);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v46);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v52);
  return 0LL;
}