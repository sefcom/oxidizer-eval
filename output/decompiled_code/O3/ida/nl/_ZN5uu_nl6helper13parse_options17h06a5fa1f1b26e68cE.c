__int64 __fastcall uu_nl::helper::parse_options(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int128 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int128 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int128 *v19; // r12
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int128 v27; // [rsp+0h] [rbp-108h] BYREF
  __int128 *v28; // [rsp+10h] [rbp-F8h]
  __int64 v29; // [rsp+18h] [rbp-F0h]
  __int64 v30; // [rsp+20h] [rbp-E8h]
  __int128 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 *v37; // [rsp+88h] [rbp-80h]
  __int128 v38; // [rsp+90h] [rbp-78h] BYREF
  __int128 *v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+A8h] [rbp-60h] BYREF
  __int128 *v41; // [rsp+B8h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-48h] BYREF
  __int128 *v43; // [rsp+D0h] [rbp-38h]

  *(_QWORD *)&v31 = 0LL;
  *((_QWORD *)&v31 + 1) = 8LL;
  v32 = 0LL;
  *(_BYTE *)(a2 + 128) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a3, aNoRenumber_0, 11LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aSectionDelimit_0, 17LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aSectionDelimit_0, 17LL, &v27);
  if ( v4 )
  {
    v35 = v4;
    if ( *(_QWORD *)(v4 + 16) == 1LL )
    {
      *(_QWORD *)&v33 = &v35;
      *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_2D9F88;
      *((_QWORD *)&v27 + 1) = 2LL;
      v30 = 0LL;
      v28 = &v33;
      v29 = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v42, &v27);
      v27 = v42;
      v28 = v43;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v27, v4);
    }
    core::ptr::drop_in_place<alloc::string::String>(a2 + 48);
    *(_QWORD *)(a2 + 64) = v28;
    *(_OWORD *)(a2 + 48) = v27;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aNumberSeparato, 16LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aNumberSeparato, 16LL, &v27);
  if ( v5 )
    <alloc::string::String as core::clone::Clone>::clone_from(a2 + 72, v5);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aNumberFormat_0, 13LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aNumberFormat_0, 13LL, &v27);
  if ( v6 )
    v7 = core::ops::function::FnOnce::call_once(v6);
  else
    v7 = 1;
  *(_BYTE *)(a2 + 129) = v7;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aHeaderNumberin, 16LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(aHeaderNumberin, 16LL, &v27);
  if ( v8 )
  {
    v9 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
    core::ops::function::FnOnce::call_once(&v27, v9);
    if ( (_QWORD)v27 != 0x8000000000000001LL )
    {
      v10 = *((_QWORD *)&v27 + 1);
      v11 = v28;
      if ( (_QWORD)v27 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
        *(_QWORD *)a2 = v10;
        *(_QWORD *)(a2 + 8) = v11;
      }
      else
      {
        v36 = v27;
        v37 = v28;
        alloc::vec::Vec<T,A>::push(&v31, &v36);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aBodyNumbering_0, 14LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aBodyNumbering_0, 14LL, &v27);
  if ( v12 )
  {
    v13 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
    core::ops::function::FnOnce::call_once(&v27, v13);
    if ( (_QWORD)v27 != 0x8000000000000001LL )
    {
      v14 = *((_QWORD *)&v27 + 1);
      v15 = v28;
      if ( (_QWORD)v27 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 16) = v14;
        *(_QWORD *)(a2 + 24) = v15;
      }
      else
      {
        v38 = v27;
        v39 = v28;
        alloc::vec::Vec<T,A>::push(&v31, &v38);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aFooterNumberin, 16LL);
  v16 = clap_builder::parser::error::MatchesError::unwrap(aFooterNumberin, 16LL, &v27);
  if ( v16 )
  {
    v17 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 16));
    core::ops::function::FnOnce::call_once(&v27, v17);
    if ( (_QWORD)v27 != 0x8000000000000001LL )
    {
      v18 = *((_QWORD *)&v27 + 1);
      v19 = v28;
      if ( (_QWORD)v27 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        *(_QWORD *)(a2 + 32) = v18;
        *(_QWORD *)(a2 + 40) = v19;
      }
      else
      {
        v40 = v27;
        v41 = v28;
        alloc::vec::Vec<T,A>::push(&v31, &v40);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aNumberWidth_0, 12LL);
  v20 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aNumberWidth_0, 12LL, &v27);
  if ( v20 )
  {
    v21 = *v20;
    if ( v21 )
    {
      *(_QWORD *)(a2 + 120) = v21;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, aInvalidLineNum, 71LL);
      v34 = v28;
      v33 = v27;
      alloc::vec::Vec<T,A>::push(&v31, &v33);
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aJoinBlankLines, 16LL);
  v22 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aJoinBlankLines, 16LL, &v27);
  if ( v22 )
  {
    v23 = *v22;
    if ( v23 )
    {
      *(_QWORD *)(a2 + 112) = v23;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, aInvalidLineNum_0, 74LL);
      v34 = v28;
      v33 = v27;
      alloc::vec::Vec<T,A>::push(&v31, &v33);
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aLineIncrement_0, 14LL);
  v24 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aLineIncrement_0, 14LL, &v27);
  if ( v24 )
    *(_QWORD *)(a2 + 104) = *v24;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a3, aStartingLineNu_0, 20LL);
  v25 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aStartingLineNu_0, 20LL, &v27);
  if ( v25 )
    *(_QWORD *)(a2 + 96) = *v25;
  *(_QWORD *)(a1 + 16) = v32;
  *(_OWORD *)a1 = v31;
  return a1;
}
