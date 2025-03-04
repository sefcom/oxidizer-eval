unsigned __int64 __fastcall uu_head::Mode::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v7; // [rsp+10h] [rbp-78h]
  _BYTE v8[7]; // [rsp+11h] [rbp-77h]
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a2, &unk_1DD3C, 5LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_1DD3C, 5LL, &v11);
  if ( v2 )
  {
    uu_head::parse::parse_num((__int64)&v9, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    if ( (_DWORD)v9 == 3 )
    {
      result = 0x8000000000000000LL;
      v4 = *((_QWORD *)&v9 + 1);
      if ( (_BYTE)v10 )
        *(_QWORD *)(a1 + 8) = 3LL;
      else
        *(_QWORD *)(a1 + 8) = 2LL;
LABEL_15:
      *(_QWORD *)(a1 + 16) = v4;
      goto LABEL_16;
    }
    v12 = v10;
    v11 = v9;
    uu_head::Mode::from::{{closure}}(&v6, &v11);
    goto LABEL_13;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a2, aLines, 5LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aLines, 5LL, &v11);
  if ( v5 )
  {
    uu_head::parse::parse_num((__int64)&v9, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    if ( (_DWORD)v9 == 3 )
    {
      result = 0x8000000000000000LL;
      v4 = *((_QWORD *)&v9 + 1);
      if ( (_BYTE)v10 )
        *(_QWORD *)(a1 + 8) = 1LL;
      else
        *(_QWORD *)(a1 + 8) = 0LL;
      goto LABEL_15;
    }
    v12 = v10;
    v11 = v9;
    uu_head::Mode::from::{{closure}}(&v6, &v11);
LABEL_13:
    result = v7;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v8[3];
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v8;
    *(_OWORD *)a1 = v6;
    *(_BYTE *)(a1 + 16) = result;
    return result;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 10LL;
  result = 0x8000000000000000LL;
LABEL_16:
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}
