__int64 __fastcall uu_date::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int32 v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // ebp
  char flag; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 (__fastcall **v29)(); // rbx
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 (__fastcall *v32)(); // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int128 v38; // kr10_16
  unsigned __int8 v39; // al
  __int64 v40; // r14
  _BYTE v42[24]; // [rsp+0h] [rbp-698h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+18h] [rbp-680h]
  _BYTE *v44; // [rsp+20h] [rbp-678h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+28h] [rbp-670h]
  __int128 v46; // [rsp+30h] [rbp-668h] BYREF
  __int64 v47; // [rsp+40h] [rbp-658h]
  __m256i *v48; // [rsp+50h] [rbp-648h] BYREF
  __int128 v49; // [rsp+58h] [rbp-640h]
  __int64 v50; // [rsp+68h] [rbp-630h]
  int v51; // [rsp+70h] [rbp-628h]
  __int64 v52; // [rsp+78h] [rbp-620h]
  __m256i v53; // [rsp+80h] [rbp-618h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-5F8h]
  _BYTE v55[20]; // [rsp+B0h] [rbp-5E8h]
  int v56; // [rsp+C4h] [rbp-5D4h]
  char v57; // [rsp+C8h] [rbp-5D0h]
  __int128 v58; // [rsp+D0h] [rbp-5C8h] BYREF
  __int64 (__fastcall **v59)(); // [rsp+E8h] [rbp-5B0h]
  __m256i v60; // [rsp+F0h] [rbp-5A8h] BYREF
  __int128 v61; // [rsp+110h] [rbp-588h] BYREF
  __int64 v62; // [rsp+120h] [rbp-578h]
  _BYTE v63[24]; // [rsp+130h] [rbp-568h] BYREF
  __int128 v64; // [rsp+148h] [rbp-550h]
  __int64 v65; // [rsp+158h] [rbp-540h]
  _BYTE *v66; // [rsp+160h] [rbp-538h]
  int v67; // [rsp+168h] [rbp-530h]
  __m256i v68; // [rsp+170h] [rbp-528h] BYREF
  __int128 v69; // [rsp+190h] [rbp-508h]
  __int64 v70; // [rsp+1A0h] [rbp-4F8h]
  __int64 v71; // [rsp+1A8h] [rbp-4F0h]
  char *format_string; // [rsp+1B0h] [rbp-4E8h]
  __int64 (__fastcall *v73)(); // [rsp+1B8h] [rbp-4E0h]
  __int64 v74; // [rsp+1C0h] [rbp-4D8h] BYREF
  int v75; // [rsp+1C8h] [rbp-4D0h]
  _BYTE v76[48]; // [rsp+1D0h] [rbp-4C8h] BYREF
  __int128 v77; // [rsp+200h] [rbp-498h]
  _BYTE v78[16]; // [rsp+4A0h] [rbp-1F8h] BYREF
  __int128 v79; // [rsp+4B0h] [rbp-1E8h] BYREF
  __int128 v80; // [rsp+4C8h] [rbp-1D0h] BYREF
  __int64 v81; // [rsp+4D8h] [rbp-1C0h]
  __int128 v82; // [rsp+4E0h] [rbp-1B8h] BYREF
  __int64 v83; // [rsp+4F0h] [rbp-1A8h]
  __int128 v84; // [rsp+4F8h] [rbp-1A0h] BYREF
  __int64 v85; // [rsp+508h] [rbp-190h]
  __int128 v86; // [rsp+510h] [rbp-188h] BYREF
  __int64 v87; // [rsp+520h] [rbp-178h]
  __int128 v88; // [rsp+528h] [rbp-170h] BYREF
  __int64 v89; // [rsp+538h] [rbp-160h]
  _QWORD v90[2]; // [rsp+540h] [rbp-158h] BYREF
  int v91; // [rsp+550h] [rbp-148h]
  int v92; // [rsp+554h] [rbp-144h]
  _OWORD v93[3]; // [rsp+570h] [rbp-128h] BYREF
  _OWORD v94[3]; // [rsp+5A0h] [rbp-F8h] BYREF
  _OWORD v95[3]; // [rsp+5D0h] [rbp-C8h] BYREF
  _OWORD v96[3]; // [rsp+608h] [rbp-90h] BYREF
  unsigned __int64 v97; // [rsp+638h] [rbp-60h] BYREF
  __int128 v98; // [rsp+640h] [rbp-58h]

  uu_date::uu_app(v76);
  clap_builder::builder::command::Command::try_get_matches_from(&v53, v76, a1, a2);
  if ( v53.m256i_i64[0] != 0x8000000000000000LL )
  {
    v70 = *(_QWORD *)v55;
    v69 = v54;
    v68 = v53;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, &v68, aFormat, 6LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aFormat, 6LL, v76);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)v76 = 0;
      v6 = core::char::methods::encode_utf8_raw(43LL, v76);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v4, v5, v6, v7) )
      {
        v53.m256i_i64[0] = 0LL;
        v53.m256i_i64[1] = v4;
        v53.m256i_i64[2] = v5;
        v53.m256i_i8[24] = 1;
        *(_QWORD *)v63 = &v53;
        *(_QWORD *)&v63[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v76 = &off_30B050;
        *(_QWORD *)&v76[8] = 1LL;
        *(_QWORD *)&v76[32] = 0LL;
        *(_QWORD *)&v76[16] = v63;
        *(_QWORD *)&v76[24] = 1LL;
        core::option::Option<T>::map_or_else(&v80, v76);
        *(_DWORD *)&v76[24] = 1;
        *(_OWORD *)v76 = v80;
        *(_QWORD *)&v76[16] = v81;
        v2 = alloc::boxed::Box<T>::new(v76);
        goto LABEL_59;
      }
      v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             1LL,
             v4,
             v5);
      if ( !v8 )
        core::str::slice_error_fail(v4, v5, 1LL, v5, &off_30B158);
      <T as alloc::slice::hack::ConvertVec>::to_vec(v76, v8);
      v62 = *(_QWORD *)&v76[16];
      v61 = *(_OWORD *)v76;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v76, &v68, aIso8601, 8LL);
      clap_builder::parser::error::MatchesError::unwrap(&v53, aIso8601, 8LL, v76);
      if ( v53.m256i_i64[0] )
      {
        v77 = *(_OWORD *)v55;
        *(_OWORD *)&v76[32] = v54;
        *(__m256i *)v76 = v53;
        BYTE8(v61) = uu_date::uumain::uumain::{{closure}}(v76);
        *(_QWORD *)&v61 = 0x8000000000000000LL;
      }
      else
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v68, aRfcEmail, 9LL) )
        {
          v9 = 0x8000000000000001LL;
        }
        else
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, &v68, aRfc3339, 8LL);
          v10 = clap_builder::parser::error::MatchesError::unwrap(aRfc3339, 8LL, v76);
          if ( v10 )
          {
            BYTE8(v61) = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(
                           *(_QWORD *)(v10 + 8),
                           *(_QWORD *)(v10 + 16));
            v9 = 0x8000000000000002LL;
          }
          else
          {
            v9 = 0x8000000000000004LL;
          }
        }
        *(_QWORD *)&v61 = v9;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, &v68, "datethur]", 4LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap("datethur]", 4LL, v76);
    if ( v11 )
    {
      chrono::offset::local::Local::now(v78);
      parse_datetime::parse_datetime_at_date(&v53, v78, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      if ( v53.m256i_i64[0] == 0x8000000000000002LL )
      {
        v79 = *(_OWORD *)&v53.m256i_u64[1];
        v60.m256i_i64[1] = chrono::datetime::DateTime<Tz>::signed_duration_since(&v79, v78);
        v60.m256i_i32[4] = v12;
        v60.m256i_i64[0] = 4LL;
      }
      else
      {
        <alloc::string::String as core::clone::Clone>::clone(v76, v11);
        v60.m256i_i64[3] = *(_QWORD *)&v76[16];
        *(_OWORD *)&v60.m256i_u64[1] = *(_OWORD *)v76;
        v60.m256i_i64[0] = 1LL;
      }
      core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v53);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, &v68, "filemode{", 4LL);
      v13 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, v76);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v13 + 16);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, asc_53766, 1LL) )
        {
          v60.m256i_i64[0] = 3LL;
        }
        else
        {
          std::sys::os_str::bytes::Slice::to_owned(v76, v14, v15);
          v60.m256i_i64[3] = *(_QWORD *)&v76[16];
          *(_OWORD *)&v60.m256i_u64[1] = *(_OWORD *)v76;
          v60.m256i_i64[0] = 2LL;
        }
      }
      else
      {
        v60.m256i_i64[0] = 0LL;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, &v68, aSet, 3LL);
    v16 = clap_builder::parser::error::MatchesError::unwrap(aSet, 3LL, v76);
    v17 = 0;
    if ( !v16 )
      goto LABEL_28;
    core::ops::function::FnOnce::call_once(v76, v16);
    v44 = *(_BYTE **)&v76[12];
    LODWORD(v45) = *(_DWORD *)&v76[20];
    v46 = *(_OWORD *)&v76[24];
    v47 = *(_QWORD *)&v76[40];
    if ( *(_QWORD *)v76 == 0x8000000000000001LL )
      goto LABEL_28;
    if ( *(_QWORD *)v76 == 0x8000000000000000LL )
    {
      v67 = (int)v45;
      v66 = v44;
      v17 = *(_DWORD *)&v76[8];
LABEL_28:
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v68, aUniversal, 9LL);
      *(_QWORD *)v55 = v62;
      v54 = v61;
      v53 = v60;
      *(_QWORD *)&v55[12] = v66;
      v56 = v67;
      v57 = flag;
      *(_DWORD *)&v55[8] = v17;
      if ( v17 )
      {
        v75 = *(_DWORD *)&v55[16];
        v74 = *(_QWORD *)&v55[8];
        v2 = uu_date::set_system_datetime(&v74);
      }
      else
      {
        if ( flag )
        {
          chrono::offset::utc::Utc::now(v76);
          v51 = *(_DWORD *)&v76[8];
          v50 = *(_QWORD *)v76;
          v19 = 0;
          switch ( v53.m256i_i64[0] )
          {
            case 0LL:
              goto LABEL_34;
            case 1LL:
              goto LABEL_42;
            case 2LL:
              goto LABEL_39;
            case 3LL:
              goto LABEL_41;
            case 4LL:
              goto LABEL_37;
          }
        }
        chrono::offset::local::Local::now(v76);
        v51 = *(_DWORD *)&v76[8];
        v50 = *(_QWORD *)v76;
        v19 = *(_DWORD *)&v76[12];
        switch ( v53.m256i_i64[0] )
        {
          case 0LL:
LABEL_34:
            v91 = v51;
            v90[1] = v50;
            v90[0] = 0x8000000000000000LL;
            v92 = v19;
            v24 = v90;
            goto LABEL_43;
          case 1LL:
LABEL_42:
            <alloc::string::String as core::clone::Clone>::clone(v76, &v53.m256i_u64[1]);
            uu_date::parse_date((__int64)v96, (__int64)v76);
            v93[0] = v96[0];
            v93[1] = v96[1];
            v93[2] = v96[2];
            v24 = v93;
LABEL_43:
            v25 = alloc::boxed::Box<T>::new(v24);
            goto LABEL_44;
          case 2LL:
LABEL_39:
            if ( (unsigned __int8)std::path::Path::is_dir(v53.m256i_i64[2], v53.m256i_i64[3]) )
            {
              *(_QWORD *)v63 = 1LL;
              *(_OWORD *)&v63[8] = *(_OWORD *)&v53.m256i_u64[2];
              LOBYTE(v64) = 1;
              *(_QWORD *)v42 = v63;
              *(_QWORD *)&v42[8] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)v76 = &off_30B060;
              *(_QWORD *)&v76[8] = 1LL;
              *(_QWORD *)&v76[32] = 0LL;
              *(_QWORD *)&v76[16] = v42;
              *(_QWORD *)&v76[24] = 1LL;
              core::option::Option<T>::map_or_else(&v86, v76);
              *(_DWORD *)&v76[24] = 2;
              *(_OWORD *)v76 = v86;
              *(_QWORD *)&v76[16] = v87;
              v26 = alloc::boxed::Box<T>::new(v76);
              goto LABEL_57;
            }
            std::fs::File::open(v76, &v53.m256i_u64[1]);
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              v63,
              v76,
              &v53.m256i_u64[1]);
            v2 = *(_QWORD *)v63;
            if ( *(_QWORD *)v63 )
              break;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v76, 0x2000LL, *(unsigned int *)&v63[8]);
            v95[2] = *(_OWORD *)&v76[32];
            v95[1] = *(_OWORD *)&v76[16];
            v95[0] = *(_OWORD *)v76;
            v28 = alloc::boxed::Box<T>::new(v95);
            v29 = &off_30B1A8;
            goto LABEL_45;
          case 3LL:
