__int64 __fastcall uu_od::OdOptions::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r14
  __int64 (__fastcall **v17)(); // r15
  __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int128 v22; // rax
  char flag; // bp
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // rax
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars10; // [rsp+10h] [rbp+10h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  _BYTE vars30[24]; // [rsp+30h] [rbp+30h] BYREF
  __int64 (__fastcall *vars48)(); // [rsp+48h] [rbp+48h]
  __int64 vars58; // [rsp+58h] [rbp+58h] BYREF
  __int64 vars60; // [rsp+60h] [rbp+60h]
  __int64 vars68; // [rsp+68h] [rbp+68h]
  __int64 vars70; // [rsp+70h] [rbp+70h]
  int vars7C; // [rsp+7Ch] [rbp+7Ch]
  __int128 vars80; // [rsp+80h] [rbp+80h] BYREF
  __int128 vars90; // [rsp+90h] [rbp+90h]
  __int64 varsA0; // [rsp+A0h] [rbp+A0h]
  __int64 varsA8; // [rsp+A8h] [rbp+A8h]
  __int128 varsB0; // [rsp+B0h] [rbp+B0h] BYREF
  __int64 varsC0; // [rsp+C0h] [rbp+C0h]
  __int64 varsC8; // [rsp+C8h] [rbp+C8h]
  unsigned __int64 varsD0; // [rsp+D0h] [rbp+D0h] BYREF
  __int64 varsD8; // [rsp+D8h] [rbp+D8h]
  __int64 varsE0; // [rsp+E0h] [rbp+E0h]
  __int64 varsE8; // [rsp+E8h] [rbp+E8h] BYREF
  _QWORD varsF0[2]; // [rsp+F0h] [rbp+F0h] BYREF
  __int128 vars100; // [rsp+100h] [rbp+100h] BYREF
  __int64 vars110; // [rsp+110h] [rbp+110h]
  __int128 vars118; // [rsp+118h] [rbp+118h] BYREF
  __int64 vars128; // [rsp+128h] [rbp+128h]
  __int128 vars130; // [rsp+130h] [rbp+130h] BYREF
  __int64 vars140; // [rsp+140h] [rbp+140h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aEndian, 6LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aEndian, 6LL, &vars0);
  if ( v6 )
  {
    varsE8 = v6;
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_QWORD *)(v6 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aLittle, 6LL) )
    {
      v7 = 0;
    }
    else
    {
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aBig, 3LL);
      LOBYTE(v7) = 1;
      if ( !v10 )
      {
        *(_QWORD *)vars30 = &varsE8;
        *(_QWORD *)&vars30[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&vars0 = &off_103910;
        *((_QWORD *)&vars0 + 1) = 1LL;
        vars20 = 0LL;
        *(_QWORD *)&vars10 = vars30;
        *((_QWORD *)&vars10 + 1) = 1LL;
        core::option::Option<T>::map_or_else(&vars80, &vars0);
        DWORD2(vars90) = 1;
        v13 = alloc::boxed::Box<T>::new(&vars80);
        goto LABEL_16;
      }
    }
  }
  else
  {
    LOBYTE(v7) = 2;
  }
  vars7C = v7;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aSkipBytes, 10LL);
  v11 = clap_builder::parser::error::MatchesError::unwrap(aSkipBytes, 10LL, &vars0);
  if ( !v11 )
  {
    vars70 = 0LL;
LABEL_10:
    uu_od::parse_inputs::parse_inputs((__int64)&vars0, a2);
    if ( vars20 == 3 )
    {
      *(_QWORD *)&vars30[16] = vars10;
      *(_OWORD *)vars30 = vars0;
      v13 = uu_od::OdOptions::new::{{closure}}(vars30);
LABEL_16:
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = &off_103990;
      *(_QWORD *)a1 = 2LL;
      return a1;
    }
    vars90 = vars10;
    vars80 = vars0;
    varsA0 = vars20;
    varsE0 = vars28;
    varsA8 = vars28;
    vars68 = vars20;
    if ( vars20 == 2 )
    {
      varsC0 = vars90;
      varsB0 = vars80;
      varsC8 = 0LL;
    }
    else
    {
      vars70 = *((_QWORD *)&vars90 + 1);
      v14 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v15 = vars80;
      *(_QWORD *)(v14 + 16) = vars90;
      *(_OWORD *)v14 = v15;
      *(_QWORD *)&varsB0 = 1LL;
      *((_QWORD *)&varsB0 + 1) = v14;
      varsC0 = 1LL;
      varsC8 = vars68;
    }
    uu_od::parse_formats::parse_format_flags((__int64)vars30, a3, a4);
    if ( *(_DWORD *)vars30 == 1 )
    {
      *(_QWORD *)&vars10 = vars48;
      vars0 = *(_OWORD *)&vars30[8];
      DWORD2(vars10) = 1;
      v16 = alloc::boxed::Box<T>::new(&vars0);
      v17 = &off_103990;
LABEL_22:
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = v17;
      *(_QWORD *)a1 = 2LL;
LABEL_23:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&varsB0);
      return a1;
    }
    v16 = *(_QWORD *)&vars30[16];
    v17 = (__int64 (__fastcall **)())vars48;
    vars60 = *(_QWORD *)&vars30[8];
    if ( __OFSUB__(-*(_QWORD *)&vars30[8], 1LL) )
      goto LABEL_22;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aWidth, 5LL);
    v19 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, &vars0);
    if ( v19
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aWidth, 5LL) == 2 )
    {
      uu_od::parse_nrofbytes::parse_number_of_bytes(vars30, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
      if ( *(_DWORD *)vars30 != 4 )
      {
        uu_od::format_error_message(
          &vars118,
          *(_QWORD *)vars30,
          *(_QWORD *)(v19 + 8),
          *(_QWORD *)(v19 + 16),
          aWidth,
          5LL);
        DWORD2(vars10) = 1;
        vars0 = vars118;
        *(_QWORD *)&vars10 = vars128;
        v29 = alloc::boxed::Box<T>::new(&vars0);
        goto LABEL_47;
      }
      v20 = *(_QWORD *)&vars30[8];
      vars58 = *(_QWORD *)&vars30[8];
    }
    else
    {
      vars58 = 16LL;
      v20 = 16LL;
    }
    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v16, v16 + 40LL * (_QWORD)v17);
    varsD0 = v21;
    if ( v20 )
    {
      if ( !v21 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_1039F8);
      if ( (v20 | v21) >> 32 )
      {
        if ( !(v20 % v21) )
          goto LABEL_37;
      }
      else if ( !((unsigned int)v20 % (unsigned int)v21) )
      {
LABEL_37:
        flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOutputDuplicat, 17LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aReadBytes, 10LL);
        v24 = clap_builder::parser::error::MatchesError::unwrap(aReadBytes, 10LL, &vars0);
        v25 = v24;
        if ( !v24 )
        {
          v26 = 0LL;
          goto LABEL_41;
        }
        uu_od::parse_nrofbytes::parse_number_of_bytes(vars30, *(_QWORD *)(v24 + 8), *(_QWORD *)(v24 + 16));
        if ( *(_DWORD *)vars30 == 4 )
        {
          varsD8 = *(_QWORD *)&vars30[8];
          v26 = 1LL;
LABEL_41:
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&vars0, a2, aAddressRadix, 13LL);
          v27 = clap_builder::parser::error::MatchesError::unwrap(aAddressRadix, 13LL, &vars0);
          v28 = 2;
          if ( !v27 )
          {
LABEL_51:
            *(_QWORD *)(a1 + 48) = varsC0;
            *(_OWORD *)(a1 + 32) = varsB0;
            v31 = vars58;
            *(_QWORD *)a1 = v26;
            *(_QWORD *)(a1 + 8) = varsD8;
            *(_QWORD *)(a1 + 16) = varsC8;
            *(_QWORD *)(a1 + 24) = varsE0;
            *(_QWORD *)(a1 + 56) = vars60;
            *(_QWORD *)(a1 + 64) = v16;
            *(_QWORD *)(a1 + 72) = v17;
            *(_QWORD *)(a1 + 80) = vars70;
            *(_QWORD *)(a1 + 88) = v31;
            *(_BYTE *)(a1 + 96) = flag;
            *(_BYTE *)(a1 + 97) = vars7C;
            *(_BYTE *)(a1 + 98) = v28;
            return a1;
          }
          if ( *(_QWORD *)(v27 + 16) )
          {
            switch ( **(_BYTE **)(v27 + 8) )
            {
              case 'd':
                v28 = 0;
                goto LABEL_51;
              case 'n':
                v28 = 3;
                goto LABEL_51;
              case 'o':
                goto LABEL_51;
              case 'x':
                v28 = 1;
                goto LABEL_51;
              default:
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(vars30, aRadixMustBeOne, 33LL);
                *(_QWORD *)&vars10 = *(_QWORD *)&vars30[16];
                vars0 = *(_OWORD *)vars30;
                DWORD2(vars10) = 1;
                v30 = alloc::boxed::Box<T>::new(&vars0);
                goto LABEL_53;
            }
          }
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(vars30, aRadixCannotBeE, 54LL);
          *(_QWORD *)&vars10 = *(_QWORD *)&vars30[16];
          vars0 = *(_OWORD *)vars30;
          DWORD2(vars10) = 1;
          v30 = alloc::boxed::Box<T>::new(&vars0);
LABEL_53:
          *(_QWORD *)(a1 + 8) = v30;
          *(_QWORD *)(a1 + 16) = &off_103990;
          *(_QWORD *)a1 = 2LL;
          goto LABEL_54;
        }
        uu_od::format_error_message(
          &vars130,
          *(_QWORD *)vars30,
          *(_QWORD *)(v25 + 8),
          *(_QWORD *)(v25 + 16),
          aReadBytes,
          10LL);
        DWORD2(vars10) = 1;
        vars0 = vars130;
        *(_QWORD *)&vars10 = vars140;
        v29 = alloc::boxed::Box<T>::new(&vars0);
