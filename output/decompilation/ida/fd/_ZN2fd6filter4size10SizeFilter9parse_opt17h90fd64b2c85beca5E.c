__int64 __fastcall fd::filter::size::SizeFilter::parse_opt(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __m256i v22; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v23; // [rsp+28h] [rbp-D0h]
  __int128 v24; // [rsp+38h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B0h]
  __m256i v26; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-88h]
  _BYTE v28[24]; // [rsp+80h] [rbp-78h]
  _BYTE v29[8]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-58h]
  __int64 v31; // [rsp+A8h] [rbp-50h]
  int v32; // [rsp+B0h] [rbp-48h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-40h]

  v2 = (_QWORD *)std::sync::once_lock::OnceLock<T>::get_or_try_init();
  v22.m256i_i32[0] = 0;
  v22.m256i_i64[1] = a1;
  *(_OWORD *)&v22.m256i_u64[2] = a2;
  *(_QWORD *)&v23 = a2;
  BYTE8(v23) = 1;
  regex_automata::util::search::Input::set_span(&v22, a2);
  v27 = v23;
  v26 = v22;
  regex_automata::meta::regex::Regex::search_half(&v22, *v2, v2[1], &v26);
  if ( !v22.m256i_i64[0] )
    return 3LL;
  regex::regex::string::Regex::captures_at(&v22, v2, a1, a2);
  if ( v22.m256i_i32[0] == 2 )
    return 3LL;
  *(_QWORD *)&v28[16] = v25;
  *(_OWORD *)v28 = v24;
  v27 = v23;
  v26 = v22;
  regex_automata::util::captures::Captures::get_group(&v32, &v26.m256i_u64[2], 1LL);
  if ( v32 == 1 )
  {
    v3 = *(_QWORD *)&v28[8];
    v22.m256i_i64[1] = *(_QWORD *)&v28[16];
    *(_OWORD *)&v22.m256i_u64[2] = v33;
  }
  else
  {
    v3 = 0LL;
  }
  v22.m256i_i64[0] = v3;
  v4 = core::option::Option<T>::map_or(&v22);
  v6 = v5;
  regex_automata::util::captures::Captures::get_group(&v22, &v26.m256i_u64[2], 2LL);
  if ( v22.m256i_i32[0] != 1
    || (v7 = *(_OWORD *)&v22.m256i_u64[1],
        *(_OWORD *)v22.m256i_i8 = *(_OWORD *)&v28[8],
        *(_OWORD *)&v22.m256i_u64[2] = v7,
        (fd::filter::size::SizeFilter::parse_opt::{{closure}}(&v22) & 1) == 0) )
  {
LABEL_26:
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v26);
    return 3LL;
  }
  regex_automata::util::captures::Captures::get_group(&v32, &v26.m256i_u64[2], 3LL);
  if ( v32 == 1 )
  {
    v8 = *(_QWORD *)&v28[8];
    v22.m256i_i64[1] = *(_QWORD *)&v28[16];
    *(_OWORD *)&v22.m256i_u64[2] = v33;
  }
  else
  {
    v8 = 0LL;
  }
  v22.m256i_i64[0] = v8;
  v9 = core::option::Option<T>::map_or(&v22);
  alloc::str::<impl str>::to_lowercase(v29, v9);
  v10 = v30;
  v11 = v31;
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v30, v31, aKi, 2LL) )
  {
    v22.m256i_i32[0] = 0;
    v12 = core::char::methods::encode_utf8_raw(107LL, &v22);
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, v13)
      && !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aMi, 2LL) )
    {
      v22.m256i_i32[0] = 0;
      v14 = core::char::methods::encode_utf8_raw(109LL, &v22);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v14, v15)
        && !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aGi, 2LL) )
      {
        v22.m256i_i32[0] = 0;
        v16 = core::char::methods::encode_utf8_raw(103LL, &v22);
        if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v16, v17)
          && !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aTi, 2LL) )
        {
          v22.m256i_i32[0] = 0;
          v18 = core::char::methods::encode_utf8_raw(116LL, &v22);
          if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v18, v19)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aB_1, 1LL) )
          {
            core::ptr::drop_in_place<alloc::string::String>(v29);
            goto LABEL_26;
          }
        }
      }
    }
  }
  core::ptr::drop_in_place<alloc::string::String>(v29);
  v20 = 1LL;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v4,
                           v6,
                           "+-,µsecsecminhrwkmoyrnsecsµsecsmsecshrswksmosyrsnsµsmssmhdwyusfailed to parse ISO 8601 durati"
                           "on string into `Span`/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff"
                           "-0.2.15/src/fmt/temporal/parser.rsfound a time designator (T or t) in an ISO 8601 duration st"
                           "ring in , but did not find any time unitsfound the start of a ISO 8601 duration string in , b"
                           "ut did not find any units/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/"
                           "jiff-0.2.15/src/util/parse.rs as 64-bit signed integerexpected to find duration beginning wit"
                           "h 'P' or 'p', but found end of inputexpected 'P' or 'p' prefix to begin duration, but found e"
                           "xpected to find date unit designator suffix (Y, M, W or D), but found end of inputexpected to"
                           " find date unit designator suffix (Y, M, W or D), but found expected to find time unit design"
                           "ator suffix (H, M or S), but found end of inputexpected to find time unit designator suffix ("
                           "H, M or S), but found expected two digit hour, but found end of inputhour is not valid as hou"
                           "r (a two digit integer)expected six digit year (because of a leading sign), but found end of "
                           "inputyear is not validyear zero must be written without a sign or a positive sign, but not a "
                           "negative signexpected four digit year (or leading sign for six digit year), but found end of "
                           "input as year (a four digit integer) as year (a six digit integer)expected two digit month, b"
                           "ut found end of inputmonth is not valid as month (a two digit integer)expected two digit minu"
                           "te, but found end of inputminute is not valid",
                           1LL) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v4,
                            v6,
                            "-,µsecsecminhrwkmoyrnsecsµsecsmsecshrswksmosyrsnsµsmssmhdwyusfailed to parse ISO 8601 durati"
                            "on string into `Span`/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jif"
                            "f-0.2.15/src/fmt/temporal/parser.rsfound a time designator (T or t) in an ISO 8601 duration "
                            "string in , but did not find any time unitsfound the start of a ISO 8601 duration string in "
                            ", but did not find any units/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b5"
                            "57f/jiff-0.2.15/src/util/parse.rs as 64-bit signed integerexpected to find duration beginnin"
                            "g with 'P' or 'p', but found end of inputexpected 'P' or 'p' prefix to begin duration, but f"
                            "ound expected to find date unit designator suffix (Y, M, W or D), but found end of inputexpe"
                            "cted to find date unit designator suffix (Y, M, W or D), but found expected to find time uni"
                            "t designator suffix (H, M or S), but found end of inputexpected to find time unit designator"
                            " suffix (H, M or S), but found expected two digit hour, but found end of inputhour is not va"
                            "lid as hour (a two digit integer)expected six digit year (because of a leading sign), but fo"
                            "und end of inputyear is not validyear zero must be written without a sign or a positive sign"
                            ", but not a negative signexpected four digit year (or leading sign for six digit year), but "
                            "found end of input as year (a four digit integer) as year (a six digit integer)expected two "
                            "digit month, but found end of inputmonth is not valid as month (a two digit integer)expected"
                            " two digit minute, but found end of inputminute is not valid",
                            1LL) )
      v20 = 0LL;
    else
      v20 = (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, 1LL, 0LL) ^ 3LL;
  }
  core::ptr::drop_in_place<regex::regex::string::Captures>(&v26);
  return v20;
}