__int64 __fastcall ruff_python_formatter::string::normalize::CharIndicesWithOffset::new(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             a4,
             a2,
             a3);
  if ( !result )
    core::str::slice_error_fail(a2, a3, a4, a3, &off_57F7A8);
  *a1 = result;
  a1[1] = result + v7;
  a1[2] = a4;
  return result;
}