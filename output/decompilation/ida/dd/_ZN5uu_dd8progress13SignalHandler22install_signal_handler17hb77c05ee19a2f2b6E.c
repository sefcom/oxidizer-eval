__int64 __fastcall uu_dd::progress::SignalHandler::install_signal_handler(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-118h] BYREF
  __int128 v5; // [rsp+10h] [rbp-108h]
  _BYTE v6[24]; // [rsp+20h] [rbp-F8h]
  __int64 v7; // [rsp+38h] [rbp-E0h]
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp-D8h]
  __int128 v9; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+58h] [rbp-C0h]
  __int128 v11; // [rsp+68h] [rbp-B0h]
  __int64 v12; // [rsp+78h] [rbp-A0h]
  __int128 v13; // [rsp+80h] [rbp-98h] BYREF
  __int128 v14; // [rsp+90h] [rbp-88h]
  __int64 v15; // [rsp+A0h] [rbp-78h]
  __int128 v16; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-60h]
  _BYTE v18[24]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v19[5]; // [rsp+D8h] [rbp-40h] BYREF
  char v20; // [rsp+100h] [rbp-18h]

  signal_hook::iterator::SignalsInfo<E>::new(&v4);
  if ( (_QWORD)v4 )
  {
    v12 = *(_QWORD *)&v6[16];
    v11 = *(_OWORD *)v6;
    v10 = v5;
    v9 = v4;
    <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v13, &v9);
    *(_QWORD *)&v6[16] = v12;
    *(_OWORD *)v6 = v11;
    v5 = v10;
    v4 = v9;
    v7 = a2;
    v8 = &off_13DC30;
    v19[2] = 0x8000000000000000LL;
    v19[0] = 0LL;
    v20 = 0;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int128 *))std::thread::Builder::spawn_unchecked)(v18, v19, &v4);
    core::result::Result<T,E>::expect(&v16, v18);
    *(_QWORD *)v6 = v15;
    v2 = v13;
    v5 = v14;
    v4 = v13;
    v7 = v17;
    *(_OWORD *)&v6[8] = v16;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v2;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v6[16];
    *(_QWORD *)(a1 + 56) = v7;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)v6;
    result = *(_QWORD *)&v6[8];
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v6[8];
  }
  else
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v4 + 1);
    *(_QWORD *)a1 = 0LL;
    return core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
             a2,
             &off_13DC30);
  }
  return result;
}