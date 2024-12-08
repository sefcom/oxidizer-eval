__int64 __fastcall uu_wc::word_count_from_reader(__int64 a1, int a2, _BYTE *a3)
{
  char v4; // cl
  char v5; // al
  char v6; // di
  bool v7; // zf
  char v8; // r8
  char v9; // dl
  __int64 v11; // rdx
  int v12[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v12[0] = a2;
  v4 = a3[28];
  v5 = a3[27];
  v6 = v4 | v5;
  v7 = a3[24] == 0;
  v8 = a3[25];
  v9 = a3[26];
  if ( v7 )
  {
    if ( v8 )
    {
      if ( v9 )
      {
        if ( !v6 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
          return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
        }
LABEL_9:
        if ( !v4 )
          return uu_wc::word_count_from_reader_specialized(a1);
        if ( v5 )
          return uu_wc::word_count_from_reader_specialized(a1);
        return uu_wc::word_count_from_reader_specialized(a1);
      }
      if ( !v6 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
        return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
      }
      goto LABEL_24;
    }
    if ( v9 )
    {
      if ( !v6 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
        return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
      }
LABEL_19:
      if ( !v4 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v5 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( !v6 )
      core::panicking::panic(aInternalErrorE_4, 40LL, &off_132118);
  }
  else
  {
    if ( v8 )
    {
      if ( v9 )
      {
        if ( !v6 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
          return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
        }
        goto LABEL_9;
      }
      if ( !v6 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
        return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
      }
LABEL_24:
      if ( !v4 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v5 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( v9 )
    {
      if ( !v6 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, v12);
        return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
      }
      goto LABEL_19;
    }
    if ( !v6 )
    {
      *(_QWORD *)a1 = uu_wc::count_fast::count_bytes_fast(v12);
      *(_OWORD *)(a1 + 8) = 0LL;
      *(_OWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 40) = v11;
      return core::ptr::drop_in_place<std::fs::File>((unsigned int)v12[0]);
    }
  }
  if ( !v4 )
    return uu_wc::word_count_from_reader_specialized(a1);
  if ( v5 )
    return uu_wc::word_count_from_reader_specialized(a1);
  return uu_wc::word_count_from_reader_specialized(a1);
}
