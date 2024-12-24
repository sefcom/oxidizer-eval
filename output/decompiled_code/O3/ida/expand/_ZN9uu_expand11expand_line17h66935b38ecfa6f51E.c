        __int64 a6)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  char **v14; // r8
  __int64 v15; // rax
  size_t v16; // rdx
  size_t v17; // r13
  __int64 v18; // r12
  void *v19; // rdi
  const void *v20; // rsi
  char v21; // cl
  _BOOL8 v22; // r13
  unsigned __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r12d
  int v30; // r12d
  unsigned __int64 v31; // rcx
  __int64 v32; // r13
  unsigned int v33; // edx
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  __int64 result; // rax
  unsigned __int64 tabstop; // rax
  size_t v38; // r13
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rbx
  char v42; // [rsp+Ah] [rbp-9Eh]
  char v43; // [rsp+Bh] [rbp-9Dh]
  char v44; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v45; // [rsp+10h] [rbp-98h]
  char *v46; // [rsp+18h] [rbp-90h]
  __int64 v47; // [rsp+20h] [rbp-88h]
  unsigned __int64 v48; // [rsp+28h] [rbp-80h]
  unsigned int v49; // [rsp+34h] [rbp-74h]
  __int64 v50; // [rsp+38h] [rbp-70h] BYREF
  void *src; // [rsp+40h] [rbp-68h]
  size_t n; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v54; // [rsp+58h] [rbp-50h]
  __int64 v55; // [rsp+60h] [rbp-48h]
  _QWORD v56[8]; // [rsp+68h] [rbp-40h] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
  {
    v43 = *(_BYTE *)(a5 + 73);
    v42 = *(_BYTE *)(a5 + 72);
    v46 = *(char **)(a5 + 56);
    v48 = *(_QWORD *)(a5 + 64);
    v47 = *(_QWORD *)(v53 + 8);
    v44 = 1;
    v49 = *(unsigned __int8 *)(a5 + 74);
    v45 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      v21 = *(_BYTE *)(v47 + v8);
      if ( !v43 )
      {
        v30 = 0;
        v25 = 1LL;
        if ( v21 == 9 )
        {
          v24 = 1LL;
          goto LABEL_39;
        }
        LOBYTE(v30) = v21 != 8;
        v29 = 2 * v30;
        goto LABEL_18;
      }
      v22 = v21 < 0;
      v23 = v22 + v8 + 1;
      v24 = 1LL;
      v25 = 1LL;
      if ( v23 > v7 )
        goto LABEL_3;
      v26 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              v8,
              v23,
              v47,
              v7,
              &off_11EE10);
      core::str::converts::from_utf8(&v50, v26, v27, v28);
      if ( v50 )
      {
        v25 = 1LL;
        v29 = 2;
LABEL_18:
        v24 = 1LL;
        if ( v29 != 1 )
          goto LABEL_19;
        goto LABEL_39;
      }
      v32 = v22 + 1;
      v56[0] = src;
      v56[1] = (char *)src + n;
      if ( !(unsigned int)core::str::validations::next_code_point(v56) )
        v33 = 1114112;
      if ( v33 == 8 )
        break;
      if ( v33 == 9 )
      {
        v29 = 1;
LABEL_37:
        v25 = 0LL;
        goto LABEL_38;
      }
      v25 = 1LL;
      v29 = 2;
      if ( v33 == 1114112 )
        goto LABEL_18;
      if ( v33 >= 0x7F )
      {
        if ( v33 < 0xA0 )
          goto LABEL_37;
        v25 = unicode_width::tables::charwidth::lookup_width(v33);
      }
      else if ( v33 <= 0x1F )
      {
        goto LABEL_37;
      }
LABEL_38:
      v24 = v32;
      if ( v29 != 1 )
      {
LABEL_19:
        if ( v29 == 2 )
        {
LABEL_3:
          v45 += v25;
          if ( v8 >= v7 )
            goto LABEL_59;
        }
        else
        {
          v31 = v45 - 1;
          if ( !v45 )
            v31 = 0LL;
          v45 = v31;
          if ( v8 >= v7 )
LABEL_59:
            core::panicking::panic_bounds_check(v8, v7, &off_11EE58);
        }
        v9 = v47;
        v10 = v44;
        if ( *(_BYTE *)(v47 + v8) != 32 )
          v10 = 0;
        v44 = v10;
        v11 = v24 + v8;
        v12 = v8;
        v13 = v7;
        v14 = &off_11EE70;
LABEL_7:
        v15 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v11, v9, v13, v14);
        v17 = v16;
        v18 = a2[2];
        if ( v16 < *a2 - v18 )
        {
          v19 = (void *)(v18 + a2[1]);
          v20 = (const void *)v15;
LABEL_9:
          memcpy(v19, v20, v17);
          a2[2] = v18 + v17;
          goto LABEL_10;
        }
        v34 = a2;
        v35 = v15;
LABEL_33:
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v34, v35, v17);
        if ( result )
          return result;
        goto LABEL_10;
      }
LABEL_39:
      tabstop = uu_expand::next_tabstop(v54, v55, v45, v49, a5, a6);
      v17 = tabstop;
      v45 += tabstop;
      if ( (v44 & 1) == 0 && v42 )
      {
        v11 = v24 + v8;
        v12 = v8;
        v9 = v47;
        v13 = v7;
        v14 = &off_11EE28;
        goto LABEL_7;
      }
      if ( tabstop <= v48 )
      {
        if ( tabstop && tabstop < v48 && v46[tabstop] <= -65 )
          core::str::slice_error_fail(v46, v48, 0LL, tabstop, &off_11EE40);
        v18 = a2[2];
        if ( tabstop < *a2 - v18 )
        {
          v19 = (void *)(v18 + a2[1]);
          v20 = v46;
          goto LABEL_9;
        }
        v34 = a2;
        v35 = (__int64)v46;
        goto LABEL_33;
      }
      alloc::str::<impl str>::repeat(&v50, asc_1D32A, 1LL, tabstop);
      v38 = n;
      v39 = a2[2];
      if ( n >= *a2 - v39 )
      {
        v40 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, src, n);
        if ( v40 )
        {
          v41 = v40;
          core::ptr::drop_in_place<alloc::string::String>(&v50);
          return v41;
        }
      }
      else
      {
        memcpy((void *)(v39 + a2[1]), src, n);
        a2[2] = v38 + v39;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v50);
LABEL_10:
      v8 += v24;
      if ( v8 >= v7 )
        goto LABEL_55;
    }
    v29 = 0;
    goto LABEL_37;
  }
LABEL_55:
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
  if ( !result )
  {
    alloc::vec::Vec<T,A>::truncate(v53, 0LL);
    return 0LL;
  }
  return result;
}
