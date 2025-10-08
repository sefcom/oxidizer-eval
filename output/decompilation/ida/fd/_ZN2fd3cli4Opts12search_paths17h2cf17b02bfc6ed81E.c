__int64 __fastcall fd::cli::Opts::search_paths(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = 160LL;
  if ( *(_QWORD *)(a2 + 176) || (v2 = 184LL, *(_QWORD *)(a2 + 200)) )
  {
    v3 = *(_QWORD *)(a2 + v2 + 8);
    v4 = v3 + 24LL * *(_QWORD *)(a2 + v2 + 16);
    *(_QWORD *)&v9 = v3;
    *((_QWORD *)&v9 + 1) = v4;
    v10 = a2;
    return core::iter::traits::iterator::Iterator::collect(a1, &v9);
  }
  else
  {
    v6 = fd::cli::ensure_current_directory_exists();
    if ( v6 )
    {
      a1[1] = v6;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v7 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v7 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v7;
      fd::cli::Opts::normalize_path(&v9, *(unsigned __int8 *)(a2 + 491), asc_7A585, 2LL);
      result = v10;
      *(_QWORD *)(v8 + 16) = v10;
      *(_OWORD *)v8 = v9;
      *a1 = 1LL;
      a1[1] = v8;
      a1[2] = 1LL;
    }
  }
  return result;
}