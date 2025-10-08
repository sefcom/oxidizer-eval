__int64 __fastcall alacritty::daemon::foreground_process_path(__int64 *a1, int a2, __pid_t a3)
{
  __pid_t v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 result; // rax
  __int64 (__fastcall **v9)(); // rcx
  __pid_t v10; // [rsp+4h] [rbp-74h] BYREF
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  __int64 (__fastcall **v13)(); // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v17[48]; // [rsp+48h] [rbp-30h] BYREF

  v4 = tcgetpgrp(a2);
  if ( v4 >= 0 )
    a3 = v4;
  v10 = a3;
  v16[0] = &v10;
  v16[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  v11 = (__int64)&off_881FA0;
  v12 = 2LL;
  v15 = 0LL;
  v13 = (__int64 (__fastcall **)())v16;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(v17, 0LL, v5, &v11);
  std::fs::read_link(&v11, v17);
  v7 = v11;
  result = v12;
  if ( __OFSUB__(-v11, 1LL) )
  {
    result = alloc::boxed::Box<T>::new(v12, v17, v6, -v11);
    v9 = &off_87A2E8;
  }
  else
  {
    v9 = v13;
  }
  a1[1] = result;
  a1[2] = (__int64)v9;
  *a1 = v7;
  return result;
}