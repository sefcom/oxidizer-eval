__int64 __fastcall uu_join::State::combine(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  size_t v4; // rbp
  __int64 v8; // r15
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  char v16; // bl
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *field; // rsi
  size_t v23; // rdx
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  void *v29; // rax
  size_t v30; // rdx
  void *v31; // rsi
  size_t v32; // r15
  __int64 v33; // r13
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbp
  void *v38; // rsi
  size_t v39; // r15
  __int64 v40; // r13
  __int64 v41; // rax
  char v42; // [rsp+Fh] [rbp-E9h]
  __int64 v43; // [rsp+10h] [rbp-E8h]
  __int64 v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  __int64 v46; // [rsp+18h] [rbp-E0h]
  void *current_key; // [rsp+20h] [rbp-D8h] BYREF
  size_t v48; // [rsp+28h] [rbp-D0h]
  __int64 v49; // [rsp+30h] [rbp-C8h]
  __int64 v50; // [rsp+38h] [rbp-C0h]
  __int64 v51; // [rsp+40h] [rbp-B8h]
  size_t n; // [rsp+48h] [rbp-B0h]
  void *src; // [rsp+50h] [rbp-A8h]
  __int64 v54; // [rsp+58h] [rbp-A0h]
  __int64 v55; // [rsp+60h] [rbp-98h]
  __int64 v56; // [rsp+68h] [rbp-90h]
  __int64 v57; // [rsp+70h] [rbp-88h]
  __int64 v58; // [rsp+78h] [rbp-80h]
  __int64 v59; // [rsp+80h] [rbp-78h]
  __int64 v60; // [rsp+88h] [rbp-70h]
  __int64 v61; // [rsp+90h] [rbp-68h]
  __int64 v62; // [rsp+98h] [rbp-60h]
  _QWORD v63[11]; // [rsp+A0h] [rbp-58h] BYREF

  v8 = a1;
  current_key = (void *)uu_join::State::get_current_key(a1);
  v48 = v9;
  v10 = *(_QWORD *)(a1 + 16);
  if ( !v10 )
    return 0LL;
  v43 = *(_QWORD *)(a1 + 8);
  v54 = v43 + 48 * v10;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a3 + 16);
  v13 = *(_QWORD *)(a4 + 16);
  src = *(void **)(a4 + 24);
  n = *(_QWORD *)(a4 + 32);
  v42 = *(_BYTE *)(a4 + 40);
  v51 = v13;
  v61 = a4;
  v60 = v11;
  if ( v13 )
  {
    v14 = v11 + 48 * v12;
    v15 = *(_QWORD *)(a4 + 8);
    v16 = *(_BYTE *)(a4 + 41);
    LOBYTE(v50) = *(_BYTE *)(a1 + 88);
    LOBYTE(v49) = *(_BYTE *)(a3 + 88);
    v62 = v15 + 16;
    v58 = a3;
    v57 = a1;
    v56 = v14;
    v55 = v15;
    while ( 1 )
    {
      v17 = v43;
      v43 += 48LL;
      v18 = v60;
      v59 = v17;
      while ( v18 != v14 )
      {
        v63[0] = &current_key;
        v63[1] = v8;
        v63[2] = v17;
        v63[3] = a3;
        v63[4] = v18;
        v44 = v18;
        if ( *(_BYTE *)v15 )
        {
          v19 = *(_BYTE *)(v15 + 1);
          v20 = *(_QWORD *)(v15 + 8);
          v21 = v17;
          if ( v19 == (_BYTE)v50 || (v21 = v18, v19 == (_BYTE)v49) )
          {
            field = (void *)uu_join::Line::get_field(v21, v20);
            v4 = v23;
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
          v4 = n;
        }
        v24 = a2[2];
        if ( *a2 - v24 <= v4 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, field, v4);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v24 + a2[1]), field, v4);
          a2[2] = v4 + v24;
        }
        v45 = v44 + 48;
        v4 = v51;
        v25 = v62;
        while ( --v4 )
        {
          v26 = a2[2];
          if ( (unsigned __int64)(*a2 - v26) < 2 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v61 + 41, 1LL);
            if ( result )
              return result;
          }
          else
          {
            *(_BYTE *)(a2[1] + v26) = v16;
            a2[2] = v26 + 1;
          }
          if ( *(_BYTE *)v25 )
          {
            v27 = *(_BYTE *)(v25 + 1);
            v28 = 2LL;
            if ( v27 != (_BYTE)v50 )
            {
              v28 = 4LL;
              if ( v27 != (_BYTE)v49 )
              {
                v31 = src;
                v32 = n;
                goto LABEL_27;
              }
            }
            v29 = (void *)uu_join::Line::get_field(v63[v28], *(_QWORD *)(v25 + 8));
            v31 = src;
            v32 = n;
            if ( !v29 )
              goto LABEL_27;
LABEL_26:
            v31 = v29;
            v32 = v30;
            goto LABEL_27;
          }
          v29 = current_key;
          v30 = v48;
          v31 = src;
          v32 = n;
          if ( current_key )
            goto LABEL_26;
LABEL_27:
          v33 = a2[2];
          if ( *a2 - v33 <= v32 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v31, v32);
            v25 += 16LL;
            if ( result )
              return result;
          }
          else
          {
            memcpy((void *)(v33 + a2[1]), v31, v32);
            a2[2] = v32 + v33;
            v25 += 16LL;
          }
        }
        LOBYTE(v63[0]) = v42;
        v35 = a2[2];
        if ( (unsigned __int64)(*a2 - v35) <= 1 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v63, 1LL);
        }
        else
        {
          *(_BYTE *)(a2[1] + v35) = v42;
          a2[2] = v35 + 1;
          result = 0LL;
        }
        a3 = v58;
        v8 = v57;
        v14 = v56;
        v15 = v55;
        v17 = v59;
        v18 = v45;
        if ( result )
          return result;
      }
      result = 0LL;
      if ( v43 == v54 )
        return result;
    }
  }
  v50 = *(_QWORD *)(a1 + 64);
  v49 = *(_QWORD *)(a3 + 64);
  v46 = 48 * v12;
LABEL_46:
  v51 = v43 + 48;
  v36 = v46;
  v37 = v60;
  do
  {
    if ( !v36 )
    {
      v43 = v51;
      result = 0LL;
      if ( v51 == v54 )
        return result;
      goto LABEL_46;
    }
    v38 = src;
    v39 = n;
    if ( current_key )
    {
      v39 = v48;
      v38 = current_key;
    }
    v40 = a2[2];
    if ( *a2 - v40 <= v39 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v38, v39);
      if ( result )
        return result;
    }
    else
    {
      memcpy((void *)(v40 + a2[1]), v38, v39);
      a2[2] = v39 + v40;
    }
    result = uu_join::Repr<Sep>::print_fields(v61, a2, v43, v50);
    if ( result )
      break;
    result = uu_join::Repr<Sep>::print_fields(v61, a2, v37, v49);
    if ( result )
      break;
    LOBYTE(v63[0]) = v42;
    v41 = a2[2];
    if ( (unsigned __int64)(*a2 - v41) <= 1 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v63, 1LL);
    }
    else
    {
      *(_BYTE *)(a2[1] + v41) = v42;
      a2[2] = v41 + 1;
      result = 0LL;
    }
    v37 += 48LL;
    v36 -= 48LL;
  }
  while ( !result );
  return result;
}
