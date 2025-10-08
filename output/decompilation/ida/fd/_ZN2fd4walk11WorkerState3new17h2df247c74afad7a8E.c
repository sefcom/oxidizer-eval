__int64 __fastcall fd::walk::WorkerState::new(char *dest, __int64 a2, const void *a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-48h]
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  char v8; // [rsp+18h] [rbp-30h]

  v7[0] = 1LL;
  v7[1] = 1LL;
  v8 = 0;
  v6 = alloc::boxed::Box<T>::new(v7);
  v4 = alloc::boxed::Box<T>::new(v7);
  memcpy(dest, a3, 0x1F8uLL);
  *(_OWORD *)(dest + 504) = *(_OWORD *)a2;
  result = *(_QWORD *)(a2 + 16);
  *((_QWORD *)dest + 65) = result;
  *((_QWORD *)dest + 66) = v6;
  *((_QWORD *)dest + 67) = v4;
  return result;
}