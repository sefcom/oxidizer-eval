// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_uniq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int128 v5; // kr00_16
  __int64 v6; // r13
  char v7; // bl
  char v8; // r14
  double v9; // rbp
  char v10; // al
  __m128d v11; // xmm3
  __m128i v12; // xmm0
  __m128d v13; // xmm2
  __m128d v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // r14
  char v17; // [rsp+Ch] [rbp-43Ch]
  char v18; // [rsp+Dh] [rbp-43Bh]
  char delimiter; // [rsp+Eh] [rbp-43Ah]
  char flag; // [rsp+Fh] [rbp-439h]
  __int128 v21; // [rsp+10h] [rbp-438h] BYREF
  _QWORD v22[5]; // [rsp+20h] [rbp-428h]
  __int128 v23; // [rsp+48h] [rbp-400h] BYREF
  __int64 v24; // [rsp+58h] [rbp-3F0h]
  __int128 v25; // [rsp+60h] [rbp-3E8h]
  __int128 v26; // [rsp+70h] [rbp-3D8h]
  __int64 v27; // [rsp+80h] [rbp-3C8h]
  __int64 v28; // [rsp+88h] [rbp-3C0h]
  __int128 v29; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-3A8h]
  __m128i v31; // [rsp+B0h] [rbp-398h]
  __m128i v32; // [rsp+C0h] [rbp-388h] BYREF
  __m128d v33; // [rsp+D0h] [rbp-378h]
  __m128d v34; // [rsp+E0h] [rbp-368h]
  __int128 v35; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v36; // [rsp+108h] [rbp-340h]
  __int64 v37; // [rsp+110h] [rbp-338h] BYREF
  __int128 v38; // [rsp+118h] [rbp-330h]
  __int128 v39; // [rsp+128h] [rbp-320h]
  __m128d v40; // [rsp+138h] [rbp-310h]
  __int64 v41; // [rsp+148h] [rbp-300h]
  _BYTE dest[40]; // [rsp+150h] [rbp-2F8h] BYREF
  __m128d v43; // [rsp+178h] [rbp-2D0h]
  __int64 v44; // [rsp+188h] [rbp-2C0h]

  uu_uniq::handle_obsolete((__int64)dest, a1, a2);
  v30 = *(_QWORD *)&dest[32];
  v34 = *(__m128d *)dest;
  v29 = *(_OWORD *)&dest[16];
  v33 = v43;
  uu_uniq::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v21, dest, &v29);
  if ( __OFSUB__(-(__int64)v21, 1LL) )
    return uu_uniq::map_clap_errors(*((_QWORD *)&v21 + 1), dest, v2, -(__int64)v21);
  v25 = *(_OWORD *)&v22[1];
  v26 = *(_OWORD *)&v22[3];
  v23 = v21;
  v24 = v22[0];
  v4 = (__int64)*(&uu_uniq::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, &v23, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(&v37, aFiles, v4, dest);
  if ( v37 )
  {
    v44 = v41;
    v43 = v40;
    *(_OWORD *)&dest[24] = v39;
    *(_OWORD *)&dest[8] = v38;
    *(_QWORD *)dest = v37;
    uu_uniq::uumain::uumain::{{closure}}(&v21, dest);
    *(_OWORD *)dest = v21;
    *(_OWORD *)&dest[16] = *(_OWORD *)v22;
  }
  else
  {
    core::tuple::<impl core::default::Default for (U,T)>::default(dest);
  }
  v5 = *(_OWORD *)dest;
  v27 = *(_QWORD *)&dest[24];
  v28 = *(_QWORD *)&dest[16];
  uu_uniq::opt_parsed(dest, aSkipFields, *(&uu_uniq::options::SKIP_FIELDS + 1), &v23);
  if ( *(_DWORD *)dest == 1
    || (v32 = *(__m128i *)&dest[8],
        uu_uniq::opt_parsed(dest, aSkipChars, *(&uu_uniq::options::SKIP_CHARS + 1), &v23),
        *(_DWORD *)dest == 1) )
  {
    v6 = *(_QWORD *)&dest[8];
  }
  else
  {
    v31 = *(__m128i *)&dest[8];
    v17 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v23,
                             aRepeatednoequa,
                             *(&uu_uniq::options::REPEATED + 1)) )
      v17 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              &v23,
              aAllRepeated,
              *(&uu_uniq::options::ALL_REPEATED + 1));
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             &v23,
             aUnique,
             *(&uu_uniq::options::UNIQUE + 1));
    v7 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                             &v23,
                             aAllRepeated,
                             *(&uu_uniq::options::ALL_REPEATED + 1)) )
      v7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
             &v23,
             aGroup,
             *(&uu_uniq::options::GROUP + 1));
    delimiter = uu_uniq::get_delimiter(&v23);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v23, aCount, *(&uu_uniq::options::COUNT + 1));
    uu_uniq::opt_parsed(&v21, aCheckChars, *(&uu_uniq::options::CHECK_CHARS + 1), &v23);
    v6 = *((_QWORD *)&v21 + 1);
    v9 = *(double *)v22;
    if ( (v21 & 1) == 0 )
    {
      v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v23,
              aIgnoreCase,
              *(&uu_uniq::options::IGNORE_CASE + 1));
      v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v23,
              aZeroTerminated,
              *(&uu_uniq::options::ZERO_TERMINATED + 1));
      v11 = (__m128d)_mm_load_si128(&v32);
      v12 = _mm_shuffle_epi32((__m128i)v11, 0);
      v11.m128d_f64[0] = COERCE_DOUBLE(1LL);
      v13 = (__m128d)_mm_srai_epi32(_mm_slli_epi32(_mm_shuffle_epi32(v31, 0), 0x1Fu), 0x1Fu);
      v14 = (__m128d)_mm_srai_epi32(_mm_slli_epi32(v12, 0x1Fu), 0x1Fu);
      LOBYTE(v43.m128d_f64[1]) = v17;
      BYTE1(v43.m128d_f64[1]) = flag;
      BYTE2(v43.m128d_f64[1]) = v7;
      BYTE6(v43.m128d_f64[1]) = delimiter;
      BYTE3(v43.m128d_f64[1]) = v8;
      *(__m128d *)dest = _mm_or_pd(_mm_andn_pd(v14, v34), _mm_and_pd(v11, v14));
      *(__m128d *)&dest[16] = _mm_or_pd(
                                _mm_andn_pd(v13, v33),
                                _mm_and_pd(_mm_shuffle_pd((__m128d)1uLL, (__m128d)v31, 2), v13));
      *(_QWORD *)&dest[32] = v6;
      v43.m128d_f64[0] = v9;
      BYTE4(v43.m128d_f64[1]) = v18;
      BYTE5(v43.m128d_f64[1]) = v10;
      if ( v8 && v7 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v35, aPrintingAllDup, 102LL);
        v22[0] = v36;
        v21 = v35;
        LODWORD(v22[1]) = 1;
        v6 = alloc::boxed::Box<T>::new(&v21);
      }
      else
      {
        uu_uniq::open_input_file(&v21, v5, *((_QWORD *)&v5 + 1));
        v15 = *((_QWORD *)&v21 + 1);
        v16 = v22[0];
        if ( (v21 & 1) != 0 )
        {
          v6 = *((_QWORD *)&v21 + 1);
        }
        else
        {
          uu_uniq::open_output_file(&v21, v28, v27);
          v6 = *((_QWORD *)&v21 + 1);
          if ( (_DWORD)v21 == 1 )
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v15,
              v16);
          else
            v6 = uu_uniq::Uniq::print_uniq(dest, v15, v16, *((__int64 *)&v21 + 1), v22[0]);
        }
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
  return v6;
}