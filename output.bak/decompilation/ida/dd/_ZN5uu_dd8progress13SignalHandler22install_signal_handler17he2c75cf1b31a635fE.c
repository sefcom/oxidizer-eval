__int64 __fastcall uu_dd::progress::SignalHandler::install_signal_handler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-118h] BYREF
  __int128 v10; // [rsp+10h] [rbp-108h]
  _BYTE v11[24]; // [rsp+20h] [rbp-F8h]
  __int64 v12; // [rsp+38h] [rbp-E0h]
  __int64 v13; // [rsp+40h] [rbp-D8h]
  __int128 v14; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-C0h]
  __int128 v16; // [rsp+68h] [rbp-B0h]
  __int64 v17; // [rsp+78h] [rbp-A0h]
  __int128 v18; // [rsp+80h] [rbp-98h] BYREF
  __int128 v19; // [rsp+90h] [rbp-88h]
  __int64 v20; // [rsp+A0h] [rbp-78h]
  __int128 v21; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-60h]
  _BYTE v23[24]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v24[8]; // [rsp+D8h] [rbp-40h] BYREF

  signal_hook::iterator::SignalsInfo<E>::new(&v9, 10LL);
  if ( (_QWORD)v9 )
  {
    v17 = *(_QWORD *)&v11[16];
    v16 = *(_OWORD *)v11;
    v15 = v10;
    v14 = v9;
    <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v18, &v14);
    *(_QWORD *)&v11[16] = v17;
    *(_OWORD *)v11 = v16;
    v10 = v15;
    v9 = v14;
    v12 = a2;
    v13 = a3;
    v24[2] = 0x8000000000000000LL;
    v24[0] = 0LL;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int128 *, __int64, __int64, __int64))std::thread::Builder::spawn_unchecked)(
      v23,
      v24,
      &v9,
      v4,
      v5,
      v6);
    core::result::Result<T,E>::expect(&v21, v23);
    *(_QWORD *)v11 = v20;
    v7 = v18;
    v10 = v19;
    v9 = v18;
    v12 = v22;
    *(_OWORD *)&v11[8] = v21;
    *(_OWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v7;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v11[16];
    *(_QWORD *)(a1 + 56) = v12;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)v11;
  }
  else
  {
    *(_OWORD *)a1 = __PAIR128__(*((unsigned __int64 *)&v9 + 1), 0LL);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<()>+Output = ()+core::marker::Sync+core::marker::Send>>(
      a2,
      a3);
  }
  return a1;
}
