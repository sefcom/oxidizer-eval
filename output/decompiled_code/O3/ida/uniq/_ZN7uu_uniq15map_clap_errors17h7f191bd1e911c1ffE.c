__int64 __fastcall uu_uniq::map_clap_errors(__int64 a1)
{
  char *v1; // rax
  char *v2; // rax
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  char *v8; // rax
  char *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // bl
  __int64 v15; // rax
  bool v16; // bl
  __int64 v17; // rax
  bool v18; // bl
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // bp
  __int64 v22; // rax
  bool v23; // bl
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  char v29; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v30; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+18h] [rbp-A0h]
  __int64 v33; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  char *v37; // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  __int64 *v39; // [rsp+58h] [rbp-60h]
  __int64 (__fastcall **v40)(); // [rsp+60h] [rbp-58h]
  __int64 v41; // [rsp+68h] [rbp-50h]
  char v42; // [rsp+70h] [rbp-48h]
  char *v43; // [rsp+78h] [rbp-40h]
  char *v44; // [rsp+80h] [rbp-38h]

  v33 = a1;
  v1 = (char *)_rust_alloc(47LL, 1LL);
  if ( !v1 )
    alloc::raw_vec::handle_error(1LL, 47LL);
  qmemcpy(v1, "--group is mutually exclusive with -c/-d/-D/-u\n", 47);
  v36 = 47LL;
  v37 = v1;
  v38 = 47LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, 47LL);
  v2 = v37;
  v3 = v38;
  *(_OWORD *)&v37[v38 + 16] = xmmword_1AA40;
  *(_OWORD *)&v2[v3] = xmmword_1AA30;
  v44 = v2;
  *(_QWORD *)&v2[v3 + 31] = 0x2E6E6F6974616D72LL;
  v35 = v36;
  v4 = (char *)_rust_alloc(117LL, 1LL);
  if ( !v4 )
    alloc::raw_vec::handle_error(1LL, 117LL);
  qmemcpy(
    v4,
    "invalid argument 'badoption' for '--group'\n"
    "Valid arguments are:\n"
    "  - 'prepend'\n"
    "  - 'append'\n"
    "  - 'separate'\n"
    "  - 'both'\n",
    117);
  v36 = 117LL;
  v37 = v4;
  v38 = 117LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, 117LL);
  v5 = v37;
  v6 = v38;
  *(_OWORD *)&v37[v38 + 16] = xmmword_1AA40;
  *(_OWORD *)&v5[v6] = xmmword_1AA30;
  v43 = v5;
  *(_QWORD *)&v5[v6 + 31] = 0x2E6E6F6974616D72LL;
  v7 = v36;
  v8 = (char *)_rust_alloc(111LL, 1LL);
  v34 = v7;
  if ( !v8 )
    alloc::raw_vec::handle_error(1LL, 111LL);
  qmemcpy(
    v8,
    "invalid argument 'badoption' for '--all-repeated'\n"
    "Valid arguments are:\n"
    "  - 'none'\n"
    "  - 'prepend'\n"
    "  - 'separate'\n",
    111);
  v36 = 111LL;
  v37 = v8;
  v38 = 111LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, 111LL);
  v9 = v37;
  v10 = v38;
  *(_OWORD *)&v37[v38 + 16] = xmmword_1AA40;
  *(_OWORD *)&v9[v10] = xmmword_1AA30;
  *(_QWORD *)&v9[v10 + 31] = 0x2E6E6F6974616D72LL;
  v11 = v36;
  if ( *(_BYTE *)(v33 + 213) )
  {
    if ( *(_BYTE *)(v33 + 213) == 8 )
    {
      v12 = _rust_alloc(32LL, 8LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v13 = v12;
      *(_QWORD *)v12 = v35;
      *(_QWORD *)(v12 + 8) = v44;
      *(_QWORD *)(v12 + 16) = v3 + 39;
      *(_DWORD *)(v12 + 24) = 1;
      v14 = 1;
      if ( v11 )
        _rust_dealloc(v9, v11, 1LL);
      goto LABEL_9;
    }
    goto LABEL_52;
  }
  v15 = clap_builder::error::Error<F>::get(&v33, 5LL);
  if ( v15 )
  {
    v30 = 0LL;
    v31 = 1LL;
    v32 = 0LL;
    v41 = 32LL;
    v42 = 3;
    v36 = 0LL;
    v38 = 0LL;
    v39 = &v30;
    v40 = &off_F2A78;
    if ( (unsigned __int8)<clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v15, &v36) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v29, &unk_F2AC0, &off_F2AA8);
    if ( v32 == 9 )
    {
      v16 = (*(_QWORD *)v31 ^ 0x6F6974706F646162LL | *(unsigned __int8 *)(v31 + 8) ^ 0x6ELL) == 0;
      if ( !v30 )
      {
LABEL_22:
        if ( v16 )
        {
          v17 = clap_builder::error::Error<F>::get(&v33, 1LL);
          if ( v17 )
          {
            v30 = 0LL;
            v31 = 1LL;
            v32 = 0LL;
            v41 = 32LL;
            v42 = 3;
            v36 = 0LL;
            v38 = 0LL;
            v39 = &v30;
            v40 = &off_F2A78;
            if ( (unsigned __int8)<clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v17, &v36) )
              core::result::unwrap_failed(aADisplayImplem, 55LL, &v29, &unk_F2AC0, &off_F2AA8);
            v18 = v32 >= 7 && (*(_DWORD *)v31 ^ 0x72672D2D | *(_DWORD *)(v31 + 3) ^ 0x70756F72) == 0;
            if ( v30 )
              _rust_dealloc(v31, v30, 1LL);
            if ( v18 )
            {
              v19 = _rust_alloc(32LL, 8LL);
              if ( !v19 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v13 = v19;
              *(_QWORD *)v19 = v34;
              *(_QWORD *)(v19 + 8) = v43;
              *(_QWORD *)(v19 + 16) = v6 + 39;
              *(_DWORD *)(v19 + 24) = 1;
              if ( v11 )
                _rust_dealloc(v9, v11, 1LL);
LABEL_12:
              if ( v35 )
                _rust_dealloc(v44, v35, 1LL);
LABEL_14:
              core::ptr::drop_in_place<clap_builder::error::Error>(v33);
              return v13;
            }
          }
        }
        goto LABEL_34;
      }
    }
    else
    {
      v16 = 0;
      if ( !v30 )
        goto LABEL_22;
    }
    _rust_dealloc(v31, v30, 1LL);
    goto LABEL_22;
  }
