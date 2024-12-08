__int64 __fastcall uu_tr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 flag; // bl
  unsigned __int8 v4; // r14
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
  int v21; // edx
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  _BYTE *v24; // rbx
  char v25; // bl
  int v26; // r14d
  __int64 v27; // rax
  int v28; // r8d
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int8 v33; // [rsp+5h] [rbp-A13h]
  unsigned __int8 v34; // [rsp+6h] [rbp-A12h]
  char v35; // [rsp+7h] [rbp-A11h]
  __int64 v36; // [rsp+8h] [rbp-A10h] BYREF
  unsigned int v37; // [rsp+10h] [rbp-A08h]
  const char *v38; // [rsp+18h] [rbp-A00h] BYREF
  __int128 v39; // [rsp+20h] [rbp-9F8h]
  __int128 v40; // [rsp+30h] [rbp-9E8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-9D8h]
  _BYTE v42[8]; // [rsp+50h] [rbp-9C8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-9C0h]
  unsigned __int64 v44; // [rsp+60h] [rbp-9B8h]
  __m256i *v45; // [rsp+68h] [rbp-9B0h] BYREF
  _BYTE v46[24]; // [rsp+70h] [rbp-9A8h]
  __int128 v47; // [rsp+88h] [rbp-990h]
  __int64 v48; // [rsp+98h] [rbp-980h]
  _BYTE v49[24]; // [rsp+A0h] [rbp-978h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-958h]
  __int128 v51; // [rsp+D0h] [rbp-948h]
  __int64 v52; // [rsp+E0h] [rbp-938h]
  __int64 v53; // [rsp+E8h] [rbp-930h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-928h] BYREF
  _QWORD v55[2]; // [rsp+F8h] [rbp-920h] BYREF
  _QWORD v56[2]; // [rsp+108h] [rbp-910h] BYREF
  __int128 v57; // [rsp+118h] [rbp-900h]
  __int128 v58; // [rsp+128h] [rbp-8F0h]
  __int64 v59; // [rsp+138h] [rbp-8E0h]
  _BYTE src[24]; // [rsp+140h] [rbp-8D8h] BYREF
  _BYTE v61[24]; // [rsp+158h] [rbp-8C0h]
  __int128 v62; // [rsp+410h] [rbp-608h] BYREF
  __int64 v63; // [rsp+420h] [rbp-5F8h]
  __int128 v64; // [rsp+428h] [rbp-5F0h] BYREF
  __int64 v65; // [rsp+438h] [rbp-5E0h]
  __int128 v66; // [rsp+440h] [rbp-5D8h] BYREF
  __int64 v67; // [rsp+450h] [rbp-5C8h]
  __int64 v68; // [rsp+458h] [rbp-5C0h] BYREF
  __int128 v69; // [rsp+460h] [rbp-5B8h]
  __int64 v70; // [rsp+470h] [rbp-5A8h] BYREF
  __int128 v71; // [rsp+478h] [rbp-5A0h]
  __int64 v72; // [rsp+488h] [rbp-590h]
  __int128 v73; // [rsp+490h] [rbp-588h]
  _OWORD v74[3]; // [rsp+4A0h] [rbp-578h] BYREF
  __int64 v75; // [rsp+4D0h] [rbp-548h]
  _OWORD v76[3]; // [rsp+4D8h] [rbp-540h] BYREF
  __int64 v77; // [rsp+508h] [rbp-510h]
  __int128 v78; // [rsp+510h] [rbp-508h] BYREF
  __int64 v79; // [rsp+520h] [rbp-4F8h]
  __int128 v80; // [rsp+528h] [rbp-4F0h]
  __int128 v81; // [rsp+538h] [rbp-4E0h]
  __int128 v82; // [rsp+548h] [rbp-4D0h]
  __int64 v83; // [rsp+558h] [rbp-4C0h]
  __int128 v84; // [rsp+560h] [rbp-4B8h]
  __int64 v85; // [rsp+570h] [rbp-4A8h]
  __m256i dest; // [rsp+580h] [rbp-498h] BYREF
  __int128 v87; // [rsp+5A0h] [rbp-478h]
  __int128 v88; // [rsp+5B0h] [rbp-468h]
  __m256i v89; // [rsp+850h] [rbp-1C8h] BYREF
  __int128 v90; // [rsp+870h] [rbp-1A8h]
  __int128 v91; // [rsp+880h] [rbp-198h]
  __int128 v92; // [rsp+890h] [rbp-188h]
  __int128 v93; // [rsp+8A0h] [rbp-178h]
  __int64 v94; // [rsp+8B0h] [rbp-168h]
  _BYTE v95[24]; // [rsp+8B8h] [rbp-160h] BYREF
  _BYTE v96[24]; // [rsp+8D0h] [rbp-148h] BYREF
  __int64 v97; // [rsp+8E8h] [rbp-130h] BYREF
  __m256i v98; // [rsp+8F0h] [rbp-128h]
  __int128 v99; // [rsp+910h] [rbp-108h]
  __int128 v100; // [rsp+920h] [rbp-F8h]
  __int64 v101; // [rsp+930h] [rbp-E8h]
  __int64 v102; // [rsp+970h] [rbp-A8h]
  _BYTE v103[104]; // [rsp+9B0h] [rbp-68h] BYREF

  uu_tr::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&v45, &dest, a1, a2);
  if ( v45 != (__m256i *)0x8000000000000000LL )
  {
    v59 = v48;
    v58 = v47;
    v57 = *(_OWORD *)&v46[8];
    v56[0] = v45;
    v56[1] = *(_QWORD *)v46;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v56, aDelete, 6LL);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v56, aComplement, 10LL);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v56, aSqueezeRepeats, 15LL);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v56, aTruncateSet1, 13LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v56, aSets, 4LL);
    p_dest = &dest;
    clap_builder::parser::error::MatchesError::unwrap(&dest, aSets, 4LL, src);
    v98 = dest;
    v99 = v87;
    v100 = v88;
    v97 = 1LL;
    v101 = 0LL;
    v102 = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v42, &v97);
    v7 = v44;
    if ( !v44 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aMissingOperand, 15LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v61 = 1;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v44 == 1 && !(v5 | flag) )
    {
      v8 = *(_OWORD *)(v43 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v8;
      dest.m256i_i8[24] = 1;
      v45 = &dest;
      *(_QWORD *)v46 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12CBB0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v61[8] = 0LL;
      *(_QWORD *)&src[16] = &v45;
      *(_QWORD *)v61 = 1LL;
      core::option::Option<T>::map_or_else(&v62, src);
      *(_DWORD *)v61 = 1;
      *(_OWORD *)src = v62;
      *(_QWORD *)&src[16] = v63;
      v9 = alloc::boxed::Box<T>::new(src);
LABEL_11:
      v2 = v9;
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v42);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v56);
      return v2;
    }
    if ( (v5 & flag) == 1 && v44 == 1 )
    {
      v10 = *(_OWORD *)(v43 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v10;
      dest.m256i_i8[24] = 1;
      v45 = &dest;
      *(_QWORD *)v46 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_12CDA0;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&v61[8] = 0LL;
      *(_QWORD *)&src[16] = &v45;
      *(_QWORD *)v61 = 1LL;
      core::option::Option<T>::map_or_else(&v64, src);
      *(_DWORD *)v61 = 1;
      *(_OWORD *)src = v64;
      *(_QWORD *)&src[16] = v65;
      v9 = alloc::boxed::Box<T>::new(src);
      goto LABEL_11;
    }
    if ( v44 != 1 )
    {
      v38 = aExtraOperand;
      *(_QWORD *)&v39 = 13LL;
      if ( (v5 | flag ^ 1) != 1 )
      {
        v23 = *(_OWORD *)(v43 + 32);
        v45 = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v46 = v23;
        v46[16] = 1;
        dest.m256i_i64[0] = (__int64)&v38;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&v45;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        if ( v44 == 2 )
        {
          *(_QWORD *)src = &unk_12CBD0;
          *(_QWORD *)&src[8] = 3LL;
          *(_QWORD *)&v61[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v61 = 2LL;
          v24 = v95;
          core::option::Option<T>::map_or_else(v95, src);
        }
        else
        {
          *(_QWORD *)src = &unk_12CC00;
          *(_QWORD *)&src[8] = 2LL;
          *(_QWORD *)&v61[8] = 0LL;
          *(_QWORD *)&src[16] = &dest;
          *(_QWORD *)v61 = 2LL;
          v24 = v96;
          core::option::Option<T>::map_or_else(v96, src);
        }
        v85 = *((_QWORD *)v24 + 2);
        v84 = *(_OWORD *)v24;
        *(_DWORD *)v61 = 1;
        *(_OWORD *)src = v84;
        *(_QWORD *)&src[16] = v85;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
      if ( v44 > 2 )
      {
        v22 = *(_OWORD *)(v43 + 56);
        v45 = (__m256i *)(&dword_0 + 1);
        *(_OWORD *)v46 = v22;
        v46[16] = 1;
        dest.m256i_i64[0] = (__int64)&v38;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&v45;
        dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)src = &unk_12CC00;
        *(_QWORD *)&src[8] = 2LL;
        *(_QWORD *)&v61[8] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)v61 = 2LL;
        core::option::Option<T>::map_or_else(&v66, src);
        *(_DWORD *)v61 = 1;
        *(_OWORD *)src = v66;
        *(_QWORD *)&src[16] = v67;
        v9 = alloc::boxed::Box<T>::new(src);
        goto LABEL_11;
      }
    }
    v12 = *(_QWORD *)(v43 + 8) + *(_QWORD *)(v43 + 16);
    *(_QWORD *)src = *(_QWORD *)(v43 + 8);
    *(_QWORD *)&src[8] = v12;
    src[16] = 0;
    if ( (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(src) & 1) != 0 )
    {
      p_dest = &dest;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, aWarningAnUnesc, 64LL);
      *(_QWORD *)&src[16] = dest.m256i_i64[2];
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      *(_DWORD *)v61 = 0;
      v38 = (const char *)alloc::boxed::Box<T>::new(src);
      *(_QWORD *)&v39 = &off_12CC58;
      v13 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v38);
      uucore::mods::error::set_exit_code(v13);
      v45 = (__m256i *)uucore::util_name();
      *(_QWORD *)v46 = v14;
      dest.m256i_i64[0] = (__int64)&v45;
      dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m256i_i64[2] = (__int64)&v38;
      dest.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)src = &unk_12CCC8;
      *(_QWORD *)&src[8] = 3LL;
      *(_QWORD *)&v61[8] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)v61 = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v38, v39);
    }
    v53 = std::io::stdio::stdin();
    v34 = v4;
    v36 = std::io::stdio::Stdin::lock(&v53);
    LOBYTE(v37) = v15 & 1;
    v54 = std::io::stdio::stdout();
    v16 = std::io::stdio::Stdout::lock(&v54);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v45, 0x2000LL, v16);
    v17 = v44 >= 2;
    v33 = flag;
    v18 = ~flag;
    v55[0] = v43;
    v55[1] = v43 + 24 * v44;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v55);
    if ( v19 )
    {
      v20 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              *(_QWORD *)(v19 + 8),
              *(_QWORD *)(v19 + 16));
      LODWORD(p_dest) = v21;
    }
    else
    {
      v20 = 0LL;
    }
    v25 = v17 & v18;
    if ( !v20 )
      LODWORD(p_dest) = 0;
    v26 = 1;
    if ( !v20 )
      LODWORD(v20) = 1;
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v55);
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
      v28 = 0;
    uu_tr::operation::Sequence::solve_set_characters(
      (unsigned int)src,
      v20,
      (_DWORD)p_dest,
      v26,
      v28,
      v34,
      v25 & v35,
      v25);
    if ( *(_QWORD *)src == 0x8000000000000000LL )
    {
      dest.m256i_i64[2] = *(_QWORD *)v61;
      *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
      *(_QWORD *)&src[16] = *(_QWORD *)v61;
      *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
      v31 = alloc::boxed::Box<T>::new(src);
LABEL_37:
      v2 = v31;
LABEL_38:
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v45);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v36, v37);
      goto LABEL_12;
    }
    *(_QWORD *)&v87 = *(_QWORD *)&v61[16];
    *(_OWORD *)&dest.m256i_u64[2] = *(_OWORD *)v61;
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
    v50 = *(_OWORD *)&src[8];
    v41 = *(_QWORD *)&v61[16];
    v40 = *(_OWORD *)v61;
    if ( v33 )
    {
      if ( v5 )
      {
        *(_OWORD *)&dest.m256i_u64[1] = v50;
        dest.m256i_i64[0] = *(_QWORD *)src;
        *(_QWORD *)&src[16] = v41;
        *(_OWORD *)src = v40;
        uu_tr::operation::SqueezeOperation::new(v74, src);
        v78 = *(_OWORD *)dest.m256i_i8;
        v79 = dest.m256i_i64[2];
        v80 = v74[0];
        v81 = v74[1];
        v82 = v74[2];
        v83 = v75;
        uu_tr::operation::translate_input((__int64)&v36, (__int64)&v45, (__int64)&v78);
        goto LABEL_53;
      }
      v69 = v50;
      v68 = *(_QWORD *)src;
      uu_tr::operation::translate_input((__int64)&v36, (__int64)&v45, (__int64)&v68);
LABEL_48:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
      goto LABEL_53;
    }
    if ( v5 )
    {
      if ( v7 == 1 )
      {
        *(_OWORD *)&src[8] = v50;
        uu_tr::operation::SqueezeOperation::new(v103, src);
        uu_tr::operation::translate_input((__int64)&v36, (__int64)&v45, (__int64)v103);
        goto LABEL_48;
      }
      *(_QWORD *)v49 = *(_QWORD *)src;
      *(_OWORD *)&v49[8] = v50;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v38, &v40, *(_QWORD *)&v61[16], &src[8]);
      uu_tr::operation::TranslateOperation::new(src, v49, &v38, v32);
      v51 = *(_OWORD *)&src[8];
      v52 = *(_QWORD *)v61;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = v52;
        *(_OWORD *)src = v51;
        v2 = alloc::boxed::Box<T>::new(src);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
        goto LABEL_38;
      }
      v87 = *(_OWORD *)&v61[8];
      *(_OWORD *)&dest.m256i_u64[1] = v51;
      dest.m256i_i64[3] = v52;
      dest.m256i_i64[0] = *(_QWORD *)src;
      *(_QWORD *)&src[16] = v41;
      *(_OWORD *)src = v40;
      uu_tr::operation::SqueezeOperation::new(v76, src);
      v89 = dest;
      v90 = v87;
      v91 = v76[0];
      v92 = v76[1];
      v93 = v76[2];
      v94 = v77;
      uu_tr::operation::translate_input((__int64)&v36, (__int64)&v45, (__int64)&v89);
    }
    else
    {
      v38 = *(const char **)src;
      v39 = v50;
      dest.m256i_i64[2] = v41;
      *(_OWORD *)dest.m256i_i8 = v40;
      uu_tr::operation::TranslateOperation::new(src, &v38, &dest, &src[8]);
      *(_OWORD *)v49 = *(_OWORD *)&src[8];
      *(_QWORD *)&v49[16] = *(_QWORD *)v61;
      if ( !*(_QWORD *)src )
      {
        *(_QWORD *)&src[16] = *(_QWORD *)&v49[16];
        *(_OWORD *)src = *(_OWORD *)v49;
        v31 = alloc::boxed::Box<T>::new(src);
        goto LABEL_37;
      }
      v73 = *(_OWORD *)&v61[8];
      v70 = *(_QWORD *)src;
      v71 = *(_OWORD *)v49;
      v72 = *(_QWORD *)&v49[16];
      uu_tr::operation::translate_input((__int64)&v36, (__int64)&v45, (__int64)&v70);
    }
LABEL_53:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v45);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v36, v37);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v42);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v56);
    return 0LL;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v46);
}
