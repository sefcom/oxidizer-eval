__int64 __fastcall fd::walk::ReceiverBuffer<W>::process(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx

  do
    v1 = fd::walk::ReceiverBuffer<W>::poll(a1);
  while ( (_BYTE)v1 == 6 );
  v2 = v1;
  core::sync::atomic::atomic_store(*(_QWORD *)(a1 + 104), 1LL, 0LL);
  return v2;
}