__m128i *__fastcall uu_more::Options::from(__m128i *a1, __int64 a2, __m128i a3)
{
  __int16 v3; // bp
  __int16 v4; // r13
  _WORD *one; // rax
  _WORD *v7; // r15
  __int16 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // bp
  __int16 v12; // cx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  const char *v16; // r12
  const char **v17; // rsi
  const __m128i *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  const __m128i *v21; // r15
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r13
  __int8 flag; // bp
  __int8 v31; // r15
  __int8 v32; // r12
  __int8 v33; // al
  __int16 v35; // [rsp+2h] [rbp-156h]
  __int16 v36; // [rsp+4h] [rbp-154h]
  const char **v37; // [rsp+8h] [rbp-150h] BYREF
  __m128i v38; // [rsp+10h] [rbp-148h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+20h] [rbp-138h]
  __int64 v40; // [rsp+28h] [rbp-130h]
  __int64 v41; // [rsp+38h] [rbp-120h] BYREF
  __m128i v42; // [rsp+40h] [rbp-118h]
  __int128 v43; // [rsp+50h] [rbp-108h]
  __int128 v44; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v45; // [rsp+70h] [rbp-E8h]
  __m128i v46; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+90h] [rbp-C8h]
  const char *v48; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+A8h] [rbp-B0h]
  __m128i *v50; // [rsp+B0h] [rbp-A8h]
  __int64 (__fastcall *v51)(); // [rsp+B8h] [rbp-A0h]
  __m128i v52; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-88h]
  __int128 v54; // [rsp+E0h] [rbp-78h]
  __int128 v55; // [rsp+F0h] [rbp-68h]
  __m128i v56; // [rsp+100h] [rbp-58h]
  __int64 v57; // [rsp+110h] [rbp-48h]
  _QWORD v58[8]; // [rsp+118h] [rbp-40h] BYREF

  one = (_WORD *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                   a2,
                   "linessrc/uu/more/src/more.rsnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the conte"
                   "nts of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay he"
                   "lp instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines in"
                   "to oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number"
                   " of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                   "\r::::::::::::::\n"
                   "\r{}\n"
                   "\r::::::::::::::\n"
                   "{}\n"
                   "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
                   5LL,
                   &off_148878);
  v7 = one;
  if ( one )
    v3 = *one;
  v8 = (__int16 *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                    a2,
                    "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIO"
                    "NS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bell"
                    "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file b"
                    "eginning from pattern matchDisplay file beginning from line numberThe number of lines per screen ful"
                    "lSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                    "\r::::::::::::::\n"
                    "\r{}\n"
                    "\r::::::::::::::\n"
                    "{}\n"
                    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
                    6LL,
                    &off_148890);
  if ( v8 )
  {
    v4 = *v8;
    if ( v7 )
      goto LABEL_5;
  }
  else if ( v7 )
  {
LABEL_5:
    if ( v3 )
    {
      v11 = v3 + 1;
      if ( !v11 )
        core::panicking::panic_const::panic_const_add_overflow(
          &off_1488C0,
          "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE.."
          ".0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean"
          " screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDis"
          "play file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files t"
          "o be read\r\rPattern not found\n"
          "\r::::::::::::::\n"
          "\r{}\n"
          "\r::::::::::::::\n"
          "{}\n"
          "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          v9,
          v10);
      v12 = 1;
      v4 = v11;
    }
    else
    {
      v12 = 0;
    }
    goto LABEL_14;
  }
  v12 = 0;
  if ( v8 && v4 )
  {
    if ( !++v4 )
      core::panicking::panic_const::panic_const_add_overflow(
        &off_1488A8,
        "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0"
        ".0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean scr"
        "een and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay f"
        "ile beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be rea"
        "d\r\rPattern not found\n"
        "\r::::::::::::::\n"
        "\r{}\n"
        "\r::::::::::::::\n"
        "{}\n"
        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
        v9,
        0LL);
    v12 = 1;
  }
