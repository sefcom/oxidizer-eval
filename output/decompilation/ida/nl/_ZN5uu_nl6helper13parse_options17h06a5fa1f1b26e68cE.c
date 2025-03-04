__int64 __fastcall uu_nl::helper::parse_options(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int128 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int128 *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int128 *v23; // r12
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int128 v31; // [rsp+0h] [rbp-108h] BYREF
  __int128 *v32; // [rsp+10h] [rbp-F8h]
  __int64 v33; // [rsp+18h] [rbp-F0h]
  __int64 v34; // [rsp+20h] [rbp-E8h]
  __int128 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h]
  __int128 v37; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int128 v40; // [rsp+78h] [rbp-90h] BYREF
  __int128 *v41; // [rsp+88h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-78h] BYREF
  __int128 *v43; // [rsp+A0h] [rbp-68h]
  __int128 v44; // [rsp+A8h] [rbp-60h] BYREF
  __int128 *v45; // [rsp+B8h] [rbp-50h]
  __int128 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int128 *v47; // [rsp+D0h] [rbp-38h]

  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  v36 = 0LL;
  *(_BYTE *)(a2 + 128) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a3, aNoRenumber_0, 11LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aSectionDelimit_0, 17LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aSectionDelimit_0, 17LL, &v31);
  if ( v4 )
  {
    v39 = v4;
    if ( *(_QWORD *)(v4 + 16) == 1LL )
    {
      *(_QWORD *)&v37 = &v39;
      *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &unk_2D9F88;
      *((_QWORD *)&v31 + 1) = 2LL;
      v34 = 0LL;
      v32 = &v37;
      v33 = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v46,
        &v31,
        v5,
        v6,
        v7,
        v8);
      v31 = v46;
      v32 = v47;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v31, v4);
    }
    core::ptr::drop_in_place<alloc::string::String>(a2 + 48);
    *(_QWORD *)(a2 + 64) = v32;
    *(_OWORD *)(a2 + 48) = v31;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aNumberSeparato, 16LL);
  v9 = clap_builder::parser::error::MatchesError::unwrap(aNumberSeparato, 16LL, &v31);
  if ( v9 )
    <alloc::string::String as core::clone::Clone>::clone_from(a2 + 72, v9);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aNumberFormat_0, 13LL);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aNumberFormat_0, 13LL, &v31);
  if ( v10 )
    v11 = core::ops::function::FnOnce::call_once(v10);
  else
    v11 = 1;
  *(_BYTE *)(a2 + 129) = v11;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aHeaderNumberin, 16LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aHeaderNumberin, 16LL, &v31);
  if ( v12 )
  {
    v13 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
    core::ops::function::FnOnce::call_once(&v31, v13);
    if ( (_QWORD)v31 != 0x8000000000000001LL )
    {
      v14 = *((_QWORD *)&v31 + 1);
      v15 = v32;
      if ( (_QWORD)v31 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
        *(_QWORD *)a2 = v14;
        *(_QWORD *)(a2 + 8) = v15;
      }
      else
      {
        v40 = v31;
        v41 = v32;
        alloc::vec::Vec<T,A>::push(&v35, &v40);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aBodyNumbering_0, 14LL);
  v16 = clap_builder::parser::error::MatchesError::unwrap(aBodyNumbering_0, 14LL, &v31);
  if ( v16 )
  {
    v17 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 16));
    core::ops::function::FnOnce::call_once(&v31, v17);
    if ( (_QWORD)v31 != 0x8000000000000001LL )
    {
      v18 = *((_QWORD *)&v31 + 1);
      v19 = v32;
      if ( (_QWORD)v31 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 16) = v18;
        *(_QWORD *)(a2 + 24) = v19;
      }
      else
      {
        v42 = v31;
        v43 = v32;
        alloc::vec::Vec<T,A>::push(&v35, &v42);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aFooterNumberin, 16LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aFooterNumberin, 16LL, &v31);
  if ( v20 )
  {
    v21 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16));
    core::ops::function::FnOnce::call_once(&v31, v21);
    if ( (_QWORD)v31 != 0x8000000000000001LL )
    {
      v22 = *((_QWORD *)&v31 + 1);
      v23 = v32;
      if ( (_QWORD)v31 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        *(_QWORD *)(a2 + 32) = v22;
        *(_QWORD *)(a2 + 40) = v23;
      }
      else
      {
        v44 = v31;
        v45 = v32;
        alloc::vec::Vec<T,A>::push(&v35, &v44);
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aNumberWidth_0, 12LL);
  v24 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aNumberWidth_0, 12LL, &v31);
  if ( v24 )
  {
    v25 = *v24;
    if ( v25 )
    {
      *(_QWORD *)(a2 + 120) = v25;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v31, aInvalidLineNum, 71LL);
      v38 = v32;
      v37 = v31;
      alloc::vec::Vec<T,A>::push(&v35, &v37);
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aJoinBlankLines, 16LL);
  v26 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aJoinBlankLines, 16LL, &v31);
  if ( v26 )
  {
    v27 = *v26;
    if ( v27 )
    {
      *(_QWORD *)(a2 + 112) = v27;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v31, aInvalidLineNum_0, 74LL);
      v38 = v32;
      v37 = v31;
      alloc::vec::Vec<T,A>::push(&v35, &v37);
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aLineIncrement_0, 14LL);
  v28 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aLineIncrement_0, 14LL, &v31);
  if ( v28 )
    *(_QWORD *)(a2 + 104) = *v28;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a3, aStartingLineNu_0, 20LL);
  v29 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aStartingLineNu_0, 20LL, &v31);
  if ( v29 )
    *(_QWORD *)(a2 + 96) = *v29;
  *(_QWORD *)(a1 + 16) = v36;
  *(_OWORD *)a1 = v35;
  return a1;
}
