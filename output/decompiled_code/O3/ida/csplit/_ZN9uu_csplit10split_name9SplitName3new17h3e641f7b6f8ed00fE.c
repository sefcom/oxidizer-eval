__int64 __fastcall uu_csplit::split_name::SplitName::new(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  signed __int64 v7; // r13
  _WORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbp
  bool v13; // bp
  _BYTE *v14; // rbx
  unsigned int v15; // eax
  int v16; // ecx
  const void *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  void *v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 v24; // rsi
  const void *v25; // rdi
  _QWORD *v27; // [rsp+10h] [rbp-138h]
  void *src; // [rsp+18h] [rbp-130h]
  __int64 v29; // [rsp+20h] [rbp-128h]
  __int128 v30; // [rsp+28h] [rbp-120h] BYREF
  __int128 v31; // [rsp+38h] [rbp-110h] BYREF
  __int128 v32; // [rsp+48h] [rbp-100h]
  __int128 v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+68h] [rbp-E0h]
  __int64 v35; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+88h] [rbp-C0h]
  __int128 v38; // [rsp+98h] [rbp-B0h]
  __int128 v39; // [rsp+A8h] [rbp-A0h]
  __int64 v40; // [rsp+B8h] [rbp-90h]
  __int128 v41; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-78h]
  __int128 v43; // [rsp+E0h] [rbp-68h]
  __int64 v44; // [rsp+F0h] [rbp-58h]
  _BYTE v45[72]; // [rsp+100h] [rbp-48h] BYREF

  if ( *a2 == 0x8000000000000000LL )
  {
    v7 = 2LL;
    v8 = (_WORD *)_rust_alloc(2LL, 1LL);
    if ( !v8 )
      alloc::raw_vec::handle_error(1LL, 2LL);
    src = v8;
    *v8 = 30840;
    v29 = 2LL;
  }
  else
  {
    v29 = *a2;
    src = (void *)a2[1];
    v7 = a2[2];
  }
  v9 = *a4;
  v10 = 2LL;
  if ( *a4 != 0x8000000000000000LL )
  {
    v27 = a3;
    v11 = a4[1];
    v12 = a4[2];
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v30, v11, v12);
    if ( (_BYTE)v30 )
    {
      *(_QWORD *)(a1 + 8) = 8LL;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = v11;
      *(_QWORD *)(a1 + 32) = v12;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v13 = 0;
      a3 = v27;
      goto LABEL_30;
    }
    v10 = *((_QWORD *)&v30 + 1);
    if ( v9 )
      _rust_dealloc(v11, v9, 1LL);
    a3 = v27;
  }
  v35 = v10;
  v13 = *a3 != 0x8000000000000000LL;
  if ( *a3 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v36 = &v35;
    *((_QWORD *)&v36 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v30 = &off_275AE0;
    *((_QWORD *)&v30 + 1) = 2LL;
    *(_QWORD *)&v32 = 0LL;
    *(_QWORD *)&v31 = &v36;
    *((_QWORD *)&v31 + 1) = 1LL;
    v14 = v45;
    alloc::fmt::format::format_inner(v45, &v30);
  }
  else
  {
    v14 = a3;
  }
  v44 = *((_QWORD *)v14 + 2);
  v43 = *(_OWORD *)v14;
  v42 = v44;
  v41 = v43;
  uucore::features::format::Format<F>::parse(&v30, &v41);
  if ( (_QWORD)v30 == 0x8000000000000000LL )
  {
    v15 = DWORD2(v30);
    *(_QWORD *)(a1 + 8) = (DWORD2(v30) == 10) + 9LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v16 = 3;
    if ( v15 - 6 < 8 )
      v16 = v15 - 6;
    switch ( v16 )
    {
      case 1:
        core::ptr::drop_in_place<std::io::error::Error>(&v31);
        break;
      case 2:
      case 6:
        break;
      case 3:
        if ( v15 > 4 || v15 == 1 )
          goto LABEL_18;
        break;
      default:
LABEL_18:
        if ( (_QWORD)v31 )
          _rust_dealloc(*((_QWORD *)&v31 + 1), v31, 1LL);
        break;
    }
LABEL_30:
    if ( v29 )
      _rust_dealloc(src, v29, 1LL);
    v24 = *a3;
    if ( *a3 != 0x8000000000000000LL && !v13 && v24 )
    {
      v25 = (const void *)a3[1];
      goto LABEL_35;
    }
    return a1;
  }
  v39 = v33;
  v40 = v34;
  v37 = v31;
  v38 = v32;
  v36 = v30;
  if ( v7 )
  {
    v17 = src;
    if ( v7 < 0 )
    {
      v18 = 0LL;
    }
    else
    {
      v18 = 1LL;
      v19 = _rust_alloc(v7, 1LL);
      if ( v19 )
      {
        v20 = (void *)v19;
        goto LABEL_25;
      }
    }
    alloc::raw_vec::handle_error(v18, v7);
  }
  v20 = &dword_0 + 1;
  v17 = src;
LABEL_25:
  memcpy(v20, v17, v7);
  v21 = v37;
  v22 = v38;
  v23 = v39;
  *(_OWORD *)(a1 + 24) = v36;
  *(_OWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 56) = v22;
  *(_OWORD *)(a1 + 72) = v23;
  *(_QWORD *)(a1 + 88) = v40;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v7;
  v24 = v29;
  if ( v29 )
  {
    v25 = v17;
LABEL_35:
    _rust_dealloc(v25, v24, 1LL);
  }
  return a1;
}
