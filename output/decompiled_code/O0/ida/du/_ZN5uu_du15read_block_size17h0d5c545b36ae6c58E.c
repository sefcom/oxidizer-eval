__int64 *__fastcall uu_du::read_block_size(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r14
  void (__fastcall *v10)(__int64 *, __int64, _QWORD); // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r12
  void (__fastcall *v14)(__int64 *, __int64, _QWORD); // rbp
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v21; // [rsp+10h] [rbp-188h] BYREF
  __int64 v22; // [rsp+18h] [rbp-180h] BYREF
  __int64 v23; // [rsp+20h] [rbp-178h]
  __int64 v24; // [rsp+28h] [rbp-170h]
  __int64 v25; // [rsp+30h] [rbp-168h] BYREF
  __int64 v26; // [rsp+38h] [rbp-160h]
  __int128 v27; // [rsp+40h] [rbp-158h]
  __int64 *v28; // [rsp+50h] [rbp-148h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+58h] [rbp-140h]
  void *v30; // [rsp+60h] [rbp-138h] BYREF
  __int64 v31; // [rsp+68h] [rbp-130h]
  __int128 v32; // [rsp+70h] [rbp-128h]
  __int64 v33; // [rsp+80h] [rbp-118h]
  __int64 v34; // [rsp+90h] [rbp-108h] BYREF
  __int64 v35; // [rsp+98h] [rbp-100h]
  __int64 v36; // [rsp+A0h] [rbp-F8h]
  char v37; // [rsp+A8h] [rbp-F0h]
  _QWORD v38[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-D8h]
  __int16 v40; // [rsp+D0h] [rbp-C8h]
  char v41; // [rsp+D2h] [rbp-C6h]
  __int64 v42; // [rsp+D8h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-B8h]
  __int128 v44; // [rsp+F0h] [rbp-A8h]
  void *v45; // [rsp+108h] [rbp-90h]
  _QWORD v46[7]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v47; // [rsp+148h] [rbp-50h] BYREF
  _QWORD v48[9]; // [rsp+150h] [rbp-48h] BYREF

  v3 = a1;
  if ( a2 )
  {
    v40 = 0;
    v41 = 0;
    v38[0] = 0LL;
    v39 = 0LL;
    uucore::parser::parse_size::Parser::parse(&v25, v38, a2, a3);
    v5 = v25;
    if ( v25 == 3 )
    {
      if ( !*((_QWORD *)&v27 + 1) )
      {
        v6 = v27;
        v7 = 0LL;
LABEL_33:
        a1[1] = v6;
        *a1 = v7;
        return v3;
      }
      v34 = 0LL;
      v35 = a2;
      v36 = a3;
      v37 = 1;
      v28 = &v34;
      v29 = <os_display::Quoted as core::fmt::Display>::fmt;
      v30 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
      v31 = 2LL;
      *(_QWORD *)&v32 = &v28;
      *((_QWORD *)&v32 + 1) = 1LL;
      v33 = 0LL;
      alloc::fmt::format::format_inner(&v42, &v30);
      v18 = v42;
      v44 = v43;
      v5 = 2LL;
    }
    else
    {
      v18 = v26;
      v44 = v27;
    }
    v30 = (void *)v5;
    v31 = v18;
    v32 = v44;
    v7 = uu_du::read_block_size::{{closure}}(a2, a3, &v30);
    goto LABEL_33;
  }
  v45 = &unk_2DE12;
  v8 = v46;
  v46[0] = 13LL;
  v46[1] = aBlockSize_0;
  v46[2] = 10LL;
  v46[3] = aBlocksize;
  v46[4] = 9LL;
  v46[6] = 3LL;
  v9 = 1LL;
  v10 = (void (__fastcall *)(__int64 *, __int64, _QWORD))std::env::_var;
  while ( 1 )
  {
    v46[5] = v9;
    if ( (unsigned __int64)(v9 - 1) >= 3 )
      core::panicking::panic_nounwind(anon_a41ba54122c99b21b4a0fdce4f788f47_61_llvm_960596293609237022, 97LL);
    v11 = *(v8 - 1);
    if ( !v11 )
    {
LABEL_26:
      std::env::_var(&v47, aPosixlyCorrect, 15LL);
      if ( v47 )
      {
        v3 = a1;
        if ( v48[0] != 0x8000000000000000LL )
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v48);
        a1[1] = 1024LL;
        *a1 = 0LL;
      }
      else
      {
        v3 = a1;
        if ( v48[0] )
          _rust_dealloc(v48[1], v48[0], 1LL);
        a1[1] = 512LL;
        *a1 = 0LL;
      }
      return v3;
    }
    v10(&v21, v11, *v8);
    v12 = v22;
    if ( v21 )
    {
      if ( v22 == 0x8000000000000000LL )
        goto LABEL_7;
      goto LABEL_6;
    }
    v13 = v23;
    if ( !v23 || (v14 = v10, v15 = v24, v24 < 0) )
      core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
    v40 = 0;
    v41 = 0;
    v38[0] = 0LL;
    v39 = 0LL;
    uucore::parser::parse_size::Parser::parse(&v25, v38, v23, v24);
    if ( v25 == 3 )
      break;
    v16 = v26;
    v17 = v27;
LABEL_19:
    v10 = v14;
    if ( v16 )
      _rust_dealloc(v17, v16, 1LL);
    if ( v12 )
      _rust_dealloc(v13, v12, 1LL);
    if ( !v21 || v22 == 0x8000000000000000LL )
      goto LABEL_7;
LABEL_6:
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
LABEL_7:
    ++v9;
    v8 += 2;
    if ( v9 == 4 )
      goto LABEL_26;
  }
  if ( *((_QWORD *)&v27 + 1) )
  {
    v34 = 0LL;
    v35 = v13;
    v36 = v15;
    v37 = 1;
    v28 = &v34;
    v29 = <os_display::Quoted as core::fmt::Display>::fmt;
    v30 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    v31 = 2LL;
    *(_QWORD *)&v32 = &v28;
    *((_QWORD *)&v32 + 1) = 1LL;
    v33 = 0LL;
    alloc::fmt::format::format_inner(&v42, &v30);
    v16 = v42;
    v17 = v43;
    goto LABEL_19;
  }
  v3 = a1;
  a1[1] = v27;
  *a1 = 0LL;
  if ( v12 )
    _rust_dealloc(v13, v12, 1LL);
  if ( v21 && v22 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
  return v3;
}
