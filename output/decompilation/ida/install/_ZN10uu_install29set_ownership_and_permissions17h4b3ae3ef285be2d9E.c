__int64 __fastcall uu_install::set_ownership_and_permissions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v6[80]; // [rsp+8h] [rbp-50h] BYREF

  if ( !uu_install::mode::chmod(a1, a2) )
    return uu_install::chown_optional_user_group(a1, a2, a3);
  std::path::Path::to_path_buf(v6, a1, a2);
  v5 = 3LL;
  return alloc::boxed::Box<T>::new(&v5);
}