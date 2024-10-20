__int64 __fastcall uu_numfmt::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // rax
  __int128 v8; // rax
  unsigned int v9; // ebx
  __int128 v10; // kr00_16
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rdx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  __int64 (__fastcall **v22)(); // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  _OWORD *v26; // rax
  __int128 v27; // xmm0
  __m256i v28; // [rsp+0h] [rbp-4D8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-4B0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-4A8h] BYREF
  char v31; // [rsp+38h] [rbp-4A0h]
  __int128 v32; // [rsp+40h] [rbp-498h] BYREF
  __int64 v33; // [rsp+50h] [rbp-488h]
  __int64 *v34; // [rsp+58h] [rbp-480h] BYREF
  __m256i v35; // [rsp+60h] [rbp-478h] BYREF
  __int128 v36; // [rsp+80h] [rbp-458h]
  __int128 v37; // [rsp+90h] [rbp-448h]
  __m256i v38; // [rsp+A8h] [rbp-430h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-410h]
  __int64 v40; // [rsp+D8h] [rbp-400h]
  unsigned __int64 v41; // [rsp+E0h] [rbp-3F8h]
  __int64 v42; // [rsp+E8h] [rbp-3F0h] BYREF
  __m256i v43; // [rsp+F0h] [rbp-3E8h] BYREF
  _OWORD dest[11]; // [rsp+110h] [rbp-3C8h] BYREF
  __int128 v45; // [rsp+1C8h] [rbp-310h] BYREF
  __int64 v46; // [rsp+1D8h] [rbp-300h]
  __m256i v47; // [rsp+1E0h] [rbp-2F8h] BYREF
  _OWORD src[45]; // [rsp+200h] [rbp-2D8h] BYREF

  uu_numfmt::uu_app(&v47);
  clap_builder::builder::command::Command::try_get_matches_from(&v43, &v47, a1, a2);
  if ( v43.m256i_i64[0] == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43.m256i_i64[1]);
    v4 = v3;
    if ( !v2 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    goto LABEL_7;
  }
  v40 = *(_QWORD *)&dest[1];
  v39 = dest[0];
  v38 = v43;
  uu_numfmt::parse_options(&v47, &v38);
  if ( v47.m256i_i64[0] == 2 )
  {
    *(_OWORD *)v28.m256i_i8 = *(_OWORD *)&v47.m256i_u64[1];
    v28.m256i_i64[2] = v47.m256i_i64[3];
    v47.m256i_i64[0] = 1LL;
    v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v2 = (__int64)v5;
    v6 = *(_OWORD *)v47.m256i_i8;
    v5[1] = *(_OWORD *)&v47.m256i_u64[2];
    *v5 = v6;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v38);
    v4 = &off_F8060;
    goto LABEL_7;
  }
  v4 = (__int64 (__fastcall **)())v47.m256i_i64[1];
  *(_OWORD *)v35.m256i_i8 = *(_OWORD *)&v47.m256i_u64[2];
  v35.m256i_i64[2] = *(_QWORD *)&src[0];
  memcpy((char *)dest + 8, (char *)src + 8, 0xA8uLL);
  *(_OWORD *)v28.m256i_i8 = *(_OWORD *)&v47.m256i_u64[2];
  v43 = v47;
  *(_QWORD *)&dest[0] = *(_QWORD *)&src[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v47, &v38, aNumber, 6LL);
  clap_builder::parser::error::MatchesError::unwrap(&v35, aNumber, 6LL, &v47);
  if ( v35.m256i_i64[0] )
  {
    src[1] = v37;
    src[0] = v36;
    v47 = v35;
    while ( 1 )
    {
      v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v47);
      if ( !v12 )
        goto LABEL_34;
      v2 = uu_numfmt::format_and_handle_validation(*(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16), &v43);
      if ( v2 )
      {
        v4 = v13;
        goto LABEL_32;
      }
    }
  }
  v42 = std::io::stdio::stdin();
  v30 = std::io::stdio::Stdin::lock(&v42);
  v31 = v14 & 1;
  v34 = &v30;
  <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v47, &v34);
  v18 = v47.m256i_i64[0];
  if ( v47.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_27:
    v2 = 0LL;
LABEL_28:
    v23 = v30;
    if ( !v31 )
    {
LABEL_41:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
      {
        *(_BYTE *)(v23 + 4) = 1;
      }
    }
  }
  else
  {
    v19 = *(_QWORD *)&dest[10];
    v41 = *(_QWORD *)&dest[10];
    v20 = 0LL;
    while ( v18 != 0x8000000000000000LL )
    {
      v21 = v47.m256i_i64[2];
      if ( v20 >= v41 )
      {
        v47.m256i_i64[0] = v18;
        v2 = uu_numfmt::format_and_handle_validation(v47.m256i_i64[1], v47.m256i_i64[2], &v43);
        v4 = v22;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v47);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
        if ( v2 )
          goto LABEL_28;
      }
      else
      {
        *(_OWORD *)&v28.m256i_u64[1] = *(_OWORD *)&v47.m256i_u64[1];
        *(_QWORD *)&v32 = &v28;
        *((_QWORD *)&v32 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v47.m256i_i64[0] = (__int64)&unk_F8008;
        v47.m256i_i64[1] = 2LL;
        *(_QWORD *)&src[0] = 0LL;
        v47.m256i_i64[2] = (__int64)&v32;
        v47.m256i_i64[3] = 1LL;
        std::io::stdio::_print(&v47, v21, v15, v19, v16, v17, v18, v28.m256i_i64[1], v28.m256i_i64[2]);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
      }
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v47, &v34);
      v18 = v47.m256i_i64[0];
      ++v20;
      if ( v47.m256i_i64[0] == 0x8000000000000001LL )
        goto LABEL_27;
    }
    v29 = v47.m256i_i64[1];
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = 1LL;
    v33 = 0LL;
    *(_QWORD *)&src[1] = 32LL;
    BYTE8(src[1]) = 3;
    v47.m256i_i64[0] = 0LL;
    v47.m256i_i64[2] = 0LL;
    *(_QWORD *)&src[0] = &v32;
    *((_QWORD *)&src[0] + 1) = &off_F7F60;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v29, &v47) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v28, &unk_F7FA8, &off_F7F90);
    *(_OWORD *)&v28.m256i_u64[1] = v32;
    v28.m256i_i64[3] = v33;
    v28.m256i_i64[0] = 0LL;
    v26 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v26 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v2 = (__int64)v26;
    v27 = *(_OWORD *)v28.m256i_i8;
    v26[1] = *(_OWORD *)&v28.m256i_u64[2];
    *v26 = v27;
    core::ptr::drop_in_place<std::io::error::Error>(&v29);
    v4 = &off_F8060;
    v23 = v30;
    if ( !v31 )
      goto LABEL_41;
  }
  if ( _InterlockedExchange((volatile __int32 *)v23, 0) == 2 )
    std::sys::sync::mutex::futex::Mutex::wake(v23);
  if ( !v2 )
  {
LABEL_34:
    v2 = 0LL;
    goto LABEL_35;
  }
