unsigned __int64 __fastcall uu_head::Mode::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v8; // [rsp+10h] [rbp-78h]
  _BYTE v9[7]; // [rsp+11h] [rbp-77h]
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int128 v11; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a2, aBytes_0);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aBytes_0, &v12);
  if ( v2 )
  {
    uu_head::parse::parse_num((__int64)&v10, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    if ( (_DWORD)v10 == 4 )
    {
      v3 = *((_QWORD *)&v10 + 1);
      v4 = (unsigned __int8)v11 | 2LL;
LABEL_7:
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = v3;
LABEL_10:
      result = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return result;
    }
    v13 = v11;
    v12 = v10;
    uu_head::Mode::from::{{closure}}(&v7, &v12);
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a2, aLines);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aLines, &v12);
    if ( !v5 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 10LL;
      goto LABEL_10;
    }
    uu_head::parse::parse_num((__int64)&v10, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    if ( (_DWORD)v10 == 4 )
    {
      v3 = *((_QWORD *)&v10 + 1);
      v4 = (unsigned __int8)v11;
      goto LABEL_7;
    }
    v13 = v11;
    v12 = v10;
    uu_head::Mode::from::{{closure}}(&v7, &v12);
  }
  result = v8;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)&v9[3];
  *(_DWORD *)(a1 + 17) = *(_DWORD *)v9;
  *(_OWORD *)a1 = v7;
  *(_BYTE *)(a1 + 16) = result;
  return result;
}