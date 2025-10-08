__int64 __fastcall fd::walk::BatchSender::new(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = fd::walk::Batch::new();
  a1[2] = result;
  *a1 = a2;
  a1[1] = a3;
  a1[3] = a4;
  return result;
}