_QWORD *__fastcall uu_dd::parseargs::parse_bytes_no_x(__int64 a1, void *a2, size_t a3, char *a4, size_t a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r15
  size_t v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  size_t v14; // r12
  __int64 v15; // r14
  void *v16; // r15
  void *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // kr00_8
  void *v21; // r13
  char *v24; // [rsp+18h] [rbp-190h] BYREF
  __int64 v25; // [rsp+20h] [rbp-188h]
  void *dest; // [rsp+28h] [rbp-180h]
  __int64 v27; // [rsp+30h] [rbp-178h]
  __int64 v28; // [rsp+38h] [rbp-170h]
  char v29; // [rsp+40h] [rbp-168h]
  void *src; // [rsp+48h] [rbp-160h]
  __int64 v31; // [rsp+50h] [rbp-158h] BYREF
  char *v32; // [rsp+58h] [rbp-150h]
  size_t v33; // [rsp+60h] [rbp-148h]
  char v34; // [rsp+68h] [rbp-140h]
  _OWORD v35[2]; // [rsp+70h] [rbp-138h] BYREF
  char *v36; // [rsp+98h] [rbp-110h]
  __int128 v37; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-F8h]
  _QWORD v39[2]; // [rsp+C8h] [rbp-E0h] BYREF
  _QWORD v40[4]; // [rsp+D8h] [rbp-D0h] BYREF
  __int16 v41; // [rsp+F8h] [rbp-B0h]
  char v42; // [rsp+FAh] [rbp-AEh]
  __int128 v43; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+110h] [rbp-98h]
  _QWORD v45[2]; // [rsp+118h] [rbp-90h] BYREF
  __int128 v46; // [rsp+128h] [rbp-80h]
  _QWORD v47[2]; // [rsp+138h] [rbp-70h] BYREF
  __int128 v48; // [rsp+148h] [rbp-60h]
  _QWORD v49[2]; // [rsp+158h] [rbp-50h] BYREF
  __int128 v50; // [rsp+168h] [rbp-40h]

  src = a2;
  v41 = 257;
  v42 = 0;
  v40[0] = 0LL;
  v40[2] = 0LL;
  LODWORD(v31) = 0;
  core::char::methods::encode_utf8_raw(99LL, &v31, 4LL);
  if ( v7 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255\x01",
      32LL,
      &v24,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_16_llvm_13186119769495240950,
      &anon_b8e768ed0ddf17f1539d76bb5aedca5a_47_llvm_9157631453777517788);
  v24 = a4;
  v25 = a5;
  dest = 0LL;
  v27 = a5;
  v29 = v7;
  v28 = (unsigned int)v31 | 0x6300000000LL;
  <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v31, &v24);
  v8 = v31;
  v36 = v32;
  v24 = a4;
  v25 = a5;
  dest = 0LL;
  v27 = a5;
  v29 = 1;
  v28 = 0x7700000077LL;
  <core::str::pattern::CharSearcher as core::str::pattern::ReverseSearcher>::next_match_back(&v31, &v24);
  v9 = v31;
  v10 = (size_t)v32;
  v24 = a4;
  v25 = a5;
  dest = 0LL;
  v27 = a5;
  v29 = 1;
  v28 = 0x6200000062LL;
  <core::str::pattern::CharSearcher as core::str::pattern::ReverseSearcher>::next_match_back(&v31, &v24);
  if ( v8 )
  {
    if ( !(v31 | v9) )
    {
      uu_dd::parseargs::parse_bytes_only(v45, a4, a5, (size_t)v36);
      v11 = v45[1];
      v12 = 1LL;
      if ( v45[0] != 14LL )
      {
        v13 = (_QWORD *)a1;
        *(_QWORD *)a1 = v45[0];
        *(_QWORD *)(a1 + 8) = v11;
        *(_OWORD *)(a1 + 16) = v46;
        return v13;
      }
LABEL_19:
      v13 = (_QWORD *)a1;
      v14 = a3;
      v20 = v11;
      v19 = v12 * v11;
      if ( !is_mul_ok(v12, v20) )
        goto LABEL_20;
      goto LABEL_29;
    }
LABEL_8:
    v14 = a3;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, a3, 0LL);
    v15 = v25;
    if ( !v24 )
    {
      v16 = dest;
      v17 = src;
      core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, a3);
      memcpy(v16, v17, a3);
      v13 = (_QWORD *)a1;
      *(_QWORD *)a1 = 7LL;
