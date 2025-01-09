__int64 __fastcall uu_od::prn_char::format_ascii_dump(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *i; // rax
  int v5; // eax
  __int64 slice; // rax
  __int128 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  _QWORD v10[6]; // [rsp+18h] [rbp-30h] BYREF

  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 1LL;
  v9 = 0LL;
  alloc::string::String::push(&v8, 62LL);
  v10[0] = a2;
  v10[1] = a2 + a3;
  for ( i = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
        i;
        i = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10) )
  {
    v5 = *i;
    if ( (unsigned __int8)(v5 - 32) >= 0x5Fu )
    {
      alloc::string::String::push(&v8, 46LL);
    }
    else
    {
      slice = core::slice::iter::Iter<T>::make_slice(
                *(char **)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5)),
                &(*(char **)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5) + 8))[*(_QWORD *)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5))]);
      alloc::vec::Vec<T,A>::append_elements(&v8, slice);
    }
  }
  alloc::string::String::push(&v8, 60LL);
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  return a1;
}
