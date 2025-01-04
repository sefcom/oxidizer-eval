__int64 __fastcall uu_seq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  const char *v4; // rsi
  bool v5; // zf
  const char *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 v10; // rdx
  char flag; // bp
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // bl
  char v15; // bl
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  char v20; // bl
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // r15d
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  char **v28; // rdx
  _BYTE v29[8]; // [rsp+8h] [rbp-550h] BYREF
  _QWORD *v30; // [rsp+10h] [rbp-548h]
  unsigned __int64 v31; // [rsp+18h] [rbp-540h]
  _BYTE v32[56]; // [rsp+20h] [rbp-538h] BYREF
  __int128 v33; // [rsp+58h] [rbp-500h]
  __int128 v34; // [rsp+70h] [rbp-4E8h] BYREF
  __int128 v35; // [rsp+80h] [rbp-4D8h]
  __int128 v36; // [rsp+90h] [rbp-4C8h]
  __int64 v37; // [rsp+A0h] [rbp-4B8h]
  __int128 v38; // [rsp+B0h] [rbp-4A8h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-498h]
  __int128 v40; // [rsp+D0h] [rbp-488h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-478h]
  __int128 v42; // [rsp+F0h] [rbp-468h]
  __int64 v43; // [rsp+100h] [rbp-458h]
  __int128 v44; // [rsp+110h] [rbp-448h] BYREF
  __int64 v45; // [rsp+120h] [rbp-438h]
  __int128 v46; // [rsp+128h] [rbp-430h]
  __int64 v47; // [rsp+138h] [rbp-420h]
  __int64 v48; // [rsp+140h] [rbp-418h]
  __int64 v49; // [rsp+148h] [rbp-410h]
  char v50; // [rsp+150h] [rbp-408h]
  _OWORD v51[3]; // [rsp+158h] [rbp-400h] BYREF
  __int64 v52; // [rsp+188h] [rbp-3D0h]
  __int128 v53; // [rsp+190h] [rbp-3C8h] BYREF
  __int128 v54; // [rsp+1A0h] [rbp-3B8h]
  __int128 v55; // [rsp+1B0h] [rbp-3A8h]
  __int64 v56; // [rsp+1C0h] [rbp-398h]
  _OWORD v57[4]; // [rsp+1D0h] [rbp-388h] BYREF
  _BYTE v58[56]; // [rsp+210h] [rbp-348h] BYREF
  __int128 v59; // [rsp+248h] [rbp-310h]
  __int64 v60; // [rsp+258h] [rbp-300h]
  __int128 v61; // [rsp+260h] [rbp-2F8h]
  __int128 v62; // [rsp+270h] [rbp-2E8h]
  __int64 v63; // [rsp+280h] [rbp-2D8h]
  _OWORD v64[7]; // [rsp+4E0h] [rbp-78h] BYREF

  uu_seq::uu_app(v58);
  clap_builder::builder::command::Command::try_get_matches_from(v32, v58, a1, a2);
  if ( *(_QWORD *)v32 != 0x8000000000000000LL )
  {
    v52 = *(_QWORD *)&v32[48];
    v51[2] = *(_OWORD *)&v32[32];
    v51[1] = *(_OWORD *)&v32[16];
    v51[0] = *(_OWORD *)v32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v58, v51, aNumbers, 7LL);
    clap_builder::parser::error::MatchesError::unwrap(v57, aNumbers, 7LL, v58);
    if ( !*(_QWORD *)&v57[0] )
    {
      *(_QWORD *)v58 = 0x8000000000000001LL;
      v2 = alloc::boxed::Box<T>::new(v58);
LABEL_48:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
      return v2;
    }
    v64[0] = v57[0];
    v64[1] = v57[1];
    v64[2] = v57[2];
    v64[3] = v57[3];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v29, v64);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, v51, aSeparator, 9LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, v58);
    if ( v3 )
    {
      v4 = *(const char **)(v3 + 8);
      v3 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = v4 == 0LL;
    v6 = asc_178E2;
    if ( !v4 )
      v4 = asc_178E2;
    v7 = 1LL;
    if ( !v5 )
      v7 = v3;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v58, v4, v7);
    *(_QWORD *)&v35 = *(_QWORD *)&v58[16];
    v34 = *(_OWORD *)v58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, v51, aTerminator, 10LL);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aTerminator, 10LL, v58);
    if ( v8 )
    {
      v9 = *(const char **)(v8 + 8);
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      v6 = v9;
    v10 = 1LL;
    if ( v9 )
      v10 = v8;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v58, v6, v10);
    *(_QWORD *)&v32[16] = *(_QWORD *)&v58[16];
    *(_OWORD *)v32 = *(_OWORD *)v58;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aEqualWidth, 11LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v58, v51, aFormat_0, 6LL);
    v12 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, v58);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      v12 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v13 = 0LL;
    }
    v45 = v35;
    v44 = v34;
    v46 = *(_OWORD *)v32;
    v47 = *(_QWORD *)&v32[16];
    v50 = flag;
    v48 = v13;
    v49 = v12;
    if ( v31 <= 1 )
    {
      uu_seq::number::PreciseNumber::one(&v53);
      if ( v31 <= 2 )
      {
LABEL_31:
        uu_seq::number::PreciseNumber::one(&v40);
        goto LABEL_33;
      }
    }
    else
    {
      uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
        v58,
        *(_QWORD *)(*v30 + 8LL),
        *(_QWORD *)(*v30 + 16LL));
      if ( *(_QWORD *)v58 == 0x8000000000000004LL )
      {
        if ( !v31 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_141018);
        v14 = v58[8];
        <alloc::string::String as core::clone::Clone>::clone(&v34, *v30);
        *(_QWORD *)&v32[16] = v35;
        *(_OWORD *)v32 = v34;
        v32[24] = v14;
        v2 = alloc::boxed::Box<T>::new(v32);
        goto LABEL_47;
      }
      v56 = *(_QWORD *)&v58[48];
      v55 = *(_OWORD *)&v58[32];
      v54 = *(_OWORD *)&v58[16];
      v53 = *(_OWORD *)v58;
      if ( v31 <= 2 )
        goto LABEL_31;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v58,
      *(_QWORD *)(v30[1] + 8LL),
      *(_QWORD *)(v30[1] + 16LL));
    if ( *(_QWORD *)v58 == 0x8000000000000004LL )
    {
      if ( v31 <= 1 )
        core::panicking::panic_bounds_check(1LL, v31, &off_141000);
      v15 = v58[8];
      <alloc::string::String as core::clone::Clone>::clone(&v34, v30[1]);
      *(_QWORD *)&v32[16] = v35;
      *(_OWORD *)v32 = v34;
      v32[24] = v15;
      v2 = alloc::boxed::Box<T>::new(v32);
      goto LABEL_46;
    }
    v43 = *(_QWORD *)&v58[48];
    v42 = *(_OWORD *)&v58[32];
    v41 = *(_OWORD *)&v58[16];
    v40 = *(_OWORD *)v58;