LABEL_41:
            v27 = std::io::stdio::stdin();
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v76, 0x2000LL, v27);
            v94[2] = *(_OWORD *)&v76[32];
            v94[1] = *(_OWORD *)&v76[16];
            v94[0] = *(_OWORD *)v76;
            v28 = alloc::boxed::Box<T>::new(v94);
            v29 = &off_30B1E0;
            goto LABEL_45;
          case 4LL:
LABEL_37:
            *(_QWORD *)&v46 = v53.m256i_i64[1];
            DWORD2(v46) = v53.m256i_i32[4];
            *(_DWORD *)&v76[8] = v51;
            *(_QWORD *)v76 = v50;
            *(_DWORD *)&v76[12] = v19;
            chrono::datetime::DateTime<Tz>::checked_add_signed(v42, v76);
            if ( *(_DWORD *)v42 )
            {
              v98 = *(_OWORD *)v42;
              v97 = 0x8000000000000000LL;
              v25 = alloc::boxed::Box<T>::new(&v97);
LABEL_44:
              v28 = v25;
              v29 = &off_30B170;
LABEL_45:
              format_string = uu_date::make_format_string((__int64)&v53);
              v71 = v30;
              v59 = v29;
              v73 = v29[3];
              v52 = v28;
              while ( 1 )
              {
                while ( 1 )
                {
                  ((void (__fastcall *)(_BYTE *, __int64))v73)(v63, v28);
                  if ( *(_QWORD *)v63 == 0x8000000000000000LL )
                    break;
                  if ( *(_QWORD *)v63 == 0x8000000000000001LL )
                  {
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                      v28,
                      v59);
                    core::ptr::drop_in_place<uu_date::Settings>(&v53);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v68);
                    return 0LL;
                  }
                  v48 = *(__m256i **)v63;
                  v49 = *(_OWORD *)&v63[8];
                  v47 = v65;
                  v46 = v64;
                  *(_QWORD *)v42 = 0LL;
                  *(_OWORD *)&v42[8] = *(_OWORD *)&v63[8];
                  LOBYTE(v43) = 1;
                  v44 = v42;
                  v45 = <os_display::Quoted as core::fmt::Display>::fmt;
                  *(_QWORD *)v76 = &off_30B050;
                  *(_QWORD *)&v76[8] = 1LL;
                  *(_QWORD *)&v76[32] = 0LL;
                  *(_QWORD *)&v76[16] = &v44;
                  *(_QWORD *)&v76[24] = 1LL;
                  core::option::Option<T>::map_or_else(&v88, v76);
                  *(_DWORD *)&v76[24] = 1;
                  *(_OWORD *)v76 = v88;
                  *(_QWORD *)&v76[16] = v89;
                  *(_QWORD *)&v58 = alloc::boxed::Box<T>::new(v76);
                  *((_QWORD *)&v58 + 1) = &off_30B0E8;
                  v31 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v58);
                  uucore::mods::error::set_exit_code(v31);
                  v44 = (_BYTE *)uucore::util_name();
                  v45 = v32;
                  *(_QWORD *)v42 = &v44;
                  *(_QWORD *)&v42[8] = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v42[16] = &v58;
                  v43 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                  *(_QWORD *)v76 = &unk_30B080;
                  *(_QWORD *)&v76[8] = 3LL;
                  *(_QWORD *)&v76[32] = 0LL;
                  *(_QWORD *)&v76[16] = v42;
                  *(_QWORD *)&v76[24] = 2LL;
                  std::io::stdio::_eprint(v76);
                  v33 = *((_QWORD *)&v58 + 1);
                  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                    v58,
                    *((_QWORD *)&v58 + 1));
                  core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(
                    &v46,
                    v33,
                    v34,
                    v35,
                    v36,
                    v37,
                    *(_QWORD *)v42,
                    *(_QWORD *)&v42[8],
                    *(_QWORD *)&v42[16]);
                  core::ptr::drop_in_place<alloc::string::String>(&v48);
                }
                v58 = *(_OWORD *)&v63[8];
                alloc::str::<impl str>::replace(&v48, format_string, v71, aNF, &aNF[2]);
                if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v49, *((_QWORD *)&v49 + 1)) )
                  break;
                v38 = v49;
                *(_OWORD *)v76 = v49;
                *(_OWORD *)&v76[16] = 8uLL;
                v39 = core::iter::traits::iterator::Iterator::try_fold(v76);
                if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v39) )
                  break;
                *(_OWORD *)v42 = v38;
                *(_QWORD *)&v42[16] = 8LL;
                v43 = 0LL;
                chrono::datetime::DateTime<Tz>::format_with_items(v76, &v58, v42);
                <T as alloc::string::ToString>::to_string(v42, v76);
                alloc::str::<impl str>::replace(&v46, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16], &aNF[2], aNF);
                core::ptr::drop_in_place<alloc::string::String>(v42);
                core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v76);
                *(_QWORD *)v42 = &v46;
                *(_QWORD *)&v42[8] = <alloc::string::String as core::fmt::Display>::fmt;
                *(_QWORD *)v76 = &unk_30AFF8;
                *(_QWORD *)&v76[8] = 2LL;
                *(_QWORD *)&v76[32] = 0LL;
                *(_QWORD *)&v76[16] = v42;
                *(_QWORD *)&v76[24] = 1LL;
                std::io::stdio::_print(v76);
                core::ptr::drop_in_place<alloc::string::String>(&v46);
                v28 = v52;
                core::ptr::drop_in_place<alloc::string::String>(&v48);
              }
              v40 = v52;
              alloc::str::<impl str>::replace(v42, v49, *((_QWORD *)&v49 + 1), &aNF[2], aNF);
              v44 = v42;
              v45 = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)v76 = &off_30B070;
              *(_QWORD *)&v76[8] = 1LL;
              *(_QWORD *)&v76[32] = 0LL;
              *(_QWORD *)&v76[16] = &v44;
              *(_QWORD *)&v76[24] = 1LL;
              core::option::Option<T>::map_or_else(&v46, v76);
              core::ptr::drop_in_place<alloc::string::String>(v42);
              *(_QWORD *)&v76[16] = v47;
              *(_OWORD *)v76 = v46;
              *(_DWORD *)&v76[24] = 1;
              v2 = alloc::boxed::Box<T>::new(v76);
              core::ptr::drop_in_place<alloc::string::String>(&v48);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                v40,
                v59);
            }
            else
            {
              *(_QWORD *)v63 = &v46;
              *(_QWORD *)&v63[8] = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
              *(_QWORD *)v76 = &off_30B050;
              *(_QWORD *)&v76[8] = 1LL;
              *(_QWORD *)&v76[32] = 0LL;
              *(_QWORD *)&v76[16] = v63;
              *(_QWORD *)&v76[24] = 1LL;
              core::option::Option<T>::map_or_else(&v84, v76);
              *(_DWORD *)&v76[24] = 1;
              *(_OWORD *)v76 = v84;
              *(_QWORD *)&v76[16] = v85;
              v26 = alloc::boxed::Box<T>::new(v76);
LABEL_57:
              v2 = v26;
            }
            break;
        }
      }
      core::ptr::drop_in_place<uu_date::Settings>(&v53);
      goto LABEL_59;
    }
    *(_QWORD *)v42 = *(_QWORD *)v76;
    *(_DWORD *)&v42[8] = *(_DWORD *)&v76[8];
    *(_DWORD *)&v42[20] = (_DWORD)v45;
    *(_QWORD *)&v42[12] = v44;
    *(_QWORD *)&v63[16] = v47;
    *(_OWORD *)v63 = v46;
    v53.m256i_i64[0] = 0LL;
    v53.m256i_i32[2] = *(_DWORD *)&v76[8];
    *(__int64 *)((char *)&v53.m256i_i64[1] + 4) = (__int64)v44;
    v53.m256i_i32[5] = (int)v45;
    v53.m256i_i8[24] = 1;
    v48 = &v53;
    *(_QWORD *)&v49 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v76 = &off_30B050;
    *(_QWORD *)&v76[8] = 1LL;
    *(_QWORD *)&v76[32] = 0LL;
    *(_QWORD *)&v76[16] = &v48;
    *(_QWORD *)&v76[24] = 1LL;
    core::option::Option<T>::map_or_else(&v82, v76);
    *(_DWORD *)&v76[24] = 1;
    *(_OWORD *)v76 = v82;
    *(_QWORD *)&v76[16] = v83;
    v2 = alloc::boxed::Box<T>::new(v76);
    core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(
      v63,
      v76,
      v20,
      v21,
      v22,
      v23,
      *(_QWORD *)v42,
      *(_QWORD *)&v42[8],
      *(_QWORD *)&v42[16]);
    core::ptr::drop_in_place<alloc::string::String>(v42);
    core::ptr::drop_in_place<uu_date::DateSource>(&v60);
    core::ptr::drop_in_place<uu_date::Format>(&v61);
LABEL_59:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v68);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53.m256i_i64[1]);
}
