__int64 __fastcall uu_od::prn_char::format_ascii_dump(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // eax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  alloc::string::String::push(&v7, 62LL);
  if ( a3 )
  {
    v4 = 0LL;
    do
    {
      v5 = *(unsigned __int8 *)(a2 + v4);
      if ( (unsigned __int8)(v5 - 32) >= 0x5Fu )
        alloc::string::String::push(&v7, 46LL);
      else
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v7,
          *(char **)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5)),
          &(*(char **)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5) + 8))[*(_QWORD *)((char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v5))]);
      ++v4;
    }
    while ( a3 != v4 );
  }
  alloc::string::String::push(&v7, 60LL);
  result = v8;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}