__int64 __fastcall uu_join::State::print_line(__int64 a1, int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  size_t v5; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  size_t v10; // rbp
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  const void *v16; // rax
  size_t v17; // rdx
  size_t v18; // r13
  __int64 v19; // r14
  __int64 result; // rax
  char v21; // al
  __int64 v22; // rcx
  void *field; // rsi
  size_t v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  size_t v31; // rdx
  void *v32; // rsi
  size_t v33; // r13
  __int64 v34; // r15
  char v35; // [rsp+3h] [rbp-55h] BYREF
  int v36; // [rsp+4h] [rbp-54h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  void *src; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]
  __int64 v40; // [rsp+20h] [rbp-38h]

  v36 = a2;
  v8 = *(_QWORD *)(a5 + 16);
  v39 = a5;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a5 + 8);
    src = *(void **)(a5 + 24);
    v10 = *(_QWORD *)(a5 + 32);
    v11 = *(_BYTE *)v9 == 0;
    v37 = a4;
    v40 = a1;
    if ( v11 )
    {
      v13 = a4;
      v12 = a1;
    }
    else
    {
      if ( *(_BYTE *)(v9 + 1) != (_BYTE)v36 )
      {
        field = 0LL;
        goto LABEL_16;
      }
      v12 = *(_QWORD *)(v9 + 8);
      v13 = a4;
    }
    field = (void *)uu_join::Line::get_field(v13, v12);
    v5 = v24;
LABEL_16:
    if ( !field )
    {
      field = src;
      v5 = v10;
    }
    v25 = a3[2];
    if ( *a3 - v25 > v5 )
    {
      memcpy((void *)(v25 + a3[1]), field, v5);
      a3[2] = v5 + v25;
LABEL_20:
      v26 = v9 + 16;
      while ( 1 )
      {
        if ( !--v8 )
          goto LABEL_10;
        v27 = a3[2];
        if ( (unsigned __int64)(*a3 - v27) < 2 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_122CD, 1LL);
          if ( result )
            return result;
        }
        else
        {
          *(_BYTE *)(a3[1] + v27) = 32;
          a3[2] = v27 + 1;
        }
        if ( !*(_BYTE *)v26 )
          break;
        if ( *(_BYTE *)(v26 + 1) == (_BYTE)v36 )
        {
          v28 = *(_QWORD *)(v26 + 8);
          v29 = v37;
          goto LABEL_28;
        }
        v32 = src;
        v33 = v10;
LABEL_30:
        v34 = a3[2];
        if ( *a3 - v34 <= v33 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v32, v33);
          v26 += 16LL;
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v34 + a3[1]), v32, v33);
          a3[2] = v33 + v34;
          v26 += 16LL;
        }
      }
      v29 = v37;
      v28 = v40;
LABEL_28:
      v30 = uu_join::Line::get_field(v29, v28);
      v32 = src;
      v33 = v10;
      if ( v30 )
      {
        v32 = (void *)v30;
        v33 = v31;
      }
      goto LABEL_30;
    }
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, field, v5);
    if ( !result )
      goto LABEL_20;
    return result;
  }
  v16 = (const void *)uu_join::Line::get_field(a4, a1);
  v18 = v17;
  if ( !v16 )
  {
    v16 = *(const void **)(a5 + 24);
    v18 = *(_QWORD *)(a5 + 32);
  }
  v19 = a3[2];
  if ( *a3 - v19 <= v18 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v16, v18);
    if ( result )
      return result;
  }
  else
  {
    memcpy((void *)(v19 + a3[1]), v16, v18);
    a3[2] = v18 + v19;
  }
  result = uu_join::Repr<Sep>::print_fields(a3, a4, a1);
  if ( !result )
  {
LABEL_10:
    v21 = *(_BYTE *)(v39 + 40);
    v35 = v21;
    v22 = a3[2];
    if ( (unsigned __int64)(*a3 - v22) <= 1 )
    {
      return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &v35, 1LL);
    }
    else
    {
      *(_BYTE *)(a3[1] + v22) = v21;
      a3[2] = v22 + 1;
      return 0LL;
    }
  }
  return result;
}
