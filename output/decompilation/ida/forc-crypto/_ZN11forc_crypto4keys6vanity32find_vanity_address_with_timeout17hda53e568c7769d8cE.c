_QWORD *__fastcall forc_crypto::keys::vanity::find_vanity_address_with_timeout(
        _QWORD *a1,
        __int128 *a2,
        char a3,
        char a4,
        __int64 a5)
{
  volatile signed __int64 *v8; // rax
  __int64 v9; // rt0
  char v10; // of
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  volatile signed __int64 *v14; // [rsp+0h] [rbp-208h] BYREF
  __int64 v15; // [rsp+8h] [rbp-200h] BYREF
  __int128 v16; // [rsp+10h] [rbp-1F8h] BYREF
  __int128 v17; // [rsp+20h] [rbp-1E8h]
  __int128 v18; // [rsp+30h] [rbp-1D8h]
  __int128 v19; // [rsp+40h] [rbp-1C8h]
  _OWORD v20[5]; // [rsp+50h] [rbp-1B8h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-168h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-158h]
  __int128 v23; // [rsp+C0h] [rbp-148h]
  __int128 v24; // [rsp+D0h] [rbp-138h]
  __int128 v25; // [rsp+E0h] [rbp-128h]
  char v26; // [rsp+148h] [rbp-C0h]

  *(_QWORD *)&v21 = 1LL;
  *((_QWORD *)&v21 + 1) = 1LL;
  LOBYTE(v22) = 0;
  v8 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(&v21);
  v9 = _InterlockedIncrement64(v8);
  if ( (v9 < 0) ^ v10 | (v9 == 0) )
    BUG();
  v14 = v8;
  BYTE8(v19) = a3;
  *(_QWORD *)&v19 = v8;
  v11 = a2[1];
  v12 = a2[2];
  v16 = *a2;
  v17 = v11;
  v18 = v12;
  if ( (a4 & 1) != 0 )
  {
    v15 = a5;
    tokio::runtime::runtime::Runtime::new(&v21);
    if ( (_QWORD)v21 != 2LL )
    {
      v20[4] = v25;
      v20[3] = v24;
      v20[2] = v23;
      v20[1] = v22;
      v20[0] = v21;
      v24 = v19;
      v23 = v18;
      v22 = v17;
      v21 = v16;
      *(_QWORD *)&v25 = &v15;
      *((_QWORD *)&v25 + 1) = &v14;
      v26 = 0;
      tokio::runtime::runtime::Runtime::block_on(a1, v20, &v21);
      core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v14);
      core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v20);
      return a1;
    }
    *a1 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&v21 + 1));
    a1[8] = 0x8000000000000001LL;
    core::ptr::drop_in_place<forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}>(&v16);
  }
  else
  {
    forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}(a1, &v16);
    core::ptr::drop_in_place<forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}>(&v16);
  }
  core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v14);
  return a1;
}