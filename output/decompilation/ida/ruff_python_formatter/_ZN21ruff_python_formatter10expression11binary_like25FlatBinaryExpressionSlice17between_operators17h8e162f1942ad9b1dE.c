__int64 __fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::between_operators(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  v5 = core::option::Option<T>::map_or(a3);
  return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, a4, a1, a2);
}