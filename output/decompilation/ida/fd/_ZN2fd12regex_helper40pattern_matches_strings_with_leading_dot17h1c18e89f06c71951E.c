__int64 __fastcall fd::regex_helper::pattern_matches_strings_with_leading_dot(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _BYTE v4[64]; // [rsp+0h] [rbp-208h] BYREF
  __int128 v5; // [rsp+40h] [rbp-1C8h]
  __int128 v6; // [rsp+50h] [rbp-1B8h]
  __int128 v7; // [rsp+60h] [rbp-1A8h]
  __int128 v8; // [rsp+70h] [rbp-198h]
  __int128 v9; // [rsp+80h] [rbp-188h] BYREF
  __int128 v10; // [rsp+90h] [rbp-178h]
  __int128 v11; // [rsp+A0h] [rbp-168h]
  __int128 v12; // [rsp+B0h] [rbp-158h]
  __int128 v13; // [rsp+C0h] [rbp-148h]
  __int128 v14; // [rsp+D0h] [rbp-138h]
  __int128 v15; // [rsp+E0h] [rbp-128h]
  __int128 v16; // [rsp+F0h] [rbp-118h]
  _BYTE v17[264]; // [rsp+100h] [rbp-108h] BYREF

  *(_DWORD *)&v4[8] = 250;
  *(_WORD *)&v4[12] = 0;
  v4[14] = 0;
  *(_DWORD *)&v4[1] = 33686018;
  *(_WORD *)&v4[5] = 514;
  v4[7] = 10;
  v4[0] = 0;
  regex_syntax::parser::ParserBuilder::build(v17, v4);
  regex_syntax::parser::Parser::parse(v4, v17, a1, a2);
  if ( *(_QWORD *)v4 == 0x8000000000000001LL )
  {
    v11 = *(_OWORD *)&v4[40];
    v10 = *(_OWORD *)&v4[24];
    v9 = *(_OWORD *)&v4[8];
    v2 = fd::regex_helper::pattern_matches_strings_with_leading_dot::{{closure}}(&v9);
  }
  else
  {
    v9 = *(_OWORD *)v4;
    v16 = v8;
    v15 = v7;
    v14 = v6;
    v13 = v5;
    v12 = *(_OWORD *)&v4[48];
    v11 = *(_OWORD *)&v4[32];
    v10 = *(_OWORD *)&v4[16];
    core::ptr::drop_in_place<core::result::Result<bool,regex_syntax::error::Error>>(&v9);
    v2 = 0;
  }
  core::ptr::drop_in_place<regex_syntax::parser::Parser>(v17);
  LOBYTE(v2) = v2 & 1;
  return v2;
}