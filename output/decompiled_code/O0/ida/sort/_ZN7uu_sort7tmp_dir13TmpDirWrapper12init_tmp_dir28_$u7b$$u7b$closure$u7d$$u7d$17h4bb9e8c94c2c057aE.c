__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // r14
  _QWORD v6[2]; // [rsp+0h] [rbp-78h] BYREF
  char **v7; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v8[5]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v9[7]; // [rsp+40h] [rbp-38h] BYREF

  v6[0] = a1;
  v6[1] = <ctrlc::error::Error as core::fmt::Display>::fmt;
  v7 = &anon_4e04d33430a05d119282a34106369a15_60_llvm_993571120299017638;
  v8[0] = 1LL;
  v8[1] = v6;
  v8[2] = 1LL;
  v8[3] = 0LL;
  alloc::fmt::format::format_inner(v9, &v7);
  v1 = v9[0];
  v2 = v9[1];
  v3 = v9[2];
  result = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)result = v1;
  *(_QWORD *)(result + 8) = v2;
  *(_QWORD *)(result + 16) = v3;
  *(_DWORD *)(result + 24) = 2;
  if ( *(_DWORD *)a1 >= 2u )
  {
    v5 = result;
    std::io::error::repr_bitpacked::decode_repr(&v7, *(_QWORD *)(a1 + 8));
    if ( (unsigned __int8)v7 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v8);
    return v5;
  }
  return result;
}
