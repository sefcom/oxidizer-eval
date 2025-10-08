__int64 __fastcall uu_ls::display_date(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _DWORD v6[8]; // [rsp+8h] [rbp-20h] BYREF

  uu_ls::get_time(v6, a2, a3);
  if ( v6[0] )
    return uu_ls::TimeStyler::format(a1, a4 + 40, (__int64)v6);
  else
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_D4218, 3LL);
}