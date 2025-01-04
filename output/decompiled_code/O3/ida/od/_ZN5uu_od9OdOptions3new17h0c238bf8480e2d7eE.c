__int64 __fastcall uu_od::OdOptions::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rax
  __m256i *v17; // rbp
  double v18; // xmm0_8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall **v21)(); // rcx
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rax
  __int128 v28; // rax
  char flag; // bp
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 vars0; // [rsp+0h] [rbp+0h] BYREF
  __m256i *vars10; // [rsp+10h] [rbp+10h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __m256i vars30; // [rsp+30h] [rbp+30h] BYREF
  __int64 vars58; // [rsp+58h] [rbp+58h] BYREF
  __m256i vars60; // [rsp+60h] [rbp+60h] BYREF
  int vars84; // [rsp+84h] [rbp+84h]
  __int64 vars88; // [rsp+88h] [rbp+88h]
  _BYTE vars90[24]; // [rsp+90h] [rbp+90h] BYREF
  unsigned __int64 varsA8; // [rsp+A8h] [rbp+A8h] BYREF
  __int128 varsB0; // [rsp+B0h] [rbp+B0h] BYREF
  __m256i *varsC0; // [rsp+C0h] [rbp+C0h]
  __int64 varsD0; // [rsp+D0h] [rbp+D0h]
  __int64 varsD8; // [rsp+D8h] [rbp+D8h] BYREF
  __int128 varsE0; // [rsp+E0h] [rbp+E0h]
  __int128 varsF0; // [rsp+F0h] [rbp+F0h] BYREF
  __m256i *vars100; // [rsp+100h] [rbp+100h]
  __int128 vars108; // [rsp+108h] [rbp+108h] BYREF
  __m256i *vars118; // [rsp+118h] [rbp+118h]
  __int128 vars120; // [rsp+120h] [rbp+120h] BYREF
  __m256i *vars130; // [rsp+130h] [rbp+130h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aEndian, 6LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aEndian, 6LL, &vars0);
  if ( v6 )
  {
    varsD8 = v6;
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_QWORD *)(v6 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aLittle, 6LL) )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aBig, 3LL);
      LOBYTE(v7) = 1;
      if ( !v10 )
      {
        vars60.m256i_i64[0] = (__int64)&varsD8;
        vars60.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)&vars0 = &off_141640;
        *((_QWORD *)&vars0 + 1) = 1LL;
        vars20 = 0LL;
        vars10 = &vars60;
        vars18 = 1LL;
        ((void (__fastcall *)(__m256i *, __int128 *, __int64, __int64))core::option::Option<T>::map_or_else)(
          &vars30,
          &vars0,
          v11,
          v7);
        vars30.m256i_i32[6] = 1;
        v16 = alloc::boxed::Box<T>::new(&vars30);
        goto LABEL_16;
      }
    }
  }
  else
  {
    LOBYTE(v7) = 2;
  }
  vars84 = v7;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aSkipBytes, 10LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aSkipBytes, 10LL, &vars0);
  if ( !v12 )
  {
    v15 = 0LL;
LABEL_10:
    uu_od::parse_inputs::parse_inputs(&vars0, a2, &off_141748);
    if ( vars20 == 3 )
    {
      vars30.m256i_i64[2] = (__int64)vars10;
      *(_OWORD *)vars30.m256i_i8 = vars0;
      v16 = uu_od::OdOptions::new::{{closure}}(&vars30);
LABEL_16:
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = &off_1416D8;
      *(_QWORD *)a1 = 2LL;
      return a1;
    }
    v17 = vars10;
    varsD0 = vars28;
    v18 = *(double *)&vars0;
    vars88 = vars20;
    if ( (_DWORD)vars20 == 2 )
    {
      varsB0 = vars0;
      varsC0 = vars10;
      vars88 = 0LL;
    }
    else
    {
      v15 = vars18;
      varsE0 = vars0;
      v19 = alloc::alloc::Global::alloc_impl(24LL);
      if ( !v19 )
        alloc::alloc::handle_alloc_error(8LL, 24LL, v18);
      v18 = *(double *)&varsE0;
      *(_OWORD *)v19 = varsE0;
      *(_QWORD *)(v19 + 16) = v17;
      alloc::slice::hack::into_vec(&varsB0, v19, 1LL);
    }
    uu_od::parse_formats::parse_format_flags(&vars30, a3, a4, v18);
    if ( vars30.m256i_i64[0] )
    {
      vars10 = (__m256i *)vars30.m256i_i64[3];
      vars0 = *(_OWORD *)&vars30.m256i_u64[1];
      LODWORD(vars18) = 1;
      v20 = alloc::boxed::Box<T>::new(&vars0);
      v21 = &off_1416D8;
LABEL_22:
      *(_QWORD *)(a1 + 8) = v20;
      *(_QWORD *)(a1 + 16) = v21;
      *(_QWORD *)a1 = 2LL;
LABEL_23:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&varsB0);
      return a1;
    }
    v21 = (__int64 (__fastcall **)())vars30.m256i_i64[3];
    v20 = vars30.m256i_i64[2];
    if ( vars30.m256i_i64[1] == 0x8000000000000000LL )
      goto LABEL_22;
    *(_QWORD *)vars90 = vars30.m256i_i64[1];
    *(_OWORD *)&vars90[8] = *(_OWORD *)&vars30.m256i_u64[2];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aWidth, 5LL);
    v23 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, &vars0);
    if ( v23
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aWidth, 5LL) == 2 )
    {
      v24 = *(_QWORD *)(v23 + 8);
      v23 = *(_QWORD *)(v23 + 16);
      uu_od::parse_nrofbytes::parse_number_of_bytes(&vars60, v24, v23);
      if ( vars60.m256i_i32[0] != 3 )
      {
        vars30 = vars60;
        uu_od::format_error_message(&vars108, vars60.m256i_i64[0], v24, v23, aWidth, 5LL);
        LODWORD(vars18) = 1;
        vars0 = vars108;
        vars10 = vars118;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
        *(_QWORD *)(a1 + 16) = &off_1416D8;
        *(_QWORD *)a1 = 2LL;
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&vars30);
        goto LABEL_53;
      }
      v25 = vars60.m256i_u64[1];
      vars58 = vars60.m256i_i64[1];
    }
    else
    {
      vars58 = 16LL;
      v25 = 16LL;
    }
    v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
            *(_QWORD *)&vars90[8],
            *(_QWORD *)&vars90[8] + 40LL * *(_QWORD *)&vars90[16]);
    varsA8 = v26;
    if ( !v25 )
      goto LABEL_36;
    if ( !v26 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_141770);
    if ( (v25 | v26) >> 32 ? v25 % v26 : (unsigned int)v25 % (unsigned int)v26 )
    {
LABEL_36:
      *(_QWORD *)&v28 = uucore::util_name();
      *(_OWORD *)vars30.m256i_i8 = v28;
      vars60.m256i_i64[0] = (__int64)&vars30;
      vars60.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&vars0 = &unk_141650;
      *((_QWORD *)&vars0 + 1) = 2LL;
      vars20 = 0LL;
      vars10 = &vars60;
      vars18 = 1LL;
      std::io::stdio::_eprint(&vars0);
      vars30.m256i_i64[0] = (__int64)&vars58;
      vars30.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      vars30.m256i_i64[2] = (__int64)&varsA8;
      vars30.m256i_i64[3] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&vars0 = &off_141670;
      *((_QWORD *)&vars0 + 1) = 3LL;
      vars20 = 0LL;
      vars10 = &vars30;
      vars18 = 2LL;
      std::io::stdio::_eprint(&vars0);
      vars58 = varsA8;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOutputDuplicat, 17LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aReadBytes, 10LL);
    v30 = clap_builder::parser::error::MatchesError::unwrap(aReadBytes, 10LL, &vars0);
    if ( !v30 )
    {
      v33 = 0LL;
      goto LABEL_41;
    }
    v31 = *(_QWORD *)(v30 + 8);
    v32 = *(_QWORD *)(v30 + 16);
    uu_od::parse_nrofbytes::parse_number_of_bytes(&vars60, v31, v32);
    if ( vars60.m256i_i32[0] == 3 )
    {
      v23 = vars60.m256i_i64[1];
      v33 = 1LL;
LABEL_41:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aAddressRadix, 13LL);
      v34 = clap_builder::parser::error::MatchesError::unwrap(aAddressRadix, 13LL, &vars0);
      LOBYTE(v35) = 2;
      if ( !v34 )
      {
LABEL_50:
        *(_QWORD *)(a1 + 48) = varsC0;
        *(_OWORD *)(a1 + 32) = varsB0;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)vars90;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&vars90[16];
        v37 = vars58;
        *(_QWORD *)a1 = v33;
        *(_QWORD *)(a1 + 8) = v23;
        *(_QWORD *)(a1 + 16) = vars88;
        *(_QWORD *)(a1 + 24) = varsD0;
        *(_QWORD *)(a1 + 80) = v15;
        *(_QWORD *)(a1 + 88) = v37;
        *(_BYTE *)(a1 + 96) = flag;
        *(_BYTE *)(a1 + 97) = vars84;
        *(_BYTE *)(a1 + 98) = v35;
        return a1;
      }
      if ( *(_QWORD *)(v34 + 16) )
      {
        switch ( **(_BYTE **)(v34 + 8) )
        {
          case 'd':
            LOBYTE(v35) = 0;
            goto LABEL_50;
          case 'n':
            LOBYTE(v35) = 3;
            goto LABEL_50;
          case 'o':
            goto LABEL_50;
          case 'x':
            LOBYTE(v35) = 1;
            goto LABEL_50;
          default:
            <T as alloc::slice::hack::ConvertVec>::to_vec(&vars30, aRadixMustBeOne, 33LL, v35);
            vars10 = (__m256i *)vars30.m256i_i64[2];
            vars0 = *(_OWORD *)vars30.m256i_i8;
            LODWORD(vars18) = 1;
            v36 = alloc::boxed::Box<T>::new(&vars0);
            goto LABEL_52;
        }
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&vars30, aRadixCannotBeE, 54LL, v35);
      vars10 = (__m256i *)vars30.m256i_i64[2];
      vars0 = *(_OWORD *)vars30.m256i_i8;
      LODWORD(vars18) = 1;
      v36 = alloc::boxed::Box<T>::new(&vars0);
