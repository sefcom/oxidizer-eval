__int64 __fastcall uu_join::State::combine(__int64 a1, _QWORD *a2, __int64 a3, size_t a4)
{
  __int64 v7; // rbp
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  size_t v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdi
  void *field; // rsi
  size_t v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  void *v29; // rax
  size_t v30; // rdx
  void *v31; // rsi
  __int64 v32; // r14
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rbp
  void *v37; // rsi
  size_t v38; // r13
  __int64 v39; // r14
  __int64 v40; // rax
  char v41; // [rsp+Fh] [rbp-D9h]
  __int64 v42; // [rsp+10h] [rbp-D8h]
  __int64 v43; // [rsp+18h] [rbp-D0h]
  __int64 v44; // [rsp+18h] [rbp-D0h]
  __int64 v45; // [rsp+18h] [rbp-D0h]
  void *current_key; // [rsp+20h] [rbp-C8h] BYREF
  size_t v47; // [rsp+28h] [rbp-C0h]
  __int64 v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  void *src; // [rsp+48h] [rbp-A0h]
  __int64 v52; // [rsp+50h] [rbp-98h]
  __int64 v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+60h] [rbp-88h]
  __int64 v55; // [rsp+68h] [rbp-80h]
  __int64 v56; // [rsp+70h] [rbp-78h]
  __int64 v57; // [rsp+78h] [rbp-70h]
  __int64 v58; // [rsp+80h] [rbp-68h]
  __int64 v59; // [rsp+88h] [rbp-60h]
  _QWORD v60[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = a1;
  current_key = (void *)uu_join::State::get_current_key(a1);
  v47 = v8;
  v9 = *(_QWORD *)(a1 + 16);
  if ( !v9 )
    return 0LL;
  v42 = *(_QWORD *)(a1 + 8);
  v52 = v42 + 48 * v9;
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(_QWORD *)(a4 + 16);
  src = *(void **)(a4 + 24);
  v13 = *(_QWORD *)(a4 + 32);
  v41 = *(_BYTE *)(a4 + 40);
  v50 = v12;
  v58 = v10;
  if ( v12 )
  {
    v14 = v10 + 48 * v11;
    v15 = *(_QWORD *)(a4 + 8);
    LOBYTE(v49) = *(_BYTE *)(a1 + 88);
    LOBYTE(v48) = *(_BYTE *)(a3 + 88);
    v59 = v15 + 16;
    v54 = v14;
    v53 = v15;
    v56 = a3;
    v55 = a1;
    while ( 1 )
    {
      v16 = v42;
      v42 += 48LL;
      v17 = v58;
      v57 = v16;
      while ( v17 != v14 )
      {
        v60[0] = &current_key;
        v60[1] = v7;
        v60[2] = v16;
        v60[3] = a3;
        v60[4] = v17;
        v43 = v17;
        if ( *(_BYTE *)v15 )
        {
          v18 = *(_BYTE *)(v15 + 1);
          v19 = *(_QWORD *)(v15 + 8);
          v20 = v16;
          if ( v18 == (_BYTE)v49 || (v20 = v17, v18 == (_BYTE)v48) )
          {
            field = (void *)uu_join::Line::get_field(v20, v19);
            a4 = v22;
          }
          else
          {
            field = 0LL;
          }
        }
        else
        {
          field = current_key;
          a4 = v47;
        }
        if ( !field )
        {
          field = src;
          a4 = v13;
        }
        v23 = a2[2];
        if ( *a2 - v23 <= a4 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, field, a4);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v23 + a2[1]), field, a4);
          a2[2] = a4 + v23;
        }
        v44 = v43 + 48;
        v24 = v50;
        v25 = v59;
        while ( --v24 )
        {
          v26 = a2[2];
          if ( (unsigned __int64)(*a2 - v26) < 2 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, asc_122CD, 1LL);
            if ( result )
              return result;
          }
          else
          {
            *(_BYTE *)(a2[1] + v26) = 32;
            a2[2] = v26 + 1;
          }
          if ( *(_BYTE *)v25 )
          {
            v27 = *(_BYTE *)(v25 + 1);
            v28 = 2LL;
            if ( v27 != (_BYTE)v49 )
            {
              v28 = 4LL;
              if ( v27 != (_BYTE)v48 )
              {
                v31 = src;
                a4 = v13;
                goto LABEL_27;
              }
            }
            v29 = (void *)uu_join::Line::get_field(v60[v28], *(_QWORD *)(v25 + 8));
            v31 = src;
            a4 = v13;
            if ( !v29 )
              goto LABEL_27;
LABEL_26:
            v31 = v29;
            a4 = v30;
            goto LABEL_27;
          }
          v29 = current_key;
          v30 = v47;
          v31 = src;
          a4 = v13;
          if ( current_key )
            goto LABEL_26;
LABEL_27:
          v32 = a2[2];
          if ( *a2 - v32 <= a4 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v31, a4);
            v25 += 16LL;
            if ( result )
              return result;
          }
          else
          {
            memcpy((void *)(v32 + a2[1]), v31, a4);
            a2[2] = a4 + v32;
            v25 += 16LL;
          }
        }
        LOBYTE(v60[0]) = v41;
        v34 = a2[2];
        if ( (unsigned __int64)(*a2 - v34) <= 1 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v60, 1LL);
        }
        else
        {
          *(_BYTE *)(a2[1] + v34) = v41;
          a2[2] = v34 + 1;
          result = 0LL;
        }
        a3 = v56;
        v7 = v55;
        v14 = v54;
        v15 = v53;
        v16 = v57;
        v17 = v44;
        if ( result )
          return result;
      }
      result = 0LL;
      if ( v42 == v52 )
        return result;
    }
  }
  v49 = *(_QWORD *)(a1 + 64);
  v48 = *(_QWORD *)(a3 + 64);
  v45 = 48 * v11;
LABEL_46:
  v50 = v42 + 48;
  v35 = v45;
  v36 = v58;
  do
  {
    if ( !v35 )
    {
      v42 = v50;
      result = 0LL;
      if ( v50 == v52 )
        return result;
      goto LABEL_46;
    }
    v37 = src;
    v38 = v13;
    if ( current_key )
    {
      v38 = v47;
      v37 = current_key;
    }
    v39 = a2[2];
    if ( *a2 - v39 <= v38 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v37, v38);
      if ( result )
        return result;
    }
    else
    {
      memcpy((void *)(v39 + a2[1]), v37, v38);
      a2[2] = v38 + v39;
    }
    result = uu_join::Repr<Sep>::print_fields(a2, v42, v49);
    if ( result )
      break;
    result = uu_join::Repr<Sep>::print_fields(a2, v36, v48);
    if ( result )
      break;
    LOBYTE(v60[0]) = v41;
    v40 = a2[2];
    if ( (unsigned __int64)(*a2 - v40) <= 1 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v60, 1LL);
    }
    else
    {
      *(_BYTE *)(a2[1] + v40) = v41;
      a2[2] = v40 + 1;
      result = 0LL;
    }
    v36 += 48LL;
    v35 -= 48LL;
  }
  while ( !result );
  return result;
}
