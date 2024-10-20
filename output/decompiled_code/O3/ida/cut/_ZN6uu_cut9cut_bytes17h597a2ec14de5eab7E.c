__int64 __fastcall uu_cut::cut_bytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // bp
  __int64 v6; // rax
  void (__fastcall **v7)(__int64); // rdx
  __int64 v8; // rcx
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  void (__fastcall **v17)(__int64); // r15
  void (__fastcall *v18)(__int64); // rsi
  __int64 v19; // r14
  void (__fastcall **v20)(__int64); // r15
  void (__fastcall *v21)(__int64); // rsi
  unsigned __int8 v23; // [rsp+6h] [rbp-E2h] BYREF
  char v24; // [rsp+7h] [rbp-E1h] BYREF
  __int64 v25; // [rsp+8h] [rbp-E0h] BYREF
  void (__fastcall **v26)(__int64); // [rsp+10h] [rbp-D8h]
  __int64 v27; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-C0h]
  __int64 v30; // [rsp+30h] [rbp-B8h]
  __int64 v31; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-A8h]
  __int128 v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-88h]
  _QWORD v36[2]; // [rsp+68h] [rbp-80h] BYREF
  const char *v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h]
  __int64 *v39; // [rsp+88h] [rbp-60h]
  __int64 (__fastcall **v40)(); // [rsp+90h] [rbp-58h]
  __int64 v41; // [rsp+98h] [rbp-50h]
  char v42; // [rsp+A0h] [rbp-48h]
  _QWORD v43[8]; // [rsp+A8h] [rbp-40h] BYREF

  v43[0] = a2;
  v43[1] = a3;
  v5 = *(_BYTE *)(a4 + 40);
  v23 = v5;
  v6 = _rust_alloc(0x2000LL, 1LL);
  if ( !v6 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v31 = v6;
  v32 = 0x2000LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = a1;
  v25 = uu_cut::stdout_writer();
  v26 = v7;
  v8 = 1LL;
  if ( *(_QWORD *)a4 )
    v8 = *(_QWORD *)(a4 + 8);
  v9 = asc_19D36;
  if ( *(_QWORD *)a4 )
    v9 = *(const char **)a4;
  v36[0] = v43;
  v36[1] = &v25;
  v37 = v9;
  v38 = v8;
  v39 = (__int64 *)a4;
  v40 = (__int64 (__fastcall **)())&v23;
  v10 = bstr::io::BufReadExt::for_byte_record(&v31, v5, v36);
  if ( v10 )
  {
    v27 = v10;
    v28 = 0LL;
    v29 = 1LL;
    v30 = 0LL;
    v41 = 32LL;
    v42 = 3;
    v36[0] = 0LL;
    v37 = 0LL;
    v39 = &v28;
    v40 = &off_F0DF0;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v27, v36) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v24, &unk_F0E38, &off_F0E20);
    v11 = v28;
    v12 = v29;
    v13 = v30;
    v14 = _rust_alloc(32LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v15 = v14;
    *(_QWORD *)v14 = v11;
    *(_QWORD *)(v14 + 8) = v12;
    *(_QWORD *)(v14 + 16) = v13;
    *(_DWORD *)(v14 + 24) = 1;
    core::ptr::drop_in_place<std::io::error::Error>(v27);
    v16 = v25;
    v17 = v26;
    if ( *v26 )
      (*v26)(v25);
    v18 = v17[1];
    if ( v18 )
      _rust_dealloc(v16, v18, v17[2]);
    if ( v32 )
      _rust_dealloc(v31, v32, 1LL);
  }
  else
  {
    v19 = v25;
    v20 = v26;
    if ( *v26 )
      (*v26)(v25);
    v21 = v20[1];
    if ( v21 )
      _rust_dealloc(v19, v21, v20[2]);
    if ( v32 )
      _rust_dealloc(v31, v32, 1LL);
    return 0LL;
  }
  return v15;
}
