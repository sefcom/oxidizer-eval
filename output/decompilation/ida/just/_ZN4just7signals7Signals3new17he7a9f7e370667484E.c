__int64 __fastcall just::signals::Signals::new(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  _QWORD v11[3]; // [rsp+0h] [rbp-208h] BYREF
  __int128 v12; // [rsp+18h] [rbp-1F0h]
  __int128 v13; // [rsp+A0h] [rbp-168h]
  __int128 v14; // [rsp+B0h] [rbp-158h]
  __int128 v15; // [rsp+C0h] [rbp-148h]
  __int128 v16; // [rsp+D0h] [rbp-138h]
  __int128 v17; // [rsp+E0h] [rbp-128h]
  __int64 v18; // [rsp+F0h] [rbp-118h]
  __int128 v19; // [rsp+100h] [rbp-108h]
  __int128 v20; // [rsp+110h] [rbp-F8h]
  __int128 v21; // [rsp+120h] [rbp-E8h]
  __int128 v22; // [rsp+130h] [rbp-D8h]
  __int128 v23; // [rsp+140h] [rbp-C8h]
  __int64 v24; // [rsp+150h] [rbp-B8h]
  _BYTE v25[176]; // [rsp+158h] [rbp-B0h] BYREF

  v1 = nix::unistd::pipe();
  v2 = v1;
  if ( (_DWORD)v1 == -1 )
  {
    *(_BYTE *)a1 = 45;
    *(_QWORD *)(a1 + 4) = 0x2FFFFFFFFLL;
    *(_DWORD *)(a1 + 12) = HIDWORD(v1);
  }
  else
  {
    if ( (unsigned int)core::sync::atomic::atomic_compare_exchange(HIDWORD(v1)) )
    {
      v11[0] = &off_430FC8;
      v11[1] = 1LL;
      v11[2] = 8LL;
      v12 = 0LL;
      core::panicking::panic_fmt(v11, &off_430FD8);
    }
    nix::sys::signal::SigSet::empty(v11);
    nix::sys::signal::SigAction::new(v25, v11);
    nix::sys::signal::sigaction(v11, 1LL, v25);
    if ( LODWORD(v11[0]) == 1 )
    {
      v3 = 0x10000002ELL;
    }
    else
    {
      nix::sys::signal::sigaction(v11, 2LL, v25);
      if ( (v11[0] & 1) != 0 )
      {
        v3 = 0x20000002ELL;
      }
      else
      {
        nix::sys::signal::sigaction(v11, 3LL, v25);
        if ( (v11[0] & 1) != 0 )
        {
          v3 = 0x30000002ELL;
        }
        else
        {
          nix::sys::signal::sigaction(v11, 15LL, v25);
          if ( (v11[0] & 1) == 0 )
          {
            *(_DWORD *)(a1 + 4) = v2;
            *(_BYTE *)a1 = 56;
            return a1;
          }
          v3 = 0xF0000002ELL;
        }
      }
    }
    v4 = ((unsigned __int64)HIDWORD(v11[0]) << 32) | 2;
    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    v13 = v19;
    v14 = v20;
    v15 = v21;
    v16 = v22;
    v9 = v23;
    v17 = v23;
    v18 = v24;
    *(_QWORD *)(a1 + 96) = v24;
    *(_OWORD *)(a1 + 80) = v9;
    *(_OWORD *)(a1 + 64) = v8;
    *(_OWORD *)(a1 + 48) = v7;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v4;
    core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v2);
  }
  return a1;
}