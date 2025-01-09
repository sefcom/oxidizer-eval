__int64 __fastcall uu_od::OdOptions::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rax
  __m256i *v20; // rbp
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 (__fastcall **v24)(); // rcx
  __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int128 v31; // rax
  char flag; // bp
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
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
  v7 = clap_builder::parser::error::MatchesError::unwrap(aEndian, 6LL, &vars0);
  if ( v7 )
  {
    varsD8 = v7;
    v9 = *(_QWORD *)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aLittle, 6LL) )
    {
      LODWORD(v8) = 0;
    }
    else
    {
      v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aBig, 3LL);
      LOBYTE(v8) = 1;
      if ( !v11 )
      {
        vars60.m256i_i64[0] = (__int64)&varsD8;
        vars60.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)&vars0 = &off_141640;
        *((_QWORD *)&vars0 + 1) = 1LL;
        vars20 = 0LL;
        vars10 = &vars60;
        vars18 = 1LL;
        core::option::Option<T>::map_or_else(&vars30, &vars0, v12, v8, v13, v14);
        vars30.m256i_i32[6] = 1;
        v19 = alloc::boxed::Box<T>::new(&vars30);
        goto LABEL_16;
      }
    }
  }
  else
  {
    LOBYTE(v8) = 2;
  }
  vars84 = v8;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aSkipBytes, 10LL);
  v15 = clap_builder::parser::error::MatchesError::unwrap(aSkipBytes, 10LL, &vars0);
  if ( !v15 )
  {
    v18 = 0LL;
LABEL_10:
    uu_od::parse_inputs::parse_inputs((__int64)&vars0, a2, (__int64)&off_141748, a5);
    if ( vars20 == 3 )
    {
      vars30.m256i_i64[2] = (__int64)vars10;
      *(_OWORD *)vars30.m256i_i8 = vars0;
      v19 = uu_od::OdOptions::new::{{closure}}(&vars30);
LABEL_16:
      *(_QWORD *)(a1 + 8) = v19;
      *(_QWORD *)(a1 + 16) = &off_1416D8;
      *(_QWORD *)a1 = 2LL;
      return a1;
    }
    v20 = vars10;
    varsD0 = vars28;
    v21 = *(double *)&vars0;
    vars88 = vars20;
    if ( (_DWORD)vars20 == 2 )
    {
      varsB0 = vars0;
      varsC0 = vars10;
      vars88 = 0LL;
    }
    else
    {
      v18 = vars18;
      varsE0 = vars0;
      v22 = alloc::alloc::Global::alloc_impl(24LL);
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 24LL, v21);
      v21 = *(double *)&varsE0;
      *(_OWORD *)v22 = varsE0;
      *(_QWORD *)(v22 + 16) = v20;
      alloc::slice::hack::into_vec(&varsB0, v22, 1LL);
    }
    uu_od::parse_formats::parse_format_flags((__int64)&vars30, a3, a4);
    if ( vars30.m256i_i64[0] )
    {
      vars10 = (__m256i *)vars30.m256i_i64[3];
      vars0 = *(_OWORD *)&vars30.m256i_u64[1];
      LODWORD(vars18) = 1;
      v23 = alloc::boxed::Box<T>::new(&vars0);
      v24 = &off_1416D8;
LABEL_22:
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 16) = v24;
      *(_QWORD *)a1 = 2LL;
