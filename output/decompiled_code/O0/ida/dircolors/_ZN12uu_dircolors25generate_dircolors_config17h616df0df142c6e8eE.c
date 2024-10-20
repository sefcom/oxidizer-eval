_OWORD *__fastcall uu_dircolors::generate_dircolors_config(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 i; // r15
  size_t v5; // rbx
  const void *v6; // r13
  __int64 v7; // r14
  void *v8; // r14
  __int64 v9; // rbx
  void *v10; // rbx
  __int64 v11; // rbp
  char **v12; // r15
  size_t v13; // rbx
  const void *v14; // r13
  __int64 v15; // r14
  void *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rbp
  char **v22; // r15
  size_t v23; // rbx
  const void *v24; // r13
  __int64 v25; // r14
  void *v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r14
  _OWORD *result; // rax
  __int128 v32; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v33; // [rsp+18h] [rbp-190h]
  char **v34; // [rsp+20h] [rbp-188h] BYREF
  __int64 v35; // [rsp+28h] [rbp-180h]
  _QWORD *v36; // [rsp+30h] [rbp-178h]
  __int64 v37; // [rsp+38h] [rbp-170h]
  __int64 v38; // [rsp+40h] [rbp-168h]
  void *src[2]; // [rsp+50h] [rbp-158h] BYREF
  size_t v40[2]; // [rsp+60h] [rbp-148h] BYREF
  void *v41[2]; // [rsp+70h] [rbp-138h] BYREF
  size_t v42[2]; // [rsp+80h] [rbp-128h] BYREF
  void *v43[2]; // [rsp+90h] [rbp-118h] BYREF
  size_t v44[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-F8h]
  char **v46; // [rsp+B8h] [rbp-F0h] BYREF
  char **v47; // [rsp+C0h] [rbp-E8h] BYREF
  char **v48; // [rsp+C8h] [rbp-E0h] BYREF
  char **v49; // [rsp+D0h] [rbp-D8h] BYREF
  char **v50; // [rsp+D8h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v52[4]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v53[4]; // [rsp+110h] [rbp-98h] BYREF
  __int128 v54; // [rsp+130h] [rbp-78h] BYREF
  size_t n; // [rsp+140h] [rbp-68h]
  __int128 v56; // [rsp+148h] [rbp-60h] BYREF
  size_t v57; // [rsp+158h] [rbp-50h]
  __int128 v58; // [rsp+160h] [rbp-48h] BYREF
  size_t v59; // [rsp+170h] [rbp-38h]

  v45 = a1;
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v32 + 1) = 1LL;
  v33 = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, 0LL, 484LL);
  v1 = (void *)(v33 + *((_QWORD *)&v32 + 1));
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28D24, v33 + *((_QWORD *)&v32 + 1), 1LL, 1LL, 484LL);
  memcpy(v1, &unk_28D24, 0x1E4uLL);
  v2 = v33 + 484;
  v33 = v2;
  if ( (unsigned __int64)(v32 - v2) <= 0xC )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v2, 13LL);
    v2 = v33;
  }
  v3 = *((_QWORD *)&v32 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28F08, *((_QWORD *)&v32 + 1) + v2, 1LL, 1LL, 13LL);
  qmemcpy((void *)(v3 + v2), "COLORTERM ?*\n", 13);
  v33 += 13LL;
  for ( i = 0LL; i != 50; i += 2LL )
  {
    v46 = &(&anon_fc8b0a57c72ccea5fed8d71b627fdd79_46_llvm_18322555434409866145)[i];
    v51[0] = &v46;
    v51[1] = <&T as core::fmt::Display>::fmt;
    v34 = &off_11D8C8;
    v35 = 2LL;
    v36 = v51;
    v37 = 1LL;
    v38 = 0LL;
    alloc::fmt::format::format_inner(&v54, &v34);
    *(_OWORD *)src = v54;
    v5 = n;
    v40[0] = n;
    v6 = (const void *)*((_QWORD *)&v54 + 1);
    if ( !*((_QWORD *)&v54 + 1) || (n & 0x8000000000000000LL) != 0LL )
LABEL_38:
      core::panicking::panic_nounwind(aUnsafePrecondi_10, 162LL);
    v7 = v33;
    if ( (__int64)v32 - v33 < n )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, n);
      v7 = v33;
    }
    v8 = (void *)(*((_QWORD *)&v32 + 1) + v7);
    core::intrinsics::copy_nonoverlapping::precondition_check(v6, v8, 1LL, 1LL, v5);
    memcpy(v8, v6, v5);
    v33 += v5;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v34, src);
    if ( v35 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v40, v34, v35, v36);
  }
  v9 = v33;
  if ( (unsigned __int64)(v32 - v33) <= 0x26D )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, 622LL);
    v9 = v33;
  }
  v10 = (void *)(*((_QWORD *)&v32 + 1) + v9);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28F15, v10, 1LL, 1LL, 622LL);
  memcpy(v10, &unk_28F15, 0x26EuLL);
  v33 += 622LL;
  v11 = 864LL;
  v12 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_96_llvm_18322555434409866145;
  do
  {
    v47 = v12;
    v48 = v12 + 4;
    v52[0] = &v47;
    v52[1] = <&T as core::fmt::Display>::fmt;
    v52[2] = &v48;
    v52[3] = <&T as core::fmt::Display>::fmt;
    v34 = (char **)&unk_11D898;
    v35 = 3LL;
    v36 = v52;
    v37 = 2LL;
    v38 = 0LL;
    alloc::fmt::format::format_inner(&v56, &v34);
    *(_OWORD *)v41 = v56;
    v13 = v57;
    v42[0] = v57;
    v14 = (const void *)*((_QWORD *)&v56 + 1);
    if ( !*((_QWORD *)&v56 + 1) || (v57 & 0x8000000000000000LL) != 0LL )
      goto LABEL_38;
    v15 = v33;
    if ( (__int64)v32 - v33 < v57 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, v57);
      v15 = v33;
    }
    v16 = (void *)(*((_QWORD *)&v32 + 1) + v15);
    core::intrinsics::copy_nonoverlapping::precondition_check(v14, v16, 1LL, 1LL, v13);
    memcpy(v16, v14, v13);
    v33 += v13;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v41);
    if ( v35 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v42, v34, v35, v36);
    v12 += 6;
    v11 -= 48LL;
  }
  while ( v11 );
  v17 = v33;
  if ( (unsigned __int64)(v32 - v33) <= 0x46 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, 71LL);
    v17 = v33;
  }
  v18 = *((_QWORD *)&v32 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_29183, *((_QWORD *)&v32 + 1) + v17, 1LL, 1LL, 71LL);
  qmemcpy((void *)(v18 + v17), "# List any file extensions like '.gz' or '.tar' that you would like ls\n", 71);
  v19 = v33 + 71;
  v33 = v19;
  if ( (unsigned __int64)(v32 - v19) <= 0x48 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v19, 73LL);
    v19 = v33;
  }
  v20 = *((_QWORD *)&v32 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_291CA, *((_QWORD *)&v32 + 1) + v19, 1LL, 1LL, 73LL);
  qmemcpy((void *)(v20 + v19), "# to color below. Put the extension, a space, and the color init string.\n", 73);
  v33 += 73LL;
  v21 = 4160LL;
  v22 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145;
  do
  {
    v49 = v22;
    v50 = v22 + 2;
    v53[0] = &v49;
    v53[1] = <&T as core::fmt::Display>::fmt;
    v53[2] = &v50;
    v53[3] = <&T as core::fmt::Display>::fmt;
    v34 = (char **)&unk_11D898;
    v35 = 3LL;
    v36 = v53;
    v37 = 2LL;
    v38 = 0LL;
    alloc::fmt::format::format_inner(&v58, &v34);
    *(_OWORD *)v43 = v58;
    v23 = v59;
    v44[0] = v59;
    v24 = (const void *)*((_QWORD *)&v58 + 1);
    if ( !*((_QWORD *)&v58 + 1) || (v59 & 0x8000000000000000LL) != 0LL )
      goto LABEL_38;
    v25 = v33;
    if ( (__int64)v32 - v33 < v59 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, v59);
      v25 = v33;
    }
    v26 = (void *)(*((_QWORD *)&v32 + 1) + v25);
    core::intrinsics::copy_nonoverlapping::precondition_check(v24, v26, 1LL, 1LL, v23);
    memcpy(v26, v24, v23);
    v33 += v23;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v43);
    if ( v35 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v44, v34, v35, v36);
    v22 += 4;
    v21 -= 32LL;
  }
  while ( v21 );
  v27 = v33;
  if ( (unsigned __int64)(v32 - v33) <= 0x45 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v33, 70LL);
    v27 = v33;
  }
  v28 = *((_QWORD *)&v32 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_29213, *((_QWORD *)&v32 + 1) + v27, 1LL, 1LL, 70LL);
  qmemcpy((void *)(v28 + v27), "# Subsequent TERM or COLORTERM entries, can be used to add / override\n", 70);
  v29 = v33 + 70;
  v33 = v29;
  if ( (unsigned __int64)(v32 - v29) <= 0x39 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v32, v29, 58LL);
    v29 = v33;
  }
  v30 = *((_QWORD *)&v32 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_29259, *((_QWORD *)&v32 + 1) + v29, 1LL, 1LL, 58LL);
  qmemcpy((void *)(v30 + v29), "# config specific to those matching environment variables.", 58);
  v33 += 58LL;
  result = (_OWORD *)v45;
  *(_QWORD *)(v45 + 16) = v33;
  *result = v32;
  return result;
}