LABEL_47:
        *(_QWORD *)(a1 + 8) = v29;
        *(_QWORD *)(a1 + 16) = &off_103990;
        *(_QWORD *)a1 = 2LL;
        core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(vars30);
LABEL_54:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(vars60, v16);
        goto LABEL_23;
      }
    }
    *(_QWORD *)&v22 = uucore::util_name();
    *(_OWORD *)vars30 = v22;
    varsF0[0] = vars30;
    varsF0[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&vars0 = &unk_103920;
    *((_QWORD *)&vars0 + 1) = 2LL;
    vars20 = 0LL;
    *(_QWORD *)&vars10 = varsF0;
    *((_QWORD *)&vars10 + 1) = 1LL;
    std::io::stdio::_eprint(&vars0);
    *(_QWORD *)vars30 = &vars58;
    *(_QWORD *)&vars30[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&vars30[16] = &varsD0;
    vars48 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&vars0 = &off_103940;
    *((_QWORD *)&vars0 + 1) = 3LL;
    vars20 = 0LL;
    *(_QWORD *)&vars10 = vars30;
    *((_QWORD *)&vars10 + 1) = 2LL;
    std::io::stdio::_eprint(&vars0);
    vars58 = varsD0;
    goto LABEL_37;
  }
  v12 = v11;
  uu_od::parse_nrofbytes::parse_number_of_bytes(&vars80, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
  if ( (_DWORD)vars80 == 4 )
  {
    vars70 = *((_QWORD *)&vars80 + 1);
    goto LABEL_10;
  }
  uu_od::format_error_message(&vars100, vars80, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16), aSkipBytes, 10LL);
  DWORD2(vars10) = 1;
  vars0 = vars100;
  *(_QWORD *)&vars10 = vars110;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&vars0);
  *(_QWORD *)(a1 + 16) = &off_103990;
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&vars80);
  return a1;
}