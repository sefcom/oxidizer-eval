__int64 __fastcall uu_factor::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 flag; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // dl
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  char v16; // r15
  unsigned __int8 *v17; // r12
  unsigned __int8 *v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r10
  char v21; // al
  char v22; // al
  __int64 v23; // r14
  unsigned int v24; // eax
  int v25; // eax
  int v26; // edi
  int v27; // esi
  __int128 *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  __int128 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int128 v34; // rax
  __int128 v35; // rax
  unsigned int v36; // ebx
  __int128 *v37; // r14
  __int64 v38; // r15
  __int64 v39; // rsi
  char v41; // [rsp+7h] [rbp-441h]
  __int128 *v42; // [rsp+8h] [rbp-440h] BYREF
  __int128 v43; // [rsp+10h] [rbp-438h]
  char *v44; // [rsp+20h] [rbp-428h] BYREF
  __int64 v45; // [rsp+28h] [rbp-420h] BYREF
  char v46; // [rsp+30h] [rbp-418h]
  int v47; // [rsp+3Ch] [rbp-40Ch]
  __int128 v48; // [rsp+40h] [rbp-408h] BYREF
  __int128 v49; // [rsp+50h] [rbp-3F8h]
  __int128 v50; // [rsp+60h] [rbp-3E8h]
  __int128 v51; // [rsp+70h] [rbp-3D8h]
  __int64 v52; // [rsp+80h] [rbp-3C8h]
  __int128 **v53; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+90h] [rbp-3B8h]
  __int128 *v55; // [rsp+98h] [rbp-3B0h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-3A8h]
  _OWORD *v57; // [rsp+B0h] [rbp-398h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+B8h] [rbp-390h]
  _OWORD v59[3]; // [rsp+D8h] [rbp-370h] BYREF
  __int64 v60; // [rsp+108h] [rbp-340h]
  unsigned __int64 v61; // [rsp+110h] [rbp-338h]
  __int64 v62; // [rsp+118h] [rbp-330h]
  __int64 v63; // [rsp+120h] [rbp-328h]
  __int64 v64; // [rsp+128h] [rbp-320h] BYREF
  __int64 v65; // [rsp+130h] [rbp-318h] BYREF
  __int128 v66; // [rsp+138h] [rbp-310h] BYREF
  __int64 v67; // [rsp+148h] [rbp-300h]
  __int128 v68; // [rsp+150h] [rbp-2F8h] BYREF
  __int128 v69; // [rsp+160h] [rbp-2E8h]
  __int128 v70; // [rsp+170h] [rbp-2D8h]
  __int128 v71; // [rsp+180h] [rbp-2C8h]
  char v72; // [rsp+190h] [rbp-2B8h] BYREF

  uu_factor::uu_app(&v68);
  clap_builder::builder::command::Command::try_get_matches_from(&v48, &v68, a1, a2);
  v61 = 0x8000000000000000LL;
  if ( (_QWORD)v48 == 0x8000000000000000LL )
  {
    v6 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v48 + 1));
    flag = v2;
    if ( v6 )
      goto LABEL_60;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v60 = v51;
  v59[2] = v50;
  v59[1] = v49;
  v59[0] = v48;
  flag = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                         v59,
                         aExponents,
                         *(&uu_factor::options::EXPONENTS + 1));
  v64 = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(&v64);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v57, "_Unwind_GetLanguageSpecificData", v8);
  v9 = (__int64)*(&uu_factor::options::NUMBER + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v68, v59, aNumber, v9);
  clap_builder::parser::error::MatchesError::unwrap(&v48, aNumber, v9, &v68);
  if ( (_QWORD)v48 )
  {
    v71 = v51;
    v70 = v50;
    v69 = v49;
    v68 = v48;
    while ( 1 )
    {
      v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v68);
      if ( !v10 )
        goto LABEL_52;
      v6 = uu_factor::print_factors_str(*(_QWORD *)(v10 + 8), *(__int128 **)(v10 + 16), &v57, flag);
      if ( v6 )
      {
        flag = v11;
        goto LABEL_59;
      }
    }
  }
  v65 = std::io::stdio::stdin();
  v45 = std::io::stdio::Stdin::lock(&v65);
  v46 = v12 & 1;
  v47 = (unsigned __int8)flag;
