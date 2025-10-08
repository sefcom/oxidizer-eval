__int64 __fastcall alacritty::config::ui_config::LazyRegexVariant::compiled(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-22B0h] BYREF
  __m128i v6; // [rsp+10h] [rbp-22A8h]
  __int64 v7; // [rsp+20h] [rbp-2298h]
  _QWORD v8[2]; // [rsp+28h] [rbp-2290h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-2280h] BYREF
  _QWORD v10[6]; // [rsp+60h] [rbp-2258h] BYREF
  __m128i src[272]; // [rsp+90h] [rbp-2228h] BYREF
  _QWORD dest[549]; // [rsp+1190h] [rbp-1128h] BYREF

  dest[33] = 0LL;
  src[32].m128i_i64[1] = 0LL;
  v1 = *(_QWORD *)a1 - 0x7FFFFFFFFFFFFFFFLL;
  v2 = 0LL;
  if ( *(_QWORD *)a1 >= (signed __int64)0x8000000000000002LL )
    v1 = 0LL;
  if ( !v1 )
    return *(_QWORD *)(a1 + 24);
  if ( v1 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    alacritty_terminal::term::search::RegexSearch::new(src);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(src), (__m128i)xmmword_E8640)) == 0xFFFF )
    {
      v5 = src[1].m128i_i64[0];
      if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
      {
        v8[0] = &v5;
        v8[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v10[0] = &off_881B40;
        v10[1] = 1LL;
        v10[4] = 0LL;
        v10[2] = v8;
        v10[3] = 1LL;
        v3 = log::__private_api::loc(&off_881B68);
        v9[0] = "alacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|https://|http://|news:|file"
                ":|git://|ssh:|ftp://)[^";
        v9[1] = 28LL;
        v9[2] = "alacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|https://|http://|news:|file"
                ":|git://|ssh:|ftp://)[^";
        v9[3] = 28LL;
        v9[4] = v3;
        log::__private_api::log(v10, 1LL, v9);
      }
      core::ptr::drop_in_place<alacritty::config::ui_config::LazyRegexVariant>(a1);
      *(_QWORD *)a1 = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 24) = v7;
      *(__m128i *)(a1 + 8) = v6;
      core::ptr::drop_in_place<alloc::boxed::Box<regex_automata::hybrid::error::BuildError>>(v5);
      return 0LL;
    }
    else
    {
      memcpy(dest, src, 0x1100uLL);
      v2 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<alacritty::config::ui_config::LazyRegexVariant>(a1);
      *(__m128i *)a1 = v6;
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = v2;
      if ( *(_QWORD *)a1 <= (signed __int64)0x8000000000000001LL )
        core::panicking::panic(
          "internal error: entered unreachable code/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gl"
          "utin-0.32.3/src/context.rsCustomCursorInnerxconncursorfatal runtime error: thread local panicked on drop, abor"
          "ting\n"
          "newtype variant/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/x11rb-0.13.1/src/rust_conne"
          "ction/mod.rsassertion failed: !inner.inner.prepare_check_for_reply_or_error(sequence)internal error: entered u"
          "nreachable code: We just prefetched this/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/alacritty/alacri"
          "tty_terminal/src/grid/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/collections/btre"
          "e/navigate.rsXErrorInvalidUtf8ullrue/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/serde_"
          "json-1.0.140/src/de.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/serde_json-1.0.140/s"
          "rc/ser.rs}\"false[{,\\\"\\\\\\/\\b\\f\\n\\r\\t:]did not find expected hexadecimal number",
          40LL,
          &off_881B50);
    }
  }
  return v2;
}