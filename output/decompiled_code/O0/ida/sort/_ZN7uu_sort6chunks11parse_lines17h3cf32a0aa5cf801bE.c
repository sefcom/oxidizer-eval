        __int64 a6)
{
  __int64 v8; // r15
  unsigned int v9; // ebp
  const void *v10; // rax
  size_t v11; // rdx
  size_t v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rcx
  char v19; // [rsp+Fh] [rbp-B9h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __int64 v22; // [rsp+20h] [rbp-A8h]
  __int64 v23; // [rsp+28h] [rbp-A0h]
  _QWORD *v24; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 *v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int128 v27; // [rsp+48h] [rbp-80h]
  size_t v28; // [rsp+58h] [rbp-70h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  size_t v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  size_t v32; // [rsp+78h] [rbp-50h]
  int v33; // [rsp+80h] [rbp-48h]
  unsigned int v34; // [rsp+84h] [rbp-44h]
  char v35; // [rsp+88h] [rbp-40h]
  __int16 v36; // [rsp+90h] [rbp-38h]

  v23 = a6;
  v8 = a1;
  v9 = a5;
  LODWORD(v24) = 0;
  v10 = (const void *)core::char::methods::encode_utf8_raw(a5, &v24, 4LL);
  v12 = a2 - v11;
  if ( a2 >= v11 )
  {
    v14 = bcmp(v10, (const void *)(a1 + v12), v11);
    v13 = 0LL;
    if ( !v14 )
      v13 = a1;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
    v8 = v13;
  else
    v12 = a2;
  if ( *(_QWORD *)(a3 + 16) )
    core::panicking::panic(aAssertionFaile_29, 34LL, &off_1D5478);
  if ( a4[2] )
    core::panicking::panic(aAssertionFaile_30, 49LL, &off_1D5490);
  if ( a4[5] )
    core::panicking::panic(aAssertionFaile_31, 48LL, &off_1D54A8);
  if ( a4[8] )
    core::panicking::panic(aAssertionFaile_32, 52LL, &off_1D54C0);
  v20 = 0LL;
  v21 = 8LL;
  v22 = 0LL;
  LODWORD(v24) = 0;
  core::char::methods::encode_utf8_raw(v9, &v24, 4LL);
  if ( v15 >= 0x100 )
    core::result::unwrap_failed(
      anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
      32LL,
      &v19,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v16 = (int)v24;
  v24 = a4;
  v25 = &v20;
  v26 = v23;
  v27 = 0LL;
  v28 = v12;
  v29 = v8;
  v30 = v12;
  v31 = 0LL;
  v32 = v12;
  v33 = v16;
  v34 = v9;
  v35 = v15;
  v36 = 1;
  alloc::vec::Vec<T,A>::extend_desugared(a3, &v24);
  if ( v20 )
  {
    if ( v20 >> 60 )
      core::panicking::panic_nounwind(anon_bbfa63c375300e8ec948f413288f2077_22_llvm_2503978504656084376, 69LL);
    result = 16 * v20;
    v24 = (_QWORD *)v21;
    v25 = (_QWORD *)&byte_8;
    v18 = 2LL;
  }
  else
  {
    v18 = 1LL;
    result = 0LL;
  }
  (&v24)[v18] = (_QWORD *)result;
  if ( v25 )
  {
    if ( v26 )
      return _rust_dealloc(v24, v26, v25);
  }
  return result;
}
