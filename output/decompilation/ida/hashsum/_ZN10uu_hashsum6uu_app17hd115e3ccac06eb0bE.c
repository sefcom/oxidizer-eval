void *__fastcall uu_hashsum::uu_app(void *dest, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aMd5sum, 6LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha1sum, 7LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha224sum, 9LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha256sum, 9LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha384sum, 9LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha512sum, 9LL) )
  {
    goto LABEL_7;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aB2sum_0, 5LL) )
  {
    uu_hashsum::uu_app_length(dest);
    goto LABEL_8;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha3224sum, 11LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha3256sum, 11LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha3384sum, 11LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha3512sum, 11LL) )
  {
LABEL_7:
    uu_hashsum::uu_app_common(dest);
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSha3sum, 7LL)
         || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aShake128sum, 11LL)
         || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aShake256sum, 11LL) )
  {
    uu_hashsum::uu_app_bits(dest);
  }
  else
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aB3sum, 5LL) )
    {
      uu_hashsum::uu_app_custom(dest);
      *((_BYTE *)dest + 712) = 1;
      return dest;
    }
    uu_hashsum::uu_app_b3sum(dest);
  }
LABEL_8:
  *((_BYTE *)dest + 712) = 0;
  return dest;
}