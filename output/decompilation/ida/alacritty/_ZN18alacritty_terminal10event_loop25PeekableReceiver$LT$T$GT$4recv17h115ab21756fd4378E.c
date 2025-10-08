__int64 __fastcall alacritty_terminal::event_loop::PeekableReceiver<T>::recv(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int128 v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  _QWORD v6[3]; // [rsp+18h] [rbp-40h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]

  if ( a2[2] == 0x8000000000000003LL )
  {
    std::sync::mpmc::Receiver<T>::try_recv(&v4, *a2, a2[1]);
    if ( (_QWORD)v4 == 0x8000000000000003LL && BYTE8(v4) )
    {
      v6[0] = &off_877268;
      v6[1] = 1LL;
      v6[2] = 8LL;
      v7 = 0LL;
      core::panicking::panic_fmt(v6, &off_877278);
    }
    if ( (_QWORD)v4 == 0x8000000000000003LL )
    {
      *a1 = 0x8000000000000003LL;
      return core::ptr::drop_in_place<core::result::Result<alacritty_terminal::event_loop::Msg,std::sync::mpsc::TryRecvError>>(&v4);
    }
    else
    {
      result = v5;
      a1[2] = v5;
      *(_OWORD *)a1 = v4;
    }
  }
  else
  {
    v3 = a2 + 2;
    result = v3[2];
    a1[2] = result;
    *(_OWORD *)a1 = *(_OWORD *)v3;
    *v3 = 0x8000000000000003LL;
  }
  return result;
}