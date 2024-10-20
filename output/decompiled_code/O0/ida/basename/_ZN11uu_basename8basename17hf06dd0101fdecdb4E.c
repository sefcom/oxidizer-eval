_QWORD *__fastcall uu_basename::basename(_QWORD *a1, size_t a2, char *a3, void *a4, size_t a5)
{
  _QWORD *v6; // rbx
  char *v7; // rax
  size_t v8; // rcx
  char *v9; // rbp
  int v10; // edx
  char *v11; // rbp
  char v12; // al
  void *v13; // r14
  void *v14; // r15
  size_t v15; // r13
  char v16; // r12
  char *v17; // r15
  size_t v18; // rbx
  char *v19; // r13
  __int64 v20; // r14
  unsigned __int8 v21; // r12
  __int64 v22; // rdx
  char *v23; // rbp
  size_t v24; // rbx
  char *v25; // rcx
  int v26; // eax
  size_t v28; // [rsp+8h] [rbp-E0h] BYREF
  void *src; // [rsp+10h] [rbp-D8h]
  size_t v30; // [rsp+18h] [rbp-D0h] BYREF
  size_t v31; // [rsp+20h] [rbp-C8h]
  __int64 v32; // [rsp+28h] [rbp-C0h]
  char *v33; // [rsp+30h] [rbp-B8h]
  __int64 v34; // [rsp+38h] [rbp-B0h]
  _QWORD *v35; // [rsp+40h] [rbp-A8h]
  void *s1; // [rsp+48h] [rbp-A0h]
  size_t n; // [rsp+50h] [rbp-98h]
  size_t *v38; // [rsp+58h] [rbp-90h]
  char v39[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v40; // [rsp+68h] [rbp-80h]
  __int64 v41; // [rsp+70h] [rbp-78h]
  _BYTE v42[112]; // [rsp+78h] [rbp-70h] BYREF

  n = a5;
  s1 = a4;
  v6 = a1;
  v7 = &a3[a2];
  v28 = a2;
  src = a3;
  v30 = a2;
  v31 = (size_t)&a3[a2];
  v32 = 0LL;
  v8 = a2;
  do
  {
    v9 = &v7[-v8];
    if ( (unsigned __int64)v7 >= v8 )
    {
      if ( !(unsigned int)core::str::validations::next_code_point_reverse(&v30) )
        goto LABEL_10;
      if ( (v10 ^ 0xD800u) - 2048 >= 0x10F800 )
        core::panicking::panic_nounwind(aUnsafePrecondi_10, 57LL);
      v8 = v30;
      v7 = (char *)v31;
      if ( v31 >= v30 )
        continue;
    }
    core::panicking::panic_nounwind(aUnsafePrecondi, 71LL);
  }
  while ( v10 == 47 );
  if ( v10 == 1114112 )
    goto LABEL_10;
  v11 = &v9[v32];
  if ( v11 > a3 )
    core::panicking::panic_nounwind(aUnsafePrecondi_9, 102LL);
  if ( !v11 )
LABEL_10:
    v11 = a3;
  std::sys::os_str::bytes::Slice::to_owned(v39, a2, v11);
  if ( !v40 || v41 < 0 )
    core::panicking::panic_nounwind(aUnsafePrecondi_11, 162LL);
  std::path::Path::components(v42);
  <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v28, v42);
  v12 = v28;
  if ( (_BYTE)v28 == 10 )
  {
    v13 = &dword_0 + 1;
    v14 = 0LL;
    v15 = 0LL;
  }
  else
  {
    v38 = &v30;
    v35 = a1;
    do
    {
      v16 = v12;
      v17 = (char *)src;
      v18 = v30;
      v19 = v33;
      v20 = v34;
      <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v28, v42);
      v12 = v28;
    }
    while ( (_BYTE)v28 != 10 );
    v21 = v16 - 6;
    v22 = 0LL;
    if ( v21 < 4u )
      v22 = v21 + 1LL;
    switch ( v22 )
    {
      case 0LL:
        v22 = v20;
        break;
      case 1LL:
        v19 = asc_1DEC0;
        break;
      case 2LL:
        v19 = &asc_1DEC0[1];
        v22 = 1LL;
        break;
      case 3LL:
        v19 = &asc_1DEC0[2];
        v22 = 2LL;
        break;
      case 4LL:
        v22 = v18;
        v19 = v17;
        break;
    }
    std::sys::os_str::bytes::Slice::to_str(&v28, v19, v22);
    v6 = v35;
    if ( v28 || (v23 = (char *)src) == 0LL )
      core::option::unwrap_failed(&off_102190);
    v15 = v30;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(src, v30, s1, n) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, v15, 0LL);
    }
    else
    {
      v24 = v15 - n;
      if ( v15 >= n )
      {
        v26 = bcmp(s1, &v23[v24], n);
        v25 = 0LL;
        if ( !v26 )
          v25 = v23;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v25 )
      {
        v23 = v25;
        v15 = v24;
      }
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, v15, 0LL);
      v6 = v35;
    }
    v14 = src;
    if ( v28 )
      alloc::raw_vec::handle_error(src, *v38);
    v13 = (void *)v30;
    core::intrinsics::copy_nonoverlapping::precondition_check(v23, v30, 1LL, 1LL, v15);
    memcpy(v13, v23, v15);
  }
  *v6 = v14;
  v6[1] = v13;
  v6[2] = v15;
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v39);
  return v6;
}
