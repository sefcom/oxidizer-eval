__int64 fd::walk::Batch::new()
{
  _QWORD v1[2]; // [rsp+8h] [rbp-30h] BYREF
  int v2; // [rsp+18h] [rbp-20h]
  char v3; // [rsp+1Ch] [rbp-1Ch]
  __int64 v4; // [rsp+20h] [rbp-18h]
  __int64 v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+30h] [rbp-8h]

  v1[0] = 1LL;
  v1[1] = 1LL;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 8LL;
  v6 = 0LL;
  return alloc::boxed::Box<T>::new(v1);
}