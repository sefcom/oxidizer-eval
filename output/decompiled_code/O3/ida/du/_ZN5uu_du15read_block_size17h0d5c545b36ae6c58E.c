__int64 *__fastcall uu_du::read_block_size(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  const char *v11; // rbx
  __int64 v12; // r14
  const char *v13; // r12
  __int64 v14; // r13
  const char *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *v19; // [rsp+8h] [rbp-190h]
  const char *v20; // [rsp+10h] [rbp-188h] BYREF
  __int64 v21; // [rsp+18h] [rbp-180h]
  const char *v22; // [rsp+20h] [rbp-178h]
  __int64 v23; // [rsp+28h] [rbp-170h]
  const char *v24; // [rsp+30h] [rbp-168h]
  __int64 v25; // [rsp+38h] [rbp-160h]
  __int64 v26; // [rsp+40h] [rbp-158h]
  __int64 v27; // [rsp+48h] [rbp-150h]
  __int128 v28; // [rsp+50h] [rbp-148h] BYREF
  __int128 v29; // [rsp+60h] [rbp-138h]
  __int128 v30; // [rsp+70h] [rbp-128h] BYREF
  __int128 v31; // [rsp+80h] [rbp-118h]
  _QWORD v32[2]; // [rsp+98h] [rbp-100h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-F0h]
  char v34; // [rsp+B0h] [rbp-E8h]
  __int16 v35; // [rsp+B8h] [rbp-E0h]
  char v36; // [rsp+BAh] [rbp-DEh]
  _QWORD v37[2]; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD *v38; // [rsp+D0h] [rbp-C8h]
  __int64 v39; // [rsp+D8h] [rbp-C0h]
  __int64 v40; // [rsp+E0h] [rbp-B8h]
  int v41; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-A0h]
  __int64 v43; // [rsp+100h] [rbp-98h]
  __int64 v44; // [rsp+108h] [rbp-90h]
  __int64 v45; // [rsp+118h] [rbp-80h] BYREF
  __int64 v46; // [rsp+120h] [rbp-78h]
  __int64 v47; // [rsp+128h] [rbp-70h]
  __int64 v48; // [rsp+130h] [rbp-68h]
  _QWORD *v49; // [rsp+138h] [rbp-60h] BYREF
  _QWORD v50[3]; // [rsp+140h] [rbp-58h] BYREF
  _QWORD v51[8]; // [rsp+158h] [rbp-40h] BYREF

  v3 = a1;
  if ( a2 )
  {
    LOWORD(v40) = 0;
    BYTE2(v40) = 0;
    v37[0] = 0LL;
    v38 = 0LL;
    uucore::parser::parse_size::Parser::parse(&v28, v37, a2, a3);
    if ( (_DWORD)v28 == 3 )
    {
      if ( *((_QWORD *)&v29 + 1) )
      {
        v32[0] = 0LL;
        v32[1] = a2;
        v33 = a3;
        v34 = 1;
        v49 = v32;
        v50[0] = <os_display::Quoted as core::fmt::Display>::fmt;
        v20 = (const char *)&anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
        v21 = 2LL;
        v24 = 0LL;
        v22 = (const char *)&v49;
        v23 = 1LL;
        alloc::fmt::format::format_inner((char *)&v30 + 8, &v20);
        *(_QWORD *)&v30 = 2LL;
      }
      else
      {
        *((_QWORD *)&v30 + 1) = v29;
        *(_QWORD *)&v30 = 3LL;
      }
    }
    else
    {
      v31 = v29;
      v30 = v28;
    }
    v12 = *((_QWORD *)&v30 + 1);
    if ( (_DWORD)v30 == 3 )
    {
      a1[1] = *((_QWORD *)&v30 + 1);
      *a1 = 0LL;
    }
    else
    {
      v19 = (__int64 *)v31;
      uu_du::format_error_message(&v20, &v30, a2, a3, aBlockSize_1, 10LL);
      v13 = v20;
      v14 = v21;
      v15 = v22;
      v16 = _rust_alloc(32LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v17 = v16;
      *(_QWORD *)v16 = v13;
      *(_QWORD *)(v16 + 8) = v14;
      *(_QWORD *)(v16 + 16) = v15;
      *(_DWORD *)(v16 + 24) = 1;
      if ( v12 )
        _rust_dealloc(v19, v12, 1LL);
      *a1 = v17;
      a1[1] = (__int64)&off_134788;
    }
    return v3;
  }
  v19 = a1;
  v20 = aDuBlockSize;
  v21 = 13LL;
  v22 = aBlockSize_0;
  v23 = 10LL;
  v24 = aBlocksize;
  v25 = 9LL;
  v26 = 0LL;
  v27 = 3LL;
  v5 = 1LL;
  while ( 1 )
  {
    std::env::_var(&v45, (&v19)[v5], (&v20)[v5]);
    v6 = v46;
    if ( !v45 )
      break;
    if ( !(2 * v46) )
      goto LABEL_7;
    v7 = v47;
LABEL_6:
    _rust_dealloc(v7, v6, 1LL);
LABEL_7:
    v5 += 2LL;
    if ( v5 == 7 )
    {
      std::env::_var(&v20, aPosixlyCorrect, 15LL);
      v11 = v20;
      if ( v20 && v21 == 0x8000000000000000LL )
      {
        v3 = v19;
      }
      else
      {
        v3 = v19;
        if ( v21 )
          _rust_dealloc(v22, v21, 1LL);
        if ( !v11 )
        {
          v3[1] = 512LL;
          *v3 = 0LL;
          return v3;
        }
      }
      v3[1] = 1024LL;
      *v3 = 0LL;
      return v3;
    }
  }
  v7 = v47;
  v8 = v48;
  v35 = 0;
  v36 = 0;
  v32[0] = 0LL;
  v33 = 0LL;
  uucore::parser::parse_size::Parser::parse(&v41, v32, v47, v48);
  if ( v41 != 3 )
  {
    v9 = v42;
    v10 = v43;
    if ( !v42 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v44 )
  {
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = v7;
    *(_QWORD *)&v29 = v8;
    BYTE8(v29) = 1;
    v51[0] = &v28;
    v51[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v37[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    v37[1] = 2LL;
    v40 = 0LL;
    v38 = v51;
    v39 = 1LL;
    alloc::fmt::format::format_inner(v50, v37);
    v9 = v50[0];
    v10 = v50[1];
    if ( !v50[0] )
    {
LABEL_17:
      if ( !v6 )
        goto LABEL_7;
      goto LABEL_6;
    }
LABEL_16:
    _rust_dealloc(v10, v9, 1LL);
    goto LABEL_17;
  }
  v3 = v19;
  v19[1] = v43;
  *v3 = 0LL;
  if ( v6 )
    _rust_dealloc(v7, v6, 1LL);
  return v3;
}