LABEL_23:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&varsB0);
      return a1;
    }
    v24 = (__int64 (__fastcall **)())vars30.m256i_i64[3];
    v23 = vars30.m256i_i64[2];
    if ( vars30.m256i_i64[1] == 0x8000000000000000LL )
      goto LABEL_22;
    *(_QWORD *)vars90 = vars30.m256i_i64[1];
    *(_OWORD *)&vars90[8] = *(_OWORD *)&vars30.m256i_u64[2];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aWidth, 5LL);
    v26 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, &vars0);
    if ( v26
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aWidth, 5LL) == 2 )
    {
      v27 = *(_QWORD *)(v26 + 8);
      v26 = *(_QWORD *)(v26 + 16);
      uu_od::parse_nrofbytes::parse_number_of_bytes(vars60.m256i_i64, v27, v26);
      if ( vars60.m256i_i32[0] != 3 )
      {
        vars30 = vars60;
        uu_od::format_error_message((__int64)&vars108, vars60.m256i_i64[0], v27, v26, (__int64)aWidth, 5LL);
        LODWORD(vars18) = 1;
        vars0 = vars108;
        vars10 = vars118;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
        *(_QWORD *)(a1 + 16) = &off_1416D8;
        *(_QWORD *)a1 = 2LL;
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&vars30);
        goto LABEL_53;
      }
      v28 = vars60.m256i_u64[1];
      vars58 = vars60.m256i_i64[1];
    }
    else
    {
      vars58 = 16LL;
      v28 = 16LL;
    }
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
            *(_QWORD *)&vars90[8],
            *(_QWORD *)&vars90[8] + 40LL * *(_QWORD *)&vars90[16]);
    varsA8 = v29;
    if ( !v28 )
      goto LABEL_36;
    if ( !v29 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_141770);
    if ( (v28 | v29) >> 32 ? v28 % v29 : (unsigned int)v28 % (unsigned int)v29 )
    {
LABEL_36:
      *(_QWORD *)&v31 = uucore::util_name(v21);
      *(_OWORD *)vars30.m256i_i8 = v31;
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
    v33 = clap_builder::parser::error::MatchesError::unwrap(aReadBytes, 10LL, &vars0);
    if ( !v33 )
    {
      v36 = 0LL;
      goto LABEL_41;
    }
    v34 = *(_QWORD *)(v33 + 8);
    v35 = *(_QWORD *)(v33 + 16);
    uu_od::parse_nrofbytes::parse_number_of_bytes(vars60.m256i_i64, v34, v35);
    if ( vars60.m256i_i32[0] == 3 )
    {
      v26 = vars60.m256i_i64[1];
      v36 = 1LL;
LABEL_41:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aAddressRadix, 13LL);
      v37 = clap_builder::parser::error::MatchesError::unwrap(aAddressRadix, 13LL, &vars0);
      LOBYTE(v38) = 2;
      if ( !v37 )
      {
LABEL_50:
        *(_QWORD *)(a1 + 48) = varsC0;
        *(_OWORD *)(a1 + 32) = varsB0;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)vars90;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&vars90[16];
        v40 = vars58;
        *(_QWORD *)a1 = v36;
        *(_QWORD *)(a1 + 8) = v26;
        *(_QWORD *)(a1 + 16) = vars88;
        *(_QWORD *)(a1 + 24) = varsD0;
        *(_QWORD *)(a1 + 80) = v18;
        *(_QWORD *)(a1 + 88) = v40;
        *(_BYTE *)(a1 + 96) = flag;
        *(_BYTE *)(a1 + 97) = vars84;
        *(_BYTE *)(a1 + 98) = v38;
        return a1;
      }
      if ( *(_QWORD *)(v37 + 16) )
      {
        switch ( **(_BYTE **)(v37 + 8) )
        {
          case 'd':
            LOBYTE(v38) = 0;
            goto LABEL_50;
          case 'n':
            LOBYTE(v38) = 3;
            goto LABEL_50;
          case 'o':
            goto LABEL_50;
          case 'x':
            LOBYTE(v38) = 1;
            goto LABEL_50;
          default:
            <T as alloc::slice::hack::ConvertVec>::to_vec(&vars30, aRadixMustBeOne, 33LL, v38);
            vars10 = (__m256i *)vars30.m256i_i64[2];
            vars0 = *(_OWORD *)vars30.m256i_i8;
            LODWORD(vars18) = 1;
            v39 = alloc::boxed::Box<T>::new(&vars0);
            goto LABEL_52;
        }
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&vars30, aRadixCannotBeE, 54LL, v38);
      vars10 = (__m256i *)vars30.m256i_i64[2];
      vars0 = *(_OWORD *)vars30.m256i_i8;
      LODWORD(vars18) = 1;
      v39 = alloc::boxed::Box<T>::new(&vars0);
LABEL_52:
      *(_QWORD *)(a1 + 8) = v39;
      *(_QWORD *)(a1 + 16) = &off_1416D8;
      *(_QWORD *)a1 = 2LL;
      goto LABEL_53;
    }
    vars30 = vars60;
    uu_od::format_error_message((__int64)&vars120, vars60.m256i_i64[0], v34, v35, (__int64)aReadBytes, 10LL);
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
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(_QWORD *)(v15 + 16);
  uu_od::parse_nrofbytes::parse_number_of_bytes(vars60.m256i_i64, v16, v17);
  if ( vars60.m256i_i32[0] == 3 )
  {
    v18 = vars60.m256i_i64[1];
    goto LABEL_10;
  }
  vars30 = vars60;
  uu_od::format_error_message((__int64)&varsF0, vars60.m256i_i64[0], v16, v17, (__int64)aSkipBytes, 10LL);
  LODWORD(vars18) = 1;
  vars0 = varsF0;
  vars10 = vars100;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
  *(_QWORD *)(a1 + 16) = &off_1416D8;
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&vars30);
  return a1;
}
