__int64 __fastcall uu_du::du::{{closure}}(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-98h] BYREF
  __int64 v4; // [rsp+10h] [rbp-88h]
  _BYTE v5[8]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v6; // [rsp+20h] [rbp-78h]
  __int64 v7; // [rsp+28h] [rbp-70h]
  _QWORD v8[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-58h] BYREF
  char v10; // [rsp+58h] [rbp-40h]
  _QWORD v11[7]; // [rsp+60h] [rbp-38h] BYREF

  std::fs::DirEntry::path(v5, a2);
  if ( !v6 || v7 < 0 )
    core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
  v9[0] = 1LL;
  v9[1] = v6;
  v9[2] = v7;
  v10 = 1;
  v8[0] = v9;
  v8[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v11[0] = &anon_b877040be6323add0ac9264ba73403e3_49_llvm_12520490929008774313;
  v11[1] = 1LL;
  v11[2] = v8;
  v11[3] = 1LL;
  v11[4] = 0LL;
  alloc::fmt::format::format_inner(&v3, v11);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v5);
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  return a1;
}
