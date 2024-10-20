size_t *__fastcall uu_uname::UNameOutput::new(size_t *a1, char *a2)
{
  void *v3; // rbx
  size_t v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 v10; // bp
  size_t v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  char *v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  unsigned __int8 v17; // cl
  size_t v18; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  char *v21; // rdi
  size_t v22; // r13
  __int64 v23; // r15
  __int64 v24; // rax
  char *v25; // rdi
  size_t v26; // r13
  __int64 v27; // r15
  __int64 v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  size_t v31; // r13
  __int64 v32; // r15
  __int64 v33; // rax
  char *v34; // rdi
  size_t v35; // rbp
  __int64 v36; // r13
  __int64 v37; // rax
  char *v38; // rdi
  __int64 v39; // r13
  size_t v41; // [rsp+8h] [rbp-4C0h]
  size_t v42; // [rsp+10h] [rbp-4B8h]
  size_t v43; // [rsp+18h] [rbp-4B0h]
  size_t v44; // [rsp+20h] [rbp-4A8h]
  size_t v45; // [rsp+28h] [rbp-4A0h]
  char *v46; // [rsp+30h] [rbp-498h]
  char *v47; // [rsp+38h] [rbp-490h]
  char *v48; // [rsp+40h] [rbp-488h]
  char *v49; // [rsp+48h] [rbp-480h]
  char *v50; // [rsp+50h] [rbp-478h]
  char *v51; // [rsp+58h] [rbp-470h]
  __int64 v52; // [rsp+60h] [rbp-468h]
  __int64 v53; // [rsp+68h] [rbp-460h] BYREF
  void *v54; // [rsp+70h] [rbp-458h]
  size_t n; // [rsp+78h] [rbp-450h]
  _BYTE src[512]; // [rsp+80h] [rbp-448h] BYREF
  _QWORD v57[3]; // [rsp+280h] [rbp-248h] BYREF
  _QWORD dest[64]; // [rsp+298h] [rbp-230h] BYREF

  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(&v53);
  v3 = v54;
  v4 = n;
  v52 = 0x8000000000000000LL;
  if ( v53 != 0x8000000000000000LL )
  {
    memcpy(dest, src, sizeof(dest));
    v57[0] = v53;
    v57[1] = v54;
    v57[2] = n;
    v10 = *a2;
    if ( !*(_WORD *)a2
      && (v15 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 2)),
          v16 = _mm_unpacklo_epi8(v15, v15),
          v17 = _mm_movemask_ps((__m128)_mm_cmpeq_epi8((__m128i)0LL, _mm_unpacklo_epi16(v16, v16))),
          (v17 & 1) != 0)
      && (unsigned __int8)(v17 & 4) >> 2
      && (unsigned __int8)(v17 & 2) >> 1
      && v17 >> 3
      && !a2[8]
      && !a2[6] )
    {
      if ( a2[7] )
        goto LABEL_22;
    }
    else if ( !*(_WORD *)a2 )
    {
LABEL_22:
      v11 = 0x8000000000000000LL;
      goto LABEL_26;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v54, n);
    v3 = v54;
    v11 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = 1LL;
        v13 = _rust_alloc(n, 1LL);
        if ( v13 )
        {
          v14 = (char *)v13;
          goto LABEL_24;
        }
      }
      alloc::raw_vec::handle_error(v12, v11);
    }
    v14 = (char *)&dword_0 + 1;
LABEL_24:
    v46 = v14;
    memcpy(v14, v3, v11);
    if ( 2 * v53 )
      _rust_dealloc(v3, v53, 1LL);
LABEL_26:
    v45 = v11;
    if ( !(v10 | (unsigned __int8)a2[2]) )
    {
      v18 = 0x8000000000000000LL;
      goto LABEL_35;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, dest[1], dest[2]);
    v3 = v54;
    v18 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v19 = 0LL;
      }
      else
      {
        v19 = 1LL;
        v20 = _rust_alloc(n, 1LL);
        if ( v20 )
        {
          v21 = (char *)v20;
          goto LABEL_33;
        }
      }
      alloc::raw_vec::handle_error(v19, v18);
    }
    v21 = (char *)&dword_0 + 1;
LABEL_33:
    v51 = v21;
    memcpy(v21, v3, v18);
    if ( 2 * v53 )
      _rust_dealloc(v3, v53, 1LL);
LABEL_35:
    v44 = v18;
    if ( !(v10 | (unsigned __int8)a2[4]) )
    {
      v22 = 0x8000000000000000LL;
      goto LABEL_44;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, dest[4], dest[5]);
    v3 = v54;
    v22 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v23 = 0LL;
      }
      else
      {
        v23 = 1LL;
        v24 = _rust_alloc(n, 1LL);
        if ( v24 )
        {
          v25 = (char *)v24;
          goto LABEL_42;
        }
      }
      alloc::raw_vec::handle_error(v23, v22);
    }
    v25 = (char *)&dword_0 + 1;
LABEL_42:
    v50 = v25;
    memcpy(v25, v3, v22);
    if ( 2 * v53 )
      _rust_dealloc(v3, v53, 1LL);
