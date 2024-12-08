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
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 (__fastcall **v23)(); // rbx
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(); // r13
  unsigned int v26; // eax
  __int64 (__fastcall *v27)(); // rdx
  unsigned __int8 v28; // al
  _BYTE *v30; // [rsp+8h] [rbp-6B0h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+10h] [rbp-6A8h]
  _BYTE v32[24]; // [rsp+18h] [rbp-6A0h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+30h] [rbp-688h]
  __int64 v34; // [rsp+38h] [rbp-680h]
  __int128 v35; // [rsp+40h] [rbp-678h] BYREF
  __int64 v36; // [rsp+50h] [rbp-668h]
  __m256i *v37; // [rsp+58h] [rbp-660h] BYREF
  __int128 v38; // [rsp+60h] [rbp-658h]
  __int64 v39; // [rsp+70h] [rbp-648h]
  int v40; // [rsp+78h] [rbp-640h]
  __m256i v41; // [rsp+80h] [rbp-638h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-618h]
  _BYTE v43[20]; // [rsp+B0h] [rbp-608h]
  int v44; // [rsp+C4h] [rbp-5F4h]
  char v45; // [rsp+C8h] [rbp-5F0h]
  __int128 v46; // [rsp+D0h] [rbp-5E8h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+E8h] [rbp-5D0h]
  __m256i v48; // [rsp+F0h] [rbp-5C8h] BYREF
  __int128 v49; // [rsp+110h] [rbp-5A8h] BYREF
  __int64 v50; // [rsp+120h] [rbp-598h]
  _BYTE v51[24]; // [rsp+130h] [rbp-588h] BYREF
  __int128 v52; // [rsp+148h] [rbp-570h]
  __int64 v53; // [rsp+158h] [rbp-560h]
  _BYTE *v54; // [rsp+168h] [rbp-550h]
  int v55; // [rsp+170h] [rbp-548h]
  __m256i v56; // [rsp+178h] [rbp-540h] BYREF
  __int128 v57; // [rsp+198h] [rbp-520h]
  __int64 v58; // [rsp+1A8h] [rbp-510h]
  __int64 v59; // [rsp+1B0h] [rbp-508h]
  char *format_string; // [rsp+1B8h] [rbp-500h]
  __int64 v61; // [rsp+1C0h] [rbp-4F8h] BYREF
  int v62; // [rsp+1C8h] [rbp-4F0h]
  __int128 v63; // [rsp+1D0h] [rbp-4E8h] BYREF
  __int64 v64; // [rsp+1E0h] [rbp-4D8h]
  __int64 v65; // [rsp+1E8h] [rbp-4D0h]
  _BYTE dest[48]; // [rsp+1F0h] [rbp-4C8h] BYREF
  __int128 v67; // [rsp+220h] [rbp-498h]
  _BYTE v68[16]; // [rsp+4C0h] [rbp-1F8h] BYREF
  __int128 v69; // [rsp+4D0h] [rbp-1E8h] BYREF
  __int128 v70; // [rsp+4E8h] [rbp-1D0h] BYREF
  __int64 v71; // [rsp+4F8h] [rbp-1C0h]
  __int128 v72; // [rsp+500h] [rbp-1B8h] BYREF
  __int64 v73; // [rsp+510h] [rbp-1A8h]
  __int128 v74; // [rsp+518h] [rbp-1A0h] BYREF
  __int64 v75; // [rsp+528h] [rbp-190h]
  __int128 v76; // [rsp+530h] [rbp-188h] BYREF
  __int64 v77; // [rsp+540h] [rbp-178h]
  __int128 v78; // [rsp+548h] [rbp-170h] BYREF
  __int64 v79; // [rsp+558h] [rbp-160h]
  _QWORD v80[2]; // [rsp+560h] [rbp-158h] BYREF
  int v81; // [rsp+570h] [rbp-148h]
  int v82; // [rsp+574h] [rbp-144h]
  _OWORD v83[3]; // [rsp+590h] [rbp-128h] BYREF
  _OWORD v84[3]; // [rsp+5C0h] [rbp-F8h] BYREF
  _OWORD v85[3]; // [rsp+5F0h] [rbp-C8h] BYREF
  _OWORD v86[3]; // [rsp+628h] [rbp-90h] BYREF
  unsigned __int64 v87; // [rsp+658h] [rbp-60h] BYREF
  __int128 v88; // [rsp+660h] [rbp-58h]

  uu_date::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v41, dest, a1, a2);
  if ( v41.m256i_i64[0] != 0x8000000000000000LL )
  {
    v58 = *(_QWORD *)v43;
    v57 = v42;
    v56 = v41;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v56, aFormat, 6LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aFormat, 6LL, dest);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)dest = 0;
      v6 = core::char::methods::encode_utf8_raw(43LL, dest);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v4, v5, v6, v7) )
      {
        v41.m256i_i64[0] = 0LL;
        v41.m256i_i64[1] = v4;
        v41.m256i_i64[2] = v5;
        v41.m256i_i8[24] = 1;
        *(_QWORD *)v51 = &v41;
        *(_QWORD *)&v51[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_30A0E0;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[32] = 0LL;
        *(_QWORD *)&dest[16] = v51;
        *(_QWORD *)&dest[24] = 1LL;
        core::option::Option<T>::map_or_else(&v70, dest);
        *(_DWORD *)&dest[24] = 1;
        *(_OWORD *)dest = v70;
        *(_QWORD *)&dest[16] = v71;
        v2 = alloc::boxed::Box<T>::new(dest);
        goto LABEL_59;
      }
      v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             1LL,
             v4,
             v5);
      if ( !v8 )
        core::str::slice_error_fail(v4, v5, 1LL, v5, &off_30A198);
      <T as alloc::slice::hack::ConvertVec>::to_vec(dest, v8);
      v50 = *(_QWORD *)&dest[16];
      v49 = *(_OWORD *)dest;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, &v56, aIso8601, 8LL);
      clap_builder::parser::error::MatchesError::unwrap(&v41, aIso8601, 8LL, dest);
      if ( v41.m256i_i64[0] )
      {
        v67 = *(_OWORD *)v43;
        *(_OWORD *)&dest[32] = v42;
        *(__m256i *)dest = v41;
        BYTE8(v49) = uu_date::uumain::uumain::{{closure}}(dest);
        v9 = 0x8000000000000000LL;
      }
      else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v56, aRfcEmail, 9LL) )
      {
        v9 = 0x8000000000000001LL;
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v56, aRfc3339, 8LL);
        v10 = clap_builder::parser::error::MatchesError::unwrap(aRfc3339, 8LL, dest);
        if ( v10 )
        {
          BYTE8(v49) = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(
                         *(_QWORD *)(v10 + 8),
                         *(_QWORD *)(v10 + 16));
          v9 = 0x8000000000000002LL;
        }
        else
        {
          v9 = 0x8000000000000004LL;
        }
      }
      *(_QWORD *)&v49 = v9;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v56, "datethur]", 4LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap("datethur]", 4LL, dest);
    if ( v11 )
    {
      chrono::offset::local::Local::now(v68);
      parse_datetime::parse_datetime_at_date(&v41, v68, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      if ( v41.m256i_i64[0] == 0x8000000000000002LL )
      {
        v69 = *(_OWORD *)&v41.m256i_u64[1];
        v48.m256i_i64[1] = chrono::datetime::DateTime<Tz>::signed_duration_since(&v69, v68);
        v48.m256i_i32[4] = v12;
        v48.m256i_i64[0] = 4LL;
      }
      else
      {
        <alloc::string::String as core::clone::Clone>::clone(dest, v11);
        v48.m256i_i64[3] = *(_QWORD *)&dest[16];
        *(_OWORD *)&v48.m256i_u64[1] = *(_OWORD *)dest;
        v48.m256i_i64[0] = 1LL;
      }
      core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v41);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v56, "filemode{", 4LL);
      v13 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, dest);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v13 + 16);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, asc_53973, 1LL) )
        {
          v48.m256i_i64[0] = 3LL;
        }
        else
        {
          std::sys::os_str::bytes::Slice::to_owned(dest, v14, v15);
          v48.m256i_i64[3] = *(_QWORD *)&dest[16];
          *(_OWORD *)&v48.m256i_u64[1] = *(_OWORD *)dest;
          v48.m256i_i64[0] = 2LL;
        }
      }
      else
      {
        v48.m256i_i64[0] = 0LL;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v56, aSet, 3LL);
    v16 = clap_builder::parser::error::MatchesError::unwrap(aSet, 3LL, dest);
    v17 = 0;
    if ( !v16 )
      goto LABEL_28;
    core::ops::function::FnOnce::call_once(dest, v16);
    v30 = *(_BYTE **)&dest[12];
    LODWORD(v31) = *(_DWORD *)&dest[20];
    v35 = *(_OWORD *)&dest[24];
    v36 = *(_QWORD *)&dest[40];
    if ( *(_QWORD *)dest == 0x8000000000000001LL )
      goto LABEL_28;
    if ( *(_QWORD *)dest == 0x8000000000000000LL )
    {
      v55 = (int)v31;
      v54 = v30;
      v17 = *(_DWORD *)&dest[8];
LABEL_28:
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v56, aUniversal, 9LL);
      *(_QWORD *)v43 = v50;
      v42 = v49;
      v41 = v48;
      *(_QWORD *)&v43[12] = v54;
      v44 = v55;
      v45 = flag;
      *(_DWORD *)&v43[8] = v17;
      if ( v17 )
      {
        v62 = *(_DWORD *)&v43[16];
        v61 = *(_QWORD *)&v43[8];
        v2 = uu_date::set_system_datetime(&v61);
      }
      else
      {
        if ( flag )
        {
          chrono::offset::utc::Utc::now(dest);
          v40 = *(_DWORD *)&dest[8];
          v39 = *(_QWORD *)dest;
          v19 = 0;
          switch ( v41.m256i_i64[0] )
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
        chrono::offset::local::Local::now(dest);
        v40 = *(_DWORD *)&dest[8];
        v39 = *(_QWORD *)dest;
        v19 = *(_DWORD *)&dest[12];
        switch ( v41.m256i_i64[0] )
        {
          case 0LL:
LABEL_34:
            v81 = v40;
            v80[1] = v39;
            v80[0] = 0x8000000000000000LL;
            v82 = v19;
            v20 = v80;
            goto LABEL_43;
          case 1LL:
LABEL_42:
            <alloc::string::String as core::clone::Clone>::clone(dest, &v41.m256i_u64[1]);
            uu_date::parse_date((__int64)v86, (__int64)dest);
            v83[0] = v86[0];
            v83[1] = v86[1];
            v83[2] = v86[2];
            v20 = v83;
LABEL_43:
            v34 = alloc::boxed::Box<T>::new(v20);
            goto LABEL_44;
          case 2LL:
LABEL_39:
            if ( (unsigned __int8)std::path::Path::is_dir(v41.m256i_i64[2], v41.m256i_i64[3]) )
            {
              *(_QWORD *)v51 = 1LL;
              *(_OWORD *)&v51[8] = *(_OWORD *)&v41.m256i_u64[2];
              LOBYTE(v52) = 1;
              *(_QWORD *)v32 = v51;
              *(_QWORD *)&v32[8] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &off_30A220;
              *(_QWORD *)&dest[8] = 1LL;
              *(_QWORD *)&dest[32] = 0LL;
              *(_QWORD *)&dest[16] = v32;
              *(_QWORD *)&dest[24] = 1LL;
              core::option::Option<T>::map_or_else(&v76, dest);
              *(_DWORD *)&dest[24] = 2;
              *(_OWORD *)dest = v76;
              *(_QWORD *)&dest[16] = v77;
              v21 = alloc::boxed::Box<T>::new(dest);
              goto LABEL_57;
            }
            std::fs::File::open(dest, &v41.m256i_u64[1]);
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              v51,
              dest,
              &v41.m256i_u64[1]);
            v2 = *(_QWORD *)v51;
            if ( *(_QWORD *)v51 )
              break;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(dest, 0x2000LL, *(unsigned int *)&v51[8]);
            v85[2] = *(_OWORD *)&dest[32];
            v85[1] = *(_OWORD *)&dest[16];
            v85[0] = *(_OWORD *)dest;
            v34 = alloc::boxed::Box<T>::new(v85);
            v23 = &off_30A1E8;
            goto LABEL_45;
          case 3LL:
LABEL_41:
            v22 = std::io::stdio::stdin();
            std::io::buffered::bufreader::BufReader<R>::with_capacity(dest, 0x2000LL, v22);
            v84[2] = *(_OWORD *)&dest[32];
            v84[1] = *(_OWORD *)&dest[16];
            v84[0] = *(_OWORD *)dest;
            v34 = alloc::boxed::Box<T>::new(v84);
            v23 = &off_30A230;
            goto LABEL_45;
          case 4LL:
LABEL_37:
            *(_QWORD *)&v35 = v41.m256i_i64[1];
            DWORD2(v35) = v41.m256i_i32[4];
            *(_DWORD *)&dest[8] = v40;
            *(_QWORD *)dest = v39;
            *(_DWORD *)&dest[12] = v19;
            chrono::datetime::DateTime<Tz>::checked_add_signed(v32, dest);
            if ( *(_DWORD *)v32 )
            {
              v88 = *(_OWORD *)v32;
              v87 = 0x8000000000000000LL;
              v34 = alloc::boxed::Box<T>::new(&v87);
LABEL_44:
              v23 = &off_30A1B0;
LABEL_45:
              format_string = uu_date::make_format_string((__int64)&v41);
              v59 = v24;
              v47 = v23;
              v25 = v23[3];
              while ( 1 )
              {
                while ( 1 )
                {
                  ((void (__fastcall *)(_BYTE *, __int64))v25)(v51, v34);
                  if ( *(_QWORD *)v51 == 0x8000000000000000LL )
                    break;
                  if ( *(_QWORD *)v51 == 0x8000000000000001LL )
                  {
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                      v34,
                      v47);
                    core::ptr::drop_in_place<uu_date::Settings>(&v41);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v56);
                    return 0LL;
                  }
                  v37 = *(__m256i **)v51;
                  v38 = *(_OWORD *)&v51[8];
                  v36 = v53;
                  v35 = v52;
                  *(_QWORD *)v32 = 0LL;
                  *(_OWORD *)&v32[8] = *(_OWORD *)&v51[8];
                  LOBYTE(v33) = 1;
                  v30 = v32;
                  v31 = <os_display::Quoted as core::fmt::Display>::fmt;
                  *(_QWORD *)dest = &off_30A0E0;
                  *(_QWORD *)&dest[8] = 1LL;
                  *(_QWORD *)&dest[32] = 0LL;
                  *(_QWORD *)&dest[16] = &v30;
                  *(_QWORD *)&dest[24] = 1LL;
                  core::option::Option<T>::map_or_else(&v78, dest);
                  *(_DWORD *)&dest[24] = 1;
                  *(_OWORD *)dest = v78;
                  *(_QWORD *)&dest[16] = v79;
                  *(_QWORD *)&v46 = alloc::boxed::Box<T>::new(dest);
                  *((_QWORD *)&v46 + 1) = &off_30A128;
                  v26 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v46);
                  uucore::mods::error::set_exit_code(v26);
                  v30 = (_BYTE *)uucore::util_name();
                  v31 = v27;
                  *(_QWORD *)v32 = &v30;
                  *(_QWORD *)&v32[8] = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v32[16] = &v46;
                  v33 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                  *(_QWORD *)dest = &unk_30A278;
                  *(_QWORD *)&dest[8] = 3LL;
                  *(_QWORD *)&dest[32] = 0LL;
                  *(_QWORD *)&dest[16] = v32;
                  *(_QWORD *)&dest[24] = 2LL;
                  std::io::stdio::_eprint(dest);
                  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                    v46,
                    *((_QWORD *)&v46 + 1));
                  core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v35);
                  core::ptr::drop_in_place<alloc::string::String>(&v37);
                }
                v46 = *(_OWORD *)&v51[8];
                alloc::str::<impl str>::replace(&v37, format_string, v59, aNF, &aNF[2]);
                if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v38, *((_QWORD *)&v38 + 1)) )
                  break;
                v63 = v38;
                v64 = 8LL;
                v65 = 0LL;
                *(_OWORD *)&dest[16] = 8uLL;
                *(_OWORD *)dest = v38;
                v28 = core::iter::traits::iterator::Iterator::try_fold(dest);
                if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v28) )
                  break;
                chrono::datetime::DateTime<Tz>::format_with_items(dest, &v46, &v63);
                <T as alloc::string::ToString>::to_string(v32, dest);
                alloc::str::<impl str>::replace(&v35, *(_QWORD *)&v32[8], *(_QWORD *)&v32[16], &aNF[2], aNF);
                core::ptr::drop_in_place<alloc::string::String>(v32);
                core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(dest);
                *(_QWORD *)v32 = &v35;
                *(_QWORD *)&v32[8] = <alloc::string::String as core::fmt::Display>::fmt;
                *(_QWORD *)dest = &unk_30A0A0;
                *(_QWORD *)&dest[8] = 2LL;
                *(_QWORD *)&dest[32] = 0LL;
                *(_QWORD *)&dest[16] = v32;
                *(_QWORD *)&dest[24] = 1LL;
                std::io::stdio::_print(dest);
                core::ptr::drop_in_place<alloc::string::String>(&v35);
                core::ptr::drop_in_place<alloc::string::String>(&v37);
              }
              alloc::str::<impl str>::replace(v32, v38, *((_QWORD *)&v38 + 1), &aNF[2], aNF);
              v30 = v32;
              v31 = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &off_30A268;
              *(_QWORD *)&dest[8] = 1LL;
              *(_QWORD *)&dest[32] = 0LL;
              *(_QWORD *)&dest[16] = &v30;
              *(_QWORD *)&dest[24] = 1LL;
              core::option::Option<T>::map_or_else(&v35, dest);
              core::ptr::drop_in_place<alloc::string::String>(v32);
              *(_QWORD *)&dest[16] = v36;
              *(_OWORD *)dest = v35;
              *(_DWORD *)&dest[24] = 1;
              v2 = alloc::boxed::Box<T>::new(dest);
              core::ptr::drop_in_place<alloc::string::String>(&v37);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
                v34,
                v47);
            }
            else
            {
              *(_QWORD *)v51 = &v35;
              *(_QWORD *)&v51[8] = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &off_30A0E0;
              *(_QWORD *)&dest[8] = 1LL;
              *(_QWORD *)&dest[32] = 0LL;
              *(_QWORD *)&dest[16] = v51;
              *(_QWORD *)&dest[24] = 1LL;
              core::option::Option<T>::map_or_else(&v74, dest);
              *(_DWORD *)&dest[24] = 1;
              *(_OWORD *)dest = v74;
              *(_QWORD *)&dest[16] = v75;
              v21 = alloc::boxed::Box<T>::new(dest);
LABEL_57:
              v2 = v21;
            }
            break;
        }
      }
      core::ptr::drop_in_place<uu_date::Settings>(&v41);
      goto LABEL_59;
    }
    *(_QWORD *)v32 = *(_QWORD *)dest;
    *(_DWORD *)&v32[8] = *(_DWORD *)&dest[8];
    *(_DWORD *)&v32[20] = (_DWORD)v31;
    *(_QWORD *)&v32[12] = v30;
    *(_QWORD *)&v51[16] = v36;
    *(_OWORD *)v51 = v35;
    v41.m256i_i64[0] = 0LL;
    v41.m256i_i32[2] = *(_DWORD *)&dest[8];
    *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = (__int64)v30;
    v41.m256i_i32[5] = (int)v31;
    v41.m256i_i8[24] = 1;
    v37 = &v41;
    *(_QWORD *)&v38 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_30A0E0;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v37;
    *(_QWORD *)&dest[24] = 1LL;
    core::option::Option<T>::map_or_else(&v72, dest);
    *(_DWORD *)&dest[24] = 1;
    *(_OWORD *)dest = v72;
    *(_QWORD *)&dest[16] = v73;
    v2 = alloc::boxed::Box<T>::new(dest);
    core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(v51);
    core::ptr::drop_in_place<alloc::string::String>(v32);
    core::ptr::drop_in_place<uu_date::DateSource>(&v48);
    core::ptr::drop_in_place<uu_date::Format>(&v49);
LABEL_59:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v56);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41.m256i_i64[1]);
}
