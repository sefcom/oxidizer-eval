        __int64 a6)
{
  char *v6; // r12
  __int64 v7; // r13
  bool v10; // cf
  __int64 v11; // r13
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  char *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // rax
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-108h] BYREF
  __int64 v23; // [rsp+8h] [rbp-100h]
  __int128 v24; // [rsp+10h] [rbp-F8h]
  __int64 v25; // [rsp+20h] [rbp-E8h]
  __int128 v26; // [rsp+28h] [rbp-E0h]
  __int128 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  _QWORD v30[2]; // [rsp+58h] [rbp-B0h] BYREF
  size_t v31; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-40h]

  v34 = a5;
  v6 = *(char **)(a2 + 8);
  if ( !v6 || (v7 = *(_QWORD *)(a2 + 16), v7 < 0) )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  v32[1] = *(_QWORD *)(a2 + 8);
  v33 = v7;
  v32[0] = 0x8000000000000000LL;
  v30[1] = a3;
  v31 = a4;
  v30[0] = 0x8000000000000000LL;
  v10 = v7 < a4;
  v11 = v7 - a4;
  if ( v10 || bcmp(v6, a3, a4) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0LL;
    goto LABEL_6;
  }
  if ( a6 )
  {
    v14 = *(_QWORD *)(a6 + 8);
    if ( !v14 || (v14 & 7) != 0 || (v15 = *(_QWORD *)(a6 + 16), v15 >= 0x555555555555556LL) )
      core::panicking::panic_nounwind(anon_5881361bc50ddb8569a319ef7cd28565_32_llvm_17519153253422479168, 162LL);
    uu_env::debug_print_args(v14, v15);
  }
  v16 = &v6[a4];
  core::slice::<impl [T]>::split_at(
    v39,
    v16,
    v11,
    0LL,
    &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_69_llvm_11312083278200569487);
  v22 = 0LL;
  v23 = 1LL;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = v16;
  v25 = v11;
  v26 = v40;
  v27 = 0LL;
  v28 = 8LL;
  v29 = 0LL;
  uu_env::split_iterator::SplitIterator::split(&v35, &v22);
  if ( (_DWORD)v35 != 8 )
  {
    v22 = v35;
    v23 = v36;
    v24 = v37;
    v25 = v38;
    *(_QWORD *)&v19 = uu_env::parse_args_from_str::{{closure}}((__int64)&v22, v36, HIDWORD(v35), v38, v17, v18);
    goto LABEL_21;
  }
  v19 = v37;
  if ( v36 == 0x8000000000000000LL )
  {
LABEL_21:
    *(_OWORD *)a1 = v19;
    if ( v32[0] != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v22, v32);
      v21 = v23;
      if ( v23 )
        goto LABEL_19;
    }
    goto LABEL_6;
  }
  v22 = v37;
  v23 = v37;
  *(_QWORD *)&v24 = v36;
  *((_QWORD *)&v24 + 1) = v37 + 24LL * *((_QWORD *)&v37 + 1);
  alloc::vec::Vec<T,A>::extend_trusted(v34, &v22);
  *(_BYTE *)(a1 + 8) = 1;
  v20 = v32[0] == 0x8000000000000000LL;
  *(_QWORD *)a1 = 0LL;
  if ( !v20 )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v22, v32);
    v21 = v23;
    if ( v23 )
LABEL_19:
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v33, v22, v21, v24);
  }
LABEL_6:
  if ( v30[0] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v22, v30);
    if ( v23 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v31, v22, v23, v24);
  }
  return a1;
}
