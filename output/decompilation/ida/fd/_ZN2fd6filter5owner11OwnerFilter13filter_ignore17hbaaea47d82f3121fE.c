__int64 __fastcall fd::filter::owner::OwnerFilter::filter_ignore(_DWORD *a1, unsigned int *a2)
{
  __int64 result; // rax

  result = <fd::filter::owner::Check<T> as core::cmp::PartialEq>::eq(*a2, a2[1], 2LL);
  if ( (_BYTE)result
    && (result = <fd::filter::owner::Check<T> as core::cmp::PartialEq>::eq(a2[2], a2[3], 2LL), (_BYTE)result) )
  {
    *a1 = 3;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return result;
}