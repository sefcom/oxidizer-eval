__int64 __fastcall alacritty_terminal::event_loop::EventLoop<T,U>::channel(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  volatile signed __int64 *v4; // rcx
  __int64 v5; // rt0
  char v6; // of

  result = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(a2[10], a2[11]);
  v4 = (volatile signed __int64 *)a2[12];
  v5 = _InterlockedIncrement64(v4);
  if ( (v5 < 0) ^ v6 | (v5 == 0) )
    BUG();
  *a1 = result;
  a1[1] = v3;
  a1[2] = (__int64)v4;
  return result;
}