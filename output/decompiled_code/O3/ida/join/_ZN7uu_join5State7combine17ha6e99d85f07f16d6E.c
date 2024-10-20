__int64 __fastcall uu_join::State::combine(__int64 a1, _QWORD *a2, __int64 a3, size_t a4)
{
  __int64 v7; // r13
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  const void *v13; // rsi
  size_t v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rcx
  const void *v19; // r15
  char v20; // al
  void *field; // rsi
  size_t v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // r13
  __int64 v26; // r14
  char v27; // cl
  __int64 v28; // rax
  void *v29; // rax
  size_t v30; // rdx
  void *v31; // rsi
  __int64 v32; // r15
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // r14
  void *v37; // rsi
  size_t v38; // r13
  __int64 v39; // r15
  __int64 v40; // rax
  char v41; // [rsp+Fh] [rbp-E9h]
  __int64 v42; // [rsp+10h] [rbp-E8h]
  __int64 v43; // [rsp+18h] [rbp-E0h]
  __int64 v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  char v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  char v48; // [rsp+28h] [rbp-D0h]
  __int64 v49; // [rsp+28h] [rbp-D0h]
  void *current_key; // [rsp+30h] [rbp-C8h] BYREF
  size_t v51; // [rsp+38h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-B8h]
  const void *v53; // [rsp+48h] [rbp-B0h]
  size_t n; // [rsp+50h] [rbp-A8h]
  void *src; // [rsp+58h] [rbp-A0h]
  __int64 v56; // [rsp+60h] [rbp-98h]
  __int64 v57; // [rsp+68h] [rbp-90h]
  __int64 v58; // [rsp+70h] [rbp-88h]
  __int64 v59; // [rsp+78h] [rbp-80h]
  __int64 v60; // [rsp+80h] [rbp-78h]
  __int64 v61; // [rsp+88h] [rbp-70h]
  __int64 v62; // [rsp+90h] [rbp-68h]
  __int64 v63; // [rsp+98h] [rbp-60h]
  _QWORD v64[11]; // [rsp+A0h] [rbp-58h] BYREF

  v7 = a1;
  current_key = (void *)uu_join::State::get_current_key(a1);
  v51 = v8;
  v9 = *(_QWORD *)(a1 + 16);
  if ( !v9 )
    return 0LL;
  v42 = *(_QWORD *)(a1 + 8);
  v56 = v42 + 48 * v9;
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(_QWORD *)(a4 + 320);
  v13 = *(const void **)(a4 + 264);
  v14 = *(_QWORD *)(a4 + 272);
  src = *(void **)(a4 + 288);
  n = *(_QWORD *)(a4 + 296);
  v41 = *(_BYTE *)(a4 + 328);
  v52 = v12;
  v53 = v13;
  v59 = v10;
  if ( v12 )
  {
    v63 = v10 + 48 * v11;
    v15 = *(_QWORD *)(a4 + 312);
    v48 = *(_BYTE *)(v7 + 88);
    v46 = *(_BYTE *)(a3 + 88);
    v62 = v15 + 16;
    v57 = v7;
    v60 = v15;
    v58 = a3;
    while ( 1 )
    {
      v16 = v42;
      v42 += 48LL;
      v17 = v59;
      v61 = v16;
      while ( v17 != v63 )
      {
        v18 = v17;
        v19 = v13;
        v64[0] = &current_key;
        v64[1] = v7;
        v64[2] = v16;
        v64[3] = a3;
        v43 = v18;
        v64[4] = v18;
        if ( *(_BYTE *)v15 )
        {
          v20 = *(_BYTE *)(v15 + 1);
          if ( v20 == v48 || (v16 = v18, v20 == v46) )
          {
            field = (void *)uu_join::Line::get_field(v16, *(_QWORD *)(v15 + 8));
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
          a4 = v51;
        }
        if ( !field )
        {
          field = src;
          a4 = n;
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
        v24 = v52;
        v25 = v62;
        v13 = v19;
        while ( --v24 )
        {
          v26 = a2[2];
          if ( *a2 - v26 <= v14 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v13, v14);
            if ( result )
              return result;
          }
          else
          {
            memcpy((void *)(v26 + a2[1]), v13, v14);
            a2[2] = v14 + v26;
          }
          if ( *(_BYTE *)v25 )
          {
            v27 = *(_BYTE *)(v25 + 1);
            v28 = 2LL;
            if ( v27 != v48 )
            {
              v28 = 4LL;
              if ( v27 != v46 )
              {
                v31 = src;
                a4 = n;
                goto LABEL_27;
              }
            }
            v29 = (void *)uu_join::Line::get_field(v64[v28], *(_QWORD *)(v25 + 8));
            v31 = src;
            a4 = n;
            if ( !v29 )
              goto LABEL_27;
LABEL_26:
            v31 = v29;
            a4 = v30;
            goto LABEL_27;
          }
          v29 = current_key;
          v30 = v51;
          v31 = src;
          a4 = n;
          if ( current_key )
            goto LABEL_26;
LABEL_27:
          v32 = a2[2];
          if ( *a2 - v32 <= a4 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v31, a4);
          }
          else
          {
            memcpy((void *)(v32 + a2[1]), v31, a4);
            a2[2] = a4 + v32;
            result = 0LL;
          }
          v13 = v53;
          v25 += 16LL;
          if ( result )
            return result;
        }
        LOBYTE(v64[0]) = v41;
        v34 = a2[2];
        v17 = v44;
        if ( (unsigned __int64)(*a2 - v34) <= 1 )
        {
          a4 = (size_t)v13;
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v64, 1LL);
        }
        else
        {
          *(_BYTE *)(a2[1] + v34) = v41;
          a2[2] = v34 + 1;
          result = 0LL;
        }
        a3 = v58;
        v7 = v57;
        v15 = v60;
        v16 = v61;
        if ( result )
          return result;
      }
      result = 0LL;
      if ( v42 == v56 )
        return result;
    }
  }
  v49 = *(_QWORD *)(v7 + 64);
  v47 = *(_QWORD *)(a3 + 64);
  v45 = 48 * v11;
LABEL_47:
  v52 = v42 + 48;
  v35 = v45;
  v36 = v59;
  do
  {
    if ( !v35 )
    {
      v42 = v52;
      result = 0LL;
      if ( v52 == v56 )
        return result;
      goto LABEL_47;
    }
    v37 = src;
    v38 = n;
    if ( current_key )
    {
      v38 = v51;
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
    result = uu_join::Repr<Sep>::print_fields(v53, v14, a2, v42, v49);
    if ( result )
      break;
    result = uu_join::Repr<Sep>::print_fields(v53, v14, a2, v36, v47);
    if ( result )
      break;
    LOBYTE(v64[0]) = v41;
    v40 = a2[2];
    if ( (unsigned __int64)(*a2 - v40) <= 1 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v64, 1LL);
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
