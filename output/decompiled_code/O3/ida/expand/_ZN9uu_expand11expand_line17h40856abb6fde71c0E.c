__int64 __fastcall uu_expand::expand_line(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  char v9; // al
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  char **v13; // r8
  __int64 v14; // rax
  size_t v15; // rdx
  size_t v16; // r13
  __int64 v17; // r12
  void *v18; // rdi
  const void *v19; // rsi
  char v20; // cl
  _BOOL8 v21; // r13
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r12d
  int v29; // r12d
  unsigned __int64 v30; // rcx
  __int64 v31; // r13
  unsigned int v32; // edx
  _QWORD *v33; // rdi
  __int64 v34; // rsi
  __int64 result; // rax
  unsigned __int64 tabstop; // rax
  size_t v37; // r13
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rbx
  char v41; // [rsp+Ah] [rbp-9Eh]
  char v42; // [rsp+Bh] [rbp-9Dh]
  char v43; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v44; // [rsp+10h] [rbp-98h]
  char *v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+20h] [rbp-88h]
  unsigned __int64 v47; // [rsp+28h] [rbp-80h]
  char v48; // [rsp+34h] [rbp-74h]
  __int64 v49; // [rsp+38h] [rbp-70h] BYREF
  void *src; // [rsp+40h] [rbp-68h]
  size_t n; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v53; // [rsp+58h] [rbp-50h]
  __int64 v54; // [rsp+60h] [rbp-48h]
  _QWORD v55[8]; // [rsp+68h] [rbp-40h] BYREF

  v54 = a4;
  v53 = a3;
  v52 = a1;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v42 = *(_BYTE *)(a5 + 73);
    v41 = *(_BYTE *)(a5 + 72);
    v45 = *(char **)(a5 + 56);
    v47 = *(_QWORD *)(a5 + 64);
    v46 = *(_QWORD *)(v52 + 8);
    v43 = 1;
    v48 = *(_BYTE *)(a5 + 74);
    v44 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      v20 = *(_BYTE *)(v46 + v7);
      if ( !v42 )
      {
        v29 = 0;
        v24 = 1LL;
        if ( v20 == 9 )
        {
          v23 = 1LL;
          goto LABEL_39;
        }
        LOBYTE(v29) = v20 != 8;
        v28 = 2 * v29;
        goto LABEL_18;
      }
      v21 = v20 < 0;
      v22 = v21 + v7 + 1;
      v23 = 1LL;
      v24 = 1LL;
      if ( v22 > v6 )
        goto LABEL_3;
      v25 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              v7,
              v22,
              v46,
              v6,
              &off_11CF30);
      core::str::converts::from_utf8(&v49, v25, v26, v27);
      if ( v49 )
      {
        v24 = 1LL;
        v28 = 2;
LABEL_18:
        v23 = 1LL;
        if ( v28 != 1 )
          goto LABEL_19;
        goto LABEL_39;
      }
      v31 = v21 + 1;
      v55[0] = src;
      v55[1] = (char *)src + n;
      if ( !(unsigned int)core::str::validations::next_code_point(v55) )
        v32 = 1114112;
      if ( v32 == 8 )
        break;
      if ( v32 == 9 )
      {
        v28 = 1;
LABEL_37:
        v24 = 0LL;
        goto LABEL_38;
      }
      v24 = 1LL;
      v28 = 2;
      if ( v32 == 1114112 )
        goto LABEL_18;
      if ( v32 >= 0x7F )
      {
        if ( v32 < 0xA0 )
          goto LABEL_37;
        v24 = unicode_width::tables::charwidth::lookup_width(v32);
      }
      else if ( v32 <= 0x1F )
      {
        goto LABEL_37;
      }
LABEL_38:
      v23 = v31;
      if ( v28 != 1 )
      {
LABEL_19:
        if ( v28 == 2 )
        {
LABEL_3:
          v44 += v24;
          if ( v7 >= v6 )
            goto LABEL_59;
        }
        else
        {
          v30 = v44 - 1;
          if ( !v44 )
            v30 = 0LL;
          v44 = v30;
          if ( v7 >= v6 )
LABEL_59:
            core::panicking::panic_bounds_check(v7, v6, &off_11CF78);
        }
        v8 = v46;
        v9 = v43;
        if ( *(_BYTE *)(v46 + v7) != 32 )
          v9 = 0;
        v43 = v9;
        v10 = v23 + v7;
        v11 = v7;
        v12 = v6;
        v13 = &off_11CF90;
LABEL_7:
        v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, v10, v8, v12, v13);
        v16 = v15;
        v17 = a2[2];
        if ( v15 < *a2 - v17 )
        {
          v18 = (void *)(v17 + a2[1]);
          v19 = (const void *)v14;
LABEL_9:
          memcpy(v18, v19, v16);
          a2[2] = v17 + v16;
          goto LABEL_10;
        }
        v33 = a2;
        v34 = v14;
LABEL_33:
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v33, v34, v16);
        if ( result )
          return result;
        goto LABEL_10;
      }
LABEL_39:
      tabstop = uu_expand::next_tabstop(v53, v54, v44, v48);
      v16 = tabstop;
      v44 += tabstop;
      if ( (v43 & 1) == 0 && v41 )
      {
        v10 = v23 + v7;
        v11 = v7;
        v8 = v46;
        v12 = v6;
        v13 = &off_11CF48;
        goto LABEL_7;
      }
      if ( tabstop <= v47 )
      {
        if ( tabstop && tabstop < v47 && v45[tabstop] <= -65 )
          core::str::slice_error_fail(v45, v47, 0LL, tabstop, &off_11CF60);
        v17 = a2[2];
        if ( tabstop < *a2 - v17 )
        {
          v18 = (void *)(v17 + a2[1]);
          v19 = v45;
          goto LABEL_9;
        }
        v33 = a2;
        v34 = (__int64)v45;
        goto LABEL_33;
      }
      alloc::str::<impl str>::repeat(&v49, asc_1D0AB, 1LL, tabstop);
      v37 = n;
      v38 = a2[2];
      if ( n >= *a2 - v38 )
      {
        v39 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, src, n);
        if ( v39 )
        {
          v40 = v39;
          core::ptr::drop_in_place<alloc::string::String>(&v49);
          return v40;
        }
      }
      else
      {
        memcpy((void *)(v38 + a2[1]), src, n);
        a2[2] = v37 + v38;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v49);
LABEL_10:
      v7 += v23;
      if ( v7 >= v6 )
        goto LABEL_55;
    }
    v28 = 0;
    goto LABEL_37;
  }
LABEL_55:
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
  if ( !result )
  {
    alloc::vec::Vec<T,A>::truncate(v52, 0LL);
    return 0LL;
  }
  return result;
}