LABEL_10:
  <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v55, &v45);
  if ( v55 == (__int128 *)0x8000000000000001LL )
  {
    v29 = v45;
    if ( !v46
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *(_BYTE *)(v29 + 4) = 1;
    }
    if ( _InterlockedExchange((volatile __int32 *)v29, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v29);
LABEL_52:
    v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v57);
    if ( v30 )
    {
      v55 = (__int128 *)v30;
      *(_QWORD *)&v31 = uucore::util_name();
      v48 = v31;
      v42 = &v48;
      *(_QWORD *)&v43 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v68 = &unk_136D28;
      *((_QWORD *)&v68 + 1) = 2LL;
      *(_QWORD *)&v70 = 0LL;
      *(_QWORD *)&v69 = &v42;
      *((_QWORD *)&v69 + 1) = 1LL;
      std::io::stdio::_eprint(&v68);
      *(_QWORD *)&v48 = &v55;
      *((_QWORD *)&v48 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v68 = &unk_136D48;
      *((_QWORD *)&v68 + 1) = 2LL;
      *(_QWORD *)&v70 = 0LL;
      *(_QWORD *)&v69 = &v48;
      *((_QWORD *)&v69 + 1) = 1LL;
      std::io::stdio::_eprint(&v68);
      core::ptr::drop_in_place<std::io::error::Error>(v55);
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v57);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  if ( v55 == (__int128 *)v61 )
  {
    v44 = (char *)v56;
    uucore::mods::error::set_exit_code(1LL);
    v42 = (__int128 *)uucore::util_name();
    *(_QWORD *)&v43 = v32;
    v53 = &v42;
    v54 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68 = &unk_136D28;
    *((_QWORD *)&v68 + 1) = 2LL;
    *(_QWORD *)&v70 = 0LL;
    *(_QWORD *)&v69 = &v53;
    *((_QWORD *)&v69 + 1) = 1LL;
    std::io::stdio::_eprint(&v68);
    v42 = (__int128 *)&v44;
    *(_QWORD *)&v43 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v68 = &off_136D88;
    *((_QWORD *)&v68 + 1) = 2LL;
    *(_QWORD *)&v70 = 0LL;
    *(_QWORD *)&v69 = &v42;
    *((_QWORD *)&v69 + 1) = 1LL;
    std::io::stdio::_eprint(&v68);
    core::ptr::drop_in_place<std::io::error::Error>(v44);
    v6 = 0LL;
    goto LABEL_56;
  }
  v14 = *((_QWORD *)&v56 + 1);
  v42 = v55;
  v43 = v56;
  v15 = (unsigned __int8 *)(v56 + *((_QWORD *)&v56 + 1));
  *(_QWORD *)&v68 = 0LL;
  *((_QWORD *)&v68 + 1) = *((_QWORD *)&v56 + 1);
  v69 = v56;
  *(_QWORD *)&v70 = v56;
  *((_QWORD *)&v70 + 1) = v56 + *((_QWORD *)&v56 + 1);
  *(_QWORD *)&v71 = 0LL;
  WORD4(v71) = 1;
  while ( 2 )
  {
    v44 = &v72;
    v16 = BYTE9(v71);
    v52 = *((_QWORD *)&v68 + 1);
    flag = v68;
    v63 = v69;
    v17 = (unsigned __int8 *)*((_QWORD *)&v70 + 1);
    v41 = BYTE8(v71);
    v18 = (unsigned __int8 *)v70;
    v19 = v71;
    do
    {
      if ( v16 )
        goto LABEL_48;
      v20 = flag;
      if ( v18 == v17 )
        goto LABEL_41;
      v13 = 0x100003E00LL;
      do
      {
        v15 = v18;
        v23 = v19;
        v14 = *v18;
        if ( (v14 & 0x80u) != 0LL )
        {
          v25 = v14 & 0x1F;
          v26 = v18[1] & 0x3F;
          if ( (unsigned __int8)v14 <= 0xDFu )
          {
            v18 += 2;
            v24 = v26 | (v25 << 6);
          }
          else
          {
            v27 = (v26 << 6) | v18[2] & 0x3F;
            if ( (unsigned __int8)v14 < 0xF0u )
            {
              v18 += 3;
              v24 = v27 | (v25 << 12);
            }
            else
            {
              v18 += 4;
              v14 = (v27 << 6) | v15[3] & 0x3Fu;
              v24 = v14 | ((v25 & 7) << 18);
            }
          }
        }
        else
        {
          ++v18;
          v24 = v14;
        }
        v19 += v18 - v15;
        if ( v24 <= 0x20 )
        {
          v15 = (unsigned __int8 *)v24;
          if ( _bittest64(&v13, v24) )
          {
LABEL_39:
            *(_QWORD *)&v70 = v18;
            *(_QWORD *)&v71 = v19;
            *(_QWORD *)&v68 = v19;
            v16 = 0;
            flag = v19;
            goto LABEL_45;
          }
        }
        if ( v24 >= 0x80 )
        {
          v15 = (unsigned __int8 *)(v24 >> 8);
          if ( v24 >> 8 > 0x1F )
          {
            if ( (_DWORD)v15 != 32 )
            {
              if ( (_DWORD)v15 != 48 )
                continue;
              v22 = v24 == 12288;
              goto LABEL_19;
            }
            v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
            v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v24] >> 1;
          }
          else
          {
            if ( (_DWORD)v15 )
            {
              if ( (_DWORD)v15 != 22 )
                continue;
              v22 = v24 == 5760;
              goto LABEL_19;
            }
            v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
            v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v24];
          }
          v22 = v21 & 1;
LABEL_19:
          if ( v22 )
            goto LABEL_39;
        }
      }
      while ( v18 != v17 );
      *(_QWORD *)&v70 = v17;
      *(_QWORD *)&v71 = v19;
LABEL_41:
      BYTE9(v71) = 1;
      v16 = 1;
      if ( v41 )
      {
        v18 = v17;
        v23 = v52;
      }
      else
      {
        v18 = v17;
        v23 = v52;
        if ( v52 == flag )
        {
LABEL_48:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42);
          goto LABEL_10;
        }
      }
LABEL_45:
      v28 = (__int128 *)(v23 - v20);
      v62 = v63 + v20;
      v53 = (__int128 **)(v63 + v20);
      v54 = (__int64 (__fastcall *)())v28;
    }
    while ( !(unsigned __int8)core::ops::function::impls::<impl core::ops::function::FnMut<A> for &mut F>::call_mut(
                                &v44,
                                &v53,
                                v14,
                                v15,
                                v13) );
    v6 = uu_factor::print_factors_str(v62, v28, &v57, v47);
    if ( !v6 )
      continue;
    break;
  }
  flag = v14;
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42);
LABEL_56:
  v33 = v45;
  if ( !v46
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v33 + 4) = 1;
  }
  if ( _InterlockedExchange((volatile __int32 *)v33, 0) == 2 )
    std::sys::sync::mutex::futex::Mutex::wake(v33);
