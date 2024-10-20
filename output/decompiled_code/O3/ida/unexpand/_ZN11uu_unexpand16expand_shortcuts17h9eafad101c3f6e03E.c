unsigned __int64 *__fastcall uu_unexpand::expand_shortcuts(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 *v4; // r15
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  _BYTE *v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  char *v14; // r12
  unsigned __int8 *v15; // rcx
  int v16; // edx
  int v17; // esi
  int v18; // r8d
  int v19; // edi
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // rsi
  __int64 v29; // rdx
  char v30; // r13
  unsigned __int64 v31; // r15
  void *v32; // rax
  void *v33; // r14
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v38; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+20h] [rbp-C8h]
  __int64 v42; // [rsp+28h] [rbp-C0h]
  char **v43; // [rsp+30h] [rbp-B8h]
  __int64 v44; // [rsp+38h] [rbp-B0h]
  unsigned __int64 *v45; // [rsp+40h] [rbp-A8h]
  __int64 v46; // [rsp+48h] [rbp-A0h]
  __int128 v47; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-88h]
  __int64 v49; // [rsp+68h] [rbp-80h]
  __int64 v50; // [rsp+70h] [rbp-78h]
  __int128 v51; // [rsp+80h] [rbp-68h] BYREF
  __int64 v52; // [rsp+90h] [rbp-58h]
  _QWORD v53[2]; // [rsp+98h] [rbp-50h] BYREF
  _QWORD v54[8]; // [rsp+A8h] [rbp-40h] BYREF

  v4 = a1;
  if ( !a3 )
  {
    v38 = 0LL;
    v39 = 8LL;
    v40 = 0LL;
    goto LABEL_65;
  }
  v45 = a1;
  v6 = 24 * a3;
  if ( a3 > 0x555555555555555LL )
  {
    v8 = 0LL;
LABEL_69:
    alloc::raw_vec::handle_error(v8, v6);
  }
  v7 = a2;
  v8 = 8LL;
  v9 = _rust_alloc(24 * a3, 8LL);
  if ( !v9 )
    goto LABEL_69;
  v38 = a3;
  v39 = v9;
  v40 = 0LL;
  v46 = a2 + 24 * a3;
  v44 = 0LL;
  v43 = &off_E6AB8;
  v41 = 0LL;
  do
  {
    v11 = *(_BYTE **)(v7 + 8);
    v42 = v7;
    v12 = *(_QWORD *)(v7 + 16);
    if ( v12 && *v11 == 45 )
    {
      if ( v12 == 1 )
      {
        v13 = 0LL;
      }
      else
      {
        if ( (char)v11[1] <= -65 )
          goto LABEL_67;
        v13 = v12 - 1;
      }
      v14 = v11 + 1;
      v15 = v11 + 1;
      while ( v15 != &v11[v12] )
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
              goto LABEL_15;
          }
          else
          {
            v19 = (v18 << 6) | v15[2] & 0x3F;
            if ( (unsigned __int8)v16 < 0xF0u )
            {
              v15 += 3;
              v16 = (v17 << 12) | v19;
              if ( v16 != 44 )
                goto LABEL_15;
            }
            else
            {
              v16 = ((v16 & 7) << 18) | (v19 << 6) | v15[3] & 0x3F;
              if ( v16 == 1114112 )
                break;
              v15 += 4;
              if ( v16 != 44 )
              {
LABEL_15:
                if ( (unsigned int)(v16 - 48) >= 0xA )
                  goto LABEL_27;
              }
            }
          }
        }
        else
        {
          ++v15;
          if ( v16 != 44 )
            goto LABEL_15;
        }
      }
      if ( v12 == 1 || *v14 > -65 )
      {
        v24 = 0LL;
        v25 = 0LL;
        while ( 1 )
        {
          while ( v13 < v25 )
          {
            v30 = 0;
            v3 = v24;
LABEL_53:
            v26 = v13;
            if ( v13 != v24 )
              goto LABEL_54;
LABEL_39:
            v24 = v3;
            if ( !v30 )
            {
              LOBYTE(v26) = 1;
              v41 = v26;
              v10 = v42;
              goto LABEL_6;
            }
          }
          v28 = &v14[v25];
          if ( v13 - v25 <= 0xF )
            break;
          v26 = core::slice::memchr::memchr_aligned(44LL, v28, v13 - v25);
          if ( v26 != 1 )
          {
            if ( v26 )
            {
              v30 = 1;
              v25 = v13;
LABEL_54:
              v53[0] = &v14[v24];
              v53[1] = v26 - v24;
              v54[0] = v53;
              v54[1] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v47 = &off_E6AE8;
              *((_QWORD *)&v47 + 1) = 1LL;
              v50 = 0LL;
              v48 = v54;
              v49 = 1LL;
              alloc::fmt::format::format_inner(&v51, &v47);
              v31 = v40;
              if ( v40 == v38 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
              v26 = v39;
              v27 = 3 * v31;
              *(_QWORD *)(v39 + 8 * v27 + 16) = v52;
              *(_OWORD *)(v26 + 8 * v27) = v51;
              v40 = v31 + 1;
              goto LABEL_39;
            }
LABEL_46:
            v30 = 0;
            v3 = v24;
            v25 = v13;
            goto LABEL_53;
          }
LABEL_48:
          v26 = v29 + v25;
          v25 += v29 + 1;
          if ( v26 < v13 && v14[v26] == 44 )
          {
            v30 = 1;
            v3 = v25;
            if ( v26 != v24 )
              goto LABEL_54;
            goto LABEL_39;
          }
        }
        if ( v13 != v25 )
        {
          v29 = 0LL;
          while ( v28[v29] != 44 )
          {
            if ( v13 - v25 == ++v29 )
              goto LABEL_46;
          }
          goto LABEL_48;
        }
        goto LABEL_46;
      }
      v43 = &off_E6AD0;
LABEL_67:
      core::str::slice_error_fail(v11, v12, 1LL, v12, v43);
    }
