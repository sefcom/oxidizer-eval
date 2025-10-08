__int64 __fastcall uu_date::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int32 v18; // edx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // ebp
  char flag; // al
  int v24; // eax
  _BYTE *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall **v28)(); // rbx
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(); // rbx
  unsigned int v31; // eax
  __int128 v32; // rax
  __int128 v33; // kr10_16
  unsigned __int8 v34; // al
  __int64 v35; // [rsp+0h] [rbp-688h]
  _BYTE v36[24]; // [rsp+8h] [rbp-680h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+20h] [rbp-668h]
  char v38; // [rsp+28h] [rbp-660h]
  _BYTE v39[7]; // [rsp+29h] [rbp-65Fh]
  __int128 v40; // [rsp+30h] [rbp-658h] BYREF
  __int64 v41; // [rsp+40h] [rbp-648h]
  __int64 v42; // [rsp+48h] [rbp-640h]
  int v43; // [rsp+50h] [rbp-638h]
  __int64 v44; // [rsp+58h] [rbp-630h] BYREF
  __int128 v45; // [rsp+60h] [rbp-628h]
  __int128 v46; // [rsp+70h] [rbp-618h] BYREF
  __int64 v47; // [rsp+80h] [rbp-608h]
  _BYTE v48[7]; // [rsp+89h] [rbp-5FFh]
  __m256i v49; // [rsp+90h] [rbp-5F8h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-5D8h]
  _BYTE v51[20]; // [rsp+C0h] [rbp-5C8h]
  int v52; // [rsp+D4h] [rbp-5B4h]
  char v53; // [rsp+D8h] [rbp-5B0h]
  __int128 v54; // [rsp+E0h] [rbp-5A8h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-598h]
  __int128 v56; // [rsp+100h] [rbp-588h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+118h] [rbp-570h]
  __m256i v58; // [rsp+120h] [rbp-568h] BYREF
  __int64 v59; // [rsp+140h] [rbp-548h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+148h] [rbp-540h]
  __int64 v61; // [rsp+150h] [rbp-538h] BYREF
  __int128 v62; // [rsp+158h] [rbp-530h]
  __int64 v63; // [rsp+168h] [rbp-520h]
  int v64; // [rsp+170h] [rbp-518h]
  __m256i v65; // [rsp+178h] [rbp-510h] BYREF
  __int128 v66; // [rsp+198h] [rbp-4F0h]
  __int64 v67; // [rsp+1A8h] [rbp-4E0h]
  __int64 v68; // [rsp+1B0h] [rbp-4D8h]
  char *format_string; // [rsp+1B8h] [rbp-4D0h]
  __int64 v70; // [rsp+1C0h] [rbp-4C8h] BYREF
  int v71; // [rsp+1C8h] [rbp-4C0h]
  _BYTE v72[48]; // [rsp+1D0h] [rbp-4B8h] BYREF
  __int128 v73; // [rsp+200h] [rbp-488h]
  _BYTE v74[16]; // [rsp+4A0h] [rbp-1E8h] BYREF
  __int128 v75; // [rsp+4B0h] [rbp-1D8h] BYREF
  __int64 v76; // [rsp+4C0h] [rbp-1C8h]
  __int128 v77; // [rsp+4D0h] [rbp-1B8h] BYREF
  __int64 v78; // [rsp+4E0h] [rbp-1A8h]
  __int128 v79; // [rsp+4E8h] [rbp-1A0h] BYREF
  __int64 v80; // [rsp+4F8h] [rbp-190h]
  __int128 v81; // [rsp+500h] [rbp-188h] BYREF
  __int64 v82; // [rsp+510h] [rbp-178h]
  __int128 v83; // [rsp+518h] [rbp-170h] BYREF
  __int64 v84; // [rsp+528h] [rbp-160h]
  __int128 v85; // [rsp+530h] [rbp-158h] BYREF
  __int64 v86; // [rsp+540h] [rbp-148h]
  __int128 v87; // [rsp+548h] [rbp-140h] BYREF
  __int64 v88; // [rsp+558h] [rbp-130h]
  _QWORD v89[2]; // [rsp+560h] [rbp-128h] BYREF
  int v90; // [rsp+570h] [rbp-118h]
  int v91; // [rsp+574h] [rbp-114h]
  _OWORD v92[3]; // [rsp+590h] [rbp-F8h] BYREF
  _OWORD v93[3]; // [rsp+5C0h] [rbp-C8h] BYREF
  unsigned __int64 v94; // [rsp+5F8h] [rbp-90h] BYREF
  __int128 v95; // [rsp+600h] [rbp-88h]
  _BYTE v96[96]; // [rsp+628h] [rbp-60h] BYREF

  uu_date::uu_app(v72);
  clap_builder::builder::command::Command::try_get_matches_from(&v49, v72, a1, a2);
  if ( __OFSUB__(-v49.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v49.m256i_i64[1],
             v72,
             v2,
             -v49.m256i_i64[0]);
  v67 = *(_QWORD *)v51;
  v66 = v50;
  v65 = v49;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v72, &v65, aFormat, 6LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aFormat, 6LL, v72);
  v5 = v4;
  if ( !v4 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v72, &v65);
    clap_builder::parser::error::MatchesError::unwrap(&v49, v72);
    if ( v49.m256i_i64[0] )
    {
      v73 = *(_OWORD *)v51;
      *(_OWORD *)&v72[32] = v50;
      *(__m256i *)v72 = v49;
      BYTE8(v54) = uu_date::uumain::uumain::{{closure}}(v72);
      *(_QWORD *)&v54 = 0x8000000000000000LL;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v65, aRfcEmail, 9LL) )
      {
        v15 = 0x8000000000000001LL;
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v72, &v65, aRfc3339, 8LL);
        v16 = clap_builder::parser::error::MatchesError::unwrap(aRfc3339, 8LL, v72);
        if ( v16 )
        {
          BYTE8(v54) = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(
                         *(_QWORD *)(v16 + 8),
                         *(_QWORD *)(v16 + 16));
          v15 = 0x8000000000000002LL;
        }
        else
        {
          v15 = 0x8000000000000004LL;
        }
      }
      *(_QWORD *)&v54 = v15;
    }
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)v72 = 0;
  v8 = core::char::methods::encode_utf8_raw(43LL, v72);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8) )
  {
    v9 = *(_QWORD *)(v5 + 8);
    v10 = *(_QWORD *)(v5 + 16);
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            v9,
            v10);
    if ( !v11 )
      core::str::slice_error_fail(v9, v10, 1LL, v10, &off_34B160);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v72, v11);
    v55 = *(_QWORD *)&v72[16];
    v54 = *(_OWORD *)v72;
