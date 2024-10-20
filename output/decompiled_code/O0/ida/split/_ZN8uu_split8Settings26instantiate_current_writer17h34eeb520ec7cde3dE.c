        unsigned __int8 a5)
{
  void *v6; // rdi
  signed __int64 v8; // rsi
  __int64 v12; // r9
  void *v14; // [rsp+0h] [rbp-A8h] BYREF
  size_t v15; // [rsp+8h] [rbp-A0h]
  _QWORD v16[2]; // [rsp+10h] [rbp-98h] BYREF
  __int128 v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+38h] [rbp-70h] BYREF
  __int64 v20; // [rsp+48h] [rbp-60h]
  _QWORD v21[11]; // [rsp+50h] [rbp-58h] BYREF

  v14 = a3;
  v15 = a4;
  v6 = *(void **)(a2 + 120);
  if ( !v6 || (v8 = *(_QWORD *)(a2 + 128), v8 < 0) )
    core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
  if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(v6, v8, a3, a4) )
  {
    v16[0] = &v14;
    v16[1] = <&T as core::fmt::Display>::fmt;
    v21[0] = &anon_4f04ac8a3ef9e065a432e2bbb7f80309_100_llvm_15963415444986902846;
    v21[1] = 2LL;
    v21[2] = v16;
    v21[3] = 1LL;
    v21[4] = 0LL;
    alloc::fmt::format::format_inner(&v19, v21);
    v17 = v19;
    v18 = v20;
    a1[1] = std::io::error::Error::new(39LL, &v17);
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    uu_split::platform::unix::instantiate_current_writer(a1, a2 + 136, a3, a4, a5, v12, v14, v15);
  }
  return a1;
}
