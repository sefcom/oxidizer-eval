_QWORD *__fastcall uu_env::EnvAppData::process_all_string_arguments(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  const void *v9; // rsi
  size_t v10; // rcx
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  size_t v15; // rdx
  _QWORD *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // r14
  __int64 v20; // rsi
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  size_t n; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  const void *v29; // [rsp+40h] [rbp-48h]
  _QWORD *v30; // [rsp+48h] [rbp-40h]
  __int64 v31; // [rsp+50h] [rbp-38h]

  v30 = a1;
  v25 = 0LL;
  v26 = 8LL;
  v27 = 0LL;
  v31 = a3;
  v3 = *(_QWORD *)(a3 + 16);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v31 + 8);
    v6 = 24 * v3;
    v7 = 0LL;
    while ( 1 )
    {
      uu_env::check_and_handle_string_args(
        &v22,
        *(char **)(v5 + v7 + 8),
        *(_QWORD *)(v5 + v7 + 16),
        aSplitString_0,
        0xEuLL,
        (__int64)&v25,
        0LL);
      v8 = v22;
      if ( v22 )
        break;
      if ( (_BYTE)v23 )
        goto LABEL_7;
      uu_env::check_and_handle_string_args(
        &v22,
        *(char **)(v5 + v7 + 8),
        *(_QWORD *)(v5 + v7 + 16),
        aS_0,
        2uLL,
        (__int64)&v25,
        0LL);
      v8 = v22;
      if ( v22 )
        break;
      if ( (_BYTE)v23 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 1) = 1;
      }
      else
      {
        uu_env::check_and_handle_string_args(
          &v22,
          *(char **)(v5 + v7 + 8),
          *(_QWORD *)(v5 + v7 + 16),
          aVs,
          3uLL,
          (__int64)&v25,
          0LL);
        v8 = v22;
        if ( v22 )
          break;
        if ( (_BYTE)v23 )
        {
          *(_WORD *)a2 = 257;
        }
        else
        {
          uu_env::check_and_handle_string_args(
            &v22,
            *(char **)(v5 + v7 + 8),
            *(_QWORD *)(v5 + v7 + 16),
            &unk_159BC,
            4uLL,
            (__int64)&v25,
            v31);
          v8 = v22;
          if ( v22 )
            break;
          if ( (_BYTE)v23 )
          {
            *(_WORD *)a2 = 257;
            *(_BYTE *)(a2 + 2) = 0;
          }
          else
          {
            v9 = *(const void **)(v5 + v7 + 8);
            n = *(_QWORD *)(v5 + v7 + 16);
            v10 = n;
            if ( n )
            {
              v29 = v9;
              if ( (n & 0x8000000000000000LL) != 0LL )
              {
                v28 = 0LL;
LABEL_34:
                alloc::raw_vec::handle_error(v28, n);
              }
              v28 = 1LL;
              v11 = (void *)_rust_alloc(n, 1LL);
              if ( !v11 )
                goto LABEL_34;
              v10 = n;
              v9 = v29;
            }
            else
            {
              v11 = &dword_0 + 1;
            }
            v29 = v11;
            memcpy(v11, v9, v10);
            v28 = v27;
            if ( v27 == v25 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v25);
            v12 = v26;
            v13 = v28;
            v14 = 3 * v28;
            v15 = n;
            *(_QWORD *)(v26 + 8 * v14) = n;
            *(_QWORD *)(v12 + 8 * v14 + 8) = v29;
            *(_QWORD *)(v12 + 8 * v14 + 16) = v15;
            v27 = v13 + 1;
          }
        }
      }
      v7 += 24LL;
      if ( v6 == v7 )
        goto LABEL_24;
    }
    v17 = v23;
    v16 = v30;
    v30[1] = v8;
    v16[2] = v17;
    *v16 = 0x8000000000000000LL;
    v18 = v27;
    if ( v27 )
    {
      v19 = (_QWORD *)(v26 + 8);
      do
      {
        v20 = *(v19 - 1);
        if ( v20 )
          _rust_dealloc(*v19, v20, 1LL);
        v19 += 3;
        --v18;
      }
      while ( v18 );
    }
    if ( v25 )
      _rust_dealloc(v26, 24 * v25, 8LL);
  }
  else
  {
LABEL_24:
    v16 = v30;
    v30[2] = v27;
    *v16 = v25;
    v16[1] = v26;
  }
  return v16;
}
