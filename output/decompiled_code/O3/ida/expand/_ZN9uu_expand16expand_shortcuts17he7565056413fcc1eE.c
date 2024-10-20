_OWORD *__fastcall uu_expand::expand_shortcuts(__int64 a1, __int64 *a2)
{
  char *v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // r13
  unsigned __int8 *v15; // rdx
  int v16; // esi
  int v17; // r8d
  int v18; // r10d
  int v19; // r9d
  char *v20; // r12
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rsi
  __int64 v25; // rdx
  char v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r14
  __int64 v31; // rsi
  _OWORD *result; // rax
  __int64 v33; // [rsp+8h] [rbp-110h]
  __int128 v34; // [rsp+10h] [rbp-108h] BYREF
  __int64 v35; // [rsp+20h] [rbp-F8h]
  char *v36; // [rsp+28h] [rbp-F0h]
  __int64 v37; // [rsp+30h] [rbp-E8h]
  char **v38; // [rsp+38h] [rbp-E0h]
  char *v39; // [rsp+40h] [rbp-D8h]
  char *v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-A8h]
  char **v45; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+80h] [rbp-98h]
  unsigned __int8 *v47; // [rsp+88h] [rbp-90h]
  __int64 v48; // [rsp+90h] [rbp-88h]
  __int64 v49; // [rsp+98h] [rbp-80h]
  char *v50; // [rsp+A8h] [rbp-70h]
  char *v51; // [rsp+B0h] [rbp-68h]
  __int64 v52; // [rsp+B8h] [rbp-60h]
  char *v53; // [rsp+C0h] [rbp-58h]
  _QWORD v54[2]; // [rsp+C8h] [rbp-50h] BYREF
  _QWORD v55[8]; // [rsp+D8h] [rbp-40h] BYREF

  v3 = a2[2];
  v42 = a1;
  if ( v3 )
  {
    if ( v3 > 0x555555555555555LL )
    {
      v4 = 0LL;
      goto LABEL_69;
    }
    v4 = 8LL;
    v5 = _rust_alloc(24 * v3, 8LL);
    if ( !v5 )
LABEL_69:
      alloc::raw_vec::handle_error(v4, 24 * v3);
  }
  else
  {
    v5 = 8LL;
  }
  *(_QWORD *)&v34 = v3;
  *((_QWORD *)&v34 + 1) = v5;
  v35 = 0LL;
  v6 = *a2;
  v7 = (char *)a2[1];
  v50 = v7;
  v51 = v7;
  v41 = v6;
  v52 = v6;
  v40 = &v7[24 * v3];
  v53 = v40;
  v39 = v7;
  if ( !v3 )
    goto LABEL_60;
  v38 = &off_E5688;
  v7 = v39;
  do
  {
    v8 = v7;
    v7 += 24;
    v51 = v7;
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == 0x8000000000000000LL )
      break;
    v10 = *((_QWORD *)v8 + 2);
    v37 = *((_QWORD *)v8 + 1);
    std::sys::os_str::bytes::Slice::to_str(&v45, v37);
    if ( v45 || !v47 || *(_BYTE *)v46 != 45 )
    {
LABEL_10:
      v11 = v35;
      if ( v35 == (_QWORD)v34 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
      v12 = *((_QWORD *)&v34 + 1);
      v13 = 3 * v11;
      *(_QWORD *)(*((_QWORD *)&v34 + 1) + 8 * v13) = v9;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v37;
      *(_QWORD *)(v12 + 8 * v13 + 16) = v10;
      v35 = v11 + 1;
      continue;
    }
    if ( v47 == (_BYTE *)&dword_0 + 1 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( *(char *)(v46 + 1) <= -65 )
        goto LABEL_72;
      v14 = (char *)(v47 - 1);
    }
    v15 = (unsigned __int8 *)(v46 + 1);
    v36 = (char *)(v46 + 1);
    while ( v15 != &v47[v46] )
    {
      v16 = *v15;
      if ( (v16 & 0x80u) != 0 )
      {
        v17 = v16 & 0x1F;
        v18 = v15[1] & 0x3F;
        if ( (unsigned __int8)v16 <= 0xDFu )
        {
          v15 += 2;
          v16 = v18 | (v17 << 6);
          if ( v16 != 44 )
            goto LABEL_23;
        }
        else
        {
          v19 = (v18 << 6) | v15[2] & 0x3F;
          if ( (unsigned __int8)v16 < 0xF0u )
          {
            v15 += 3;
            v16 = (v17 << 12) | v19;
            if ( v16 != 44 )
              goto LABEL_23;
          }
          else
          {
            v16 = ((v16 & 7) << 18) | (v19 << 6) | v15[3] & 0x3F;
            if ( v16 == 1114112 )
              break;
            v15 += 4;
            if ( v16 != 44 )
            {
LABEL_23:
              if ( (unsigned int)(v16 - 48) >= 0xA )
                goto LABEL_10;
            }
          }
        }
      }
      else
      {
        ++v15;
        if ( v16 != 44 )
          goto LABEL_23;
      }
    }
    v33 = v9;
    if ( v47 != (_BYTE *)&dword_0 + 1 && *v36 <= -65 )
    {
      v38 = &off_E56A0;
LABEL_72:
      core::str::slice_error_fail(v46, v47, 1LL, v47, v38);
    }
    v20 = 0LL;
    v21 = 0LL;
    while ( 2 )
    {
      while ( v14 >= v21 )
      {
        v24 = &v21[(_QWORD)v36];
        if ( (unsigned __int64)(v14 - v21) > 0xF )
        {
          v27 = core::slice::memchr::memchr_aligned(44LL, v24, v14 - v21);
          if ( v27 != 1 )
          {
            if ( v27 )
            {
              v26 = 1;
              v21 = v14;
              goto LABEL_54;
            }
LABEL_46:
            v26 = 0;
            v2 = v20;
            v21 = v14;
            goto LABEL_53;
          }
        }
        else
        {
          if ( v14 == v21 )
            goto LABEL_46;
          v25 = 0LL;
          while ( v24[v25] != 44 )
          {
            if ( v14 - v21 == ++v25 )
              goto LABEL_46;
          }
        }
        v27 = (unsigned __int64)&v21[v25];
        v21 += v25 + 1;
        if ( v27 < (unsigned __int64)v14 && v36[v27] == 44 )
        {
          v26 = 1;
          v2 = v21;
          if ( (char *)v27 == v20 )
            goto LABEL_39;
          goto LABEL_54;
        }
      }
      v26 = 0;
      v2 = v20;
LABEL_53:
      v27 = (unsigned __int64)v14;
      if ( v14 == v20 )
        goto LABEL_39;
LABEL_54:
      v54[0] = &v20[(_QWORD)v36];
      v54[1] = v27 - (_QWORD)v20;
      v55[0] = v54;
      v55[1] = <&T as core::fmt::Display>::fmt;
      v45 = &off_E56B8;
      v46 = 1LL;
      v49 = 0LL;
      v47 = (unsigned __int8 *)v55;
      v48 = 1LL;
      alloc::fmt::format::format_inner(&v43, &v45);
      v28 = v35;
      if ( v35 == (_QWORD)v34 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
      v22 = *((_QWORD *)&v34 + 1);
      v23 = 3 * v28;
      *(_QWORD *)(*((_QWORD *)&v34 + 1) + 8 * v23 + 16) = v44;
      *(_OWORD *)(v22 + 8 * v23) = v43;
      v35 = v28 + 1;
LABEL_39:
      v20 = v2;
      if ( v26 )
        continue;
      break;
    }
    if ( v33 )
      _rust_dealloc(v37, v33, 1LL);
  }
  while ( v7 != v40 );
LABEL_60:
  if ( v40 != v7 )
  {
    v29 = (v40 - v7) / 0x18uLL;
    v30 = v7 + 8;
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        _rust_dealloc(*v30, v31, 1LL);
      v30 += 3;
      --v29;
    }
    while ( v29 );
  }
  if ( v41 )
    _rust_dealloc(v39, 24 * v41, 8LL);
  result = (_OWORD *)v42;
  *(_QWORD *)(v42 + 16) = v35;
  *result = v34;
  return result;
}
