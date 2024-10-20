__int64 __fastcall uu_join::State::combine(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  size_t v4; // rbp
  __int64 v8; // r12
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  size_t v14; // r15
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rcx
  char v18; // al
  void *field; // rsi
  size_t v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // r13
  char v24; // cl
  __int64 v25; // rax
  void *v26; // rax
  size_t v27; // rdx
  void *v28; // rsi
  __int64 v29; // r14
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rbp
  void *v34; // rsi
  size_t v35; // r13
  __int64 v36; // r14
  __int64 v37; // rax
  char v38; // [rsp+Fh] [rbp-D9h]
  __int64 v39; // [rsp+10h] [rbp-D8h]
  __int64 v40; // [rsp+18h] [rbp-D0h]
  __int64 v41; // [rsp+18h] [rbp-D0h]
  __int64 v42; // [rsp+18h] [rbp-D0h]
  char v43; // [rsp+20h] [rbp-C8h]
  __int64 v44; // [rsp+20h] [rbp-C8h]
  char v45; // [rsp+28h] [rbp-C0h]
  __int64 v46; // [rsp+28h] [rbp-C0h]
  void *current_key; // [rsp+30h] [rbp-B8h] BYREF
  size_t v48; // [rsp+38h] [rbp-B0h]
  __int64 v49; // [rsp+40h] [rbp-A8h]
  void *src; // [rsp+48h] [rbp-A0h]
  __int64 v51; // [rsp+50h] [rbp-98h]
  __int64 v52; // [rsp+58h] [rbp-90h]
  __int64 v53; // [rsp+60h] [rbp-88h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  __int64 v55; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+78h] [rbp-70h]
  __int64 v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  _QWORD v59[11]; // [rsp+90h] [rbp-58h] BYREF

  v8 = a1;
  current_key = (void *)uu_join::State::get_current_key(a1);
  v48 = v9;
  v10 = *(_QWORD *)(a1 + 16);
  if ( !v10 )
    return 0LL;
  v39 = *(_QWORD *)(a1 + 8);
  v51 = v39 + 48 * v10;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a3 + 16);
  v13 = *(_QWORD *)(a4 + 16);
  src = *(void **)(a4 + 24);
  v14 = *(_QWORD *)(a4 + 32);
  v38 = *(_BYTE *)(a4 + 40);
  v49 = v13;
  v55 = v11;
  if ( v13 )
  {
    v58 = v11 + 48 * v12;
    v15 = *(_QWORD *)(a4 + 8);
    v45 = *(_BYTE *)(a1 + 88);
    v43 = *(_BYTE *)(a3 + 88);
    v57 = v15 + 16;
    v54 = a3;
    v53 = a1;
    v52 = v15;
    while ( 1 )
    {
      v16 = v39;
      v39 += 48LL;
      v17 = v55;
      v56 = v16;
      while ( v17 != v58 )
      {
        v59[0] = &current_key;
        v59[1] = v8;
        v59[2] = v16;
        v59[3] = a3;
        v59[4] = v17;
        v40 = v17;
        if ( *(_BYTE *)v15 )
        {
          v18 = *(_BYTE *)(v15 + 1);
          if ( v18 == v45 || (v16 = v17, v18 == v43) )
          {
            field = (void *)uu_join::Line::get_field(v16, *(_QWORD *)(v15 + 8));
            v4 = v20;
          }
          else
          {
            field = 0LL;
          }
        }
        else
        {
          field = current_key;
          v4 = v48;
        }
        if ( !field )
        {
          field = src;
          v4 = v14;
        }
        v21 = a2[2];
        if ( *a2 - v21 <= v4 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, field, v4);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v21 + a2[1]), field, v4);
          a2[2] = v4 + v21;
        }
        v41 = v40 + 48;
        v22 = v49;
        v23 = v57;
        while ( --v22 )
        {
          if ( *a2 == a2[2] )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, 1LL, 0LL);
            if ( result )
              return result;
          }
          if ( *(_BYTE *)v23 )
          {
            v24 = *(_BYTE *)(v23 + 1);
            v25 = 2LL;
            if ( v24 != v45 )
            {
              v25 = 4LL;
              if ( v24 != v43 )
              {
                v28 = src;
                v4 = v14;
                goto LABEL_26;
              }
            }
            v26 = (void *)uu_join::Line::get_field(v59[v25], *(_QWORD *)(v23 + 8));
            v28 = src;
            v4 = v14;
            if ( !v26 )
              goto LABEL_26;
LABEL_25:
            v28 = v26;
            v4 = v27;
            goto LABEL_26;
          }
          v26 = current_key;
          v27 = v48;
          v28 = src;
          v4 = v14;
          if ( current_key )
            goto LABEL_25;
LABEL_26:
          v29 = a2[2];
          if ( *a2 - v29 <= v4 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v28, v4);
            v23 += 16LL;
            if ( result )
              return result;
          }
          else
          {
            memcpy((void *)(v29 + a2[1]), v28, v4);
            a2[2] = v4 + v29;
            v23 += 16LL;
          }
        }
        LOBYTE(v59[0]) = v38;
        v31 = a2[2];
        if ( (unsigned __int64)(*a2 - v31) <= 1 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v59, 1LL);
        }
        else
        {
          *(_BYTE *)(a2[1] + v31) = v38;
          a2[2] = v31 + 1;
          result = 0LL;
        }
        a3 = v54;
        v8 = v53;
        v15 = v52;
        v16 = v56;
        v17 = v41;
        if ( result )
          return result;
      }
      result = 0LL;
      if ( v39 == v51 )
        return result;
    }
  }
  v46 = *(_QWORD *)(a1 + 64);
  v44 = *(_QWORD *)(a3 + 64);
  v42 = 48 * v12;
LABEL_45:
  v49 = v39 + 48;
  v32 = v42;
  v33 = v55;
  do
  {
    if ( !v32 )
    {
      v39 = v49;
      result = 0LL;
      if ( v49 == v51 )
        return result;
      goto LABEL_45;
    }
    v34 = src;
    v35 = v14;
    if ( current_key )
    {
      v35 = v48;
      v34 = current_key;
    }
    v36 = a2[2];
    if ( *a2 - v36 <= v35 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v34, v35);
      if ( result )
        return result;
    }
    else
    {
      memcpy((void *)(v36 + a2[1]), v34, v35);
      a2[2] = v35 + v36;
    }
    result = uu_join::Repr<Sep>::print_fields(a2, v39, v46);
    if ( result )
      break;
    result = uu_join::Repr<Sep>::print_fields(a2, v33, v44);
    if ( result )
      break;
    LOBYTE(v59[0]) = v38;
    v37 = a2[2];
    if ( (unsigned __int64)(*a2 - v37) <= 1 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v59, 1LL);
    }
    else
    {
      *(_BYTE *)(a2[1] + v37) = v38;
      a2[2] = v37 + 1;
      result = 0LL;
    }
    v33 += 48LL;
    v32 -= 48LL;
  }
  while ( !result );
  return result;
}
