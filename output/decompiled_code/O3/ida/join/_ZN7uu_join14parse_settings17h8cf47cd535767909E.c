__int64 __fastcall uu_join::parse_settings(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // r15
  __int64 v4; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // ecx
  unsigned __int8 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 v18; // kr20_16
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  char v28; // al
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  _BYTE v32[48]; // [rsp+0h] [rbp-178h] BYREF
  __int128 v33; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v34[24]; // [rsp+40h] [rbp-138h]
  _BYTE v35[6]; // [rsp+58h] [rbp-120h]
  char v36; // [rsp+5Eh] [rbp-11Ah]
  char v37; // [rsp+5Fh] [rbp-119h]
  __int128 v38; // [rsp+60h] [rbp-118h] BYREF
  __int128 v39; // [rsp+70h] [rbp-108h]
  __int128 v40; // [rsp+80h] [rbp-F8h]
  __int128 v41; // [rsp+90h] [rbp-E8h]
  __int64 v42; // [rsp+A0h] [rbp-D8h]
  __int16 v43; // [rsp+A8h] [rbp-D0h]
  __int128 v44; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-B8h]
  __int64 v46; // [rsp+C8h] [rbp-B0h]
  __int64 v47; // [rsp+D0h] [rbp-A8h]
  __int64 v48; // [rsp+D8h] [rbp-A0h]
  __int64 v49; // [rsp+E0h] [rbp-98h]
  _QWORD v50[2]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v52; // [rsp+100h] [rbp-78h]
  __int64 v53; // [rsp+108h] [rbp-70h]
  _OWORD v54[3]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v55; // [rsp+140h] [rbp-38h]

  uu_join::get_and_parse_field_number((__int64)v32, a2, (__int64)aJ);
  if ( *(_QWORD *)v32
    || (v3 = *(unsigned __int8 **)&v32[8],
        v4 = *(_QWORD *)&v32[16],
        uu_join::get_and_parse_field_number((__int64)v32, a2, (__int64)::a1),
        *(_QWORD *)v32) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v32[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v6 = *(_QWORD *)&v32[8];
  v7 = *(_QWORD *)&v32[16];
  uu_join::get_and_parse_field_number((__int64)v32, a2, (__int64)::a2);
  if ( *(_QWORD *)v32 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v32[8];
LABEL_9:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v48 = v7;
  v49 = v6;
  v8 = *(_QWORD *)&v32[8];
  v9 = *(_QWORD *)&v32[16];
  uu_join::parse_print_settings(v32, a2);
  if ( *(_QWORD *)v32 )
  {
    v10 = *(_QWORD *)&v32[8];
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v32;
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_9;
  }
  v47 = v9;
  v46 = v8;
  v11 = (v32[10] << 16) | *(unsigned __int16 *)&v32[8];
  *(_OWORD *)&v34[8] = 0LL;
  v36 = 0;
  v37 = 10;
  *(_QWORD *)&v33 = 0x8000000000000003LL;
  *(_QWORD *)v32 = 0LL;
  *(_QWORD *)&v32[8] = 8LL;
  *(_OWORD *)&v32[16] = 0LL;
  *(_OWORD *)&v32[32] = 1uLL;
  *(_DWORD *)&v35[2] = v11 & 1;
  v35[0] = BYTE1(v11) & 1;
  v35[1] = BYTE2(v11) & 1;
  v35[3] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aI, 1LL);
  v12 = v3;
  uu_join::get_field_number(&v38, v3, v4, v49, v48);
  v14 = *((_QWORD *)&v38 + 1);
  v15 = v38;
  v16 = v47;
  if ( (_QWORD)v38
    || (*(_QWORD *)&v34[8] = *((_QWORD *)&v38 + 1),
        v12 = v3,
        uu_join::get_field_number(&v38, v3, v4, v46, v47),
        v14 = *((_QWORD *)&v38 + 1),
        (v15 = v38) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v14;
LABEL_13:
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_14:
    core::ptr::drop_in_place<uu_join::Settings>(v32, v12, v13, v15, v16);
    return a1;
  }
  *(_QWORD *)&v34[16] = *((_QWORD *)&v38 + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, a2, aT, 1LL);
  v17 = clap_builder::parser::error::MatchesError::unwrap(aT, 1LL, &v38);
  if ( v17 )
  {
    v12 = *(unsigned __int8 **)(v17 + 8);
    uu_join::parse_separator((__int64)&v38, v12, *(_QWORD *)(v17 + 16));
    v18 = v38;
    v19 = v39;
    if ( (_QWORD)v38 == 0x8000000000000004LL )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v38 + 1);
      *(_QWORD *)(a1 + 16) = v19;
      goto LABEL_13;
    }
    core::ptr::drop_in_place<uu_join::SepSetting>(&v33);
    v33 = v18;
    *(_QWORD *)v34 = v19;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, a2, aO, 1LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aO, 1LL, &v38);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 8);
    v22 = *(_QWORD *)(v20 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, aAuto, 4LL) )
    {
      *(_QWORD *)&v44 = 0LL;
      *((_QWORD *)&v44 + 1) = 8LL;
      v45 = 0LL;
      *(_QWORD *)&v38 = 0x2C00000020LL;
      DWORD2(v38) = 9;
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v54, &v38, v21, v22);
      *(_QWORD *)&v38 = 0LL;
      *((_QWORD *)&v38 + 1) = v22;
      v39 = v54[0];
      v40 = v54[1];
      v41 = v54[2];
      v42 = v55;
      v43 = 1;
      while ( 1 )
      {
        v23 = core::str::iter::SplitInternal<P>::next(&v38);
        if ( !v23 )
        {
          *(_QWORD *)&v39 = v45;
          v38 = v44;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(v32);
          *(_QWORD *)&v32[16] = v39;
          *(_OWORD *)v32 = v38;
          goto LABEL_27;
        }
        v12 = (unsigned __int8 *)v23;
        uu_join::Spec::parse((__int64)&v51, v23, v24);
        v25 = v53;
        if ( v51 )
          break;
        v50[0] = v52;
        v50[1] = v53;
        alloc::vec::Vec<T,A>::push(&v44, v50);
      }
      *(_QWORD *)(a1 + 8) = v52;
      *(_QWORD *)(a1 + 16) = v25;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&v44);
      goto LABEL_14;
    }
    v35[4] = 1;
  }