LABEL_14:
  v36 = v12;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTI"
                           "ONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ring"
                           "ing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplai"
                           "nDisplay file beginning from pattern matchDisplay file beginning from line numberThe number o"
                           "f lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                           "\r::::::::::::::\n"
                           "\r{}\n"
                           "\r::::::::::::::\n"
                           "{}\n"
                           "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions."
                           " (unimplemented)]\v",
                           9LL,
                           1LL,
                           0LL) )
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( !v13 )
      goto LABEL_51;
    if ( (v13 & 7) != 0 )
      goto LABEL_51;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = v14 >> 59;
    if ( v14 >> 59 )
      goto LABEL_51;
    if ( !v14 )
    {
      v16 = 0LL;
      goto LABEL_54;
    }
    v14 *= 16LL;
    v16 = 0LL;
    v15 = 0x6E696C2D6D6F7266LL;
    v17 = 0LL;
    while ( *(const char **)((char *)v17 + v13 + 8) != byte_9
         || **(_QWORD **)((char *)v17 + v13) ^ 0x6E696C2D6D6F7266LL | (*(unsigned __int8 **)((char *)v17 + v13))[8] ^ 0x65LL )
    {
      v17 += 2;
      if ( (const char **)v14 == v17 )
        goto LABEL_54;
    }
  }
  v35 = v4;
  v18 = (const __m128i *)clap_builder::util::flat_map::FlatMap<K,V>::get(
                           a2 + 48,
                           "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTI"
                           "ONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ring"
                           "ing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplai"
                           "nDisplay file beginning from pattern matchDisplay file beginning from line numberThe number o"
                           "f lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                           "\r::::::::::::::\n"
                           "\r{}\n"
                           "\r::::::::::::::\n"
                           "{}\n"
                           "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions."
                           " (unimplemented)]\v",
                           9LL);
  if ( !v18 )
  {
LABEL_45:
    v29 = 0LL;
    goto LABEL_46;
  }
  v16 = anon_973acb088a118210f855931270ed248b_11_llvm_4119950667813314017;
  v37 = (const char **)anon_973acb088a118210f855931270ed248b_11_llvm_4119950667813314017;
  v38.m128i_i64[0] = 5LL;
  v38.m128i_i64[1] = 0x763D199BCCD31989LL;
  v39 = (__int64 (__fastcall *)())0x9208909ED1A860C6LL;
  v14 = v18[4].m128i_u64[1];
  if ( v14 )
  {
    a3 = _mm_loadu_si128(v18 + 5);
    v15 = v18[6].m128i_i64[0];
    goto LABEL_33;
  }
  v19 = v18[2].m128i_i64[0];
  if ( !v19 || (v19 & 7) != 0 || (v20 = v18[2].m128i_u64[1], v20 > 0x555555555555555LL) )
LABEL_51:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  v21 = v18;
  v41 = v18[2].m128i_i64[0];
  v42 = (__m128i)(v19 + 24 * v20);
  *((_QWORD *)&v43 + 1) = 0LL;
  core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v52, &v41, &v37, (char *)&v44 + 8);
  v14 = v52.m128i_i64[0];
  if ( v52.m128i_i64[0] )
  {
    a3 = _mm_loadu_si128((const __m128i *)&v52.m128i_u64[1]);
    v15 = *((_QWORD *)&v53 + 1);
  }
  else
  {
    v14 = (unsigned __int64)v37;
    a3 = _mm_loadu_si128(&v38);
    v15 = (__int64)v39;
  }
  v18 = v21;
