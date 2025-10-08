__int64 __fastcall rg::search::search_reader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  bool v16; // al
  int v17; // ecx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v21; // eax
  bool v22; // zf
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // [rsp+8h] [rbp-1D0h] BYREF
  __int128 v29; // [rsp+10h] [rbp-1C8h]
  __int128 v30; // [rsp+20h] [rbp-1B8h]
  __int128 v31; // [rsp+30h] [rbp-1A8h]
  __int64 v32; // [rsp+40h] [rbp-198h]
  __int128 v33; // [rsp+50h] [rbp-188h]
  __int128 v34; // [rsp+60h] [rbp-178h]
  __int128 v35; // [rsp+70h] [rbp-168h]
  __int64 v36; // [rsp+80h] [rbp-158h]
  _BYTE v37[80]; // [rsp+88h] [rbp-150h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-100h]
  __int128 v39; // [rsp+E8h] [rbp-F0h]
  _BYTE v40[24]; // [rsp+F8h] [rbp-E0h]
  __int128 v41; // [rsp+110h] [rbp-C8h]
  __int128 v42; // [rsp+120h] [rbp-B8h]
  __int128 v43; // [rsp+130h] [rbp-A8h]
  __int128 v44; // [rsp+140h] [rbp-98h]
  __int128 v45; // [rsp+150h] [rbp-88h]
  __int64 v46; // [rsp+160h] [rbp-78h]
  int v47; // [rsp+168h] [rbp-70h]
  int v48; // [rsp+16Ch] [rbp-6Ch]
  __int64 v49; // [rsp+1A8h] [rbp-30h]

  v28 = a2;
  v8 = 0LL;
  if ( *a4 )
    v8 = *a4 - 1LL;
  if ( v8 )
  {
    v9 = a4 + 1;
    if ( v8 == 1 )
    {
      grep_printer::summary::Summary<W>::sink_with_path(v37, v9, &v28, a5, a6);
      v10 = grep_searcher::searcher::Searcher::search_reader(a3, &v28, &a7, v37);
      if ( v10 )
      {
        *(_QWORD *)a1 = v10;
        *(_DWORD *)(a1 + 56) = 1000000001;
        return core::ptr::drop_in_place<grep_printer::summary::SummarySink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v37);
      }
      v15 = *(unsigned __int8 *)(v42 + 114);
      if ( v15 == 3 || v15 == 5 )
      {
        v16 = (_QWORD)v45 == 0LL;
        v17 = v41;
        if ( (_DWORD)v41 == 1000000000 )
        {
LABEL_15:
          *(_QWORD *)(a1 + 48) = v36;
          v18 = v33;
          v19 = v34;
          *(_OWORD *)(a1 + 32) = v35;
          *(_OWORD *)(a1 + 16) = v19;
          *(_OWORD *)a1 = v18;
          *(_DWORD *)(a1 + 56) = v17;
          *(_DWORD *)(a1 + 60) = v11;
          *(_BYTE *)(a1 + 64) = v16;
          return core::ptr::drop_in_place<grep_printer::summary::SummarySink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v37);
        }
      }
      else
      {
        v16 = (_QWORD)v45 != 0LL;
        v17 = v41;
        if ( (_DWORD)v41 == 1000000000 )
          goto LABEL_15;
      }
      v36 = *(_QWORD *)&v40[16];
      v35 = *(_OWORD *)v40;
      v34 = v39;
      v33 = v38;
      v11 = DWORD1(v41);
      goto LABEL_15;
    }
    grep_printer::json::JSON<W>::sink_with_path(v37, v9, &v28, a5, a6);
    v14 = grep_searcher::searcher::Searcher::search_reader(a3, &v28, &a7, v37);
    if ( v14 )
    {
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 56) = 1000000001;
    }
    else
    {
      v22 = v46 == 0;
      v25 = *(_OWORD *)&v40[8];
      v26 = v41;
      v27 = v42;
      *(_OWORD *)(a1 + 48) = v43;
      *(_OWORD *)(a1 + 32) = v27;
      *(_OWORD *)(a1 + 16) = v26;
      *(_OWORD *)a1 = v25;
      *(_BYTE *)(a1 + 64) = !v22;
    }
    return core::ptr::drop_in_place<grep_printer::json::JSONSink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v37);
  }
  else
  {
    grep_printer::standard::Standard<W>::sink_with_path(v37, a4, &v28, a5, a6);
    v12 = grep_searcher::searcher::Searcher::search_reader(a3, &v28, &a7, v37);
    if ( v12 )
    {
      *(_QWORD *)a1 = v12;
      *(_DWORD *)(a1 + 56) = 1000000001;
    }
    else
    {
      v21 = v47;
      if ( v47 != 1000000000 )
      {
        v32 = v46;
        v31 = v45;
        v30 = v44;
        v29 = v43;
        v13 = v48;
      }
      v22 = v49 == 0;
      *(_QWORD *)(a1 + 48) = v32;
      v23 = v29;
      v24 = v30;
      *(_OWORD *)(a1 + 32) = v31;
      *(_OWORD *)(a1 + 16) = v24;
      *(_OWORD *)a1 = v23;
      *(_DWORD *)(a1 + 56) = v21;
      *(_DWORD *)(a1 + 60) = v13;
      *(_BYTE *)(a1 + 64) = !v22;
    }
    return core::ptr::drop_in_place<grep_printer::standard::StandardSink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v37);
  }
}