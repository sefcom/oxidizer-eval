__int64 __fastcall uu_seq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rdx
  const char *v6; // r14
  __int64 v7; // rax
  const char *v8; // rcx
  __int64 v9; // rdx
  char flag; // bp
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // bl
  char v14; // bl
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  char v19; // bl
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // r15d
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  char **v27; // rdx
  _BYTE v28[8]; // [rsp+8h] [rbp-550h] BYREF
  _QWORD *v29; // [rsp+10h] [rbp-548h]
  unsigned __int64 v30; // [rsp+18h] [rbp-540h]
  _BYTE v31[56]; // [rsp+20h] [rbp-538h] BYREF
  __int128 v32; // [rsp+58h] [rbp-500h]
  __int128 v33; // [rsp+70h] [rbp-4E8h] BYREF
  __int128 v34; // [rsp+80h] [rbp-4D8h]
  __int128 v35; // [rsp+90h] [rbp-4C8h]
  __int64 v36; // [rsp+A0h] [rbp-4B8h]
  __int128 v37; // [rsp+B0h] [rbp-4A8h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-498h]
  __int128 v39; // [rsp+D0h] [rbp-488h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-478h]
  __int128 v41; // [rsp+F0h] [rbp-468h]
  __int64 v42; // [rsp+100h] [rbp-458h]
  __int128 v43; // [rsp+110h] [rbp-448h] BYREF
  __int64 v44; // [rsp+120h] [rbp-438h]
  __int128 v45; // [rsp+128h] [rbp-430h]
  __int64 v46; // [rsp+138h] [rbp-420h]
  __int64 v47; // [rsp+140h] [rbp-418h]
  __int64 v48; // [rsp+148h] [rbp-410h]
  char v49; // [rsp+150h] [rbp-408h]
  _OWORD v50[3]; // [rsp+158h] [rbp-400h] BYREF
  __int64 v51; // [rsp+188h] [rbp-3D0h]
  __int128 v52; // [rsp+190h] [rbp-3C8h] BYREF
  __int128 v53; // [rsp+1A0h] [rbp-3B8h]
  __int128 v54; // [rsp+1B0h] [rbp-3A8h]
  __int64 v55; // [rsp+1C0h] [rbp-398h]
  _OWORD v56[4]; // [rsp+1D0h] [rbp-388h] BYREF
  _BYTE v57[56]; // [rsp+210h] [rbp-348h] BYREF
  __int128 v58; // [rsp+248h] [rbp-310h]
  __int64 v59; // [rsp+258h] [rbp-300h]
  __int128 v60; // [rsp+260h] [rbp-2F8h]
  __int128 v61; // [rsp+270h] [rbp-2E8h]
  __int64 v62; // [rsp+280h] [rbp-2D8h]
  _OWORD v63[7]; // [rsp+4E0h] [rbp-78h] BYREF

  uu_seq::uu_app(v57);
  clap_builder::builder::command::Command::try_get_matches_from(v31, v57, a1, a2);
  if ( *(_QWORD *)v31 != 0x8000000000000000LL )
  {
    v51 = *(_QWORD *)&v31[48];
    v50[2] = *(_OWORD *)&v31[32];
    v50[1] = *(_OWORD *)&v31[16];
    v50[0] = *(_OWORD *)v31;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v57, v50, aNumbers, 7LL);
    clap_builder::parser::error::MatchesError::unwrap(v56, aNumbers, 7LL, v57);
    if ( !*(_QWORD *)&v56[0] )
    {
      *(_QWORD *)v57 = 0x8000000000000001LL;
      v2 = alloc::boxed::Box<T>::new(v57);
LABEL_46:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v50);
      return v2;
    }
    v63[0] = v56[0];
    v63[1] = v56[1];
    v63[2] = v56[2];
    v63[3] = v56[3];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v28, v63);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v57, v50, aSeparator, 9LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, v57);
    if ( v3 )
    {
      v4 = *(const char **)(v3 + 8);
      v3 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = 1LL;
    if ( v4 )
      v5 = v3;
    v6 = asc_17DE2;
    if ( !v4 )
      v4 = asc_17DE2;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v57, v4, v5);
    *(_QWORD *)&v34 = *(_QWORD *)&v57[16];
    v33 = *(_OWORD *)v57;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v57, v50, aTerminator, 10LL);
    v7 = clap_builder::parser::error::MatchesError::unwrap(aTerminator, 10LL, v57);
    if ( v7 )
    {
      v8 = *(const char **)(v7 + 8);
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v8 = 0LL;
    }
    v9 = 1LL;
    if ( v8 )
    {
      v9 = v7;
      v6 = v8;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(v57, v6, v9);
    *(_QWORD *)&v31[16] = *(_QWORD *)&v57[16];
    *(_OWORD *)v31 = *(_OWORD *)v57;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v50, aEqualWidth, 11LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v57, v50, aFormat_0, 6LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, v57);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v11 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      v12 = 0LL;
    }
    v44 = v34;
    v43 = v33;
    v45 = *(_OWORD *)v31;
    v46 = *(_QWORD *)&v31[16];
    v49 = flag;
    v47 = v12;
    v48 = v11;
    if ( v30 <= 1 )
    {
      uu_seq::number::PreciseNumber::one(&v52);
      if ( v30 <= 2 )
      {
LABEL_29:
        uu_seq::number::PreciseNumber::one(&v39);
        goto LABEL_31;
      }
    }
    else
    {
      uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
        v57,
        *(_QWORD *)(*v29 + 8LL),
        *(_QWORD *)(*v29 + 16LL));
      if ( *(_QWORD *)v57 == 0x8000000000000004LL )
      {
        if ( !v30 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_1439E8);
        v13 = v57[8];
        <alloc::string::String as core::clone::Clone>::clone(&v33, *v29);
        *(_QWORD *)&v31[16] = v34;
        *(_OWORD *)v31 = v33;
        v31[24] = v13;
        v2 = alloc::boxed::Box<T>::new(v31);
        goto LABEL_45;
      }
      v55 = *(_QWORD *)&v57[48];
      v54 = *(_OWORD *)&v57[32];
      v53 = *(_OWORD *)&v57[16];
      v52 = *(_OWORD *)v57;
      if ( v30 <= 2 )
        goto LABEL_29;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v57,
      *(_QWORD *)(v29[1] + 8LL),
      *(_QWORD *)(v29[1] + 16LL));
    if ( *(_QWORD *)v57 == 0x8000000000000004LL )
    {
      if ( v30 <= 1 )
        core::panicking::panic_bounds_check(1LL, v30, &off_1439D0);
      v14 = v57[8];
      <alloc::string::String as core::clone::Clone>::clone(&v33, v29[1]);
      *(_QWORD *)&v31[16] = v34;
      *(_OWORD *)v31 = v33;
      v31[24] = v14;
      v2 = alloc::boxed::Box<T>::new(v31);
      goto LABEL_44;
    }
    v42 = *(_QWORD *)&v57[48];
    v41 = *(_OWORD *)&v57[32];
    v40 = *(_OWORD *)&v57[16];
    v39 = *(_OWORD *)v57;
