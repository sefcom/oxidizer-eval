        unsigned __int8 a6)
{
  char v8; // al
  __int64 v11; // r14
  __int128 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v8 = *(_BYTE *)(a1 + 142);
  if ( v8 == 2 || (v8 & 1) != 0 )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(a4, a5);
    return 0LL;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(&v15, aDevStdin_0, 10LL);
    v14 = v16;
    v13 = v15;
    v11 = uu_tail::follow::watch::Observer::add_path(a1, *((__int64 *)&v15 + 1), v16, a2, a3, a4, a5, a6);
    core::ptr::drop_in_place<std::path::PathBuf>(&v13);
    return v11;
  }
}
