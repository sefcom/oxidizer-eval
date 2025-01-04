__int64 __fastcall uu_dd::progress::SignalHandler::install_signal_handler(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int128 v6; // [rsp+0h] [rbp-118h] BYREF
  __int128 v7; // [rsp+10h] [rbp-108h]
  _BYTE v8[24]; // [rsp+20h] [rbp-F8h]
  __int64 v9; // [rsp+38h] [rbp-E0h]
  __int64 v10; // [rsp+40h] [rbp-D8h]
  __int128 v11; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+58h] [rbp-C0h]
  __int128 v13; // [rsp+68h] [rbp-B0h]
  __int64 v14; // [rsp+78h] [rbp-A0h]
  __int128 v15; // [rsp+80h] [rbp-98h] BYREF
  __int128 v16; // [rsp+90h] [rbp-88h]
  __int64 v17; // [rsp+A0h] [rbp-78h]
  __int128 v18; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-60h]
  _BYTE v20[24]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v21[8]; // [rsp+D8h] [rbp-40h] BYREF

  signal_hook::iterator::SignalsInfo<E>::new(&v6, 10LL);
  if ( (_QWORD)v6 )
  {
    v14 = *(_QWORD *)&v8[16];
    v13 = *(_OWORD *)v8;
    v12 = v7;
    v11 = v6;
    <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v15, &v11);
    *(_QWORD *)&v8[16] = v14;
    *(_OWORD *)v8 = v13;
    v7 = v12;
    v6 = v11;
    v9 = a2;
    v10 = a3;
    v21[2] = 0x8000000000000000LL;
    v21[0] = 0LL;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int128 *))std::thread::Builder::spawn_unchecked)(v20, v21, &v6);
    core::result::Result<T,E>::expect(&v18, v20);
    *(_QWORD *)v8 = v17;
    v4 = v15;
    v7 = v16;
    v6 = v15;
    v9 = v19;
    *(_OWORD *)&v8[8] = v18;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v4;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v8[16];
    *(_QWORD *)(a1 + 56) = v9;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)v8;
  }
  else
  {
    *(_OWORD *)a1 = __PAIR128__(*((unsigned __int64 *)&v6 + 1), 0LL);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<()>+Output = ()+core::marker::Sync+core::marker::Send>>(
      a2,
      a3);
  }
  return a1;
}
