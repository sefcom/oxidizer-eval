void *__fastcall ruff_python_formatter::expression::binary_like::BinaryLike::flatten(
        void *dest,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD src[34]; // [rsp+8h] [rbp-110h] BYREF

  src[32] = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
      ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(
        a3,
        4,
        0,
        4,
        0,
        a4,
        a5,
        a6,
        (__int64)src);
    else
      ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(
        a3,
        4,
        0,
        4,
        0,
        a4,
        a5,
        a6,
        (__int64)src);
  }
  else
  {
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(
      a3,
      4,
      0,
      4,
      0,
      a4,
      a5,
      a6,
      (__int64)src);
  }
  return memcpy(dest, src, 0x108uLL);
}