LABEL_33:
  if ( _mm_shuffle_epi32(a3, 238).m128i_u64[0] != 0x763D199BCCD31989LL || v15 != 0x9208909ED1A860C6LL )
  {
LABEL_54:
    v48 = "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.2"
          "7Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean scree"
          "n and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay f"
          "ile beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be r"
          "ead\r\rPattern not found\n"
          "\r::::::::::::::\n"
          "\r{}\n"
          "\r::::::::::::::\n"
          "{}\n"
          "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
    v49 = (__int64 (__fastcall *)())byte_9;
    v41 = v14;
    v42 = a3;
    *(_QWORD *)&v43 = v15;
    *((_QWORD *)&v43 + 1) = v16;
    *(_QWORD *)&v44 = 5LL;
    *((_QWORD *)&v44 + 1) = 0x763D199BCCD31989LL;
    *(_QWORD *)&v45 = 0x9208909ED1A860C6LL;
    v37 = &v48;
    v38.m128i_i64[0] = (__int64)<&T as core::fmt::Display>::fmt;
    v38.m128i_i64[1] = (__int64)&v41;
    v39 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v52.m128i_i64[0] = (__int64)&off_1487A0;
    v52.m128i_i64[1] = 2LL;
    *(_QWORD *)&v54 = 0LL;
    *(_QWORD *)&v53 = &v37;
    *((_QWORD *)&v53 + 1) = 2LL;
    core::panicking::panic_fmt(&v52, &off_1488D8);
  }
  v22 = v18[2].m128i_i64[0];
  if ( !v22 )
    goto LABEL_51;
  if ( (v22 & 7) != 0 )
    goto LABEL_51;
  v23 = v18[2].m128i_u64[1];
  if ( v23 > 0x555555555555555LL )
    goto LABEL_51;
  v41 = v22;
  v42 = (__m128i)(v22 + 24 * v23);
  *((_QWORD *)&v43 + 1) = 0LL;
  v24 = (__int64 *)<core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v41);
  if ( !v24 )
    goto LABEL_45;
  v25 = *v24;
  v26 = v24[1];
  v27 = (_QWORD *)(v25 + ((*(_QWORD *)(v26 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  if ( (*(__int64 (__fastcall **)(_QWORD *))(v26 + 24))(v27) != 0x763D199BCCD31989LL
    || v28 != 0x9208909ED1A860C6LL
    || !v27 )
  {
    core::option::expect_failed(aFatalInternalE_1, 99LL, &off_1487C0);
  }
  v29 = 0LL;
  if ( *v27 )
    v29 = *v27 - 1LL;
LABEL_46:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v41,
    a2,
    "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll,"
    " display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqu"
    "eeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line num"
    "berThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    7LL);
  v58[0] = "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not "
           "scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and d"
           "isplay textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file be"
           "ginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r"
           "\rPattern not found\n"
           "\r::::::::::::::\n"
           "\r{}\n"
           "\r::::::::::::::\n"
           "{}\n"
           "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
  v58[1] = 7LL;
  if ( v41 )
  {
    v55 = v45;
    v54 = v44;
    v53 = v43;
    v52 = v42;
    v48 = (const char *)v58;
    v49 = <&T as core::fmt::Display>::fmt;
    v50 = &v52;
    v51 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v37 = (const char **)&anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v38.m128i_i64[0] = 2LL;
    v40 = 0LL;
    v38.m128i_i64[1] = (__int64)&v48;
    v39 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v37, &off_1488F0);
  }
  if ( v42.m128i_i64[0] )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v41);
    v47 = v42.m128i_i64[1];
    v46 = _mm_loadu_si128((const __m128i *)&v41);
  }
  else
  {
    v46.m128i_i64[0] = 0x8000000000000000LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll,"
           " display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display "
           "textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning"
           " from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPatte"
           "rn not found\n"
           "\r::::::::::::::\n"
           "\r{}\n"
           "\r::::::::::::::\n"
           "{}\n"
           "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
           11LL,
           &off_148908);
  v57 = v47;
  v56 = _mm_load_si128(&v46);
  v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display tex"
          "t and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze m"
          "ultiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line num"
          "berThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
          "\r::::::::::::::\n"
          "\r{}\n"
          "\r::::::::::::::\n"
          "{}\n"
          "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          10LL,
          &off_148920);
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clea"
          "n line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple bl"
          "ank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe num"
          "ber of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
          "\r::::::::::::::\n"
          "\r{}\n"
          "\r::::::::::::::\n"
          "{}\n"
          "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          6LL,
          &off_148938);
  v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clean line"
          " endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank li"
          "nes into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of"
          " lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
          "\r::::::::::::::\n"
          "\r{}\n"
          "\r::::::::::::::\n"
          "{}\n"
          "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          7LL,
          &off_148950);
  a1[2].m128i_i8[4] = flag;
  a1[1].m128i_i64[1] = v29;
  a1[2].m128i_i16[0] = v36;
  a1[2].m128i_i16[1] = v35;
  *a1 = v56;
  a1[1].m128i_i64[0] = v57;
  a1[2].m128i_i8[5] = v31;
  a1[2].m128i_i8[6] = v32;
  a1[2].m128i_i8[7] = v33;
  return a1;
}