LABEL_31:
    v15 = 0LL;
    if ( (__int64)v39 < (__int64)0x8000000000000004LL )
      v15 = v39 - 0x7FFFFFFFFFFFFFFFLL;
    if ( v15 )
    {
      if ( v15 == 3 )
      {
LABEL_35:
        v16 = v30;
        if ( v30 >= 2 )
        {
          <alloc::string::String as core::clone::Clone>::clone(v31, v29[1]);
          *(_QWORD *)&v57[24] = *(_QWORD *)&v31[16];
          *(_OWORD *)&v57[8] = *(_OWORD *)v31;
          *(_QWORD *)v57 = 0x8000000000000000LL;
          v17 = alloc::boxed::Box<T>::new(v57);
LABEL_42:
          v2 = v17;
LABEL_43:
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v39);
LABEL_44:
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v52);
LABEL_45:
          core::ptr::drop_in_place<uu_seq::SeqOptions>(&v43);
          core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v28);
          goto LABEL_46;
        }
        v27 = &off_143790;
        v18 = 1LL;
        goto LABEL_64;
      }
    }
    else if ( BYTE8(v40) == 1 )
    {
      goto LABEL_35;
    }
    v18 = v30 - 1;
    if ( !v30 )
    {
      v16 = 0LL;
      v27 = &off_143850;
      goto LABEL_64;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v57,
      *(_QWORD *)(v29[v18] + 8LL),
      *(_QWORD *)(v29[v18] + 16LL));
    if ( *(_QWORD *)v57 == 0x8000000000000004LL )
    {
      v16 = v30;
      if ( v18 < v30 )
      {
        v19 = v57[8];
        <alloc::string::String as core::clone::Clone>::clone(&v37, v29[v18]);
        *(_QWORD *)&v31[16] = v38;
        *(_OWORD *)v31 = v37;
        v31[24] = v19;
        v17 = alloc::boxed::Box<T>::new(v31);
        goto LABEL_42;
      }
      v27 = &off_1439B8;
LABEL_64:
      core::panicking::panic_bounds_check(v18, v16, v27);
    }
    v36 = *(_QWORD *)&v57[48];
    v35 = *(_OWORD *)&v57[32];
    v34 = *(_OWORD *)&v57[16];
    v33 = *(_OWORD *)v57;
    v21 = core::cmp::max_by(*((_QWORD *)&v54 + 1), *((_QWORD *)&v41 + 1));
    v22 = core::cmp::max_by(v21, *((_QWORD *)&v35 + 1));
    v23 = core::cmp::max_by(v55, v42);
    if ( v47 )
    {
      uucore::features::format::Format<F>::parse(v57, v47, v48);
      v24 = *(_QWORD *)v57;
      v37 = *(_OWORD *)&v57[8];
      v38 = *(_OWORD *)&v57[24];
      if ( *(_QWORD *)v57 == 0x8000000000000000LL )
      {
        *(_OWORD *)&v57[16] = v38;
        *(_OWORD *)v57 = v37;
        v2 = alloc::boxed::Box<T>::new(v57);
        core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v33);
        goto LABEL_43;
      }
      v32 = v58;
      *(_OWORD *)&v31[40] = *(_OWORD *)&v57[40];
      *(_OWORD *)&v31[8] = v37;
      *(_OWORD *)&v31[24] = v38;
    }
    else
    {
      v24 = 0x8000000000000000LL;
    }
    *(_QWORD *)v31 = v24;
    *(_QWORD *)&v57[32] = v54;
    *(_OWORD *)&v57[16] = v53;
    *(_OWORD *)v57 = v52;
    *(_OWORD *)&v57[40] = v39;
    v58 = v40;
    v59 = v41;
    v60 = v33;
    v61 = v34;
    v62 = v35;
    v25 = uu_seq::print_seq((unsigned int)v57, v23, DWORD2(v43), v44, DWORD2(v45), v46, v49, v22, (__int64)v31);
    v26 = v25;
    if ( v25 )
    {
      if ( (unsigned __int8)std::io::error::Error::kind(v25) != 11 )
      {
        v2 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v26);
        goto LABEL_58;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v26);
    }
    v2 = 0LL;
LABEL_58:
    core::ptr::drop_in_place<core::option::Option<uucore::features::format::Format<uucore::features::format::num_format::Float>>>(v31);
    core::ptr::drop_in_place<uu_seq::SeqOptions>(&v43);
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v50);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v31[8]);
}
