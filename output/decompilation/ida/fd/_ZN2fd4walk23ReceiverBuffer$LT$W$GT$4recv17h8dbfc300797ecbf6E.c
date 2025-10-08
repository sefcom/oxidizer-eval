__int64 __fastcall fd::walk::ReceiverBuffer<W>::recv(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)a2 + 128) != 1 )
    return crossbeam_channel::channel::Receiver<T>::recv_deadline(a1, *a2, a2[1], a2[10], *((unsigned int *)a2 + 22));
  result = crossbeam_channel::channel::Receiver<T>::recv(*a2, a2[1]);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = result;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_WORD *)a1 = 257;
  }
  return result;
}