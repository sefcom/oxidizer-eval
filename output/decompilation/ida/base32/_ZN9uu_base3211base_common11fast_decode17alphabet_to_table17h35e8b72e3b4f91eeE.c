void *__fastcall uu_base32::base_common::fast_decode::alphabet_to_table(void *dest, __int64 a2, __int64 a3, int a4)
{
  __int64 i; // rax
  unsigned __int8 v5; // dl
  _QWORD v7[2]; // [rsp+8h] [rbp-130h] BYREF
  __int16 j; // [rsp+18h] [rbp-120h]
  _OWORD src[17]; // [rsp+20h] [rbp-118h] BYREF

  if ( a4 )
  {
    memset(src, 0, 256);
    if ( a3 )
    {
      for ( i = 0LL; i != a3; ++i )
      {
        if ( *((_BYTE *)src + *(unsigned __int8 *)(a2 + i)) )
          core::panicking::panic(aAssertionFaile_7, 28LL, &off_10E308);
        *((_BYTE *)src + *(unsigned __int8 *)(a2 + i)) = 1;
      }
    }
  }
  else
  {
    memset(src, 1, 256);
    v7[0] = 0LL;
    v7[1] = 2LL;
    for ( j = 3338;
          (core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v7) & 1) != 0;
          *((_BYTE *)src + v5) = 0 )
    {
      if ( !*((_BYTE *)src + v5) )
        core::panicking::panic(aAssertionFaile_6, 27LL, &off_10E2F0);
    }
  }
  return memcpy(dest, src, 0x100uLL);
}