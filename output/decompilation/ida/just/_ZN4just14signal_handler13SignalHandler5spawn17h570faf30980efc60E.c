__int64 __fastcall just::signal_handler::SignalHandler::spawn(__int64 a1, const void *a2)
{
  __int64 v2; // r15
  char v3; // dl
  unsigned __int8 v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // dl
  unsigned __int8 v9; // bp
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // [rsp+Bh] [rbp-26Dh] BYREF
  int v17; // [rsp+Ch] [rbp-26Ch]
  _BYTE v18[28]; // [rsp+10h] [rbp-268h] BYREF
  _OWORD v19[3]; // [rsp+38h] [rbp-240h] BYREF
  __int64 v20; // [rsp+68h] [rbp-210h]
  _BYTE v21[24]; // [rsp+70h] [rbp-208h] BYREF
  _OWORD dest[14]; // [rsp+88h] [rbp-1F0h] BYREF
  _QWORD v23[34]; // [rsp+168h] [rbp-110h] BYREF

  v2 = just::signal_handler::SignalHandler::instance();
  v4 = v3 & 1;
  std::process::Command::spawn(dest, a2);
  if ( LODWORD(dest[0]) == 1 )
  {
    v6 = *((_QWORD *)&dest[0] + 1);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    *(_OWORD *)&v18[12] = dest[1];
    *(_OWORD *)v18 = *(_OWORD *)((char *)dest + 4);
    v17 = HIDWORD(dest[0]) >> 31;
    if ( dest[0] >= 0 )
    {
      memcpy(dest, a2, sizeof(dest));
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v23);
      core::ptr::drop_in_place<core::option::Option<std::process::Command>>(v23, v2 + 8);
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v2, v4);
      core::ops::function::Fn::call(v19, v18);
      v7 = just::signal_handler::SignalHandler::instance();
      v9 = v8 & 1;
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(dest);
      core::ptr::drop_in_place<core::option::Option<std::process::Command>>(dest, v7 + 8);
      v10 = *(_DWORD *)(v7 + 32);
      *(_QWORD *)(a1 + 48) = v20;
      v11 = v19[0];
      v12 = v19[1];
      *(_OWORD *)(a1 + 32) = v19[2];
      *(_OWORD *)(a1 + 16) = v12;
      *(_OWORD *)a1 = v11;
      *(_DWORD *)(a1 + 56) = v10;
      return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v7, v9);
    }
    v23[0] = &v16;
    v23[1] = <core::num::error::TryFromIntError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &off_430F40;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = v23;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    core::option::Option<T>::map_or_else(v21, 0LL, v5, dest);
    v14 = alloc::boxed::Box<T>::new(v21);
    v15 = std::io::error::Error::_new(40LL, v14, &off_430E98);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v15;
    *(_DWORD *)(a1 + 56) = 0;
    core::ptr::drop_in_place<std::process::Child>(v18);
  }
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v2, v4);
  return core::ptr::drop_in_place<std::process::Command>(a2);
}