_QWORD *__fastcall uu_dd::blocks::block(_QWORD *a1, _BYTE *a2, size_t a3, size_t a4, char a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // rbp
  bool v14; // r12
  char *v15; // r15
  size_t v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  char *v20; // r15
  __int64 v21; // rbx
  char *v22; // rdi
  void *v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v29; // r14
  _QWORD *result; // rax
  int v31; // [rsp+4h] [rbp-B4h]
  __int64 v33; // [rsp+10h] [rbp-A8h]
  __int128 v35; // [rsp+20h] [rbp-98h] BYREF
  __int64 v36; // [rsp+30h] [rbp-88h]
  size_t v37; // [rsp+38h] [rbp-80h] BYREF
  char *v38; // [rsp+40h] [rbp-78h]
  size_t v39; // [rsp+48h] [rbp-70h]
  __int128 *v40; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+58h] [rbp-60h]
  size_t v42; // [rsp+60h] [rbp-58h]
  __int128 v43; // [rsp+68h] [rbp-50h]
  __int64 v44; // [rsp+78h] [rbp-40h]
  _QWORD *v45; // [rsp+80h] [rbp-38h]

  v45 = a1;
  v41 = a6;
  v31 = *(_DWORD *)(a6 + 24);
  v8 = 8LL;
  v9 = 0LL;
  v40 = &v35;
  v10 = 0LL;
  do
  {
    if ( a3 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = a2[v13] == 10;
        if ( a2[v13] == 10 )
          break;
        if ( a3 == ++v13 )
        {
          v33 = (__int64)a2;
          v13 = a3;
          goto LABEL_10;
        }
      }
      a3 += ~v13;
      v33 = (__int64)&a2[v13 + 1];
LABEL_10:
      *(_QWORD *)&v43 = v9;
      *((_QWORD *)&v43 + 1) = v8;
      v44 = v10;
      if ( v13 )
      {
        v16 = a4;
        if ( (v13 & 0x8000000000000000LL) != 0LL )
        {
          v17 = 0LL;
        }
        else
        {
          v17 = 1LL;
          v18 = _rust_alloc(v13, 1LL);
          if ( v18 )
          {
            v15 = (char *)v18;
            goto LABEL_16;
          }
          v42 = v13;
        }
        alloc::raw_vec::handle_error(v17, v42);
      }
      v15 = (_BYTE *)(&dword_0 + 1);
      v13 = 0LL;
    }
    else
    {
      *(_QWORD *)&v43 = v9;
      *((_QWORD *)&v43 + 1) = v8;
      v44 = v10;
      v15 = (_BYTE *)(&dword_0 + 1);
      v13 = 0LL;
      v14 = 0;
      v33 = (__int64)a2;
      a3 = 0LL;
    }
    v16 = a4;
LABEL_16:
    memcpy(v15, a2, v13);
    v35 = v43;
    v36 = v44;
    v37 = v13;
    v38 = v15;
    v39 = v13;
    if ( v16 < v13 )
      *(_DWORD *)(v41 + 24) = ++v31;
    v19 = v16 - v13;
    v42 = (size_t)v15;
    if ( v16 <= v13 )
    {
      v23 = v15;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v37, v13, v16 - v13);
      v20 = v38;
      v21 = v39;
      v22 = &v38[v39];
      if ( v19 >= 2 )
      {
        memset(v22, 32, v19 - 1);
        v21 = v19 + v21 - 1;
        v22 = &v20[v21];
      }
      *v22 = 32;
      v16 = v21 + 1;
      v13 = v37;
      v23 = v38;
    }
    v39 = v16;
    v24 = v36;
    if ( v36 == (_QWORD)v35 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v35);
    v11 = *((_QWORD *)&v35 + 1);
    v12 = 3 * v24;
    *(_QWORD *)(*((_QWORD *)&v35 + 1) + 8 * v12) = v13;
    *(_QWORD *)(v11 + 8 * v12 + 8) = v23;
    *(_QWORD *)(v11 + 8 * v12 + 16) = v16;
    v10 = v24 + 1;
    v8 = *((_QWORD *)&v35 + 1);
    v9 = v35;
    a2 = (_BYTE *)v33;
  }
  while ( v14 );
  if ( v24 == -1 )
  {
    v24 = 0LL;
  }
  else if ( a5 && *(_QWORD *)(v41 + 8) )
  {
LABEL_31:
    ++v24;
  }
  else
  {
    v25 = (_QWORD *)(*((_QWORD *)&v35 + 1) + 24 * v24);
    v26 = v25[1];
    v27 = 0LL;
    while ( *(_QWORD *)(*((_QWORD *)&v35 + 1) + 24 * v24 + 16) != v27 )
    {
      if ( *(_BYTE *)(v26 + v27++) != 32 )
        goto LABEL_31;
    }
    if ( 2LL * *v25 )
    {
      v29 = *((_QWORD *)&v35 + 1);
      _rust_dealloc(v26, *v25, 1LL);
      v8 = v29;
    }
  }
  result = v45;
  *v45 = v9;
  result[1] = v8;
  result[2] = v24;
  return result;
}
