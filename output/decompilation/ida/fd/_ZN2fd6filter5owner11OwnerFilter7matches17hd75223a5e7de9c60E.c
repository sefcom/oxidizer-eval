__int64 __fastcall fd::filter::owner::OwnerFilter::matches(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  if ( (unsigned __int8)fd::filter::owner::Check<T>::check(*a1, a1[1], a2) )
    return fd::filter::owner::Check<T>::check(a1[2], a1[3], a3);
  else
    return 0LL;
}