__int64 __fastcall fd::walk::WorkerState::scan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v5; // r14
  __int128 v6; // xmm0
  unsigned __int8 v7; // bp
  bool v8; // zf
  char v9; // cl
  __int128 v10; // [rsp+0h] [rbp-128h] BYREF
  __int128 v11; // [rsp+10h] [rbp-118h]
  __int128 v12; // [rsp+20h] [rbp-108h]
  __int128 v13; // [rsp+30h] [rbp-F8h]
  __int128 v14; // [rsp+40h] [rbp-E8h]
  __int128 v15; // [rsp+50h] [rbp-D8h]
  __int128 v16; // [rsp+60h] [rbp-C8h]
  __int128 v17; // [rsp+70h] [rbp-B8h]
  __int128 v18; // [rsp+80h] [rbp-A8h]
  __int64 v19; // [rsp+90h] [rbp-98h]
  __int128 v20; // [rsp+A0h] [rbp-88h]
  __int128 v21; // [rsp+B0h] [rbp-78h]
  __int128 v22; // [rsp+C0h] [rbp-68h]
  __int128 v23; // [rsp+D0h] [rbp-58h]
  __int128 v24; // [rsp+E0h] [rbp-48h]
  __int128 v25; // [rsp+F0h] [rbp-38h]
  __int128 v26; // [rsp+100h] [rbp-28h]

  fd::walk::WorkerState::build_walker(&v10, a2, a3, a4);
  result = *((_QWORD *)&v10 + 1);
  if ( (_QWORD)v10 == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10 + 1);
    v5 = 1;
  }
  else
  {
    v26 = v16;
    v25 = v15;
    v24 = v14;
    v23 = v13;
    v22 = v12;
    v21 = v11;
    v20 = v10;
    if ( !__OFSUB__(0LL, *(_QWORD *)(a2 + 200)) && !*(_QWORD *)(a2 + 456) )
    {
      if ( _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 528)) <= 0
        || _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 536)) <= 0 )
      {
        BUG();
      }
      ctrlc::init_and_set_handler(&v10);
      core::result::Result<T,E>::unwrap(&v10);
    }
    crossbeam_channel::channel::bounded(&v10, 2LL * *(_QWORD *)(a2 + 416));
    v6 = v10;
    v19 = a2;
    v18 = v11;
    v10 = v20;
    v11 = v21;
    v12 = v22;
    v13 = v23;
    v14 = v24;
    v15 = v25;
    v16 = v26;
    v17 = v6;
    v7 = std::thread::scoped::scope(&v10);
    v5 = 0;
    v8 = (unsigned __int8)core::sync::atomic::atomic_load(*(_QWORD *)(a2 + 536) + 16LL, 0LL) == 0;
    result = v7;
    v9 = 5;
    if ( v8 )
      v9 = v7;
    *(_BYTE *)(a1 + 1) = v9;
  }
  *(_BYTE *)a1 = v5;
  return result;
}