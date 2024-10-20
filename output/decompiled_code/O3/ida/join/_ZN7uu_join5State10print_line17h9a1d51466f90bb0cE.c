__int64 __fastcall uu_join::State::print_line(__int64 a1, int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  size_t v5; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  size_t v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  const void *v14; // rax
  size_t v15; // rdx
  size_t v16; // r13
  __int64 v17; // r14
  __int64 result; // rax
  char v19; // al
  __int64 v20; // rcx
  void *field; // rsi
  size_t v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  size_t v28; // rdx
  void *v29; // rsi
  size_t v30; // r13
  __int64 v31; // r15
  char v32; // [rsp+3h] [rbp-55h] BYREF
  int v33; // [rsp+4h] [rbp-54h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  void *src; // [rsp+18h] [rbp-40h]
  __int64 v37; // [rsp+20h] [rbp-38h]

  v33 = a2;
  v7 = *(_QWORD *)(a5 + 16);
  v37 = a5;
  if ( v7 )
  {
    v35 = a1;
    v34 = a4;
    v8 = *(_QWORD *)(a5 + 8);
    src = *(void **)(a5 + 24);
    v9 = *(_QWORD *)(a5 + 32);
    if ( *(_BYTE *)v8 )
    {
      if ( *(_BYTE *)(v8 + 1) != (_BYTE)v33 )
      {
        field = 0LL;
        goto LABEL_16;
      }
      v10 = *(_QWORD *)(v8 + 8);
      v11 = v34;
    }
    else
    {
      v11 = v34;
      v10 = v35;
    }
    field = (void *)uu_join::Line::get_field(v11, v10);
    v5 = v22;
LABEL_16:
    if ( !field )
    {
      field = src;
      v5 = v9;
    }
    v23 = a3[2];
    if ( *a3 - v23 > v5 )
    {
      memcpy((void *)(v23 + a3[1]), field, v5);
      a3[2] = v5 + v23;
LABEL_20:
      v24 = v8 + 16;
      while ( 1 )
      {
        if ( !--v7 )
          goto LABEL_10;
        if ( *a3 == a3[2] )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, 1LL, 0LL);
          if ( result )
            return result;
        }
        if ( !*(_BYTE *)v24 )
          break;
        if ( *(_BYTE *)(v24 + 1) == (_BYTE)v33 )
        {
          v25 = *(_QWORD *)(v24 + 8);
          v26 = v34;
          goto LABEL_27;
        }
        v29 = src;
        v30 = v9;
LABEL_29:
        v31 = a3[2];
        if ( *a3 - v31 <= v30 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v29, v30);
          v24 += 16LL;
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v31 + a3[1]), v29, v30);
          a3[2] = v30 + v31;
          v24 += 16LL;
        }
      }
      v26 = v34;
      v25 = v35;
LABEL_27:
      v27 = uu_join::Line::get_field(v26, v25);
      v29 = src;
      v30 = v9;
      if ( v27 )
      {
        v29 = (void *)v27;
        v30 = v28;
      }
      goto LABEL_29;
    }
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, field, v5);
    if ( !result )
      goto LABEL_20;
    return result;
  }
  v14 = (const void *)uu_join::Line::get_field(a4, a1);
  v16 = v15;
  if ( !v14 )
  {
    v14 = *(const void **)(a5 + 24);
    v16 = *(_QWORD *)(a5 + 32);
  }
  v17 = a3[2];
  if ( *a3 - v17 <= v16 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v14, v16);
    if ( result )
      return result;
  }
  else
  {
    memcpy((void *)(v17 + a3[1]), v14, v16);
    a3[2] = v16 + v17;
  }
  result = uu_join::Repr<Sep>::print_fields(a3, a4, a1);
  if ( !result )
  {
LABEL_10:
    v19 = *(_BYTE *)(v37 + 40);
    v32 = v19;
    v20 = a3[2];
    if ( (unsigned __int64)(*a3 - v20) <= 1 )
    {
      return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &v32, 1LL);
    }
    else
    {
      *(_BYTE *)(a3[1] + v20) = v19;
      a3[2] = v20 + 1;
      return 0LL;
    }
  }
  return result;
}
