_QWORD *__fastcall uu_whoami::whoami(_QWORD *a1)
{
  __uid_t v2; // eax
  __int128 v3; // kr00_16
  void *v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v12; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+10h] [rbp-C8h]
  __int64 v14; // [rsp+18h] [rbp-C0h]
  __int64 v15; // [rsp+20h] [rbp-B8h]
  __int128 v16; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+38h] [rbp-A0h]
  __int64 v18; // [rsp+48h] [rbp-90h]
  __int64 v19; // [rsp+58h] [rbp-80h]
  __int64 v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+88h] [rbp-50h]
  __int64 v24; // [rsp+90h] [rbp-48h]

  v2 = geteuid();
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(&v16, v2);
  v3 = v16;
  if ( (_QWORD)v16 == 0x8000000000000000LL )
  {
    v4 = (void *)_rust_alloc(22LL, 1LL);
    if ( !v4 )
      alloc::raw_vec::handle_error(1LL, 22LL);
    qmemcpy(v4, "failed to get username", 22);
    *(_QWORD *)&v16 = 22LL;
    *((_QWORD *)&v16 + 1) = v4;
    *(_QWORD *)&v17 = 22LL;
    *((_QWORD *)&v17 + 1) = *((_QWORD *)&v3 + 1);
    v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v6 = v16;
    v5[1] = v17;
    *v5 = v6;
    a1[1] = v5;
    a1[2] = &off_D71D8;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v15 = v17;
    v7 = v19;
    v8 = v20;
    v9 = v21;
    v13 = v22;
    v10 = v23;
    v14 = v24;
    if ( 2LL * *((_QWORD *)&v17 + 1) )
    {
      v12 = v20;
      _rust_dealloc(v18, *((_QWORD *)&v17 + 1), 1LL);
      v8 = v12;
    }
    if ( 2 * v7 )
      _rust_dealloc(v8, v7, 1LL);
    if ( 2 * v9 )
      _rust_dealloc(v13, v9, 1LL);
    if ( 2 * v10 )
      _rust_dealloc(v14, v10, 1LL);
    *(_OWORD *)a1 = v3;
    a1[2] = v15;
  }
  return a1;
}