LABEL_16:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v72, &v65, "datethur]", 4LL);
    v17 = clap_builder::parser::error::MatchesError::unwrap("datethur]", 4LL, v72);
    if ( v17 )
    {
      chrono::offset::local::Local::now(v74);
      parse_datetime::parse_datetime_at_date(v72, v74, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16));
      if ( *(_QWORD *)v72 == 0x8000000000000002LL )
      {
        v58.m256i_i64[1] = chrono::datetime::DateTime<Tz>::signed_duration_since(&v72[8], v74);
        v58.m256i_i32[4] = v18;
        v58.m256i_i64[0] = 4LL;
        core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(v72);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(v72);
        <alloc::string::String as core::clone::Clone>::clone(v72, v17);
        v58.m256i_i64[3] = *(_QWORD *)&v72[16];
        *(_OWORD *)&v58.m256i_u64[1] = *(_OWORD *)v72;
        v58.m256i_i64[0] = 1LL;
      }
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v72, &v65, aFile_0, 4LL);
      v19 = clap_builder::parser::error::MatchesError::unwrap(aFile_0, 4LL, v72);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v20,
                                *(_QWORD *)(v19 + 16),
                                asc_1027D1,
                                1LL) )
        {
          v58.m256i_i64[0] = 3LL;
        }
        else
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v72, v20);
          v58.m256i_i64[3] = *(_QWORD *)&v72[16];
          *(_OWORD *)&v58.m256i_u64[1] = *(_OWORD *)v72;
          v58.m256i_i64[0] = 2LL;
        }
      }
      else
      {
        v58.m256i_i64[0] = 0LL;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v72, &v65, aSet, 3LL);
    v21 = clap_builder::parser::error::MatchesError::unwrap(aSet, 3LL, v72);
    v22 = 0;
    if ( v21 )
    {
      uu_date::parse_date(v72, v21);
      *(_QWORD *)&v40 = *(_QWORD *)&v72[12];
      DWORD2(v40) = *(_DWORD *)&v72[20];
      v75 = *(_OWORD *)&v72[24];
      v76 = *(_QWORD *)&v72[40];
      if ( __OFSUB__(-*(_QWORD *)v72, 1LL) )
      {
        v64 = DWORD2(v40);
        v63 = v40;
        v22 = *(_DWORD *)&v72[8];
      }
      else if ( *(_QWORD *)v72 != 0x8000000000000001LL )
      {
        v44 = *(_QWORD *)v72;
        LODWORD(v45) = *(_DWORD *)&v72[8];
        HIDWORD(v45) = DWORD2(v40);
        *(_QWORD *)((char *)&v45 + 4) = v40;
        v49.m256i_i64[0] = 0LL;
        v49.m256i_i32[2] = *(_DWORD *)&v72[8];
        *(__int64 *)((char *)&v49.m256i_i64[1] + 4) = v40;
        v49.m256i_i32[5] = DWORD2(v40);
        v49.m256i_i8[24] = 1;
        *(_QWORD *)v36 = &v49;
        *(_QWORD *)&v36[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v72 = &off_34B078;
        *(_QWORD *)&v72[8] = 1LL;
        *(_QWORD *)&v72[32] = 0LL;
        *(_QWORD *)&v72[16] = v36;
        *(_QWORD *)&v72[24] = 1LL;
        core::option::Option<T>::map_or_else(&v79, v72);
        *(_DWORD *)&v72[24] = 1;
        *(_OWORD *)v72 = v79;
        *(_QWORD *)&v72[16] = v80;
        v14 = alloc::boxed::Box<T>::new(v72);
        core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v75);
        core::ptr::drop_in_place<alloc::string::String>(&v44);
        core::ptr::drop_in_place<uu_date::DateSource>(&v58);
        core::ptr::drop_in_place<uu_date::Format>(&v54);
        goto LABEL_33;
      }
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v65, aUniversal, 9LL);
    *(_QWORD *)v51 = v55;
    v50 = v54;
    v49 = v58;
    *(_QWORD *)&v51[12] = v63;
    v52 = v64;
    v53 = flag;
    *(_DWORD *)&v51[8] = v22;
    if ( v22 )
    {
      v71 = *(_DWORD *)&v51[16];
      v70 = *(_QWORD *)&v51[8];
      v14 = uu_date::set_system_datetime(&v70);
    }
    else
    {
      if ( flag )
      {
        chrono::offset::utc::Utc::now(v72);
        v43 = *(_DWORD *)&v72[8];
        v42 = *(_QWORD *)v72;
        v24 = 0;
        switch ( v49.m256i_i64[0] )
        {
          case 0LL:
            goto LABEL_37;
          case 1LL:
            goto LABEL_43;
          case 2LL:
            goto LABEL_40;
          case 3LL:
            goto LABEL_42;
          case 4LL:
            goto LABEL_38;
        }
      }
      chrono::offset::local::Local::now(v72);
      v43 = *(_DWORD *)&v72[8];
      v42 = *(_QWORD *)v72;
      v24 = *(_DWORD *)&v72[12];
      switch ( v49.m256i_i64[0] )
      {
        case 0LL:
LABEL_37:
          v90 = v43;
          v89[1] = v42;
          v89[0] = 0x8000000000000000LL;
          v91 = v24;
          v25 = v89;
          goto LABEL_44;
        case 1LL:
LABEL_43:
          <alloc::string::String as core::clone::Clone>::clone(v72, &v49.m256i_u64[1]);
          v25 = v96;
          uu_date::parse_date((__int64)v96, (__int64)v72);
LABEL_44:
          v35 = alloc::boxed::Box<T>::new(v25);
          goto LABEL_45;
        case 2LL:
LABEL_40:
          if ( (unsigned __int8)std::path::Path::is_dir(v49.m256i_i64[2], v49.m256i_i64[3]) )
          {
            v44 = 1LL;
            v45 = *(_OWORD *)&v49.m256i_u64[2];
            LOBYTE(v46) = 1;
            *(_QWORD *)v36 = &v44;
            *(_QWORD *)&v36[8] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v72 = &off_34B088;
            *(_QWORD *)&v72[8] = 1LL;
            *(_QWORD *)&v72[32] = 0LL;
            *(_QWORD *)&v72[16] = v36;
            *(_QWORD *)&v72[24] = 1LL;
            core::option::Option<T>::map_or_else(&v83, v72);
            *(_DWORD *)&v72[24] = 2;
            *(_OWORD *)v72 = v83;
            *(_QWORD *)&v72[16] = v84;
            v26 = alloc::boxed::Box<T>::new(v72);
            goto LABEL_57;
          }
          std::fs::File::open(v72, &v49.m256i_u64[1]);
          <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            &v44,
            v72,
            v49.m256i_i64[2],
            v49.m256i_i64[3]);
          v14 = v44;
          if ( v44 )
            break;
          std::io::buffered::bufreader::BufReader<R>::with_capacity(v72, (unsigned int)v45);
          v93[2] = *(_OWORD *)&v72[32];
          v93[1] = *(_OWORD *)&v72[16];
          v93[0] = *(_OWORD *)v72;
          v35 = alloc::boxed::Box<T>::new(v93);
          v28 = &off_34B1B0;
          goto LABEL_46;
        case 3LL:
LABEL_42:
          v27 = std::io::stdio::stdin();
          std::io::buffered::bufreader::BufReader<R>::with_capacity(v72, v27);
          v92[2] = *(_OWORD *)&v72[32];
          v92[1] = *(_OWORD *)&v72[16];
          v92[0] = *(_OWORD *)v72;
          v35 = alloc::boxed::Box<T>::new(v92);
          v28 = &off_34B1E8;
          goto LABEL_46;
        case 4LL:
LABEL_38:
          *(_QWORD *)&v40 = v49.m256i_i64[1];
          DWORD2(v40) = v49.m256i_i32[4];
          *(_DWORD *)&v72[8] = v43;
          *(_QWORD *)v72 = v42;
          *(_DWORD *)&v72[12] = v24;
          chrono::datetime::DateTime<Tz>::checked_add_signed(v36, v72);
          if ( *(_DWORD *)v36 )
          {
            v95 = *(_OWORD *)v36;
            v94 = 0x8000000000000000LL;
            v35 = alloc::boxed::Box<T>::new(&v94);
LABEL_45:
            v28 = &off_34B178;
LABEL_46:
            format_string = uu_date::make_format_string((__int64)&v49);
            v68 = v29;
            v57 = v28;
            v30 = v28[3];
            while ( 1 )
            {
              while ( 1 )
              {
                ((void (__fastcall *)(__int64 *, __int64))v30)(&v44, v35);
                if ( __OFSUB__(-v44, 1LL) )
                  break;
                if ( v44 == 0x8000000000000001LL )
                {
                  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                    v35,
                    v57);
                  core::ptr::drop_in_place<uu_date::Settings>(&v49);
                  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v65);
                  return 0LL;
                }
                v61 = v44;
                v62 = v45;
                v41 = v47;
                v40 = v46;
                *(_QWORD *)v36 = 0LL;
                *(_OWORD *)&v36[8] = v45;
                LOBYTE(v37) = 1;
                *(_QWORD *)&v56 = v36;
                *((_QWORD *)&v56 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                *(_QWORD *)v72 = &off_34B078;
                *(_QWORD *)&v72[8] = 1LL;
                *(_QWORD *)&v72[32] = 0LL;
                *(_QWORD *)&v72[16] = &v56;
                *(_QWORD *)&v72[24] = 1LL;
                core::option::Option<T>::map_or_else(&v87, v72);
                *(_DWORD *)&v72[24] = 1;
                *(_OWORD *)v72 = v87;
                *(_QWORD *)&v72[16] = v88;
                v59 = alloc::boxed::Box<T>::new(v72);
                v60 = &off_34B0F8;
                v31 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v59);
                uucore::mods::error::set_exit_code(v31);
                *(_QWORD *)&v32 = uucore::util_name();
                v56 = v32;
                *(_QWORD *)v36 = &v56;
                *(_QWORD *)&v36[8] = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)&v36[16] = &v59;
                v37 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                *(_QWORD *)v72 = &unk_34B0A8;
                *(_QWORD *)&v72[8] = 3LL;
                *(_QWORD *)&v72[32] = 0LL;
                *(_QWORD *)&v72[16] = v36;
                *(_QWORD *)&v72[24] = 2LL;
                std::io::stdio::_eprint(v72);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                  v59,
                  v60);
                core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v46);
                core::ptr::drop_in_place<alloc::string::String>(&v61);
              }
              v56 = v45;
              uucore::features::custom_tz_fmt::custom_time_format(&v61, format_string, v68, -v44);
              v33 = v62;
              *(_OWORD *)v72 = v62;
              *(_OWORD *)&v72[16] = 8uLL;
              v72[32] = 0;
              *(_DWORD *)&v72[36] = *(_DWORD *)&v48[3];
              *(_DWORD *)&v72[33] = *(_DWORD *)v48;
              v34 = core::iter::traits::iterator::Iterator::try_fold(v72);
              if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v34) )
                break;
              *(_OWORD *)v36 = v33;
              *(_QWORD *)&v36[16] = 8LL;
              v37 = 0LL;
              v38 = 0;
              *(_DWORD *)&v39[3] = *(_DWORD *)&v48[3];
              *(_DWORD *)v39 = *(_DWORD *)v48;
              chrono::datetime::DateTime<Tz>::format_with_items(v72, &v56, v36);
              <T as alloc::string::SpecToString>::spec_to_string(v36, v72);
              alloc::str::<impl str>::replace(&v40, *(_QWORD *)&v36[8], *(_QWORD *)&v36[16]);
              core::ptr::drop_in_place<alloc::string::String>(v36);
              core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v72);
              *(_QWORD *)v36 = &v40;
              *(_QWORD *)&v36[8] = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)v72 = &unk_34B020;
              *(_QWORD *)&v72[8] = 2LL;
              *(_QWORD *)&v72[32] = 0LL;
              *(_QWORD *)&v72[16] = v36;
              *(_QWORD *)&v72[24] = 1LL;
              std::io::stdio::_print(v72);
              core::ptr::drop_in_place<alloc::string::String>(&v40);
              core::ptr::drop_in_place<alloc::string::String>(&v61);
            }
            alloc::str::<impl str>::replace(v36, v33, *((_QWORD *)&v33 + 1));
            *(_QWORD *)&v40 = v36;
            *((_QWORD *)&v40 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v72 = &off_34B098;
            *(_QWORD *)&v72[8] = 1LL;
            *(_QWORD *)&v72[32] = 0LL;
            *(_QWORD *)&v72[16] = &v40;
            *(_QWORD *)&v72[24] = 1LL;
            core::option::Option<T>::map_or_else(&v85, v72);
            core::ptr::drop_in_place<alloc::string::String>(v36);
            *(_DWORD *)&v72[24] = 1;
            *(_OWORD *)v72 = v85;
            *(_QWORD *)&v72[16] = v86;
            v14 = alloc::boxed::Box<T>::new(v72);
            core::ptr::drop_in_place<alloc::string::String>(&v61);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v35,
              v57);
          }
          else
          {
            v44 = (__int64)&v40;
            *(_QWORD *)&v45 = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
            *(_QWORD *)v72 = &off_34B078;
            *(_QWORD *)&v72[8] = 1LL;
            *(_QWORD *)&v72[32] = 0LL;
            *(_QWORD *)&v72[16] = &v44;
            *(_QWORD *)&v72[24] = 1LL;
            core::option::Option<T>::map_or_else(&v81, v72);
            *(_DWORD *)&v72[24] = 1;
            *(_OWORD *)v72 = v81;
            *(_QWORD *)&v72[16] = v82;
            v26 = alloc::boxed::Box<T>::new(v72);
LABEL_57:
            v14 = v26;
          }
          break;
      }
    }
    core::ptr::drop_in_place<uu_date::Settings>(&v49);
    goto LABEL_33;
  }
  v12 = *(_QWORD *)(v5 + 8);
  v13 = *(_QWORD *)(v5 + 16);
  v49.m256i_i64[0] = 0LL;
  v49.m256i_i64[1] = v12;
  v49.m256i_i64[2] = v13;
  v49.m256i_i8[24] = 1;
  v44 = (__int64)&v49;
  *(_QWORD *)&v45 = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)v72 = &off_34B078;
  *(_QWORD *)&v72[8] = 1LL;
  *(_QWORD *)&v72[32] = 0LL;
  *(_QWORD *)&v72[16] = &v44;
  *(_QWORD *)&v72[24] = 1LL;
  core::option::Option<T>::map_or_else(&v77, v72);
  *(_DWORD *)&v72[24] = 1;
  *(_OWORD *)v72 = v77;
  *(_QWORD *)&v72[16] = v78;
  v14 = alloc::boxed::Box<T>::new(v72);
LABEL_33:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v65);
  return v14;
}