LABEL_27:
    v10 = v42;
    <alloc::string::String as core::clone::Clone>::clone(&v47, v42);
    v20 = v40;
    if ( v40 == v38 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
    v21 = v39;
    v22 = 3 * v20;
    *(_QWORD *)(v39 + 8 * v22 + 16) = v48;
    *(_OWORD *)(v21 + 8 * v22) = v47;
    v3 = v20 + 1;
    v40 = v3;
    if ( v12 == 2 )
    {
      v23 = *(unsigned __int16 *)v11;
      if ( (_DWORD)v23 != 24877 )
        goto LABEL_6;
LABEL_34:
      LOBYTE(v23) = 1;
      v44 = v23;
      goto LABEL_6;
    }
    if ( v12 == 5 )
    {
      v23 = *(_DWORD *)v11 ^ 0x6C612D2Du;
      if ( !((unsigned int)v23 | (unsigned __int8)v11[4] ^ 0x6C) )
        goto LABEL_34;
    }
LABEL_6:
    v7 = v10 + 24;
  }
  while ( v7 != v46 );
  v4 = v45;
  if ( (v41 & 1) != 0 && (v44 & 1) == 0 )
  {
    v32 = (void *)_rust_alloc(12LL, 1LL);
    if ( !v32 )
      alloc::raw_vec::handle_error(1LL, 12LL);
    v33 = v32;
    qmemcpy(v32, "--first-only", 12);
    v34 = v40;
    if ( v40 == v38 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
    v35 = v39;
    v36 = 3 * v34;
    *(_QWORD *)(v39 + 8 * v36) = 12LL;
    *(_QWORD *)(v35 + 8 * v36 + 8) = v33;
    *(_QWORD *)(v35 + 8 * v36 + 16) = 12LL;
    v40 = v34 + 1;
  }
LABEL_65:
  v4[2] = v40;
  *v4 = v38;
  v4[1] = v39;
  return v4;
}
