char __fastcall fd::filter::owner::Check<T>::check(int a1, __int64 a2, unsigned int a3)
{
  if ( !a1 )
    return core::cmp::impls::<impl core::cmp::PartialEq for i32>::eq(a3);
  if ( a1 == 1 )
    return core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne(a3);
  return 1;
}