LABEL_32:
  v35.m256i_i64[0] = std::io::stdio::stdout();
  v24 = <std::io::stdio::Stdout as std::io::Write>::flush(&v35);
  if ( v24 )
  {
    v47.m256i_i64[0] = v24;
    core::result::unwrap_failed(aErrorFlushingS, 21LL, &v47, &off_F7FC8, &off_F8110);
  }
LABEL_35:
  core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v43);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v38);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_7:
  v28.m256i_i64[0] = v2;
  v28.m256i_i64[1] = (__int64)v4;
  v43.m256i_i64[0] = (__int64)&v28;
  v43.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v47.m256i_i64[0] = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v47.m256i_i64[1] = 1LL;
  *(_QWORD *)&src[0] = 0LL;
  v47.m256i_i64[2] = (__int64)&v43;
  v47.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v45, &v47);
  *(_OWORD *)v43.m256i_i8 = v45;
  v43.m256i_i64[2] = v46;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v45 + 1), v46, 1LL, 0LL) )
  {
    *(_QWORD *)&v7 = uucore::util_name();
    *(_OWORD *)v35.m256i_i8 = v7;
    v38.m256i_i64[0] = (__int64)&v35;
    v38.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v47.m256i_i64[0] = (__int64)&unk_F80D0;
    v47.m256i_i64[1] = 2LL;
    *(_QWORD *)&src[0] = 0LL;
    v47.m256i_i64[2] = (__int64)&v38;
    v47.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v47);
    v35.m256i_i64[0] = (__int64)&v43;
    v35.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v47.m256i_i64[0] = (__int64)&unk_F8008;
    v47.m256i_i64[1] = 2LL;
    *(_QWORD *)&src[0] = 0LL;
    v47.m256i_i64[2] = (__int64)&v35;
    v47.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v47);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v28.m256i_i64[1] + 104))(v28.m256i_i64[0]) )
  {
    *(_QWORD *)&v8 = uucore::execution_phrase();
    *(_OWORD *)v35.m256i_i8 = v8;
    v38.m256i_i64[0] = (__int64)&v35;
    v38.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v47.m256i_i64[0] = (__int64)&off_F80F0;
    v47.m256i_i64[1] = 2LL;
    *(_QWORD *)&src[0] = 0LL;
    v47.m256i_i64[2] = (__int64)&v38;
    v47.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v47);
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(v28.m256i_i64[1] + 96))(v28.m256i_i64[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
  v10 = *(_OWORD *)v28.m256i_i8;
  if ( *(_QWORD *)v28.m256i_i64[1] )
    (*(void (__fastcall **)(__int64))v28.m256i_i64[1])(v28.m256i_i64[0]);
  v11 = *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL);
  if ( v11 )
    _rust_dealloc(v10, v11, *(_QWORD *)(*((_QWORD *)&v10 + 1) + 16LL));
  return v9;
}
