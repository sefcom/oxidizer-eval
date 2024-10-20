__int64 __fastcall uu_sort::KeyPosition::new(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 result; // rax
  char v21; // r12
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  char v35; // [rsp+Bh] [rbp-DDh] BYREF
  int v36; // [rsp+Ch] [rbp-DCh]
  char v37; // [rsp+10h] [rbp-D8h] BYREF
  char v38; // [rsp+11h] [rbp-D7h]
  __int64 v39; // [rsp+18h] [rbp-D0h]
  __int64 *v40; // [rsp+20h] [rbp-C8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+28h] [rbp-C0h]
  char *v42; // [rsp+30h] [rbp-B8h]
  __int64 (__fastcall *v43)(); // [rsp+38h] [rbp-B0h]
  __int64 v44; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+50h] [rbp-98h]
  char v47; // [rsp+58h] [rbp-90h]
  __int128 v48; // [rsp+60h] [rbp-88h] BYREF
  __int64 v49; // [rsp+70h] [rbp-78h]
  __int64 v50; // [rsp+80h] [rbp-68h]
  char **v51; // [rsp+88h] [rbp-60h] BYREF
  __int64 v52; // [rsp+90h] [rbp-58h]
  __int64 **v53; // [rsp+98h] [rbp-50h]
  __int64 v54; // [rsp+A0h] [rbp-48h]
  __int64 v55; // [rsp+A8h] [rbp-40h]

  v50 = a4;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = a2 + v8;
    if ( a3 - v8 > 0xF )
      break;
    if ( a3 == v8 )
      goto LABEL_15;
    v10 = 0LL;
    while ( *(_BYTE *)(v9 + v10) != 46 )
    {
      if ( a3 - v8 == ++v10 )
        goto LABEL_15;
    }
LABEL_11:
    v13 = v10 + v8 + 1;
    v8 += v10;
    if ( v8 < a3 && *(_BYTE *)(a2 + v8) == 46 )
      goto LABEL_27;
    v8 = v13;
    if ( v13 > a3 )
      goto LABEL_15;
  }
  v11 = core::slice::memchr::memchr_aligned(46LL, v9);
  if ( v11 == 1 )
  {
    v10 = v12;
    goto LABEL_11;
  }
  v13 = a3;
  if ( !v11 )
  {
LABEL_15:
    v8 = a3;
    v14 = 0LL;
    goto LABEL_16;
  }
LABEL_27:
  v36 = a5;
  v29 = v13;
  while ( 2 )
  {
    v30 = a2 + v29;
    if ( a3 - v29 <= 0xF )
    {
      if ( a3 == v29 )
        goto LABEL_42;
      v31 = 0LL;
      while ( *(_BYTE *)(v30 + v31) != 46 )
      {
        if ( a3 - v29 == ++v31 )
          goto LABEL_42;
      }
      goto LABEL_36;
    }
    v32 = core::slice::memchr::memchr_aligned(46LL, v30);
    if ( v32 == 1 )
    {
LABEL_36:
      v33 = v29 + v31;
      if ( v29 + v31 < a3 && *(_BYTE *)(a2 + v33) == 46 )
        goto LABEL_44;
      v29 += v31 + 1;
      if ( v29 > a3 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  if ( !v32 )
  {
LABEL_42:
    a3 -= v13;
    v14 = a2 + v13;
    goto LABEL_43;
  }
LABEL_44:
  v34 = v33 - v13;
  v14 = a2 + v13;
  a3 = v34;
LABEL_43:
  LOBYTE(a5) = v36;
LABEL_16:
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v37, a2, v8);
  if ( v37 )
  {
    v35 = v38;
    v44 = 0LL;
    v45 = a2;
    v46 = v8;
    v47 = 1;
    v40 = &v44;
    v41 = <os_display::Quoted as core::fmt::Display>::fmt;
    v42 = &v35;
    v43 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
    v51 = &off_192A88;
    v52 = 2LL;
    v55 = 0LL;
    v53 = &v40;
    v54 = 2LL;
    alloc::fmt::format::format_inner(&v48, &v51, v15, v16, v17, v18);
    v19 = v49;
    *(_OWORD *)(a1 + 8) = v48;
    goto LABEL_18;
  }
  v21 = a5;
  v22 = v39;
  if ( v39 )
  {
    v23 = v50;
    if ( v14 )
    {
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v37, v14, a3);
      if ( v37 )
      {
        v35 = v38;
        v44 = 0LL;
        v45 = v14;
        v46 = a3;
        v47 = 1;
        v40 = &v44;
        v41 = <os_display::Quoted as core::fmt::Display>::fmt;
        v42 = &v35;
        v43 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        v51 = &off_192AA8;
        v52 = 2LL;
        v55 = 0LL;
        v53 = &v40;
        v54 = 2LL;
        alloc::fmt::format::format_inner(&v48, &v51, v24, v25, v26, v27);
        v23 = *((_QWORD *)&v48 + 1);
        if ( (_QWORD)v48 != 0x8000000000000000LL )
        {
          v19 = v49;
          *(_OWORD *)(a1 + 8) = v48;
          goto LABEL_18;
        }
      }
      else
      {
        v23 = v39;
      }
    }
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = v23;
    *(_BYTE *)(a1 + 24) = v21;
    result = 0LL;
  }
  else
  {
    v19 = 24LL;
    v28 = (void *)_rust_alloc(24LL, 1LL);
    if ( !v28 )
      alloc::raw_vec::handle_error(1LL, 24LL);
    qmemcpy(v28, "field index can not be 0", 24);
    *(_QWORD *)(a1 + 8) = 24LL;
    *(_QWORD *)(a1 + 16) = v28;
LABEL_18:
    *(_QWORD *)(a1 + 24) = v19;
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
