__int64 __fastcall uu_pwd::logical_path(__int64 a1)
{
  __int128 v2; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+18h] [rbp-30h]
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  std::env::var_os(v4, aPwd, 3LL);
  if ( v4[0] == 0x8000000000000000LL )
  {
    *(_QWORD *)&v2 = 0x8000000000000000LL;
  }
  else
  {
    core::ops::function::FnOnce::call_once(&v2, v4);
    if ( (_QWORD)v2 != 0x8000000000000000LL
      && (unsigned __int8)uu_pwd::logical_path::looks_reasonable(*((__int64 *)&v2 + 1), v3) )
    {
      *(_QWORD *)(a1 + 16) = v3;
      *(_OWORD *)a1 = v2;
      return a1;
    }
  }
  std::env::current_dir(a1);
  if ( (_QWORD)v2 != 0x8000000000000000LL )
    core::ptr::drop_in_place<std::path::PathBuf>(&v2);
  return a1;
}
