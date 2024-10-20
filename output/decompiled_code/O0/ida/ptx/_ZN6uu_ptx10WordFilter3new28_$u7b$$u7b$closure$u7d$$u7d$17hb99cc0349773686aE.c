__int64 __fastcall uu_ptx::WordFilter::new::{{closure}}(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // rax
  size_t v7; // rdx
  const void *v8; // r15
  size_t v9; // rdx
  size_t v10; // r14
  __int64 v11; // r12
  void *v12; // r13
  unsigned int v14; // [rsp+0h] [rbp-88h] BYREF
  int v15; // [rsp+4h] [rbp-84h] BYREF
  void *v16; // [rsp+8h] [rbp-80h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h]
  void *dest; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  _QWORD v21[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+58h] [rbp-30h]

  v3 = a3;
  v14 = a3;
  if ( a3 <= 0x7F )
  {
    v4 = (unsigned int)(unsigned __int8)a3 - 45;
    if ( (unsigned int)v4 > 0x31 )
      goto LABEL_8;
    v5 = 0x3800000000001LL;
    if ( !_bittest64(&v5, v4) )
      goto LABEL_8;
LABEL_6:
    v21[0] = &v14;
    v21[1] = <char as core::fmt::Display>::fmt;
    v16 = &anon_588e954ece9a86277f3c7f82a8ed8194_133_llvm_17441080372789787526;
    v17 = 1LL;
    dest = v21;
    v19 = 1LL;
    v20 = 0LL;
    alloc::fmt::format::format_inner(&v22, &v16);
    *(_QWORD *)(a1 + 16) = v23;
    *(_OWORD *)a1 = v22;
    return a1;
  }
  LODWORD(v16) = 0;
  v6 = (void *)core::char::methods::encode_utf8_raw(a3, &v16, 4LL);
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v6, v7, "^-]\\(") )
    goto LABEL_6;
  v3 = v14;
LABEL_8:
  v15 = 0;
  v8 = (const void *)core::char::methods::encode_utf8_raw(v3, &v15, 4LL);
  v10 = v9;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v16, v9, 0LL);
  v11 = v17;
  if ( v16 )
    alloc::raw_vec::handle_error(v17, dest);
  v12 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v8, dest, 1LL, 1LL, v10);
  memcpy(v12, v8, v10);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 16) = v10;
  return a1;
}
