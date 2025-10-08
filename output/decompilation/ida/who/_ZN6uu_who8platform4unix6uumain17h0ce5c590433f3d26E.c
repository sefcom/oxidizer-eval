// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_who::platform::unix::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __m128i v4; // xmm0
  char v5; // bl
  char v6; // r12
  char v7; // bp
  char v8; // bl
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // r13
  unsigned __int8 v11; // r15
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // r14
  char v14; // r12
  bool v15; // zf
  char v16; // al
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // si
  __m128i v19; // xmm0
  char v20; // al
  bool v21; // cl
  __int64 v22; // rbx
  unsigned __int8 v23; // [rsp+Ch] [rbp-66Ch]
  char v24; // [rsp+Dh] [rbp-66Bh]
  char v25; // [rsp+Eh] [rbp-66Ah]
  char flag; // [rsp+Fh] [rbp-669h]
  __m128i si128; // [rsp+10h] [rbp-668h] BYREF
  _BYTE v28[24]; // [rsp+28h] [rbp-650h] BYREF
  __int128 v29; // [rsp+48h] [rbp-630h]
  __int64 v30; // [rsp+58h] [rbp-620h]
  char v31[24]; // [rsp+60h] [rbp-618h] BYREF
  _QWORD v32[8]; // [rsp+78h] [rbp-600h] BYREF
  _OWORD dest[3]; // [rsp+B8h] [rbp-5C0h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-590h]
  __int128 src; // [rsp+380h] [rbp-2F8h] BYREF
  __int64 v36; // [rsp+390h] [rbp-2E8h]
  char v37; // [rsp+398h] [rbp-2E0h]
  char v38; // [rsp+399h] [rbp-2DFh]
  char v39; // [rsp+39Ah] [rbp-2DEh]
  char v40; // [rsp+39Bh] [rbp-2DDh]
  char v41; // [rsp+39Ch] [rbp-2DCh]
  unsigned __int64 v42; // [rsp+39Dh] [rbp-2DBh]
  char v43; // [rsp+3A5h] [rbp-2D3h]
  bool v44; // [rsp+3A6h] [rbp-2D2h]

  uu_who::uu_app(&src);
  uu_who::platform::unix::get_long_usage(v31);
  clap_builder::builder::command::Command::after_help(dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(v28, dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)v28, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)&v28[8],
             dest,
             v2,
             -*(_QWORD *)v28);
  v34 = v30;
  v4 = _mm_loadu_si128((const __m128i *)&v28[16]);
  dest[2] = v29;
  dest[1] = v4;
  dest[0] = *(_OWORD *)v28;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, dest);
  clap_builder::parser::error::MatchesError::unwrap(v32, &src);
  if ( v32[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&src, v32);
    *(__m128i *)&v28[8] = _mm_loadu_si128((const __m128i *)((char *)&src + 8));
    *(_QWORD *)v28 = src;
  }
  else
  {
    *(_QWORD *)v28 = 0LL;
    *(_QWORD *)&v28[8] = 8LL;
    *(_QWORD *)&v28[16] = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aLookup, 6LL);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aCount, 5LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aAll, 3LL);
  v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aHeading, 7LL);
  if ( v5 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_188B0);
    v6 = 1;
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aMesg, 4LL);
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, &unk_19218, 4LL);
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aDead, 4LL);
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aLogin, 5LL);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aProcess, 7LL);
    si128.m128i_i8[0] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aTime, 4LL);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aRunlevel, 8LL);
    if ( (unsigned __int8)(v10 | v9 | v12 | v11) | (unsigned __int8)(v13 | si128.m128i_i8[0]) )
      v14 = 0;
    else
      v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aUsers_0, 5LL) ^ 1;
    v15 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aUsers_0, 5LL) == 0;
    v16 = v14;
    v17 = v9;
    v8 = v14;
    if ( !v15 )
      v8 = 1;
    v6 = v8;
    if ( v13 )
      v6 = 1;
    if ( v11 )
      v6 = 1;
    v18 = v12;
    v7 = 0;
    if ( v10 )
      v6 = 1;
    else
      v7 = v16;
    v19 = _mm_and_si128(
            _mm_shufflelo_epi16(
              _mm_insert_epi16(
                _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v23 | (v10 << 16)), v17, 2), v11, 4),
                    v18,
                    5),
                  si128.m128i_u8[0],
                  6),
                v13,
                7),
              100),
            (__m128i)xmmword_189B0);
    si128 = _mm_packus_epi16(v19, v19);
  }
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOnlyHostnameUs, 18LL);
  v21 = 1;
  if ( !v20 )
    v21 = *(_QWORD *)&v28[16] == 2LL;
  v36 = *(_QWORD *)&v28[16];
  src = *(_OWORD *)v28;
  v37 = flag;
  v38 = v25;
  v39 = v7;
  v40 = v6;
  v41 = v24;
  v42 = _mm_load_si128(&si128).m128i_u64[0];
  v43 = v8;
  v44 = v21;
  v22 = uu_who::platform::unix::Who::exec(&src);
  core::ptr::drop_in_place<uu_who::platform::unix::Who>(&src);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v22;
}