LABEL_52:
      *(_QWORD *)(a1 + 8) = v36;
      *(_QWORD *)(a1 + 16) = &off_1416D8;
      *(_QWORD *)a1 = 2LL;
      goto LABEL_53;
    }
    vars30 = vars60;
    uu_od::format_error_message(&vars120, vars60.m256i_i64[0], v31, v32, aReadBytes, 10LL);
    LODWORD(vars18) = 1;
    vars0 = vars120;
    vars10 = vars130;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
    *(_QWORD *)(a1 + 16) = &off_1416D8;
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&vars30);
LABEL_53:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(vars90);
    goto LABEL_23;
  }
  v13 = *(_QWORD *)(v12 + 8);
  v14 = *(_QWORD *)(v12 + 16);
  uu_od::parse_nrofbytes::parse_number_of_bytes(&vars60, v13, v14);
  if ( vars60.m256i_i32[0] == 3 )
  {
    v15 = vars60.m256i_i64[1];
    goto LABEL_10;
  }
  vars30 = vars60;
  uu_od::format_error_message(&varsF0, vars60.m256i_i64[0], v13, v14, aSkipBytes, 10LL);
  LODWORD(vars18) = 1;
  vars0 = varsF0;
  vars10 = vars100;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
  *(_QWORD *)(a1 + 16) = &off_1416D8;
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&vars30);
  return a1;
}
