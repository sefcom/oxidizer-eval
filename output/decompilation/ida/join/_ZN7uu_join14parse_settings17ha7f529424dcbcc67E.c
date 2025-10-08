__int64 __fastcall uu_join::parse_settings(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbp
  int v9; // eax
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // kr20_16
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  char v27; // al
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  _BYTE v31[48]; // [rsp+0h] [rbp-148h] BYREF
  __int128 v32; // [rsp+30h] [rbp-118h]
  _BYTE v33[24]; // [rsp+40h] [rbp-108h]
  _BYTE v34[6]; // [rsp+58h] [rbp-F0h]
  char v35; // [rsp+5Eh] [rbp-EAh]
  char v36; // [rsp+5Fh] [rbp-E9h]
  __int128 v37; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-D8h]
  __int128 v39; // [rsp+78h] [rbp-D0h] BYREF
  _QWORD v40[7]; // [rsp+88h] [rbp-C0h] BYREF
  __int16 v41; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v42; // [rsp+C8h] [rbp-80h]
  __int64 v43; // [rsp+D0h] [rbp-78h]
  __int64 v44; // [rsp+D8h] [rbp-70h]
  __int64 v45; // [rsp+E0h] [rbp-68h]
  __int64 v46; // [rsp+E8h] [rbp-60h]
  __int64 v47; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-50h]
  __int64 v49; // [rsp+100h] [rbp-48h]
  _QWORD v50[8]; // [rsp+108h] [rbp-40h] BYREF

  uu_join::get_and_parse_field_number((__int64)v31, a2, (__int64)aJ);
  if ( *(_DWORD *)v31 == 1
    || (v3 = *(unsigned __int8 **)&v31[8],
        v4 = *(_QWORD *)&v31[16],
        uu_join::get_and_parse_field_number((__int64)v31, a2, (__int64)::a1),
        *(_DWORD *)v31 == 1) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v31[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v5 = *(_QWORD *)&v31[8];
  v6 = *(_QWORD *)&v31[16];
  uu_join::get_and_parse_field_number((__int64)v31, a2, (__int64)::a2);
  if ( *(_DWORD *)v31 == 1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v31[8];
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v45 = v6;
  v46 = v5;
  v7 = *(_QWORD *)&v31[8];
  v8 = *(_QWORD *)&v31[16];
  uu_join::parse_print_settings((__int64)v31, a2);
  v9 = *(_DWORD *)&v31[8];
  if ( *(_QWORD *)v31 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v31;
    goto LABEL_8;
  }
  v44 = v8;
  v43 = v7;
  *(_OWORD *)&v33[8] = 0LL;
  v36 = 10;
  v42 = 0x8000000000000003LL;
  *(_QWORD *)&v32 = 0x8000000000000003LL;
  *(_QWORD *)v31 = 0LL;
  *(_QWORD *)&v31[8] = 8LL;
  *(_OWORD *)&v31[16] = 0LL;
  *(_OWORD *)&v31[32] = 1uLL;
  v35 = 0;
  *(_DWORD *)&v34[2] = v9 & 1;
  v34[0] = BYTE1(v9) & 1;
  v34[1] = BYTE2(v9) & 1;
  v34[3] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aI, 1LL);
  v11 = v3;
  uu_join::get_field_number(&v39, v3, v4, v46, v45);
  v13 = *((_QWORD *)&v39 + 1);
  v14 = v39;
  v15 = v44;
  if ( (_QWORD)v39
    || (*(_QWORD *)&v33[8] = *((_QWORD *)&v39 + 1),
        v11 = v3,
        uu_join::get_field_number(&v39, v3, v4, v43, v44),
        v13 = *((_QWORD *)&v39 + 1),
        (v14 = v39) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_13:
    core::ptr::drop_in_place<uu_join::Settings>(v31, v11, v12, v14, v15);
    return a1;
  }
  *(_QWORD *)&v33[16] = *((_QWORD *)&v39 + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, a2);
  v16 = clap_builder::parser::error::MatchesError::unwrap(&v39);
  if ( v16 )
  {
    v11 = *(unsigned __int8 **)(v16 + 8);
    uu_join::parse_separator((__int64)&v39, v11, *(_QWORD *)(v16 + 16));
    v17 = v39;
    v14 = 0x8000000000000000LL;
    v18 = v40[0];
    if ( (_QWORD)v39 == 0x8000000000000004LL )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v39 + 1);
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      goto LABEL_13;
    }
    core::ptr::drop_in_place<uu_join::SepSetting>(v42, *((_QWORD *)&v32 + 1));
    v32 = v17;
    *(_QWORD *)v33 = v18;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39);
  v19 = clap_builder::parser::error::MatchesError::unwrap(aO, &v39);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 8);
    v21 = *(_QWORD *)(v19 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aAuto, 4LL) )
    {
      *(_QWORD *)&v37 = 0LL;
      *((_QWORD *)&v37 + 1) = 8LL;
      v38 = 0LL;
      v47 = 0x2C00000020LL;
      LODWORD(v48) = 9;
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v40, &v47, v20, v21);
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = v21;
      v41 = 1;
      while ( 1 )
      {
        v22 = core::str::iter::SplitInternal<P>::next(&v39);
        if ( !v22 )
        {
          *(_OWORD *)v31 = v37;
          *(_QWORD *)&v31[16] = v38;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(0LL, 8LL);
          goto LABEL_26;
        }
        uu_join::Spec::parse((__int64)&v47, v22, v23);
        v24 = v49;
        if ( (_DWORD)v47 == 1 )
          break;
        v50[0] = v48;
        v50[1] = v49;
        alloc::vec::Vec<T,A>::push(&v37, v50);
      }
      *(_QWORD *)(a1 + 8) = v48;
      *(_QWORD *)(a1 + 16) = v24;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v11 = (unsigned __int8 *)*((_QWORD *)&v37 + 1);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(v37, *((_QWORD *)&v37 + 1));
      goto LABEL_13;
    }
    v34[4] = 1;
  }
LABEL_26:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39);
  v25 = clap_builder::parser::error::MatchesError::unwrap(aE, &v39);
  if ( v25 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v39, *(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16));
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0LL, 1LL);
    *(_QWORD *)&v31[40] = v40[0];
    *(_OWORD *)&v31[24] = v39;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNocheckOrder, 13LL) )
    v35 = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCheckOrder, 11LL) )
    v35 = 2;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHeader, 6LL) )
    v34[5] = 1;
  v26 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZ, 1LL) == 0;
  v27 = 10;
  if ( !v26 )
    v27 = 0;
  v36 = v27;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)v33;
  v28 = *(_OWORD *)v31;
  v29 = *(_OWORD *)&v31[16];
  v30 = *(_OWORD *)&v31[32];
  *(_OWORD *)(a1 + 48) = v32;
  *(_OWORD *)(a1 + 32) = v30;
  *(_OWORD *)(a1 + 16) = v29;
  *(_OWORD *)a1 = v28;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)&v33[16];
  *(_DWORD *)(a1 + 88) = *(_DWORD *)v34;
  *(_WORD *)(a1 + 92) = *(_WORD *)&v34[4];
  *(_BYTE *)(a1 + 94) = v35;
  *(_BYTE *)(a1 + 95) = v36;
  return a1;
}