LABEL_34:
  v20 = clap_builder::error::Error<F>::get(&v33, 5LL);
  if ( !v20 )
    goto LABEL_52;
  v30 = 0LL;
  v31 = 1LL;
  v32 = 0LL;
  v41 = 32LL;
  v42 = 3;
  v36 = 0LL;
  v38 = 0LL;
  v39 = &v30;
  v40 = &off_F2A78;
  if ( (unsigned __int8)<clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v20, &v36) )
    core::result::unwrap_failed(aADisplayImplem, 55LL, &v29, &unk_F2AC0, &off_F2AA8);
  if ( v32 != 9 )
  {
    v21 = 0;
    if ( !v30 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v21 = (*(_QWORD *)v31 ^ 0x6F6974706F646162LL | *(unsigned __int8 *)(v31 + 8) ^ 0x6ELL) == 0;
  if ( v30 )
LABEL_40:
    _rust_dealloc(v31, v30, 1LL);
LABEL_41:
  if ( v21 )
  {
    v22 = clap_builder::error::Error<F>::get(&v33, 1LL);
    if ( v22 )
    {
      v30 = 0LL;
      v31 = 1LL;
      v32 = 0LL;
      v41 = 32LL;
      v42 = 3;
      v36 = 0LL;
      v38 = 0LL;
      v39 = &v30;
      v40 = &off_F2A78;
      if ( (unsigned __int8)<clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v22, &v36) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, &v29, &unk_F2AC0, &off_F2AA8);
      v23 = v32 >= 0xE && (*(_QWORD *)v31 ^ 0x65722D6C6C612D2DLL | *(_QWORD *)(v31 + 6) ^ 0x6465746165706572LL) == 0;
      if ( v30 )
        _rust_dealloc(v31, v30, 1LL);
      if ( v23 )
      {
        v24 = _rust_alloc(32LL, 8LL);
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v13 = v24;
        *(_QWORD *)v24 = v11;
        *(_QWORD *)(v24 + 8) = v9;
        *(_QWORD *)(v24 + 16) = v10 + 39;
        *(_DWORD *)(v24 + 24) = 1;
        v14 = 0;
LABEL_9:
        if ( v34 )
          _rust_dealloc(v43, v34, 1LL);
        if ( v14 )
          goto LABEL_14;
        goto LABEL_12;
      }
    }
  }
LABEL_52:
  v25 = v33;
  v36 = v33;
  LODWORD(v37) = 1;
  v26 = _rust_alloc(16LL, 8LL);
  if ( !v26 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  v13 = v26;
  *(_QWORD *)v26 = v25;
  *(_DWORD *)(v26 + 8) = 1;
  if ( v11 )
    _rust_dealloc(v9, v11, 1LL);
  v27 = v35;
  if ( v34 )
    _rust_dealloc(v43, v34, 1LL);
  if ( v27 )
    _rust_dealloc(v44, v27, 1LL);
  return v13;
}