LABEL_22:
      v13[1] = v15;
      v13[2] = v16;
      v13[3] = v14;
      return v13;
    }
LABEL_31:
    alloc::raw_vec::handle_error(v15, dest);
  }
  if ( v9 )
  {
    if ( !v31 )
    {
      uu_dd::parseargs::parse_bytes_only(v47, a4, a5, v10);
      v11 = v47[1];
      v12 = 2LL;
      if ( v47[0] != 14LL )
      {
        v13 = (_QWORD *)a1;
        *(_QWORD *)a1 = v47[0];
        *(_QWORD *)(a1 + 8) = v11;
        *(_OWORD *)(a1 + 16) = v48;
        return v13;
      }
      goto LABEL_19;
    }
    goto LABEL_8;
  }
  if ( v31 )
  {
    uu_dd::parseargs::parse_bytes_only(v49, a4, a5, (size_t)v32);
    v11 = v49[1];
    v12 = 512LL;
    if ( v49[0] != 14LL )
    {
      v13 = (_QWORD *)a1;
      *(_QWORD *)a1 = v49[0];
      *(_QWORD *)(a1 + 8) = v11;
      *(_OWORD *)(a1 + 16) = v50;
      return v13;
    }
    goto LABEL_19;
  }
  uucore::parser::parse_size::Parser::parse(&v37, v40, a4, a5);
  if ( (_QWORD)v37 == 3LL )
  {
    if ( !*((_QWORD *)&v38 + 1) )
    {
      v11 = v38;
      *((_QWORD *)&v35[0] + 1) = v38;
      *(_QWORD *)&v35[0] = 3LL;
      v12 = 1LL;
      goto LABEL_19;
    }
    v31 = 0LL;
    v32 = a4;
    v33 = a5;
    v34 = 1;
    v39[0] = &v31;
    v39[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v24 = (char *)&anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    v25 = 2LL;
    v28 = 0LL;
    dest = v39;
    v27 = 1LL;
    core::option::Option<T>::map_or_else((char *)v35 + 8, 0LL, v18, &v24);
    *(_QWORD *)&v35[0] = 2LL;
    v13 = (_QWORD *)a1;
    v14 = a3;
LABEL_28:
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)v35 + 8);
    v19 = -1LL;
    if ( !is_mul_ok(1uLL, 0xFFFFFFFFFFFFFFFFLL) )
    {
LABEL_20:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, v14, 0LL);
      v15 = v25;
      if ( !v24 )
      {
        v16 = dest;
        v21 = src;
        core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, v14);
        memcpy(v16, v21, v14);
        *v13 = 8LL;
        goto LABEL_22;
      }
      goto LABEL_31;
    }
LABEL_29:
    v13[1] = v19;
    *v13 = 14LL;
    return v13;
  }
  v35[0] = v37;
  v35[1] = v38;
  v13 = (_QWORD *)a1;
  v14 = a3;
  if ( (unsigned __int64)v37 >= 2 )
    goto LABEL_28;
  <str as alloc::string::ToString>::to_string(&v43, src, a3);
  *(_QWORD *)a1 = 13LL;
  *(_QWORD *)(a1 + 24) = v44;
  *(_OWORD *)(a1 + 8) = v43;
  if ( *(_QWORD *)&v35[0] != 3LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)v35 + 8);
  return v13;
}
