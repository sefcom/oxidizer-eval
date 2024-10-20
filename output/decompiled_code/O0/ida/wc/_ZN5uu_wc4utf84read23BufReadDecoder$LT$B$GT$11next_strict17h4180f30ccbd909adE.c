_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  void *v2; // rbx
  size_t v3; // r12
  unsigned __int8 v4; // al
  char v5; // dl
  int v6; // eax
  size_t v7; // rcx
  char v8; // bl
  char **v9; // rdx
  _QWORD *result; // rax
  _DWORD *i; // [rsp+10h] [rbp-78h]
  int dest; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *src; // [rsp+20h] [rbp-68h] BYREF
  size_t n; // [rsp+28h] [rbp-60h]
  _DWORD *v15; // [rsp+30h] [rbp-58h] BYREF
  size_t v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  size_t v18; // [rsp+48h] [rbp-40h]
  char v19; // [rsp+50h] [rbp-38h]
  unsigned __int8 v20; // [rsp+51h] [rbp-37h]

  for ( i = (_DWORD *)(a2 + 24); ; *i = v6 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 16) )
      {
        <std::io::stdio::StdinLock as std::io::BufRead>::consume(a2);
        *(_QWORD *)(a2 + 16) = 0LL;
      }
      <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&src, a2);
      v2 = src;
      if ( !src )
      {
        v7 = n;
LABEL_30:
        result = a1;
        *a1 = 1LL;
        a1[1] = 0LL;
        a1[2] = v7;
        return result;
      }
      v3 = n;
      v4 = *(_BYTE *)(a2 + 28);
      if ( !v4 )
        break;
      if ( !n )
      {
        v8 = 1;
LABEL_17:
        v3 = v4;
        *(_BYTE *)(a2 + 28) = 0;
        if ( v4 >= 5u )
        {
          v9 = &off_118F28;
          goto LABEL_32;
        }
        goto LABEL_25;
      }
      *(_QWORD *)(a2 + 16) = uu_wc::utf8::Incomplete::try_complete_offsets(i, src, n);
      if ( v5 != 2 )
      {
        v8 = v5 & 1;
        v4 = *(_BYTE *)(a2 + 28);
        goto LABEL_17;
      }
    }
    if ( !n )
    {
      result = a1;
      *a1 = 2LL;
      return result;
    }
    core::str::converts::from_utf8(&v17, src, n);
    if ( !v17 )
    {
      v8 = 0;
      goto LABEL_23;
    }
    if ( v18 )
    {
      v8 = 0;
      v3 = v18;
      goto LABEL_23;
    }
    if ( (v19 & 1) != 0 )
      break;
    *(_QWORD *)(a2 + 16) = v3;
    dest = 0;
    if ( v3 >= 5 )
    {
      v9 = &off_118F10;
LABEL_32:
      core::slice::index::slice_end_index_len_fail(v3, 4LL, v9);
    }
    core::intrinsics::copy_nonoverlapping::precondition_check(v2, &dest, 1LL, 1LL, v3);
    memcpy(&dest, v2, v3);
    v6 = dest;
    *(_BYTE *)(a2 + 28) = v3;
  }
  v3 = v20;
  v8 = 1;
LABEL_23:
  *(_QWORD *)(a2 + 16) = v3;
  <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&v15, a2);
  i = v15;
  if ( !v15 )
  {
    v7 = v16;
    goto LABEL_30;
  }
  if ( v3 > v16 )
    core::slice::index::slice_end_index_len_fail(v3, v16, &off_118EF8);
LABEL_25:
  result = a1;
  if ( v8 )
    *a1 = 1LL;
  else
    *a1 = 0LL;
  a1[1] = i;
  a1[2] = v3;
  return result;
}
