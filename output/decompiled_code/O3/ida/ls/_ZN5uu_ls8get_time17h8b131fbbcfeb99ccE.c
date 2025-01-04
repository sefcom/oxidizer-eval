__int64 __fastcall uu_ls::get_time(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edx

  result = uu_ls::get_system_time(a2, a3);
  if ( v4 != 1000000000 )
    return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(
             a1,
             result);
  *a1 = 0;
  return result;
}
