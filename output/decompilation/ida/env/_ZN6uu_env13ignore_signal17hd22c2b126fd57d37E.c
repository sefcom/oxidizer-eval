__int64 __fastcall uu_env::ignore_signal(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+0h] [rbp-A8h]
  unsigned int v7; // [rsp+Ch] [rbp-9Ch] BYREF
  _DWORD v8[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v11[6]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+80h] [rbp-28h] BYREF
  int v13; // [rsp+98h] [rbp-10h]

  nix::sys::signal::signal(v8, a1, 1LL);
  if ( v8[0] != 4 )
    return 0LL;
  v7 = a1;
  v9[0] = nix::errno::<impl nix::errno::consts::Errno>::desc(v8[2]);
  v9[1] = v1;
  v10[0] = &v7;
  v10[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  v10[2] = v9;
  v10[3] = <&T as core::fmt::Display>::fmt;
  v11[0] = &off_110CE8;
  v11[1] = 2LL;
  v11[4] = 0LL;
  v11[2] = v10;
  v11[3] = 2LL;
  core::option::Option<T>::map_or_else(v12, v11, v1, v2, v3, v4, v6);
  v13 = 125;
  return alloc::boxed::Box<T>::new(v12);
}