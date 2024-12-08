__int64 __fastcall uu_join::parse_settings(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // r15
  __int64 v4; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rcx
  char v11; // al
  __int16 v12; // cx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int128 v19; // kr20_16
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  char v29; // al
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  _BYTE v33[48]; // [rsp+0h] [rbp-178h] BYREF
  __int128 v34; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v35[24]; // [rsp+40h] [rbp-138h]
  _BYTE v36[6]; // [rsp+58h] [rbp-120h]
  char v37; // [rsp+5Eh] [rbp-11Ah]
  char v38; // [rsp+5Fh] [rbp-119h]
  __int128 v39; // [rsp+60h] [rbp-118h] BYREF
  __int128 v40; // [rsp+70h] [rbp-108h]
  __int128 v41; // [rsp+80h] [rbp-F8h]
  __int128 v42; // [rsp+90h] [rbp-E8h]
  __int64 v43; // [rsp+A0h] [rbp-D8h]
  __int16 v44; // [rsp+A8h] [rbp-D0h]
  __int128 v45; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h]
  __int64 v48; // [rsp+D0h] [rbp-A8h]
  __int64 v49; // [rsp+D8h] [rbp-A0h]
  __int64 v50; // [rsp+E0h] [rbp-98h]
  _QWORD v51[2]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v53; // [rsp+100h] [rbp-78h]
  __int64 v54; // [rsp+108h] [rbp-70h]
  _OWORD v55[3]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v56; // [rsp+140h] [rbp-38h]

  uu_join::get_and_parse_field_number((__int64)v33, a2, (__int64)aJ);
  if ( *(_QWORD *)v33
    || (v3 = *(unsigned __int8 **)&v33[8],
        v4 = *(_QWORD *)&v33[16],
        uu_join::get_and_parse_field_number((__int64)v33, a2, (__int64)::a1),
        *(_QWORD *)v33) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v33[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v6 = *(_QWORD *)&v33[8];
  v7 = *(_QWORD *)&v33[16];
  uu_join::get_and_parse_field_number((__int64)v33, a2, (__int64)::a2);
  if ( *(_QWORD *)v33 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v33[8];
LABEL_9:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v49 = v7;
  v50 = v6;
  v8 = *(_QWORD *)&v33[8];
  v9 = *(_QWORD *)&v33[16];
  uu_join::parse_print_settings(v33, a2);
  if ( *(_QWORD *)v33 )
  {
    v10 = *(_QWORD *)&v33[8];
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v33;
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_9;
  }
  v48 = v9;
  v47 = v8;
  v11 = v33[10];
  v12 = *(_WORD *)&v33[8];
  *(_OWORD *)&v35[8] = 0LL;
  v37 = 0;
  v38 = 10;
  *(_QWORD *)&v34 = 0x8000000000000003LL;
  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)&v33[8] = 8LL;
  *(_OWORD *)&v33[16] = 0LL;
  *(_OWORD *)&v33[32] = 1uLL;
  *(_DWORD *)&v36[2] = v12 & 1;
  v36[0] = HIBYTE(v12) & 1;
  v36[1] = v11 & 1;
  v36[3] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aI, 1LL);
  v13 = v3;
  uu_join::get_field_number(&v39, v3, v4, v50, v49);
  v15 = *((_QWORD *)&v39 + 1);
  v16 = v39;
  v17 = v48;
  if ( (_QWORD)v39
    || (*(_QWORD *)&v35[8] = *((_QWORD *)&v39 + 1),
        v13 = v3,
        uu_join::get_field_number(&v39, v3, v4, v47, v48),
        v15 = *((_QWORD *)&v39 + 1),
        (v16 = v39) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = v15;
LABEL_13:
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_14:
    core::ptr::drop_in_place<uu_join::Settings>(v33, v13, v14, v16, v17);
    return a1;
  }
  *(_QWORD *)&v35[16] = *((_QWORD *)&v39 + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, a2, aT, 1LL);
  v18 = clap_builder::parser::error::MatchesError::unwrap(aT, 1LL, &v39);
  if ( v18 )
  {
    v13 = *(unsigned __int8 **)(v18 + 8);
    uu_join::parse_separator((__int64)&v39, v13, *(_QWORD *)(v18 + 16));
    v19 = v39;
    v20 = v40;
    if ( (_QWORD)v39 == 0x8000000000000004LL )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v39 + 1);
      *(_QWORD *)(a1 + 16) = v20;
      goto LABEL_13;
    }
    core::ptr::drop_in_place<uu_join::SepSetting>(&v34);
    v34 = v19;
    *(_QWORD *)v35 = v20;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, a2, aO, 1LL);
  v21 = clap_builder::parser::error::MatchesError::unwrap(aO, 1LL, &v39);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(_QWORD *)(v21 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, aAuto, 4LL) )
    {
      *(_QWORD *)&v45 = 0LL;
      *((_QWORD *)&v45 + 1) = 8LL;
      v46 = 0LL;
      *(_QWORD *)&v39 = 0x2C00000020LL;
      DWORD2(v39) = 9;
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v55, &v39, v22, v23);
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = v23;
      v40 = v55[0];
      v41 = v55[1];
      v42 = v55[2];
      v43 = v56;
      v44 = 1;
      while ( 1 )
      {
        v24 = core::str::iter::SplitInternal<P>::next(&v39);
        if ( !v24 )
        {
          *(_QWORD *)&v40 = v46;
          v39 = v45;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(v33);
          *(_QWORD *)&v33[16] = v40;
          *(_OWORD *)v33 = v39;
          goto LABEL_27;
        }
        v13 = (unsigned __int8 *)v24;
        uu_join::Spec::parse((__int64)&v52, v24, v25);
        v26 = v54;
        if ( v52 )
          break;
        v51[0] = v53;
        v51[1] = v54;
        alloc::vec::Vec<T,A>::push(&v45, v51);
      }
      *(_QWORD *)(a1 + 8) = v53;
      *(_QWORD *)(a1 + 16) = v26;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&v45);
      goto LABEL_14;
    }
    v36[4] = 1;
  }
LABEL_27:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, a2, aE, 1LL);
  v27 = clap_builder::parser::error::MatchesError::unwrap(aE, 1LL, &v39);
  if ( v27 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v33[24]);
    *(_QWORD *)&v33[40] = v40;
    *(_OWORD *)&v33[24] = v39;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNocheckOrder, 13LL) )
    v37 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCheckOrder, 11LL) )
    v37 = 2;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHeader, 6LL) )
    v36[5] = 1;
  v28 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZ, 1LL) == 0;
  v29 = 10;
  if ( !v28 )
    v29 = 0;
  v38 = v29;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)v35;
  v30 = *(_OWORD *)v33;
  v31 = *(_OWORD *)&v33[16];
  v32 = *(_OWORD *)&v33[32];
  *(_OWORD *)(a1 + 48) = v34;
  *(_OWORD *)(a1 + 32) = v32;
  *(_OWORD *)(a1 + 16) = v31;
  *(_OWORD *)a1 = v30;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)&v35[16];
  *(_DWORD *)(a1 + 88) = *(_DWORD *)v36;
  *(_WORD *)(a1 + 92) = *(_WORD *)&v36[4];
  *(_BYTE *)(a1 + 94) = v37;
  *(_BYTE *)(a1 + 95) = v38;
  return a1;
}
