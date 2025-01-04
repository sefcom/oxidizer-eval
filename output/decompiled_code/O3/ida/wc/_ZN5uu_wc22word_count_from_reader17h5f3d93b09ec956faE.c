__int64 __fastcall uu_wc::word_count_from_reader(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  char v5; // di
  char v6; // al
  char v7; // r8
  bool v8; // zf
  char v9; // r9
  char v10; // cl
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-10h]

  v13 = a2;
  LOBYTE(v14) = a3;
  v5 = a4[28];
  v6 = a4[27];
  v7 = v5 | v6;
  v8 = a4[24] == 0;
  v9 = a4[25];
  v10 = a4[26];
  if ( v8 )
  {
    if ( v9 )
    {
      if ( v10 )
      {
        if ( !v7 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
          return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
        }
LABEL_9:
        if ( !v5 )
          return uu_wc::word_count_from_reader_specialized(a1);
        if ( v6 )
          return uu_wc::word_count_from_reader_specialized(a1);
        return uu_wc::word_count_from_reader_specialized(a1);
      }
      if ( !v7 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
      }
      goto LABEL_24;
    }
    if ( v10 )
    {
      if ( !v7 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
      }
LABEL_19:
      if ( !v5 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v6 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( !v7 )
      core::panicking::panic(aInternalErrorE_4, 40LL, &off_131108);
  }
  else
  {
    if ( v9 )
    {
      if ( v10 )
      {
        if ( !v7 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
          return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
        }
        goto LABEL_9;
      }
      if ( !v7 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
      }
LABEL_24:
      if ( !v5 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v6 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( v10 )
    {
      if ( !v7 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v13);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
      }
      goto LABEL_19;
    }
    if ( !v7 )
    {
      *(_QWORD *)a1 = uu_wc::count_fast::count_bytes_fast((__int64)&v13);
      *(_OWORD *)(a1 + 8) = 0LL;
      *(_OWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 40) = v12;
      return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v13, v14);
    }
  }
  if ( !v5 )
    return uu_wc::word_count_from_reader_specialized(a1);
  if ( v6 )
    return uu_wc::word_count_from_reader_specialized(a1);
  return uu_wc::word_count_from_reader_specialized(a1);
}
