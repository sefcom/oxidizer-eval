__int64 __fastcall uu_tr::uumain::uumain(__int64 a1, __int64 a2)
{
  __m256i **v2; // r12
  __int64 v3; // rbx
  unsigned __int8 flag; // bl
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // bp
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
  __int64 v20; // rax
  int v21; // edx
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  _BYTE *v24; // rbx
  char v25; // bl
  int v26; // r13d
  int v27; // r14d
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+5h] [rbp-A13h]
  unsigned __int8 v35; // [rsp+6h] [rbp-A12h]
  char v36; // [rsp+7h] [rbp-A11h]
  __int64 v37; // [rsp+8h] [rbp-A10h] BYREF
  unsigned int v38; // [rsp+10h] [rbp-A08h]
  const char *v39; // [rsp+18h] [rbp-A00h] BYREF
  __int128 v40; // [rsp+20h] [rbp-9F8h]
  __int128 v41; // [rsp+30h] [rbp-9E8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-9D8h]
  _BYTE v43[8]; // [rsp+50h] [rbp-9C8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-9C0h]
  unsigned __int64 v45; // [rsp+60h] [rbp-9B8h]
  __m256i *p_dest; // [rsp+68h] [rbp-9B0h] BYREF
  _BYTE v47[24]; // [rsp+70h] [rbp-9A8h]
  __int128 v48; // [rsp+88h] [rbp-990h]
  __int64 v49; // [rsp+98h] [rbp-980h]
  _BYTE v50[24]; // [rsp+A0h] [rbp-978h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-958h]
  __int128 v52; // [rsp+D0h] [rbp-948h]
  __int64 v53; // [rsp+E0h] [rbp-938h]
  __int64 v54; // [rsp+E8h] [rbp-930h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-928h] BYREF
  _QWORD v56[2]; // [rsp+F8h] [rbp-920h] BYREF
  _QWORD v57[2]; // [rsp+108h] [rbp-910h] BYREF
  __int128 v58; // [rsp+118h] [rbp-900h]
  __int128 v59; // [rsp+128h] [rbp-8F0h]
  __int64 v60; // [rsp+138h] [rbp-8E0h]
  _BYTE src[24]; // [rsp+140h] [rbp-8D8h] BYREF
  _BYTE v62[24]; // [rsp+158h] [rbp-8C0h]
  __int128 v63; // [rsp+410h] [rbp-608h] BYREF
  __int64 v64; // [rsp+420h] [rbp-5F8h]
  __int128 v65; // [rsp+428h] [rbp-5F0h] BYREF
  __int64 v66; // [rsp+438h] [rbp-5E0h]
  __int128 v67; // [rsp+440h] [rbp-5D8h] BYREF
  __int64 v68; // [rsp+450h] [rbp-5C8h]
  __int64 v69; // [rsp+458h] [rbp-5C0h] BYREF
  __int128 v70; // [rsp+460h] [rbp-5B8h]
  __int64 v71; // [rsp+470h] [rbp-5A8h] BYREF
  __int128 v72; // [rsp+478h] [rbp-5A0h]
  __int64 v73; // [rsp+488h] [rbp-590h]
  __int128 v74; // [rsp+490h] [rbp-588h]
  _OWORD v75[3]; // [rsp+4A0h] [rbp-578h] BYREF
  __int64 v76; // [rsp+4D0h] [rbp-548h]
  _OWORD v77[3]; // [rsp+4D8h] [rbp-540h] BYREF
  __int64 v78; // [rsp+508h] [rbp-510h]
  __int128 v79; // [rsp+510h] [rbp-508h] BYREF
  __int64 v80; // [rsp+520h] [rbp-4F8h]
  __int128 v81; // [rsp+528h] [rbp-4F0h]
  __int128 v82; // [rsp+538h] [rbp-4E0h]
  __int128 v83; // [rsp+548h] [rbp-4D0h]
  __int64 v84; // [rsp+558h] [rbp-4C0h]
  __int128 v85; // [rsp+560h] [rbp-4B8h]
  __int64 v86; // [rsp+570h] [rbp-4A8h]
  __m256i dest; // [rsp+580h] [rbp-498h] BYREF
  __int128 v88; // [rsp+5A0h] [rbp-478h]
  __int128 v89; // [rsp+5B0h] [rbp-468h]
  __m256i v90; // [rsp+850h] [rbp-1C8h] BYREF
  __int128 v91; // [rsp+870h] [rbp-1A8h]
  __int128 v92; // [rsp+880h] [rbp-198h]
  __int128 v93; // [rsp+890h] [rbp-188h]
  __int128 v94; // [rsp+8A0h] [rbp-178h]
  __int64 v95; // [rsp+8B0h] [rbp-168h]
  _BYTE v96[24]; // [rsp+8B8h] [rbp-160h] BYREF
  _BYTE v97[24]; // [rsp+8D0h] [rbp-148h] BYREF
  __int64 v98; // [rsp+8E8h] [rbp-130h] BYREF
  __m256i v99; // [rsp+8F0h] [rbp-128h]
  __int128 v100; // [rsp+910h] [rbp-108h]
  __int128 v101; // [rsp+920h] [rbp-F8h]
  __int64 v102; // [rsp+930h] [rbp-E8h]
  __int64 v103; // [rsp+970h] [rbp-A8h]
  _BYTE v104[104]; // [rsp+9B0h] [rbp-68h] BYREF

  uu_tr::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  v2 = &p_dest;
  clap_builder::builder::command::Command::try_get_matches_from(&p_dest, &dest, a1, a2);
  if ( p_dest != (__m256i *)0x8000000000000000LL )
  {
    v60 = v49;
    v59 = v48;
    v58 = *(_OWORD *)&v47[8];
    v57[0] = p_dest;
    v57[1] = *(_QWORD *)v47;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aDelete, 6LL);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aComplement, 10LL);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aSqueezeRepeats, 15LL);
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v57, aTruncateSet1, 13LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v57, aSets, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aSets, 4LL, src);
    v99 = dest;
    v100 = v88;
    v101 = v89;
    v98 = 1LL;
    v102 = 0LL;
    v103 = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v43, &v98);
    v7 = v45;
    if ( !v45 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aMissingOperand, 15LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v62 = 1;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v45 == 1 && !(v6 | flag) )
    {
      v8 = *(_OWORD *)(v44 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v8;
      dest.m256i_i8[24] = 1;
      p_dest = &dest;
      *(_QWORD *)v47 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12C2C0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v62[8] = 0LL;
      *(_QWORD *)&src[16] = &p_dest;
      *(_QWORD *)v62 = 1LL;
      core::option::Option<T>::map_or_else(&v63, src);
      *(_DWORD *)v62 = 1;
      *(_OWORD *)src = v63;
      *(_QWORD *)&src[16] = v64;
      v9 = alloc::boxed::Box<T>::new(src);
LABEL_11:
      v3 = v9;
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v43);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
      return v3;
    }
    if ( (v6 & flag) == 1 && v45 == 1 )
    {
      v10 = *(_OWORD *)(v44 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v10;
      dest.m256i_i8[24] = 1;
      p_dest = &dest;
      *(_QWORD *)v47 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12C2E0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v62[8] = 0LL;
      *(_QWORD *)&src[16] = &p_dest;
      *(_QWORD *)v62 = 1LL;
      core::option::Option<T>::map_or_else(&v65, src);
      *(_DWORD *)v62 = 1;
      *(_OWORD *)src = v65;
      *(_QWORD *)&src[16] = v66;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v45 != 1 )
    {
      v39 = aExtraOperand;
      *(_QWORD *)&v40 = 13LL;
      if ( (v6 | flag ^ 1) != 1 )
      {
        v23 = *(_OWORD *)(v44 + 32);
        p_dest = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v47 = v23;
        v47[16] = 1;
        dest.m256i_i64[0] = (__int64)&v39;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&p_dest;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        if ( v45 == 2 )
        {
          *(_QWORD *)src = &unk_12C300;
          *(_QWORD *)&src[8] = 3LL;
          *(_QWORD *)&v62[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v62 = 2LL;
          v24 = v96;
          core::option::Option<T>::map_or_else(v96, src);
        }
        else
        {
          *(_QWORD *)src = &unk_12C330;
          *(_QWORD *)&src[8] = 2LL;
          *(_QWORD *)&v62[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v62 = 2LL;
          v24 = v97;
          core::option::Option<T>::map_or_else(v97, src);
        }
        v86 = *((_QWORD *)v24 + 2);
        v85 = *(_OWORD *)v24;
        *(_DWORD *)v62 = 1;
        *(_OWORD *)src = v85;
        *(_QWORD *)&src[16] = v86;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
      if ( v45 > 2 )
      {
        v22 = *(_OWORD *)(v44 + 56);
        p_dest = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v47 = v22;
        v47[16] = 1;
        dest.m256i_i64[0] = (__int64)&v39;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&p_dest;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)src = &unk_12C330;
        *(_QWORD *)&src[8] = 2LL;
        *(_QWORD *)&v62[8] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)v62 = 2LL;
        core::option::Option<T>::map_or_else(&v67, src);
        *(_DWORD *)v62 = 1;
        *(_OWORD *)src = v67;
        *(_QWORD *)&src[16] = v68;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
    }
    v12 = *(_QWORD *)(v44 + 8) + *(_QWORD *)(v44 + 16);
    *(_QWORD *)src = *(_QWORD *)(v44 + 8);
    *(_QWORD *)&src[8] = v12;
    src[16] = 0;
    if ( (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(src) & 1) != 0 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aWarningAnUnesc, 64LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v62 = 0;
      v39 = (const char *)alloc::boxed::Box<T>::new(src);
      *(_QWORD *)&v40 = &off_12C448;
      v13 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v39);
      uucore::mods::error::set_exit_code(v13);
      p_dest = (__m256i *)uucore::util_name();
      *(_QWORD *)v47 = v14;
      dest.m256i_i64[0] = (__int64)&p_dest;
      dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m256i_i64[2] = (__int64)&v39;
      dest.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)src = &unk_12C350;
      *(_QWORD *)&src[8] = 3LL;
      *(_QWORD *)&v62[8] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)v62 = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v39, v40);
    }
    v54 = std::io::stdio::stdin();
    v35 = v5;
    v37 = std::io::stdio::Stdin::lock(&v54);
    LOBYTE(v38) = v15 & 1;
    v55 = std::io::stdio::stdout();
    v16 = std::io::stdio::Stdout::lock(&v55);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&p_dest, 0x2000LL, v16);
    v17 = v45 >= 2;
    v34 = flag;
    v18 = ~flag;
    v56[0] = v44;
    v56[1] = v44 + 24 * v45;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v56);
    if ( v19 )
    {
      v20 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              *(_QWORD *)(v19 + 8),
              *(_QWORD *)(v19 + 16));
      LODWORD(v2) = v21;
    }
    else
    {
      v20 = 0LL;
    }
    v25 = v17 & v18;
    v26 = 1;
    v27 = v20;
    if ( !v20 )
    {
      v27 = 1;
      LODWORD(v2) = 0;
    }
    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v56);
    if ( v28 )
    {
      v30 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              *(_QWORD *)(v28 + 8),
              *(_QWORD *)(v28 + 16));
      v29 = v31;
    }
    else
    {
      v30 = 0LL;
    }
    if ( v30 )
      v26 = v30;
    else
      v29 = 0;
    uu_tr::operation::Sequence::solve_set_characters((unsigned int)src, v27, (_DWORD)v2, v26, v29, v35, v25 & v36, v25);
    if ( *(_QWORD *)src == 0x8000000000000000LL )
    {
      dest.m256i_i64[2] = *(_QWORD *)v62;
      *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
      *(_QWORD *)&src[16] = *(_QWORD *)v62;
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      v32 = alloc::boxed::Box<T>::new(src);
LABEL_35:
      v3 = v32;
LABEL_36:
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&p_dest);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v37, v38);
      goto LABEL_12;
    }
    *(_QWORD *)&v88 = *(_QWORD *)&v62[16];
    *(_OWORD *)&dest.m256i_u64[2] = *(_OWORD *)v62;
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
    v51 = *(_OWORD *)&src[8];
    v42 = *(_QWORD *)&v62[16];
    v41 = *(_OWORD *)v62;
    if ( v34 )
    {
      if ( v6 )
      {
        *(_OWORD *)&dest.m256i_u64[1] = v51;
        dest.m256i_i64[0] = *(_QWORD *)src;
        *(_QWORD *)&src[16] = v42;
        *(_OWORD *)src = v41;
        uu_tr::operation::SqueezeOperation::new(v75, src);
        v79 = *(_OWORD *)dest.m256i_i8;
        v80 = dest.m256i_i64[2];
        v81 = v75[0];
        v82 = v75[1];
        v83 = v75[2];
        v84 = v76;
        uu_tr::operation::translate_input(&v37, &p_dest, &v79);
        goto LABEL_51;
      }
      v70 = v51;
      v69 = *(_QWORD *)src;
      uu_tr::operation::translate_input(&v37, &p_dest, &v69, &src[8]);
LABEL_46:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v41);
      goto LABEL_51;
    }
    if ( v6 )
    {
      if ( v7 == 1 )
      {
        *(_OWORD *)&src[8] = v51;
        uu_tr::operation::SqueezeOperation::new(v104, src);
        uu_tr::operation::translate_input(&v37, &p_dest, v104);
        goto LABEL_46;
      }
      *(_QWORD *)v50 = *(_QWORD *)src;
      *(_OWORD *)&v50[8] = v51;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v39, &v41, *(_QWORD *)&v62[16], &src[8]);
      uu_tr::operation::TranslateOperation::new(src, v50, &v39, v33);
      v52 = *(_OWORD *)&src[8];
      v53 = *(_QWORD *)v62;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = v53;
        *(_OWORD *)src = v52;
        v3 = alloc::boxed::Box<T>::new(src);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v41);
        goto LABEL_36;
      }
      v88 = *(_OWORD *)&v62[8];
      *(_OWORD *)&dest.m256i_u64[1] = v52;
      dest.m256i_i64[3] = v53;
      dest.m256i_i64[0] = *(_QWORD *)src;
      *(_QWORD *)&src[16] = v42;
      *(_OWORD *)src = v41;
      uu_tr::operation::SqueezeOperation::new(v77, src);
      v90 = dest;
      v91 = v88;
      v92 = v77[0];
      v93 = v77[1];
      v94 = v77[2];
      v95 = v78;
      uu_tr::operation::translate_input(&v37, &p_dest, &v90);
    }
    else
    {
      v39 = *(const char **)src;
      v40 = v51;
      dest.m256i_i64[2] = v42;
      *(_OWORD *)dest.m256i_i8 = v41;
      uu_tr::operation::TranslateOperation::new(src, &v39, &dest, &src[8]);
      *(_OWORD *)v50 = *(_OWORD *)&src[8];
      *(_QWORD *)&v50[16] = *(_QWORD *)v62;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = *(_QWORD *)&v50[16];
        *(_OWORD *)src = *(_OWORD *)v50;
        v32 = alloc::boxed::Box<T>::new(src);
        goto LABEL_35;
      }
      v74 = *(_OWORD *)&v62[8];
      v71 = *(_QWORD *)src;
      v72 = *(_OWORD *)v50;
      v73 = *(_QWORD *)&v50[16];
      uu_tr::operation::translate_input(&v37, &p_dest, &v71);
    }
LABEL_51:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&p_dest);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v37, v38);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v43);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
    return 0LL;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v47);
}
