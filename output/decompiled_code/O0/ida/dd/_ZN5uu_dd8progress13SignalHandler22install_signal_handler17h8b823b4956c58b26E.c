__int64 __fastcall uu_dd::progress::SignalHandler::install_signal_handler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int64 v11; // [rsp+0h] [rbp-148h] BYREF
  __int64 v12; // [rsp+8h] [rbp-140h]
  __int64 v13; // [rsp+10h] [rbp-138h]
  __int128 v14; // [rsp+18h] [rbp-130h] BYREF
  __int128 v15; // [rsp+28h] [rbp-120h]
  __int128 v16; // [rsp+38h] [rbp-110h]
  __int64 v17; // [rsp+48h] [rbp-100h]
  __int64 v18; // [rsp+50h] [rbp-F8h]
  __int64 v19; // [rsp+58h] [rbp-F0h]
  _OWORD v20[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+80h] [rbp-C8h]
  _OWORD v22[3]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-90h]
  _OWORD v24[3]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-58h]
  __int64 v26; // [rsp+F8h] [rbp-50h]
  __int64 v27; // [rsp+100h] [rbp-48h]
  _QWORD v28[8]; // [rsp+108h] [rbp-40h] BYREF

  v18 = a2;
  v19 = a3;
  signal_hook::iterator::SignalsInfo<E>::with_exfiltrator(v22, 10LL);
  if ( *(_QWORD *)&v22[0] )
  {
    v17 = v23;
    v16 = v22[2];
    v15 = v22[1];
    v14 = v22[0];
    <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(v20, &v14);
    v25 = v17;
    v24[2] = v16;
    v24[1] = v15;
    v24[0] = v14;
    v26 = a2;
    v27 = a3;
    v28[2] = 0x8000000000000000LL;
    v28[0] = 0LL;
    std::thread::Builder::spawn_unchecked_(&v11, v28, v24, 0LL);
    v5 = v11;
    v6 = v12;
    if ( !v11 )
    {
      v11 = v12;
      core::result::unwrap_failed(
        "failed to spawn threadmain",
        22LL,
        &v11,
        &anon_63782909c3cb7357905e62e141098beb_5_llvm_18118160920441741807,
        &anon_d179d40980a54bd62163da74a972a144_5_llvm_3947593861476151837);
    }
    v7 = v13;
    *(_QWORD *)(a1 + 32) = v21;
    v8 = v20[0];
    *(_OWORD *)(a1 + 16) = v20[1];
    *(_OWORD *)a1 = v8;
    *(_QWORD *)(a1 + 40) = v5;
    *(_QWORD *)(a1 + 48) = v6;
    *(_QWORD *)(a1 + 56) = v7;
  }
  else
  {
    *(_OWORD *)a1 = __PAIR128__(*((unsigned __int64 *)&v22[0] + 1), 0LL);
    if ( *(_QWORD *)a3 )
      (*(void (__fastcall **)(__int64))a3)(a2);
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
      _rust_dealloc(a2, v9, *(_QWORD *)(a3 + 16));
  }
  return a1;
}
