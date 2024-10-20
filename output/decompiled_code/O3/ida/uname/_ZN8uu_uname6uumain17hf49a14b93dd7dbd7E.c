__int64 __fastcall uu_uname::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i *v3; // rdx
  __m128i *v4; // r14
  __m128i v5; // xmm0
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // r14
  char v12; // al
  __int128 v13; // rax
  __int128 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // r14
  __m128i *v17; // r15
  __int64 v18; // rsi
  __m128i *v19; // rdx
  unsigned __int8 v21; // [rsp+6h] [rbp-452h]
  unsigned __int8 flag; // [rsp+7h] [rbp-451h]
  __int64 v23; // [rsp+8h] [rbp-450h] BYREF
  __m128i *v24; // [rsp+10h] [rbp-448h]
  _OWORD *v25; // [rsp+18h] [rbp-440h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-438h]
  __int64 v27; // [rsp+28h] [rbp-430h]
  _OWORD v28[3]; // [rsp+30h] [rbp-428h] BYREF
  __int64 v29; // [rsp+60h] [rbp-3F8h]
  unsigned __int64 v30; // [rsp+68h] [rbp-3F0h] BYREF
  char v31; // [rsp+70h] [rbp-3E8h]
  _QWORD v32[2]; // [rsp+78h] [rbp-3E0h] BYREF
  __m128i v33; // [rsp+88h] [rbp-3D0h] BYREF
  __m128i *v34; // [rsp+98h] [rbp-3C0h]
  __m128i v35; // [rsp+A0h] [rbp-3B8h] BYREF
  __m128i *dest; // [rsp+B0h] [rbp-3A8h] BYREF
  _QWORD dest_8[21]; // [rsp+B8h] [rbp-3A0h] BYREF
  __m128i v38; // [rsp+160h] [rbp-2F8h] BYREF
  __m128i *v39; // [rsp+170h] [rbp-2E8h]
  _QWORD src[21]; // [rsp+178h] [rbp-2E0h] BYREF

  uu_uname::uu_app(&v38);
  clap_builder::builder::command::Command::try_get_matches_from(&v35, &v38, a1, a2);
  if ( v35.m128i_i64[0] != 0x8000000000000000LL )
  {
    v29 = dest_8[3];
    v5 = _mm_loadu_si128((const __m128i *)&dest);
    v28[2] = *(_OWORD *)&dest_8[1];
    v28[1] = v5;
    v28[0] = v35;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v28,
             anon_c2f135aab18a70c12863f4c9d1e7a6ab_0_llvm_1701710318722987878,
             *(&uu_uname::options::ALL + 1));
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v28,
            anon_c2f135aab18a70c12863f4c9d1e7a6ab_1_llvm_1701710318722987878,
            *(&uu_uname::options::KERNEL_NAME + 1));
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v28,
           &anon_c2f135aab18a70c12863f4c9d1e7a6ab_2_llvm_1701710318722987878,
           *(&uu_uname::options::NODENAME + 1));
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v28,
           anon_c2f135aab18a70c12863f4c9d1e7a6ab_4_llvm_1701710318722987878,
           *(&uu_uname::options::KERNEL_RELEASE + 1));
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v28,
           anon_c2f135aab18a70c12863f4c9d1e7a6ab_3_llvm_1701710318722987878,
           *(&uu_uname::options::KERNEL_VERSION + 1));
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v28,
           anon_c2f135aab18a70c12863f4c9d1e7a6ab_5_llvm_1701710318722987878,
           *(&uu_uname::options::MACHINE + 1));
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v28,
            anon_c2f135aab18a70c12863f4c9d1e7a6ab_6_llvm_1701710318722987878,
            *(&uu_uname::options::PROCESSOR + 1));
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v28,
            anon_c2f135aab18a70c12863f4c9d1e7a6ab_7_llvm_1701710318722987878,
            *(&uu_uname::options::HARDWARE_PLATFORM + 1));
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v28,
            anon_c2f135aab18a70c12863f4c9d1e7a6ab_8_llvm_1701710318722987878,
            *(&uu_uname::options::OS + 1));
    v30 = _mm_insert_epi16(
            _mm_insert_epi16(_mm_cvtsi32_si128(flag | (v21 << 8) | (v6 << 16) | (v8 << 24)), v7 | (v9 << 8), 2),
            v10 | (v11 << 8),
            3).m128i_u64[0];
    v31 = v12;
    uu_uname::UNameOutput::new(&v38, &v30);
    v2 = v38.m128i_i64[1];
    v4 = v39;
    if ( v38.m128i_i64[0] == 0x8000000000000001LL )
    {
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
      if ( v2 )
        goto LABEL_6;
    }
    else
    {
      memcpy(dest_8, src, sizeof(dest_8));
      v35 = v38;
      dest = v39;
      uu_uname::UNameOutput::display(&v25, &v35);
      v23 = core::str::<impl str>::trim_end_matches(v26, v27);
      v24 = v19;
      v32[0] = &v23;
      v32[1] = <&T as core::fmt::Display>::fmt;
      v38.m128i_i64[0] = (__int64)&unk_D75A0;
      v38.m128i_i64[1] = 2LL;
      src[1] = 0LL;
      v39 = (__m128i *)v32;
      src[0] = 1LL;
      std::io::stdio::_print(&v38);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25);
      core::ptr::drop_in_place<uu_uname::UNameOutput>(&v35);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
    }
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35.m128i_i64[1]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_6:
  v23 = v2;
  v24 = v4;
  v35.m128i_i64[0] = (__int64)&v23;
  v35.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v38.m128i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v38.m128i_i64[1] = 1LL;
  src[1] = 0LL;
  v39 = &v35;
  src[0] = 1LL;
  alloc::fmt::format::format_inner(&v33, &v38);
  v35 = _mm_loadu_si128(&v33);
  dest = v34;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35.m128i_i64[1], v34, 1LL, 0LL) )
  {
    *(_QWORD *)&v13 = uucore::util_name();
    v28[0] = v13;
    v25 = v28;
    v26 = <&T as core::fmt::Display>::fmt;
    v38.m128i_i64[0] = (__int64)&unk_D7580;
    v38.m128i_i64[1] = 2LL;
    src[1] = 0LL;
    v39 = (__m128i *)&v25;
    src[0] = 1LL;
    std::io::stdio::_eprint(&v38);
    *(_QWORD *)&v28[0] = &v35;
    *((_QWORD *)&v28[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v38.m128i_i64[0] = (__int64)&unk_D75A0;
    v38.m128i_i64[1] = 2LL;
    src[1] = 0LL;
    v39 = (__m128i *)v28;
    src[0] = 1LL;
    std::io::stdio::_eprint(&v38);
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64))v24[6].m128i_i64[1])(v23) )
  {
    *(_QWORD *)&v14 = uucore::execution_phrase();
    v28[0] = v14;
    v25 = v28;
    v26 = <&T as core::fmt::Display>::fmt;
    v38.m128i_i64[0] = (__int64)&off_D75C0;
    v38.m128i_i64[1] = 2LL;
    src[1] = 0LL;
    v39 = (__m128i *)&v25;
    src[0] = 1LL;
    std::io::stdio::_eprint(&v38);
  }
  v15 = ((__int64 (__fastcall *)(__int64))v24[6].m128i_i64[0])(v23);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
  v16 = v23;
  v17 = v24;
  if ( v24->m128i_i64[0] )
    ((void (__fastcall *)(__int64))v24->m128i_i64[0])(v23);
  v18 = v17->m128i_i64[1];
  if ( v18 )
    _rust_dealloc(v16, v18, v17[1].m128i_i64[0]);
  return v15;
}
