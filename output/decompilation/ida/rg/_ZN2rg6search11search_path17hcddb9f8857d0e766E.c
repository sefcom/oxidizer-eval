__int64 __fastcall rg::search::search_path(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  int v16; // eax
  bool v17; // al
  int v18; // ecx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v22; // eax
  bool v23; // zf
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // [rsp+8h] [rbp-1E0h] BYREF
  __int128 v30; // [rsp+10h] [rbp-1D8h]
  __int128 v31; // [rsp+20h] [rbp-1C8h]
  __int128 v32; // [rsp+30h] [rbp-1B8h]
  __int64 v33; // [rsp+40h] [rbp-1A8h]
  __int128 v34; // [rsp+50h] [rbp-198h]
  __int128 v35; // [rsp+60h] [rbp-188h]
  __int128 v36; // [rsp+70h] [rbp-178h]
  __int64 v37; // [rsp+80h] [rbp-168h]
  _BYTE v38[80]; // [rsp+88h] [rbp-160h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-110h]
  __int128 v40; // [rsp+E8h] [rbp-100h]
  _BYTE v41[24]; // [rsp+F8h] [rbp-F0h]
  __int128 v42; // [rsp+110h] [rbp-D8h]
  __int128 v43; // [rsp+120h] [rbp-C8h]
  __int128 v44; // [rsp+130h] [rbp-B8h]
  __int128 v45; // [rsp+140h] [rbp-A8h]
  __int128 v46; // [rsp+150h] [rbp-98h]
  __int64 v47; // [rsp+160h] [rbp-88h]
  int v48; // [rsp+168h] [rbp-80h]
  int v49; // [rsp+16Ch] [rbp-7Ch]
  __int64 v50; // [rsp+1A8h] [rbp-40h]

  v29 = a2;
  v9 = 0LL;
  if ( *a4 )
    v9 = *a4 - 1LL;
  if ( v9 )
  {
    v10 = a4 + 1;
    if ( v9 == 1 )
    {
      grep_printer::summary::Summary<W>::sink_with_path(v38, v10, &v29, a5, a6);
      v11 = grep_searcher::searcher::Searcher::search_path(a3, &v29, a5, a6, v38);
      if ( v11 )
      {
        *(_QWORD *)a1 = v11;
        *(_DWORD *)(a1 + 56) = 1000000001;
        return core::ptr::drop_in_place<grep_printer::summary::SummarySink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v38);
      }
      v16 = *(unsigned __int8 *)(v43 + 114);
      if ( v16 == 3 || v16 == 5 )
      {
        v17 = (_QWORD)v46 == 0LL;
        v18 = v42;
        if ( (_DWORD)v42 == 1000000000 )
        {
LABEL_15:
          *(_QWORD *)(a1 + 48) = v37;
          v19 = v34;
          v20 = v35;
          *(_OWORD *)(a1 + 32) = v36;
          *(_OWORD *)(a1 + 16) = v20;
          *(_OWORD *)a1 = v19;
          *(_DWORD *)(a1 + 56) = v18;
          *(_DWORD *)(a1 + 60) = v12;
          *(_BYTE *)(a1 + 64) = v17;
          return core::ptr::drop_in_place<grep_printer::summary::SummarySink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v38);
        }
      }
      else
      {
        v17 = (_QWORD)v46 != 0LL;
        v18 = v42;
        if ( (_DWORD)v42 == 1000000000 )
          goto LABEL_15;
      }
      v37 = *(_QWORD *)&v41[16];
      v36 = *(_OWORD *)v41;
      v35 = v40;
      v34 = v39;
      v12 = DWORD1(v42);
      goto LABEL_15;
    }
    grep_printer::json::JSON<W>::sink_with_path(v38, v10, &v29, a5, a6);
    v15 = grep_searcher::searcher::Searcher::search_path(a3, &v29, a5, a6, v38);
    if ( v15 )
    {
      *(_QWORD *)a1 = v15;
      *(_DWORD *)(a1 + 56) = 1000000001;
    }
    else
    {
      v23 = v47 == 0;
      v26 = *(_OWORD *)&v41[8];
      v27 = v42;
      v28 = v43;
      *(_OWORD *)(a1 + 48) = v44;
      *(_OWORD *)(a1 + 32) = v28;
      *(_OWORD *)(a1 + 16) = v27;
      *(_OWORD *)a1 = v26;
      *(_BYTE *)(a1 + 64) = !v23;
    }
    return core::ptr::drop_in_place<grep_printer::json::JSONSink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v38);
  }
  else
  {
    grep_printer::standard::Standard<W>::sink_with_path(v38, a4, &v29, a5, a6);
    v13 = grep_searcher::searcher::Searcher::search_path(a3, &v29, a5, a6, v38);
    if ( v13 )
    {
      *(_QWORD *)a1 = v13;
      *(_DWORD *)(a1 + 56) = 1000000001;
    }
    else
    {
      v22 = v48;
      if ( v48 != 1000000000 )
      {
        v33 = v47;
        v32 = v46;
        v31 = v45;
        v30 = v44;
        v14 = v49;
      }
      v23 = v50 == 0;
      *(_QWORD *)(a1 + 48) = v33;
      v24 = v30;
      v25 = v31;
      *(_OWORD *)(a1 + 32) = v32;
      *(_OWORD *)(a1 + 16) = v25;
      *(_OWORD *)a1 = v24;
      *(_DWORD *)(a1 + 56) = v22;
      *(_DWORD *)(a1 + 60) = v14;
      *(_BYTE *)(a1 + 64) = !v23;
    }
    return core::ptr::drop_in_place<grep_printer::standard::StandardSink<&&grep_regex::matcher::RegexMatcher,termcolor::Buffer>>(v38);
  }
}