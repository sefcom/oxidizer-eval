__int64 __fastcall just::recipe::Recipe::module_path(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r14
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 result; // rax

  v1 = just::recipe::Recipe::namepath(a1);
  v3 = v2;
  v4 = core::str::<impl str>::rfind(v1, v2);
  v6 = v5;
  if ( (v4 & 1) == 0 )
    v6 = 0LL;
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             0LL,
             v6,
             v1,
             v3);
  if ( !result )
    core::str::slice_error_fail(v1, v3, 0LL, v6, &off_430B20);
  return result;
}