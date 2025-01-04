void *__fastcall uu_base32::base_common::fast_decode::alphabet_to_table(void *dest, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 *i; // rax
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  __int64 v8; // [rsp+8h] [rbp-130h] BYREF
  __int64 v9; // [rsp+10h] [rbp-128h]
  __int16 v10; // [rsp+18h] [rbp-120h]
  _OWORD src[17]; // [rsp+20h] [rbp-118h] BYREF

  if ( a4 )
  {
    memset(src, 0, 256);
    v8 = a2;
    v9 = a2 + a3;
    for ( i = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
          i;
          i = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8) )
    {
      v5 = *i;
      if ( *((_BYTE *)src + v5) )
        core::panicking::panic(aAssertionFaile_14, 28LL, &off_149B70);
      *((_BYTE *)src + v5) = 1;
    }
  }
  else
  {
    memset(src, 1, 256);
    v8 = 0LL;
    v9 = 2LL;
    v10 = 3338;
    while ( (<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v8) & 1) != 0 )
    {
      if ( !*((_BYTE *)src + v6) )
        core::panicking::panic(aAssertionFaile_13, 27LL, &off_149B58);
      *((_BYTE *)src + v6) = 0;
    }
    core::ptr::drop_in_place<core::array::iter::IntoIter<u8,2_usize>>(&v8);
  }
  memcpy(dest, src, 0x100uLL);
  return dest;
}
