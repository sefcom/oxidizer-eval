__int64 __fastcall just::function::capitalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  unsigned int v5; // edx
  __int128 v7; // [rsp+8h] [rbp-90h] BYREF
  __int64 v8; // [rsp+18h] [rbp-80h]
  _QWORD v9[3]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v10[12]; // [rsp+3Ch] [rbp-5Ch] BYREF
  _BYTE v11[80]; // [rsp+48h] [rbp-50h] BYREF

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  v9[0] = a3;
  v9[1] = a3 + a4;
  v9[2] = 0LL;
  for ( i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v9);
        v5 != (_DWORD)&unk_110000;
        i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v9) )
  {
    if ( i )
      core::unicode::unicode_data::conversions::to_lower(v10, v5);
    else
      core::unicode::unicode_data::conversions::to_upper(v10, v5);
    core::char::CaseMappingIter::new(v11, v10);
    <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v7, v11);
  }
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 0LL;
  return a1;
}