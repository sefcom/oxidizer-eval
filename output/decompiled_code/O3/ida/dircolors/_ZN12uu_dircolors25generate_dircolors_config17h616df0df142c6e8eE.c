_OWORD *__fastcall uu_dircolors::generate_dircolors_config(__int64 a1)
{
  __int64 v1; // r13
  size_t v2; // r14
  size_t v3; // r14
  size_t v4; // r14
  __int64 i; // r12
  __int64 v6; // rbx
  const void *v7; // rbp
  size_t v8; // r15
  size_t v9; // r15
  size_t v10; // r15
  __int64 v11; // r12
  char **v12; // r13
  __int64 v13; // rbx
  const void *v14; // rbp
  size_t v15; // r14
  __int64 v16; // rax
  size_t v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // r14
  size_t v21; // r14
  __int64 v22; // r12
  char **v23; // r13
  __int64 v24; // rbx
  const void *v25; // rbp
  size_t v26; // r15
  __int64 v27; // rax
  size_t v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  size_t v31; // r15
  _OWORD *result; // rax
  __int128 v33; // [rsp+8h] [rbp-100h] BYREF
  size_t v34; // [rsp+18h] [rbp-F0h]
  __int64 v35; // [rsp+20h] [rbp-E8h]
  char **v36; // [rsp+28h] [rbp-E0h] BYREF
  char **v37; // [rsp+30h] [rbp-D8h] BYREF
  char ***v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+40h] [rbp-C8h]
  char ***v40; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall *v41)(); // [rsp+50h] [rbp-B8h]
  char **v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char ****v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  _QWORD v48[2]; // [rsp+90h] [rbp-78h] BYREF
  size_t n; // [rsp+A0h] [rbp-68h]
  _QWORD v50[2]; // [rsp+A8h] [rbp-60h] BYREF
  size_t v51; // [rsp+B8h] [rbp-50h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-48h] BYREF
  size_t v53; // [rsp+D0h] [rbp-38h]

  v47 = a1;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 1LL;
  v34 = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, 0LL, 484LL);
  v1 = *((_QWORD *)&v33 + 1);
  v2 = v34;
  memcpy((void *)(v34 + *((_QWORD *)&v33 + 1)), aConfigurationF, 0x1E4uLL);
  v3 = v2 + 484;
  v34 = v3;
  if ( (unsigned __int64)v33 - v3 <= 0xC )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v3, 13LL);
    v1 = *((_QWORD *)&v33 + 1);
    v3 = v34;
  }
  qmemcpy((void *)(v1 + v3), "COLORTERM ?*\n", 13);
  v4 = v3 + 13;
  v34 = v4;
  for ( i = 0LL; i != 50; i += 2LL )
  {
    v36 = &(&anon_4406f472a8377c7ece58ca9d20f54484_79_llvm_13238753694568376422)[i];
    v38 = &v36;
    v39 = <&T as core::fmt::Display>::fmt;
    v42 = &off_F3278;
    v43 = 2LL;
    v46 = 0LL;
    v44 = &v38;
    v45 = 1LL;
    alloc::fmt::format::format_inner(v48, &v42);
    v6 = v48[0];
    v7 = (const void *)v48[1];
    v8 = n;
    if ( (unsigned __int64)v33 - v4 < n )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v4, n);
      v1 = *((_QWORD *)&v33 + 1);
      v4 = v34;
    }
    memcpy((void *)(v1 + v4), v7, v8);
    v9 = v34 + v8;
    v34 = v9;
    if ( v6 )
      _rust_dealloc(v7, v6, 1LL);
    v4 = v9;
  }
  if ( (unsigned __int64)v33 - v9 <= 0x26D )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v9, 622LL);
    v9 = v34;
  }
  v35 = *((_QWORD *)&v33 + 1);
  memcpy((void *)(*((_QWORD *)&v33 + 1) + v9), aBelowAreTheCol, 0x26EuLL);
  v10 = v9 + 622;
  v34 = v10;
  v11 = 864LL;
  v12 = &anon_4406f472a8377c7ece58ca9d20f54484_129_llvm_13238753694568376422;
  do
  {
    v37 = v12;
    v36 = v12 + 4;
    v38 = &v37;
    v39 = <&T as core::fmt::Display>::fmt;
    v40 = &v36;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = (char **)&unk_F3248;
    v43 = 3LL;
    v46 = 0LL;
    v44 = &v38;
    v45 = 2LL;
    alloc::fmt::format::format_inner(v50, &v42);
    v13 = v50[0];
    v14 = (const void *)v50[1];
    v15 = v51;
    if ( (unsigned __int64)v33 - v10 >= v51 )
    {
      v16 = v35;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v10, v51);
      v16 = *((_QWORD *)&v33 + 1);
      v10 = v34;
    }
    v35 = v16;
    memcpy((void *)(v16 + v10), v14, v15);
    v17 = v34 + v15;
    v34 = v17;
    if ( v13 )
      _rust_dealloc(v14, v13, 1LL);
    v12 += 6;
    v10 = v17;
    v11 -= 48LL;
  }
  while ( v11 );
  v18 = v33;
  if ( (unsigned __int64)v33 - v17 <= 0x46 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v17, 71LL);
    v18 = v33;
    v17 = v34;
  }
  v19 = *((_QWORD *)&v33 + 1);
  *(_OWORD *)(*((_QWORD *)&v33 + 1) + v17 + 48) = unk_22F73;
  qmemcpy((void *)(v19 + v17), "# List any file extensions like '.gz' or '.tar' ", 48);
  *(_QWORD *)(v19 + v17 + 63) = 0xA736C20656B696CLL;
  v20 = v17 + 71;
  v34 = v20;
  if ( v18 - v20 <= 0x48 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v20, 73LL);
    v19 = *((_QWORD *)&v33 + 1);
    v20 = v34;
  }
  v35 = v19;
  qmemcpy((void *)(v19 + v20), "# to color below. Put the extension, a space, and the color init string.\n", 73);
  v21 = v20 + 73;
  v34 = v21;
  v22 = 4160LL;
  v23 = &anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422;
  do
  {
    v37 = v23;
    v36 = v23 + 2;
    v38 = &v37;
    v39 = <&T as core::fmt::Display>::fmt;
    v40 = &v36;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = (char **)&unk_F3248;
    v43 = 3LL;
    v46 = 0LL;
    v44 = &v38;
    v45 = 2LL;
    alloc::fmt::format::format_inner(v52, &v42);
    v24 = v52[0];
    v25 = (const void *)v52[1];
    v26 = v53;
    if ( (unsigned __int64)v33 - v21 >= v53 )
    {
      v27 = v35;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v21, v53);
      v27 = *((_QWORD *)&v33 + 1);
      v21 = v34;
    }
    v35 = v27;
    memcpy((void *)(v27 + v21), v25, v26);
    v28 = v34 + v26;
    v34 = v28;
    if ( v24 )
      _rust_dealloc(v25, v24, 1LL);
    v23 += 4;
    v21 = v28;
    v22 -= 32LL;
  }
  while ( v22 );
  v29 = v33;
  if ( (unsigned __int64)v33 - v28 <= 0x45 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v28, 70LL);
    v29 = v33;
    v28 = v34;
  }
  v30 = *((_QWORD *)&v33 + 1);
  *(_OWORD *)(*((_QWORD *)&v33 + 1) + v28 + 48) = unk_23003;
  qmemcpy((void *)(v30 + v28), "# Subsequent TERM or COLORTERM entries, can be u", 48);
  *(_QWORD *)(v30 + v28 + 62) = 0xA65646972726576LL;
  v31 = v28 + 70;
  v34 = v31;
  if ( v29 - v31 <= 0x39 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v33, v31, 58LL);
    v30 = *((_QWORD *)&v33 + 1);
    v31 = v34;
  }
  qmemcpy((void *)(v30 + v31), "# config specific to those matching environment variables.", 58);
  result = (_OWORD *)v47;
  *(_QWORD *)(v47 + 16) = v31 + 58;
  *result = v33;
  return result;
}
