__int64 __fastcall uu_wc::word_count_from_reader(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  char v5; // r10
  char v6; // r9
  char v7; // di
  char v8; // al
  char v9; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-10h]

  v12 = a2;
  LOBYTE(v13) = a3;
  v5 = a4[25];
  v6 = a4[26];
  v7 = a4[28];
  v8 = a4[27];
  v9 = v8 | v7;
  if ( a4[24] )
  {
    if ( v5 )
    {
      if ( v6 )
      {
        if ( !v9 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v12);
          return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
        }
        goto LABEL_9;
      }
      if ( !v9 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v12);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
      }
LABEL_23:
      if ( !v7 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v8 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( v6 )
    {
      if ( !v9 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v12);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
      }
      goto LABEL_17;
    }
    if ( !v9 )
    {
      *(_QWORD *)a1 = uu_wc::count_fast::count_bytes_fast((__int64)&v12);
      *(_OWORD *)(a1 + 8) = 0LL;
      *(_OWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 40) = v11;
      return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
    }
  }
  else
  {
    if ( v5 )
    {
      if ( v6 )
      {
        if ( !v9 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, (__int64)&v12);
          return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
        }
LABEL_9:
        if ( !v7 )
          return uu_wc::word_count_from_reader_specialized(a1);
        if ( v8 )
          return uu_wc::word_count_from_reader_specialized(a1);
        return uu_wc::word_count_from_reader_specialized(a1);
      }
      if ( !v9 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v12);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
      }
      goto LABEL_23;
    }
    if ( v6 )
    {
      if ( !v9 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1, &v12);
        return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v12, v13);
      }
LABEL_17:
      if ( !v7 )
        return uu_wc::word_count_from_reader_specialized(a1);
      if ( v8 )
        return uu_wc::word_count_from_reader_specialized(a1);
      return uu_wc::word_count_from_reader_specialized(a1);
    }
    if ( !v9 )
      core::panicking::panic(aInternalErrorE, 40LL, &off_F9208);
  }
  if ( !v7 )
    return uu_wc::word_count_from_reader_specialized(a1);
  if ( v8 )
    return uu_wc::word_count_from_reader_specialized(a1);
  return uu_wc::word_count_from_reader_specialized(a1);
}