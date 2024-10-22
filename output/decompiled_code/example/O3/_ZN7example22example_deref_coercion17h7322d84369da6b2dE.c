__int64 example::example_deref_coercion()
{
  char *v0; // rax
  char *v1; // rbx
  _QWORD v3[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v4[2]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v5[8]; // [rsp+28h] [rbp-40h] BYREF

  v0 = (char *)_rust_alloc(32LL, 1LL);
  if ( !v0 )
    alloc::raw_vec::handle_error(1LL, 32LL);
  v1 = v0;
  qmemcpy(v0, "This is a deref coercion example", 32);
  v4[0] = v0 + 1;
  v4[1] = 31LL;
  v3[0] = v4;
  v3[1] = <core::option::Option<T> as core::fmt::Debug>::fmt;
  v5[0] = &unk_568B0;
  v5[1] = 2LL;
  v5[4] = 0LL;
  v5[2] = v3;
  v5[3] = 1LL;
  std::io::stdio::_print(v5);
  return _rust_dealloc(v1, 32LL, 1LL);
}
