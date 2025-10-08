__int64 *__fastcall uu_kill::parse_signal_value(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v4)(); // rdx
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-88h] BYREF
  char v9; // [rsp+28h] [rbp-70h]
  _QWORD v10[6]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp-20h]

  if ( (uucore::features::signals::signal_by_name_or_value(a2, a3) & 1) != 0 )
  {
    v5 = 0LL;
  }
  else
  {
    v8[0] = 0LL;
    v8[1] = a2;
    v8[2] = a3;
    v9 = 1;
    v7[0] = v8;
    v7[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v10[0] = &unk_E7670;
    v10[1] = 2LL;
    v10[4] = 0LL;
    v10[2] = v7;
    v10[3] = 1LL;
    core::option::Option<T>::map_or_else(v11, v10);
    v12 = 1;
    v5 = alloc::boxed::Box<T>::new(v11);
    v4 = &off_E76B0;
  }
  a1[1] = (__int64)v4;
  *a1 = v5;
  return a1;
}