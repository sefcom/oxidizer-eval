_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  _BYTE *v3; // r15
  unsigned __int64 v4; // r14
  void *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // dl
  int v8; // eax
  _QWORD *result; // rax
  bool v10; // bp
  size_t v11; // rcx
  char **v12; // rdx
  int dest; // [rsp+Ch] [rbp-4Ch] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  char v17; // [rsp+20h] [rbp-38h]
  unsigned __int8 v18; // [rsp+21h] [rbp-37h]

  v3 = (_BYTE *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v4 )
      {
        <std::io::stdio::StdinLock as std::io::BufRead>::consume(a2, v4);
        *(_QWORD *)(a2 + 16) = 0LL;
      }
      <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&src, a2);
      v5 = src;
      if ( !src )
        goto LABEL_28;
      v4 = n;
      v6 = *(unsigned __int8 *)(a2 + 28);
      if ( !*(_BYTE *)(a2 + 28) )
        break;
      if ( !n )
      {
        *(_BYTE *)(a2 + 28) = 0;
        if ( (unsigned __int8)v6 >= 5u )
          core::slice::index::slice_end_index_len_fail(v6, 4LL, &off_F36E8);
        v4 = v6;
        result = a1;
        goto LABEL_29;
      }
      v4 = uu_wc::utf8::Incomplete::try_complete_offsets(v3, src, n);
      *(_QWORD *)(a2 + 16) = v4;
      if ( v7 != 2 )
      {
        v4 = *(unsigned __int8 *)(a2 + 28);
        *(_BYTE *)(a2 + 28) = 0;
        if ( v4 >= 5 )
        {
          v12 = &off_F36E8;
LABEL_32:
          core::slice::index::slice_end_index_len_fail(v4, 4LL, v12);
        }
        v10 = v7;
        goto LABEL_26;
      }
    }
    if ( !n )
    {
      result = a1;
      *a1 = 2LL;
      return result;
    }
    core::str::converts::from_utf8(&src, src, n);
    if ( !src )
    {
      v10 = 0;
      goto LABEL_24;
    }
    if ( n )
    {
      v4 = n;
      goto LABEL_23;
    }
    if ( v17 )
      break;
    *(_QWORD *)(a2 + 16) = v4;
    dest = 0;
    if ( v4 >= 5 )
    {
      v12 = &off_F36D0;
      goto LABEL_32;
    }
    memcpy(&dest, v5, v4);
    v8 = dest;
    v3[4] = v4;
    *(_DWORD *)v3 = v8;
  }
  v4 = v18;
LABEL_23:
  v10 = n == 0;
LABEL_24:
  *(_QWORD *)(a2 + 16) = v4;
  <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&src, a2);
  v3 = src;
  if ( !src )
  {
LABEL_28:
    v11 = n;
    result = a1;
    *a1 = 1LL;
    a1[1] = 0LL;
    a1[2] = v11;
    return result;
  }
  if ( v4 > n )
    core::slice::index::slice_end_index_len_fail(v4, n, &off_F36B8);
LABEL_26:
  result = a1;
  if ( !v10 )
  {
    *a1 = 0LL;
    goto LABEL_30;
  }
LABEL_29:
  *result = 1LL;
LABEL_30:
  result[1] = v3;
  result[2] = v4;
  return result;
}
