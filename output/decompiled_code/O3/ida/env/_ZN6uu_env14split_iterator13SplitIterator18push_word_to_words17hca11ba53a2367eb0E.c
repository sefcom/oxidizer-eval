        __int64 a6)
{
  __int128 v7; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+10h] [rbp-8h]

  v8 = *((_QWORD *)a1 + 2);
  v7 = *a1;
  *(_QWORD *)a1 = 0LL;
  *(__int128 *)((char *)a1 + 8) = 1uLL;
  return ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
           a1 + 4,
           &v7,
           a3,
           a4,
           a5,
           a6);
}
