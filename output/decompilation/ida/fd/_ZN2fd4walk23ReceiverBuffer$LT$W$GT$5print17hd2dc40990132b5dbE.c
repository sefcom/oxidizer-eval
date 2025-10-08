char __fastcall fd::walk::ReceiverBuffer<W>::print(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v7[6]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-20h] BYREF

  v2 = fd::output::print_entry(a1 + 16, a2, *(_QWORD *)(a1 + 96));
  if ( v2 )
  {
    v5 = v2;
    if ( (unsigned __int8)std::io::error::Error::kind(v2) != 11 )
    {
      v6[0] = &v5;
      v6[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v7[0] = &off_402618;
      v7[1] = 1LL;
      v7[4] = 0LL;
      v7[2] = v6;
      v7[3] = 1LL;
      core::option::Option<T>::map_or_else(v8, 0LL, v3, v7);
      fd::error::print_error((__int64)v8);
      core::ptr::drop_in_place<std::io::error::Error>(&v5);
      return 4;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v5);
  }
  if ( !(unsigned __int8)core::sync::atomic::atomic_load(*(_QWORD *)(a1 + 112), 0LL) )
    return 6;
  fd::walk::ReceiverBuffer<W>::flush(a1);
  return 5;
}