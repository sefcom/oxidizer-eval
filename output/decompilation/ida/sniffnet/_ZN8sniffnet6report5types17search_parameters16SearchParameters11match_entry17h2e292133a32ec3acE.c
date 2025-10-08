__int64 __fastcall sniffnet::report::types::search_parameters::SearchParameters::match_entry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int8 v8; // al
  _QWORD v10[3]; // [rsp+8h] [rbp-50h] BYREF
  char v11; // [rsp+20h] [rbp-38h]

  if ( !a4 && (*(_BYTE *)(a1 + 216) || *(_QWORD *)(a1 + 160) || *(_QWORD *)(a1 + 208) || *(_QWORD *)(a1 + 184)) )
  {
    return 0;
  }
  else
  {
    v10[0] = 0LL;
    v10[1] = 9LL;
    v10[2] = 0x706050403020100LL;
    v11 = 8;
    while ( 1 )
    {
      v8 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v10);
      if ( v8 == 9 )
        break;
      if ( !(unsigned __int8)sniffnet::report::types::search_parameters::FilterInputType::matches_entry(
                               v8,
                               a1,
                               a2,
                               a3,
                               a4) )
        return 0;
    }
    LOBYTE(a5) = *(_BYTE *)(a1 + 216) ^ 1 | a5;
  }
  return a5;
}