LABEL_33:
    v16 = 0LL;
    if ( (__int64)v40 < (__int64)0x8000000000000004LL )
      v16 = v40 - 0x7FFFFFFFFFFFFFFFLL;
    if ( v16 )
    {
      if ( v16 == 3 )
      {
LABEL_37:
        v17 = v31;
        if ( v31 >= 2 )
        {
          <alloc::string::String as core::clone::Clone>::clone(v32, v30[1]);
          *(_QWORD *)&v58[24] = *(_QWORD *)&v32[16];
          *(_OWORD *)&v58[8] = *(_OWORD *)v32;
          *(_QWORD *)v58 = 0x8000000000000000LL;
          v18 = alloc::boxed::Box<T>::new(v58);
LABEL_44:
          v2 = v18;
LABEL_45:
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v40);
LABEL_46:
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v53);
LABEL_47:
          core::ptr::drop_in_place<uu_seq::SeqOptions>(&v44);
          core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v29);
          goto LABEL_48;
        }
        v28 = &off_140DC0;
        v19 = 1LL;
        goto LABEL_66;
      }
    }
    else if ( BYTE8(v41) == 1 )
    {
      goto LABEL_37;
    }
    v19 = v31 - 1;
    if ( !v31 )
    {
      v17 = 0LL;
      v28 = &off_140E80;
      goto LABEL_66;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v58,
      *(_QWORD *)(v30[v19] + 8LL),
      *(_QWORD *)(v30[v19] + 16LL));
    if ( *(_QWORD *)v58 == 0x8000000000000004LL )
    {
      v17 = v31;
      if ( v19 < v31 )
      {
        v20 = v58[8];
        <alloc::string::String as core::clone::Clone>::clone(&v38, v30[v19]);
        *(_QWORD *)&v32[16] = v39;
        *(_OWORD *)v32 = v38;
        v32[24] = v20;
        v18 = alloc::boxed::Box<T>::new(v32);
        goto LABEL_44;
      }
      v28 = &off_140FE8;
LABEL_66:
      core::panicking::panic_bounds_check(v19, v17, v28);
    }
    v37 = *(_QWORD *)&v58[48];
    v36 = *(_OWORD *)&v58[32];
    v35 = *(_OWORD *)&v58[16];
    v34 = *(_OWORD *)v58;
    v22 = core::cmp::max_by(*((_QWORD *)&v55 + 1), *((_QWORD *)&v42 + 1));
    v23 = core::cmp::max_by(v22, *((_QWORD *)&v36 + 1));
    v24 = core::cmp::max_by(v56, v43);
    if ( v48 )
    {
      uucore::features::format::Format<F>::parse(v58, v48, v49);
      v25 = *(_QWORD *)v58;
      v38 = *(_OWORD *)&v58[8];
      v39 = *(_OWORD *)&v58[24];
      if ( *(_QWORD *)v58 == 0x8000000000000000LL )
      {
        *(_OWORD *)&v58[16] = v39;
        *(_OWORD *)v58 = v38;
        v2 = alloc::boxed::Box<T>::new(v58);
        core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v34);
        goto LABEL_45;
      }
      v33 = v59;
      *(_OWORD *)&v32[40] = *(_OWORD *)&v58[40];
      *(_OWORD *)&v32[8] = v38;
      *(_OWORD *)&v32[24] = v39;
    }
    else
    {
      v25 = 0x8000000000000000LL;
    }
    *(_QWORD *)v32 = v25;
    *(_QWORD *)&v58[32] = v55;
    *(_OWORD *)&v58[16] = v54;
    *(_OWORD *)v58 = v53;
    *(_OWORD *)&v58[40] = v40;
    v59 = v41;
    v60 = v42;
    v61 = v34;
    v62 = v35;
    v63 = v36;
    v26 = uu_seq::print_seq((unsigned int)v58, v24, DWORD2(v44), v45, DWORD2(v46), v47, v50, v23, (__int64)v32);
    v27 = v26;
    if ( v26 )
    {
      if ( (unsigned __int8)std::io::error::Error::kind(v26) != 11 )
      {
        v2 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v27);
        goto LABEL_60;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v27);
    }
    v2 = 0LL;
LABEL_60:
    core::ptr::drop_in_place<core::option::Option<uucore::features::format::Format<uucore::features::format::num_format::Float>>>(v32);
    core::ptr::drop_in_place<uu_seq::SeqOptions>(&v44);
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v29);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v32[8]);
}
