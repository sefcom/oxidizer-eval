__int64 __fastcall compat_core::unix::main(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // bp
  __int128 v5; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]

  <std::ffi::os_str::OsStr as alloc::borrow::ToOwned>::to_owned(
    &v5,
    anon_72dc3a396521a012288a77322dff36ea_3_llvm_3663384724368157838,
    12LL);
  v2 = v5;
  v3 = std::path::Path::exists(v5, v6);
  if ( *((_QWORD *)&v5 + 1) )
    _rust_dealloc(v2, *((_QWORD *)&v5 + 1), 1LL);
  if ( v3 )
    return compat_core::esxi::main(a1, a2);
  compat_kernel::core::stats::Stats::render_thread(a2);
  compat_kernel::core::platform_filters(&v7);
  v6 = v8;
  v5 = v7;
  return compat_core::linux::search::default(
           a1,
           a2,
           anon_863ffe9e7839eece698c6894a7bb5cc9_0_llvm_2480881071517067185,
           1LL,
           &v5);
}
