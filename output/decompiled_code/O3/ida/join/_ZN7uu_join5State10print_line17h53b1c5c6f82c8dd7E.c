__int64 __fastcall uu_join::State::print_line(__int64 a1, int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  size_t v5; // r14
  __int64 v8; // r15
  size_t v9; // r12
  __int64 v10; // rbp
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  const void *v15; // rax
  size_t v16; // rdx
  size_t v17; // r14
  __int64 v18; // r15
  __int64 result; // rax
  char v20; // al
  __int64 v21; // rcx
  void *field; // rsi
  size_t v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  size_t v30; // rdx
  void *v31; // rsi
  size_t v32; // r14
  __int64 v33; // r13
  char v34; // [rsp+3h] [rbp-65h] BYREF
  int v35; // [rsp+4h] [rbp-64h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  void *v38; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-48h]
  void *src; // [rsp+28h] [rbp-40h]
  __int64 v41; // [rsp+30h] [rbp-38h]

  v35 = a2;
  v8 = *(_QWORD *)(a5 + 320);
  v36 = a5;
  if ( v8 )
  {
    v38 = *(void **)(a5 + 264);
    v9 = *(_QWORD *)(a5 + 272);
    v10 = *(_QWORD *)(a5 + 312);
    src = *(void **)(a5 + 288);
    n = *(_QWORD *)(a5 + 296);
    v11 = *(_BYTE *)v10 == 0;
    v37 = a4;
    v41 = a1;
    if ( v11 )
    {
      v13 = a4;
      v12 = a1;
    }
    else
    {
      if ( *(_BYTE *)(v10 + 1) != (_BYTE)v35 )
      {
        field = 0LL;
        goto LABEL_16;
      }
      v12 = *(_QWORD *)(v10 + 8);
      v13 = a4;
    }
    field = (void *)uu_join::Line::get_field(v13, v12);
    v5 = v23;
LABEL_16:
    if ( !field )
    {
      field = src;
      v5 = n;
    }
    v24 = a3[2];
    if ( *a3 - v24 > v5 )
    {
      memcpy((void *)(v24 + a3[1]), field, v5);
      a3[2] = v5 + v24;
LABEL_20:
      v25 = v10 + 16;
      while ( 1 )
      {
        if ( !--v8 )
          goto LABEL_10;
        v26 = a3[2];
        if ( *a3 - v26 <= v9 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v38, v9);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v26 + a3[1]), v38, v9);
          a3[2] = v9 + v26;
        }
        if ( !*(_BYTE *)v25 )
          break;
        if ( *(_BYTE *)(v25 + 1) == (_BYTE)v35 )
        {
          v27 = *(_QWORD *)(v25 + 8);
          v28 = v37;
          goto LABEL_28;
        }
        v31 = src;
        v32 = n;
LABEL_30:
        v33 = a3[2];
        if ( *a3 - v33 <= v32 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v31, v32);
          v25 += 16LL;
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v33 + a3[1]), v31, v32);
          a3[2] = v32 + v33;
          v25 += 16LL;
        }
      }
      v28 = v37;
      v27 = v41;
LABEL_28:
      v29 = uu_join::Line::get_field(v28, v27);
      v31 = src;
      v32 = n;
      if ( v29 )
      {
        v31 = (void *)v29;
        v32 = v30;
      }
      goto LABEL_30;
    }
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, field, v5);
    if ( !result )
      goto LABEL_20;
    return result;
  }
  v15 = (const void *)uu_join::Line::get_field(a4, a1);
  v17 = v16;
  if ( !v15 )
  {
    v15 = *(const void **)(v36 + 288);
    v17 = *(_QWORD *)(v36 + 296);
  }
  v18 = a3[2];
  if ( *a3 - v18 <= v17 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v15, v17);
    if ( result )
      return result;
  }
  else
  {
    memcpy((void *)(v18 + a3[1]), v15, v17);
    a3[2] = v17 + v18;
  }
  result = uu_join::Repr<Sep>::print_fields(*(const void **)(v36 + 264), *(_QWORD *)(v36 + 272), a3, a4, a1);
  if ( !result )
  {
LABEL_10:
    v20 = *(_BYTE *)(v36 + 328);
    v34 = v20;
    v21 = a3[2];
    if ( (unsigned __int64)(*a3 - v21) <= 1 )
    {
      return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &v34, 1LL);
    }
    else
    {
      *(_BYTE *)(a3[1] + v21) = v20;
      a3[2] = v21 + 1;
      return 0LL;
    }
  }
  return result;
}
