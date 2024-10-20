void *__fastcall uu_ln::simple_backup_path(__int64 a1, __int64 a2, __int64 a3, const void *a4, size_t a5)
{
  const void *v7; // rbp
  size_t v8; // r12
  __int64 v9; // rax
  char *v10; // r13
  void *result; // rax
  size_t v12; // r12
  void *src[2]; // [rsp+8h] [rbp-50h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_str(src, a2);
  if ( src[0] )
    core::option::unwrap_failed(&off_EFB40);
  v7 = src[1];
  v8 = n;
  if ( n )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
    {
      v15 = 0LL;
    }
    else
    {
      v15 = 1LL;
      v9 = _rust_alloc(n, 1LL);
      if ( v9 )
      {
        v10 = (char *)v9;
        goto LABEL_7;
      }
    }
    alloc::raw_vec::handle_error(v15, v8);
  }
  v10 = (_BYTE *)(&dword_0 + 1);
LABEL_7:
  memcpy(v10, v7, v8);
  src[0] = (void *)v8;
  src[1] = v10;
  n = v8;
  if ( a5 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, v8, a5);
    v10 = (char *)src[1];
    v8 = n;
  }
  result = memcpy(&v10[v8], a4, a5);
  v12 = a5 + v8;
  n = v12;
  *(_OWORD *)a1 = *(_OWORD *)src;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
