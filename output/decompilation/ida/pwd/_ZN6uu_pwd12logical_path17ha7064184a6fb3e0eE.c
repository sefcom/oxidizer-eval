_QWORD *__fastcall uu_pwd::logical_path(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]

  std::env::var_os(&v5);
  v2 = v5;
  if ( __OFSUB__(-v5, 1LL) || (v1 = v6, v3 = v7, !(unsigned __int8)uu_pwd::logical_path::looks_reasonable(v6, v7)) )
  {
    std::env::current_dir(a1);
    if ( !__OFSUB__(-v2, 1LL) )
      core::ptr::drop_in_place<std::path::PathBuf>(v2, v1);
  }
  else
  {
    *a1 = v2;
    a1[1] = v1;
    a1[2] = v3;
  }
  return a1;
}