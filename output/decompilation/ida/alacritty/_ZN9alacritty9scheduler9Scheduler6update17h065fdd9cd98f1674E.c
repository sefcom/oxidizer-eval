__int64 __fastcall alacritty::scheduler::Scheduler::update(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v6; // rax
  int v7; // r13d
  int v8; // ebp
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 result; // rax
  unsigned int v12; // [rsp+Ch] [rbp-3ACh]
  __int64 v13; // [rsp+18h] [rbp-3A0h]
  _QWORD dest[30]; // [rsp+20h] [rbp-398h] BYREF
  _QWORD v15[24]; // [rsp+110h] [rbp-2A8h] BYREF
  _DWORD src[60]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _BYTE v17[248]; // [rsp+2C0h] [rbp-F8h] BYREF

  v1 = std::time::Instant::now(a1);
  v3 = a1 + 32;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v4 = v1;
    v5 = v2;
    v12 = v2;
    v13 = v1;
    do
    {
      while ( 1 )
      {
        v6 = alloc::collections::vec_deque::VecDeque<T,A>::get(v3);
        if ( !v6 )
          core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_884198);
        if ( *(_QWORD *)(v6 + 192) == v4 )
        {
          if ( *(_DWORD *)(v6 + 200) > v5 )
            goto LABEL_13;
        }
        else if ( *(_QWORD *)(v6 + 192) > v4 )
        {
          goto LABEL_13;
        }
        alloc::collections::vec_deque::VecDeque<T,A>::pop_front(src, v3);
        if ( src[0] != 2 )
          break;
        core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(src);
        if ( !*(_QWORD *)(a1 + 56) )
          goto LABEL_13;
      }
      memcpy(dest, src, sizeof(dest));
      v7 = dest[27];
      if ( LODWORD(dest[27]) != 1000000000 )
      {
        v8 = dest[26];
        v9 = dest[0];
        v10 = dest[1];
        <alacritty::event::EventType as core::clone::Clone>::clone(v17, &dest[2]);
        v15[0] = v9;
        v15[1] = v10;
        memcpy(&v15[2], v17, 0xB0uLL);
        alacritty::scheduler::Scheduler::schedule(a1, (unsigned int)v15, v8, v7, 1, dest[28], dest[29]);
        v3 = a1 + 32;
        v5 = v12;
      }
      memcpy(v15, dest, sizeof(v15));
      winit::event_loop::EventLoopProxy<T>::send_event(v17);
      v4 = v13;
      core::ptr::drop_in_place<core::result::Result<(),winit::event_loop::EventLoopClosed<alacritty::event::Event>>>(
        v17,
        a1);
    }
    while ( *(_QWORD *)(a1 + 56) );
  }
LABEL_13:
  result = alloc::collections::vec_deque::VecDeque<T,A>::get(v3);
  if ( result )
    return *(_QWORD *)(result + 192);
  return result;
}