LABEL_44:
    v43 = v22;
    if ( !(v10 | (unsigned __int8)a2[3]) )
    {
      v26 = 0x8000000000000000LL;
      goto LABEL_53;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, dest[7], dest[8]);
    v3 = v54;
    v26 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v27 = 0LL;
      }
      else
      {
        v27 = 1LL;
        v28 = _rust_alloc(n, 1LL);
        if ( v28 )
        {
          v29 = (char *)v28;
          goto LABEL_51;
        }
      }
      alloc::raw_vec::handle_error(v27, v26);
    }
    v29 = (char *)&dword_0 + 1;
LABEL_51:
    v49 = v29;
    memcpy(v29, v3, v26);
    if ( 2 * v53 )
      _rust_dealloc(v3, v53, 1LL);
LABEL_53:
    v42 = v26;
    v30 = (unsigned __int8)a2[5];
    LOBYTE(v30) = v10 | v30;
    if ( !(_BYTE)v30 )
    {
      v31 = 0x8000000000000000LL;
      goto LABEL_62;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, dest[10], dest[11]);
    v3 = v54;
    v31 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v32 = 0LL;
      }
      else
      {
        v32 = 1LL;
        v33 = _rust_alloc(n, 1LL);
        if ( v33 )
        {
          v34 = (char *)v33;
          goto LABEL_60;
        }
      }
      alloc::raw_vec::handle_error(v32, v31);
    }
    v34 = (char *)&dword_0 + 1;
LABEL_60:
    v48 = v34;
    memcpy(v34, v3, v31);
    v30 = 2 * v53;
    if ( 2 * v53 )
      v30 = _rust_dealloc(v3, v53, 1LL);
LABEL_62:
    v41 = v31;
    if ( !((unsigned __int8)a2[8] | v10) )
    {
      v35 = 0x8000000000000000LL;
      goto LABEL_71;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, dest[13], dest[14]);
    v3 = v54;
    v35 = n;
    if ( n )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        v36 = 0LL;
      }
      else
      {
        v36 = 1LL;
        v37 = _rust_alloc(n, 1LL);
        if ( v37 )
        {
          v38 = (char *)v37;
          goto LABEL_69;
        }
      }
      alloc::raw_vec::handle_error(v36, v35);
    }
    v38 = (char *)&dword_0 + 1;
LABEL_69:
    v47 = v38;
    memcpy(v38, v3, v35);
    v30 = 2 * v53;
    if ( 2 * v53 )
      v30 = _rust_dealloc(v3, v53, 1LL);
LABEL_71:
    if ( a2[6] )
    {
      v39 = 7LL;
      v30 = _rust_alloc(7LL, 1LL);
      if ( !v30 )
        alloc::raw_vec::handle_error(1LL, 7LL);
      v3 = (void *)v30;
      *(_DWORD *)(v30 + 3) = 1853321070;
      *(_DWORD *)v30 = 1852534389;
      if ( !a2[7] )
        goto LABEL_77;
    }
    else
    {
      v39 = 0x8000000000000000LL;
      if ( !a2[7] )
      {
LABEL_77:
        *a1 = v45;
        a1[1] = (size_t)v46;
        a1[2] = v45;
        a1[3] = v44;
        a1[4] = (size_t)v51;
        a1[5] = v44;
        a1[6] = v43;
        a1[7] = (size_t)v50;
        a1[8] = v43;
        a1[9] = v42;
        a1[10] = (size_t)v49;
        a1[11] = v42;
        a1[12] = v41;
        a1[13] = (size_t)v48;
        a1[14] = v41;
        a1[15] = v35;
        a1[16] = (size_t)v47;
        a1[17] = v35;
        a1[18] = v39;
        a1[19] = (size_t)v3;
        a1[20] = 7LL;
        a1[21] = v52;
        a1[22] = v30;
        a1[23] = 7LL;
        core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(v57);
        return a1;
      }
    }
    v52 = 7LL;
    v30 = _rust_alloc(7LL, 1LL);
    if ( !v30 )
      alloc::raw_vec::handle_error(1LL, 7LL);
    *(_DWORD *)(v30 + 3) = 1853321070;
    *(_DWORD *)v30 = 1852534389;
    goto LABEL_77;
  }
  v5 = _rust_alloc(22LL, 1LL);
  if ( !v5 )
    alloc::raw_vec::handle_error(1LL, 22LL);
  v6 = v5;
  *(__m128i *)v5 = _mm_loadu_si128(&xmmword_18312);
  *(_QWORD *)(v5 + 14) = 0x656D616E206D6574LL;
  v7 = _rust_alloc(32LL, 8LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v8 = v7;
  *(_QWORD *)v7 = 22LL;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(v7 + 16) = 22LL;
  *(_DWORD *)(v7 + 24) = 1;
  if ( *(_QWORD *)v4 )
    (*(void (__fastcall **)(void *))v4)(v3);
  v9 = *(_QWORD *)(v4 + 8);
  if ( v9 )
    _rust_dealloc(v3, v9, *(_QWORD *)(v4 + 16));
  a1[1] = v8;
  a1[2] = (size_t)&off_D9D50;
  *a1 = 0x8000000000000001LL;
  return a1;
}
