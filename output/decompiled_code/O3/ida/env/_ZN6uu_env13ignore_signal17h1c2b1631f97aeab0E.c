__int64 __fastcall uu_env::ignore_signal(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+Ch] [rbp-9Ch] BYREF
  _DWORD v11[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v14[6]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v15[24]; // [rsp+80h] [rbp-28h] BYREF
  int v16; // [rsp+98h] [rbp-10h]

  nix::sys::signal::signal(v11, a1, 1LL);
  if ( v11[0] != 4 )
    return 0LL;
  v10 = a1;
  v12[0] = nix::errno::<impl nix::errno::consts::Errno>::desc(v11[2]);
  v12[1] = v1;
  v13[0] = &v10;
  v13[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  v13[2] = v12;
  v13[3] = <&T as core::fmt::Display>::fmt;
  v14[0] = &off_149418;
  v14[1] = 2LL;
  v14[4] = 0LL;
  v14[2] = v13;
  v14[3] = 2LL;
  core::option::Option<T>::map_or_else(v15, v14, v1, v2, v3, v4);
  v16 = 125;
  return alloc::boxed::Box<T>::new(v15, v14, v5, v6, v7, v8);
}
