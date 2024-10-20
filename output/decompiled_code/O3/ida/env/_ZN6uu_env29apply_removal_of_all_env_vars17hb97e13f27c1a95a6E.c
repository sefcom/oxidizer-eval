void __fastcall uu_env::apply_removal_of_all_env_vars(__int64 a1)
{
  __int64 v1; // r15
  void *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D8h]
  __int64 v11; // [rsp+18h] [rbp-D0h]
  __int64 v12; // [rsp+20h] [rbp-C8h]
  _QWORD v13[2]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-90h] BYREF
  void *src; // [rsp+60h] [rbp-88h]
  size_t n; // [rsp+68h] [rbp-80h]
  __int64 v18; // [rsp+70h] [rbp-78h]
  __int64 v19; // [rsp+78h] [rbp-70h]
  _QWORD v20[12]; // [rsp+88h] [rbp-60h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    std::env::vars_os(&v9);
    while ( 1 )
    {
      <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(&v15, &v9);
      v1 = v15;
      if ( v15 == 0x8000000000000000LL )
        break;
      v2 = src;
      v13[0] = src;
      v13[1] = n;
      v3 = std::sys::pal::unix::os::unsetenv(src, n);
      if ( v3 )
      {
        v8 = v3;
        v14[0] = v13;
        v14[1] = <&T as core::fmt::Debug>::fmt;
        v14[2] = &v8;
        v14[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        v20[0] = &anon_13f93a4aab32ca7f21c86e695234595f_6_llvm_14371064025889997723;
        v20[1] = 2LL;
        v20[4] = 0LL;
        v20[2] = v14;
        v20[3] = 2LL;
        core::panicking::panic_fmt(v20, &anon_13f93a4aab32ca7f21c86e695234595f_8_llvm_14371064025889997723);
      }
      if ( v1 )
        _rust_dealloc(v2, v1, 1LL);
      if ( v18 )
        _rust_dealloc(v19, v18, 1LL);
    }
    if ( v12 != v10 )
    {
      v4 = (v12 - v10) / 0x30uLL;
      v5 = (_QWORD *)(v10 + 32);
      do
      {
        v6 = *(v5 - 4);
        if ( v6 )
          _rust_dealloc(*(v5 - 3), v6, 1LL);
        v7 = *(v5 - 1);
        if ( v7 )
          _rust_dealloc(*v5, v7, 1LL);
        v5 += 6;
        --v4;
      }
      while ( v4 );
    }
    if ( v11 )
      _rust_dealloc(v9, 48 * v11, 8LL);
  }
}
