__int64 __fastcall rg::search::SearchWorker<W>::search(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 is_explicit; // al
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  char v16; // dl
  unsigned __int8 v17; // [rsp+16h] [rbp-C2h] BYREF
  unsigned __int8 v18; // [rsp+17h] [rbp-C1h]
  __int64 v19; // [rsp+18h] [rbp-C0h]
  void *v20; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-B0h]
  _QWORD *v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  _QWORD v25[5]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v27[10]; // [rsp+88h] [rbp-50h] BYREF

  v19 = a1;
  is_explicit = rg::haystack::Haystack::is_explicit(a3);
  v5 = *(_BYTE *)(a2 + 2LL * is_explicit + 632);
  v6 = *(_BYTE *)(a2 + 2LL * is_explicit + 633);
  v17 = v5;
  v18 = v6;
  v7 = rg::haystack::Haystack::path((__int64)a3);
  v9 = v8;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
  {
    v26[0] = v7;
    v26[1] = v9;
    v27[0] = v26;
    v27[1] = <std::path::Display as core::fmt::Display>::fmt;
    v27[2] = &v17;
    v27[3] = <grep_searcher::searcher::BinaryDetection as core::fmt::Debug>::fmt;
    v20 = &unk_3EB898;
    v21 = 2LL;
    v24 = 0LL;
    v22 = v27;
    v23 = 2LL;
    v14 = log::__private_api::loc(&off_3EB8B8, 0LL, v10, v11, v12, v13);
    v25[0] = aRgSearch;
    v25[1] = 10LL;
    v25[2] = aRgSearch;
    v25[3] = 10LL;
    v25[4] = v14;
    log::__private_api::log(&v20, 5LL, v25);
    v5 = v17;
    v6 = v18;
  }
  grep_searcher::searcher::Searcher::set_binary_detection(a2, v5, v6);
  if ( *a3 )
  {
    if ( (unsigned __int8)rg::search::SearchWorker<W>::should_preprocess(a2, v7, v9) )
    {
      return rg::search::SearchWorker<W>::search_preprocessor(v19, a2, v7, v9);
    }
    else if ( *(_BYTE *)(a2 + 636) && (unsigned __int8)globset::GlobSet::is_match(a2 + 640, v7, v9) )
    {
      return rg::search::SearchWorker<W>::search_decompress(v19, a2, v7, v9);
    }
    else
    {
      return rg::search::search_path(v19, a2 + 704, a2, a2 + 264, v7, v9);
    }
  }
  else
  {
    v25[0] = std::io::stdio::stdin();
    v20 = (void *)std::io::stdio::Stdin::lock(v25);
    LOBYTE(v21) = v16 & 1;
    rg::search::search_reader(v19, a2 + 704, a2, a2 + 264, v7, v9, (char)&v20);
    return core::ptr::drop_in_place<std::sync::mpmc::zero::Channel<rg::haystack::Haystack>::recv::{{closure}}>(
             v20,
             (unsigned int)v21);
  }
}