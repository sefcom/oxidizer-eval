_QWORD *__fastcall just::function::replace(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  alloc::str::<impl str>::replace((_DWORD)a1 + 8, a3, a4, a5, a6, a7, a8);
  *a1 = 0LL;
  return a1;
}