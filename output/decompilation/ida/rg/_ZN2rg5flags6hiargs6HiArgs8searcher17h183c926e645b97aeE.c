__int64 __fastcall rg::flags::hiargs::HiArgs::searcher(__int64 a1, __int64 a2)
{
  char v2; // cl
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+10h] [rbp-48h]
  __int128 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  char v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+39h] [rbp-1Fh]
  char v13; // [rsp+3Ah] [rbp-1Eh]
  char v14; // [rsp+3Ch] [rbp-1Ch]
  char v15; // [rsp+3Dh] [rbp-1Bh]
  char v16; // [rsp+3Eh] [rbp-1Ah]
  char v17; // [rsp+3Fh] [rbp-19h]
  char v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+41h] [rbp-17h]
  char v20; // [rsp+42h] [rbp-16h]

  v2 = 10;
  if ( (*(_BYTE *)(a2 + 903) & 1) != 0 )
    v2 = 0;
  v3 = *(_BYTE *)(a2 + 881);
  v7 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v13 = 0;
  v15 = 0;
  v19 = 1;
  v8 = *(_OWORD *)(a2 + 32);
  v11 = v3;
  v12 = v2;
  v14 = *(_BYTE *)(a2 + 888);
  v16 = *(_BYTE *)(a2 + 890);
  v18 = *(_BYTE *)(a2 + 893);
  v17 = *(_BYTE *)(a2 + 892);
  v20 = *(_BYTE *)(a2 + 909);
  if ( *(_DWORD *)(a2 + 96) == 2 )
  {
    v15 = 1;
    v4 = *(_QWORD *)(a2 + 144);
    if ( !v4 )
      return grep_searcher::searcher::SearcherBuilder::build(a1, &v7);
  }
  else
  {
    *((_QWORD *)&v9 + 1) = rg::flags::lowargs::ContextModeLimited::get(a2 + 96);
    *(_QWORD *)&v9 = v5;
    v4 = *(_QWORD *)(a2 + 144);
    if ( !v4 )
      return grep_searcher::searcher::SearcherBuilder::build(a1, &v7);
  }
  if ( (_DWORD)v4 == 1 )
    v10 = *(_QWORD *)(a2 + 152);
  else
    v19 = 0;
  return grep_searcher::searcher::SearcherBuilder::build(a1, &v7);
}