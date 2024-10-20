__int64 __fastcall uu_fold::handle_obsolete(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // r15
  _BYTE *v10; // r10
  int v11; // edx
  int v12; // r8d
  int v13; // esi
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 result; // rax
  signed __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rbx
  void *v31; // rax
  void *v32; // r14
  __int128 v33; // [rsp+8h] [rbp-B0h]
  __int128 v34; // [rsp+8h] [rbp-B0h]
  char *src; // [rsp+20h] [rbp-98h]
  __int64 v36; // [rsp+28h] [rbp-90h]
  unsigned __int64 v37; // [rsp+30h] [rbp-88h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  __int128 v41; // [rsp+70h] [rbp-48h] BYREF
  __int64 v42; // [rsp+80h] [rbp-38h]

  if ( !a3 )
  {
    v18 = 0LL;
    *(_QWORD *)&v33 = 0LL;
    *((_QWORD *)&v33 + 1) = 8LL;
    goto LABEL_21;
  }
  v5 = 24 * a3;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v9 = *(_QWORD *)(a2 + v6 + 16);
    if ( v9 )
    {
      v10 = *(_BYTE **)(a2 + v6 + 8);
      if ( *v10 == 45 && v9 != 1 )
      {
        v8 = (unsigned __int8)v10[1];
        if ( (v8 & 0x80u) != 0 )
        {
          v11 = v8 & 0x1F;
          v12 = v10[2] & 0x3F;
          if ( (unsigned __int8)v8 <= 0xDFu )
          {
            v8 = v12 | (v11 << 6);
          }
          else
          {
            v13 = (v12 << 6) | v10[3] & 0x3F;
            if ( (unsigned __int8)v8 < 0xF0u )
              v8 = (v11 << 12) | v13;
            else
              v8 = ((v8 & 7) << 18) | (v13 << 6) | v10[4] & 0x3F;
          }
        }
        if ( (unsigned int)(v8 - 48) <= 9 )
        {
          v36 = 24 * a3;
          if ( a3 > 0x555555555555555LL )
          {
            v24 = 0LL;
          }
          else
          {
            v39 = *(_QWORD *)(a2 + v6 + 8);
            src = v10 + 1;
            v24 = 8LL;
            v25 = _rust_alloc(v5, 8LL);
            if ( v25 )
            {
              v37 = a3;
              *(_QWORD *)&v34 = a3;
              v40 = v25;
              *((_QWORD *)&v34 + 1) = v25;
              v26 = 0LL;
              v27 = 0LL;
              do
              {
                if ( v36 == v26 )
                  break;
                <alloc::string::String as core::clone::Clone>::clone(&v41, v26 + a2);
                ++v27;
                *(_QWORD *)(v40 + v26 + 16) = v42;
                *(_OWORD *)(v40 + v26) = v41;
                v26 += 24LL;
              }
              while ( v37 != v27 );
              if ( v37 <= v7 )
                alloc::vec::Vec<T,A>::remove::assert_failed(v7, v37, &off_E3DF0);
              v28 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + v6);
              v29 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + v6 + 8);
              memmove(
                (void *)(*((_QWORD *)&v34 + 1) + v6),
                (const void *)(*((_QWORD *)&v34 + 1) + v6 + 24),
                24 * (v37 - v7) - 24);
              if ( v28 )
                _rust_dealloc(v29, v28, 1LL);
              if ( *src <= -65 )
                core::str::slice_error_fail(v39, v9, 1LL, v9, &off_E3E08);
              v22 = v9 - 1;
              if ( v22 < 0 )
              {
                v30 = 0LL;
              }
              else
              {
                v30 = 1LL;
                v31 = (void *)_rust_alloc(v22, 1LL);
                if ( v31 )
                {
                  v32 = v31;
                  memcpy(v31, src, v22);
                  result = a1;
                  *(_OWORD *)a1 = v34;
                  *(_QWORD *)(a1 + 16) = v37 - 1;
                  *(_QWORD *)(a1 + 24) = v22;
                  *(_QWORD *)(a1 + 32) = v32;
                  v23 = 40LL;
                  goto LABEL_22;
                }
              }
              alloc::raw_vec::handle_error(v30, v22);
            }
          }
          alloc::raw_vec::handle_error(v24, v36);
        }
      }
    }
    v6 += 24LL;
    ++v7;
  }
  while ( v5 != v6 );
  if ( a3 > 0x555555555555555LL )
  {
    v15 = 24 * a3;
    v14 = 0LL;
LABEL_36:
    alloc::raw_vec::handle_error(v14, v15);
  }
  v14 = 8LL;
  v15 = 24 * a3;
  v16 = _rust_alloc(v5, 8LL);
  if ( !v16 )
    goto LABEL_36;
  v17 = v16;
  v18 = a3;
  *(_QWORD *)&v33 = a3;
  *((_QWORD *)&v33 + 1) = v16;
  v19 = 0LL;
  v20 = 0LL;
  do
  {
    if ( v15 == v19 )
      break;
    <alloc::string::String as core::clone::Clone>::clone(&v41, v19 + a2);
    ++v20;
    *(_QWORD *)(v17 + v19 + 16) = v42;
    *(_OWORD *)(v17 + v19) = v41;
    v19 += 24LL;
  }
  while ( v18 != v20 );
LABEL_21:
  result = a1;
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v33;
  v22 = 0x8000000000000000LL;
  v23 = 24LL;
LABEL_22:
  *(_QWORD *)(result + v23) = v22;
  return result;
}
