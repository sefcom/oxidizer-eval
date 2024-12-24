__int64 __fastcall uu_tr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 flag; // bl
  char v4; // r14
  unsigned __int8 v5; // bp
  __m256i *p_dest; // r13
  unsigned __int64 v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // dl
  __int64 v16; // rax
  bool v17; // r14
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // r12
  __m256i *v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  _BYTE *v24; // rbx
  unsigned __int8 v25; // bl
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int8 v32; // [rsp+5h] [rbp-A13h]
  char v33; // [rsp+6h] [rbp-A12h]
  char v34; // [rsp+7h] [rbp-A11h]
  __int64 v35; // [rsp+8h] [rbp-A10h] BYREF
  unsigned int v36; // [rsp+10h] [rbp-A08h]
  const char *v37; // [rsp+18h] [rbp-A00h] BYREF
  __int128 v38; // [rsp+20h] [rbp-9F8h]
  __int128 v39; // [rsp+30h] [rbp-9E8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-9D8h]
  _BYTE v41[8]; // [rsp+50h] [rbp-9C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-9C0h]
  unsigned __int64 v43; // [rsp+60h] [rbp-9B8h]
  __m256i *v44; // [rsp+68h] [rbp-9B0h] BYREF
  _BYTE v45[24]; // [rsp+70h] [rbp-9A8h]
  __int128 v46; // [rsp+88h] [rbp-990h]
  __int64 v47; // [rsp+98h] [rbp-980h]
  _BYTE v48[24]; // [rsp+A0h] [rbp-978h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-958h]
  __int128 v50; // [rsp+D0h] [rbp-948h]
  __int64 v51; // [rsp+E0h] [rbp-938h]
  __int64 v52; // [rsp+E8h] [rbp-930h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-928h] BYREF
  _QWORD v54[2]; // [rsp+F8h] [rbp-920h] BYREF
  _QWORD v55[2]; // [rsp+108h] [rbp-910h] BYREF
  __int128 v56; // [rsp+118h] [rbp-900h]
  __int128 v57; // [rsp+128h] [rbp-8F0h]
  __int64 v58; // [rsp+138h] [rbp-8E0h]
  _BYTE src[24]; // [rsp+140h] [rbp-8D8h] BYREF
  _BYTE v60[24]; // [rsp+158h] [rbp-8C0h]
  __int128 v61; // [rsp+410h] [rbp-608h] BYREF
  __int64 v62; // [rsp+420h] [rbp-5F8h]
  __int128 v63; // [rsp+428h] [rbp-5F0h] BYREF
  __int64 v64; // [rsp+438h] [rbp-5E0h]
  __int128 v65; // [rsp+440h] [rbp-5D8h] BYREF
  __int64 v66; // [rsp+450h] [rbp-5C8h]
  __int64 v67; // [rsp+458h] [rbp-5C0h] BYREF
  __int128 v68; // [rsp+460h] [rbp-5B8h]
  __int64 v69; // [rsp+470h] [rbp-5A8h] BYREF
  __int128 v70; // [rsp+478h] [rbp-5A0h]
  __int64 v71; // [rsp+488h] [rbp-590h]
  __int128 v72; // [rsp+490h] [rbp-588h]
  _OWORD v73[3]; // [rsp+4A0h] [rbp-578h] BYREF
  __int64 v74; // [rsp+4D0h] [rbp-548h]
  _OWORD v75[3]; // [rsp+4D8h] [rbp-540h] BYREF
  __int64 v76; // [rsp+508h] [rbp-510h]
  __int128 v77; // [rsp+510h] [rbp-508h] BYREF
  __int64 v78; // [rsp+520h] [rbp-4F8h]
  __int128 v79; // [rsp+528h] [rbp-4F0h]
  __int128 v80; // [rsp+538h] [rbp-4E0h]
  __int128 v81; // [rsp+548h] [rbp-4D0h]
  __int64 v82; // [rsp+558h] [rbp-4C0h]
  __int128 v83; // [rsp+560h] [rbp-4B8h]
  __int64 v84; // [rsp+570h] [rbp-4A8h]
  __m256i dest; // [rsp+580h] [rbp-498h] BYREF
  __int128 v86; // [rsp+5A0h] [rbp-478h]
  __int128 v87; // [rsp+5B0h] [rbp-468h]
  __m256i v88; // [rsp+850h] [rbp-1C8h] BYREF
  __int128 v89; // [rsp+870h] [rbp-1A8h]
  __int128 v90; // [rsp+880h] [rbp-198h]
  __int128 v91; // [rsp+890h] [rbp-188h]
  __int128 v92; // [rsp+8A0h] [rbp-178h]
  __int64 v93; // [rsp+8B0h] [rbp-168h]
  _BYTE v94[24]; // [rsp+8B8h] [rbp-160h] BYREF
  _BYTE v95[24]; // [rsp+8D0h] [rbp-148h] BYREF
  __int64 v96; // [rsp+8E8h] [rbp-130h] BYREF
  __m256i v97; // [rsp+8F0h] [rbp-128h]
  __int128 v98; // [rsp+910h] [rbp-108h]
  __int128 v99; // [rsp+920h] [rbp-F8h]
  __int64 v100; // [rsp+930h] [rbp-E8h]
  __int64 v101; // [rsp+970h] [rbp-A8h]
  _BYTE v102[104]; // [rsp+9B0h] [rbp-68h] BYREF

  uu_tr::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&v44, &dest, a1, a2);
  if ( v44 != (__m256i *)0x8000000000000000LL )
  {
    v58 = v47;
    v57 = v46;
    v56 = *(_OWORD *)&v45[8];
    v55[0] = v44;
    v55[1] = *(_QWORD *)v45;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aDelete, 6LL);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aComplement, 10LL);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aSqueezeRepeats, 15LL);
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v55, aTruncateSet1, 13LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v55, aSets, 4LL);
    p_dest = &dest;
    clap_builder::parser::error::MatchesError::unwrap(&dest, aSets, 4LL, src);
    v97 = dest;
    v98 = v86;
    v99 = v87;
    v96 = 1LL;
    v100 = 0LL;
    v101 = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v41, &v96);
    v7 = v43;
    if ( !v43 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aMissingOperand, 15LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v60 = 1;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v43 == 1 && !(v5 | flag) )
    {
      v8 = *(_OWORD *)(v42 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v8;
      dest.m256i_i8[24] = 1;
      v44 = &dest;
      *(_QWORD *)v45 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12CBB0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v60[8] = 0LL;
      *(_QWORD *)&src[16] = &v44;
      *(_QWORD *)v60 = 1LL;
      core::option::Option<T>::map_or_else(&v61, src);
      *(_DWORD *)v60 = 1;
      *(_OWORD *)src = v61;
      *(_QWORD *)&src[16] = v62;
      v9 = alloc::boxed::Box<T>::new(src);
LABEL_11:
      v2 = v9;
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v41);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
      return v2;
    }
    if ( (v5 & flag) == 1 && v43 == 1 )
    {
      v10 = *(_OWORD *)(v42 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v10;
      dest.m256i_i8[24] = 1;
      v44 = &dest;
      *(_QWORD *)v45 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12CDA0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v60[8] = 0LL;
      *(_QWORD *)&src[16] = &v44;
      *(_QWORD *)v60 = 1LL;
      core::option::Option<T>::map_or_else(&v63, src);
      *(_DWORD *)v60 = 1;
      *(_OWORD *)src = v63;
      *(_QWORD *)&src[16] = v64;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v43 != 1 )
    {
      v37 = aExtraOperand;
      *(_QWORD *)&v38 = 13LL;
      if ( (v5 | flag ^ 1) != 1 )
      {
        v23 = *(_OWORD *)(v42 + 32);
        v44 = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v45 = v23;
        v45[16] = 1;
        dest.m256i_i64[0] = (__int64)&v37;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&v44;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        if ( v43 == 2 )
        {
          *(_QWORD *)src = &unk_12CBD0;
          *(_QWORD *)&src[8] = 3LL;
          *(_QWORD *)&v60[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v60 = 2LL;
          v24 = v94;
          core::option::Option<T>::map_or_else(v94, src);
        }
        else
        {
          *(_QWORD *)src = &unk_12CC00;
          *(_QWORD *)&src[8] = 2LL;
          *(_QWORD *)&v60[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v60 = 2LL;
          v24 = v95;
          core::option::Option<T>::map_or_else(v95, src);
        }
        v84 = *((_QWORD *)v24 + 2);
        v83 = *(_OWORD *)v24;
        *(_DWORD *)v60 = 1;
        *(_OWORD *)src = v83;
        *(_QWORD *)&src[16] = v84;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
      if ( v43 > 2 )
      {
        v22 = *(_OWORD *)(v42 + 56);
        v44 = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v45 = v22;
        v45[16] = 1;
        dest.m256i_i64[0] = (__int64)&v37;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&v44;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)src = &unk_12CC00;
        *(_QWORD *)&src[8] = 2LL;
        *(_QWORD *)&v60[8] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)v60 = 2LL;
        core::option::Option<T>::map_or_else(&v65, src);
        *(_DWORD *)v60 = 1;
        *(_OWORD *)src = v65;
        *(_QWORD *)&src[16] = v66;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
    }
    v12 = *(_QWORD *)(v42 + 8) + *(_QWORD *)(v42 + 16);
    *(_QWORD *)src = *(_QWORD *)(v42 + 8);
    *(_QWORD *)&src[8] = v12;
    src[16] = 0;
    if ( (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(src) & 1) != 0 )
    {
      p_dest = &dest;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aWarningAnUnesc, 64LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v60 = 0;
      v37 = (const char *)alloc::boxed::Box<T>::new(src);
      *(_QWORD *)&v38 = &off_12CC58;
      v13 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v37);
      uucore::mods::error::set_exit_code(v13);
      v44 = (__m256i *)uucore::util_name();
      *(_QWORD *)v45 = v14;
      dest.m256i_i64[0] = (__int64)&v44;
      dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m256i_i64[2] = (__int64)&v37;
      dest.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)src = &unk_12CCC8;
      *(_QWORD *)&src[8] = 3LL;
      *(_QWORD *)&v60[8] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)v60 = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v37, v38);
    }
    v52 = std::io::stdio::stdin();
    v33 = v4;
    v35 = std::io::stdio::Stdin::lock(&v52);
    LOBYTE(v36) = v15 & 1;
    v53 = std::io::stdio::stdout();
    v16 = std::io::stdio::Stdout::lock(&v53);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v44, 0x2000LL, v16);
    v17 = v43 >= 2;
    v32 = flag;
    v18 = ~flag;
    v54[0] = v42;
    v54[1] = v42 + 24 * v43;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v54);
    if ( v19 )
    {
      v20 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              *(_QWORD *)(v19 + 8),
              *(_QWORD *)(v19 + 16));
      p_dest = v21;
    }
    else
    {
      v20 = 0LL;
    }
    v25 = v17 & v18;
    if ( !v20 )
      p_dest = 0LL;
    v26 = 1LL;
    if ( !v20 )
      v20 = 1LL;
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v54);
    if ( v27 )
    {
      v29 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              *(_QWORD *)(v27 + 8),
              *(_QWORD *)(v27 + 16));
      v28 = v30;
    }
    else
    {
      v29 = 0LL;
    }
    if ( v29 )
      v26 = v29;
    else
      v28 = 0LL;
    uu_tr::operation::Sequence::solve_set_characters(src, v20, (__int64)p_dest, v26, v28, v33, v25 & v34, v25);
    if ( *(_QWORD *)src == 0x8000000000000000LL )
    {
      dest.m256i_i64[2] = *(_QWORD *)v60;
      *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
      *(_QWORD *)&src[16] = *(_QWORD *)v60;
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      v31 = alloc::boxed::Box<T>::new(src);
LABEL_37:
      v2 = v31;
LABEL_38:
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v44);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v35, v36);
      goto LABEL_12;
    }
    *(_QWORD *)&v86 = *(_QWORD *)&v60[16];
    *(_OWORD *)&dest.m256i_u64[2] = *(_OWORD *)v60;
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
    v49 = *(_OWORD *)&src[8];
    v40 = *(_QWORD *)&v60[16];
    v39 = *(_OWORD *)v60;
    if ( v32 )
    {
      if ( v5 )
      {
        *(_OWORD *)&dest.m256i_u64[1] = v49;
        dest.m256i_i64[0] = *(_QWORD *)src;
        *(_QWORD *)&src[16] = v40;
        *(_OWORD *)src = v39;
        uu_tr::operation::SqueezeOperation::new((__int64)v73, (__int64)src);
        v77 = *(_OWORD *)dest.m256i_i8;
        v78 = dest.m256i_i64[2];
        v79 = v73[0];
        v80 = v73[1];
        v81 = v73[2];
        v82 = v74;
        uu_tr::operation::translate_input((__int64)&v35, (__int64)&v44, (__int64)&v77);
        goto LABEL_53;
      }
      v68 = v49;
      v67 = *(_QWORD *)src;
      uu_tr::operation::translate_input((__int64)&v35, (__int64)&v44, (__int64)&v67);
LABEL_48:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v39);
      goto LABEL_53;
    }
    if ( v5 )
    {
      if ( v7 == 1 )
      {
        *(_OWORD *)&src[8] = v49;
        uu_tr::operation::SqueezeOperation::new((__int64)v102, (__int64)src);
        uu_tr::operation::translate_input((__int64)&v35, (__int64)&v44, (__int64)v102);
        goto LABEL_48;
      }
      *(_QWORD *)v48 = *(_QWORD *)src;
      *(_OWORD *)&v48[8] = v49;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v37, &v39, *(_QWORD *)&v60[16], &src[8]);
      uu_tr::operation::TranslateOperation::new((__int64)src, (__int64)v48, (__int64)&v37);
      v50 = *(_OWORD *)&src[8];
      v51 = *(_QWORD *)v60;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = v51;
        *(_OWORD *)src = v50;
        v2 = alloc::boxed::Box<T>::new(src);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v39);
        goto LABEL_38;
      }
      v86 = *(_OWORD *)&v60[8];
      *(_OWORD *)&dest.m256i_u64[1] = v50;
      dest.m256i_i64[3] = v51;
      dest.m256i_i64[0] = *(_QWORD *)src;
      *(_QWORD *)&src[16] = v40;
      *(_OWORD *)src = v39;
      uu_tr::operation::SqueezeOperation::new((__int64)v75, (__int64)src);
      v88 = dest;
      v89 = v86;
      v90 = v75[0];
      v91 = v75[1];
      v92 = v75[2];
      v93 = v76;
      uu_tr::operation::translate_input((__int64)&v35, (__int64)&v44, (__int64)&v88);
    }
    else
    {
      v37 = *(const char **)src;
      v38 = v49;
      dest.m256i_i64[2] = v40;
      *(_OWORD *)dest.m256i_i8 = v39;
      uu_tr::operation::TranslateOperation::new((__int64)src, (__int64)&v37, (__int64)&dest);
      *(_OWORD *)v48 = *(_OWORD *)&src[8];
      *(_QWORD *)&v48[16] = *(_QWORD *)v60;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = *(_QWORD *)&v48[16];
        *(_OWORD *)src = *(_OWORD *)v48;
        v31 = alloc::boxed::Box<T>::new(src);
        goto LABEL_37;
      }
      v72 = *(_OWORD *)&v60[8];
      v69 = *(_QWORD *)src;
      v70 = *(_OWORD *)v48;
      v71 = *(_QWORD *)&v48[16];
      uu_tr::operation::translate_input((__int64)&v35, (__int64)&v44, (__int64)&v69);
    }
LABEL_53:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v44);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v35, v36);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v41);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
    return 0LL;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v45);
}
