__int64 __fastcall fd::exec::command::OutputBuffer::push(__int64 a1, __int128 *a2, __int128 *a3)
{
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]
  __int128 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 2);
  v4 = *a2;
  v6 = *a3;
  v7 = *((_QWORD *)a3 + 2);
  return ((__int64 (__fastcall *)(__int64, __int128 *))alloc::vec::Vec<T,A>::push)(a1, &v4);
}