LABEL_27:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, a2, aE, 1LL);
  v26 = clap_builder::parser::error::MatchesError::unwrap(aE, 1LL, &v38);
  if ( v26 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v38, *(_QWORD *)(v26 + 8), *(_QWORD *)(v26 + 16));
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v32[24]);
    *(_QWORD *)&v32[40] = v39;
    *(_OWORD *)&v32[24] = v38;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNocheckOrder, 13LL) )
    v36 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCheckOrder, 11LL) )
    v36 = 2;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHeader, 6LL) )
    v35[5] = 1;
  v27 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZ, 1LL) == 0;
  v28 = 10;
  if ( !v27 )
    v28 = 0;
  v37 = v28;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)v34;
  v29 = *(_OWORD *)v32;
  v30 = *(_OWORD *)&v32[16];
  v31 = *(_OWORD *)&v32[32];
  *(_OWORD *)(a1 + 48) = v33;
  *(_OWORD *)(a1 + 32) = v31;
  *(_OWORD *)(a1 + 16) = v30;
  *(_OWORD *)a1 = v29;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)&v34[16];
  *(_DWORD *)(a1 + 88) = *(_DWORD *)v35;
  *(_WORD *)(a1 + 92) = *(_WORD *)&v35[4];
  *(_BYTE *)(a1 + 94) = v36;
  *(_BYTE *)(a1 + 95) = v37;
  return a1;
}
