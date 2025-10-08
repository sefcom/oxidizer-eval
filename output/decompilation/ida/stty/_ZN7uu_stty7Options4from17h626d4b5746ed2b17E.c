__int64 __fastcall uu_stty::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char flag; // bp
  char v4; // r14
  __int64 v5; // rax
  int v6; // r12d
  unsigned __int64 v7; // rax
  int v9; // [rsp+4h] [rbp-E4h]
  _BYTE v10[4]; // [rsp+8h] [rbp-E0h] BYREF
  int v11; // [rsp+Ch] [rbp-DCh]
  __int64 v12; // [rsp+10h] [rbp-D8h]
  __int64 v13; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+20h] [rbp-C8h]
  __int128 v15; // [rsp+60h] [rbp-88h]
  _QWORD v16[14]; // [rsp+78h] [rbp-70h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAll, 3LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSave, 4LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a2);
  v5 = clap_builder::parser::error::MatchesError::unwrap(&v13);
  if ( v5 )
  {
    LODWORD(v14) = 1;
    WORD2(v14) = 0;
    v13 = 0x1B600000800LL;
    std::fs::OpenOptions::open(v10, &v13, v5);
    if ( (v10[0] & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      return a1;
    }
    v9 = v11;
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v2 = std::io::stdio::stdout();
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, a2);
  clap_builder::parser::error::MatchesError::unwrap(v16, &v13);
  if ( v16[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v13, v16);
    v7 = v13;
    v15 = v14;
  }
  else
  {
    v7 = 0x8000000000000000LL;
  }
  *(_QWORD *)a1 = v7;
  *(_OWORD *)(a1 + 8) = v15;
  *(_DWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 28) = v9;
  *(_QWORD *)(a1 + 32) = v2;
  *(_BYTE *)(a1 + 40) = flag;
  *(_BYTE *)(a1 + 41) = v4;
  return a1;
}