LABEL_59:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v57);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
  if ( !v6 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_60:
  v42 = (__int128 *)v6;
  *(_QWORD *)&v43 = flag;
  *(_QWORD *)&v48 = &v42;
  *((_QWORD *)&v48 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v68 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v68 + 1) = 1LL;
  *(_QWORD *)&v70 = 0LL;
  *(_QWORD *)&v69 = &v48;
  *((_QWORD *)&v69 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v66, &v68, v2, v3, v4, v5);
  v48 = v66;
  *(_QWORD *)&v49 = v67;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v66 + 1), v67, 1LL, 0LL) )
  {
    *(_QWORD *)&v34 = uucore::util_name();
    v59[0] = v34;
    v57 = v59;
    v58 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68 = &unk_136D28;
    *((_QWORD *)&v68 + 1) = 2LL;
    *(_QWORD *)&v70 = 0LL;
    *(_QWORD *)&v69 = &v57;
    *((_QWORD *)&v69 + 1) = 1LL;
    std::io::stdio::_eprint(&v68);
    *(_QWORD *)&v59[0] = &v48;
    *((_QWORD *)&v59[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v68 = &unk_136D48;
    *((_QWORD *)&v68 + 1) = 2LL;
    *(_QWORD *)&v70 = 0LL;
    *(_QWORD *)&v69 = v59;
    *((_QWORD *)&v69 + 1) = 1LL;
    std::io::stdio::_eprint(&v68);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v43 + 104))(v42) )
  {
    *(_QWORD *)&v35 = uucore::execution_phrase();
    v59[0] = v35;
    v57 = v59;
    v58 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68 = &off_136D68;
    *((_QWORD *)&v68 + 1) = 2LL;
    *(_QWORD *)&v70 = 0LL;
    *(_QWORD *)&v69 = &v57;
    *((_QWORD *)&v69 + 1) = 1LL;
    std::io::stdio::_eprint(&v68);
  }
  v36 = (*(__int64 (__fastcall **)(__int128 *))(v43 + 96))(v42);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
  v37 = v42;
  v38 = v43;
  if ( *(_QWORD *)v43 )
    (*(void (__fastcall **)(__int128 *))v43)(v42);
  v39 = *(_QWORD *)(v38 + 8);
  if ( v39 )
    _rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16));
  return v36;
}
