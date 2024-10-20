        __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE *v11; // rax
  _BYTE *v12; // rbp
  __int64 v13; // rax
  _BYTE *v14; // rax
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 result; // rax
  _OWORD *v19; // rcx
  __int64 v20; // [rsp+8h] [rbp-120h] BYREF
  __int128 v21; // [rsp+10h] [rbp-118h]
  const char *v22; // [rsp+20h] [rbp-108h] BYREF
  __int64 v23; // [rsp+28h] [rbp-100h]
  __int64 **v24; // [rsp+30h] [rbp-F8h]
  __int64 v25; // [rsp+38h] [rbp-F0h]
  __int64 v26; // [rsp+40h] [rbp-E8h]
  __int64 v27; // [rsp+48h] [rbp-E0h]
  char v28; // [rsp+50h] [rbp-D8h]
  __int64 *v29; // [rsp+58h] [rbp-D0h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+60h] [rbp-C8h]
  __int128 **v31; // [rsp+68h] [rbp-C0h]
  __int64 v32; // [rsp+70h] [rbp-B8h]
  const char **v33; // [rsp+78h] [rbp-B0h]
  __int64 v34; // [rsp+80h] [rbp-A8h]
  __int128 v35; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+98h] [rbp-90h]
  __int64 v37; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-80h]
  __int128 *v39; // [rsp+B8h] [rbp-70h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+C0h] [rbp-68h]
  __int64 v41; // [rsp+C8h] [rbp-60h]
  __int64 v42; // [rsp+D0h] [rbp-58h]
  __int128 v43; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-40h]
  __int64 v45; // [rsp+F0h] [rbp-38h]

  v44 = a4;
  v45 = a1;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 1LL;
  v36 = 0LL;
  if ( *(_BYTE *)(a5 + 233) )
  {
    v9 = *(_QWORD *)(a2 + 72);
    if ( v9 == 3 )
    {
      core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a6);
      v9 = *(_QWORD *)(a2 + 72);
    }
    if ( v9 == 2 )
    {
      v10 = 1LL;
      v11 = (_BYTE *)_rust_alloc(1LL, 1LL);
      if ( !v11 )
        goto LABEL_37;
      v12 = v11;
      *v11 = 63;
      v20 = 1LL;
      *(_QWORD *)&v21 = v11;
      *((_QWORD *)&v21 + 1) = 1LL;
    }
    else
    {
      v39 = *(__int128 **)(a2 + 112);
      v29 = (__int64 *)&v39;
      v30 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v22 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      v23 = 1LL;
      v26 = 0LL;
      v24 = &v29;
      v25 = 1LL;
      alloc::fmt::format::format_inner(&v20, &v22);
      v10 = *((_QWORD *)&v21 + 1);
      v12 = (_BYTE *)v21;
    }
    *(_QWORD *)&v43 = v12;
    *((_QWORD *)&v43 + 1) = v10;
    v39 = &v43;
    v40 = <&T as core::fmt::Display>::fmt;
    v41 = a3;
    v42 = 0LL;
    v22 = (_BYTE *)(&dword_0 + 2);
    v24 = (__int64 **)(&dword_0 + 1);
    v25 = 1LL;
    v26 = 0LL;
    v27 = 32LL;
    v28 = 1;
    v29 = (__int64 *)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    v30 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v33 = &v22;
    v34 = 1LL;
    v31 = &v39;
    v32 = 2LL;
    alloc::fmt::format::format_inner(&v37, &v29);
    v29 = &v37;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = (const char *)&unk_1AC7A8;
    v23 = 2LL;
    v26 = 0LL;
    v24 = &v29;
    v25 = 1LL;
    if ( (unsigned __int8)core::fmt::write(&v35, &off_1AC0E8, &v22) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v22, &unk_1AC1A0, &off_1AC7C8);
    if ( v37 )
      _rust_dealloc(v38, v37, 1LL);
    if ( v20 )
      _rust_dealloc(v12, v20, 1LL);
  }
  if ( !*(_BYTE *)(a5 + 234) )
    goto LABEL_36;
  v13 = *(_QWORD *)(a2 + 72);
  if ( v13 == 3 )
  {
    core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a6);
    v13 = *(_QWORD *)(a2 + 72);
  }
  if ( v13 != 2 )
  {
    v15 = *(_BYTE *)(a5 + 241);
    if ( (*(_DWORD *)(a2 + 128) & 0xB000 | 0x4000) == 0x6000 )
    {
      v16 = 0LL;
      if ( !v15 )
        goto LABEL_23;
    }
    else
    {
      v16 = *(_QWORD *)(a2 + 168) << 9;
      if ( !v15 )
      {
LABEL_23:
        v17 = *(_QWORD *)(a5 + 216);
        if ( !v17 )
          core::panicking::panic_const::panic_const_div_by_zero(&off_1AC830);
        if ( (v17 | v16) >> 32 )
          v16 /= v17;
        else
          v16 = (unsigned int)v16 / (unsigned int)v17;
      }
    }
    uucore::features::format::human::human_readable(&v20, v16, v15);
    goto LABEL_28;
  }
  v14 = (_BYTE *)_rust_alloc(1LL, 1LL);
  if ( !v14 )
LABEL_37:
    alloc::raw_vec::handle_error(1LL, 1LL);
  *v14 = 63;
  v20 = 1LL;
  *(_QWORD *)&v21 = v14;
  *((_QWORD *)&v21 + 1) = 1LL;
LABEL_28:
  if ( *(_BYTE *)(a5 + 248) == 4 )
  {
    v29 = &v20;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = (const char *)&unk_1AC7A8;
    v23 = 2LL;
    v26 = 0LL;
    v24 = &v29;
    v25 = 1LL;
    if ( (unsigned __int8)core::fmt::write(&v35, &off_1AC0E8, &v22) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v22, &unk_1AC1A0, &off_1AC7E0);
  }
  else
  {
    v43 = v21;
    v39 = &v43;
    v40 = <&T as core::fmt::Display>::fmt;
    v41 = v44;
    v42 = 0LL;
    v22 = (_BYTE *)(&dword_0 + 2);
    v24 = (__int64 **)(&dword_0 + 1);
    v25 = 1LL;
    v26 = 0LL;
    v27 = 32LL;
    v28 = 1;
    v29 = (__int64 *)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    v30 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v33 = &v22;
    v34 = 1LL;
    v31 = &v39;
    v32 = 2LL;
    alloc::fmt::format::format_inner(&v37, &v29);
    v29 = &v37;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = (const char *)&unk_1AC7A8;
    v23 = 2LL;
    v26 = 0LL;
    v24 = &v29;
    v25 = 1LL;
    if ( (unsigned __int8)core::fmt::write(&v35, &off_1AC0E8, &v22) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v22, &unk_1AC1A0, &off_1AC7F8);
    if ( v37 )
      _rust_dealloc(v38, v37, 1LL);
  }
  if ( v20 )
    _rust_dealloc(v21, v20, 1LL);
LABEL_36:
  result = v36;
  v19 = (_OWORD *)v45;
  *(_QWORD *)(v45 + 16) = v36;
  *v19 = v35;
  return result;
}
