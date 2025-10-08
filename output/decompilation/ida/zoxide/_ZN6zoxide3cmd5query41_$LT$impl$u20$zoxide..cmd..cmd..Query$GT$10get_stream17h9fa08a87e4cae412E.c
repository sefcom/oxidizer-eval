__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_stream(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  char v7; // al
  __int128 v8; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v9; // [rsp+18h] [rbp-1B0h]
  __int128 v10; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+30h] [rbp-198h]
  __int128 v12; // [rsp+80h] [rbp-148h] BYREF
  __int64 v13; // [rsp+90h] [rbp-138h]
  _BYTE v14[96]; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v15[136]; // [rsp+140h] [rbp-88h] BYREF

  zoxide::db::stream::StreamOptions::new(&v10, a4);
  zoxide::db::stream::StreamOptions::with_keywords(
    &v12,
    &v10,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)(a2 + 16));
  zoxide::config::exclude_dirs(&v10);
  if ( __OFSUB__(-(__int64)v10, 1LL) )
  {
    v5 = -(__int64)v10;
    a1[1] = *((_QWORD *)&v10 + 1);
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<zoxide::db::stream::StreamOptions>(&v12, &v10, v5);
  }
  else
  {
    v8 = v10;
    v9 = v11;
    zoxide::db::stream::StreamOptions::with_exclude(v15, &v12, &v8);
    if ( *(_QWORD *)(a2 + 48) == 0x8000000000000000LL )
    {
      *(_QWORD *)&v12 = 0x8000000000000000LL;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v10, a2 + 48);
      v13 = v11;
      v12 = v10;
    }
    zoxide::db::stream::StreamOptions::with_base_dir(v14, v15, &v12);
    if ( !*(_BYTE *)(a2 + 72) )
    {
      v7 = zoxide::config::resolve_symlinks();
      v14[88] = 1;
      v14[89] = v7;
    }
    return zoxide::db::stream::Stream::new(a1, a3, v14);
  }
}