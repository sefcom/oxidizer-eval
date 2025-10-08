__int64 __fastcall uu_who::platform::unix::Who::print_boottime(int a1, __int64 a2)
{
  _BYTE v3[8]; // [rsp+58h] [rbp-20h] BYREF
  __int128 v4; // [rsp+60h] [rbp-18h]

  uu_who::platform::unix::time_string((__int64)v3, a2);
  uu_who::platform::unix::Who::print_line(a1, 1, 0, 32, (unsigned int)aSystemBoot, 11, v4, 1uLL, 1uLL, 1uLL, 1uLL);
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}