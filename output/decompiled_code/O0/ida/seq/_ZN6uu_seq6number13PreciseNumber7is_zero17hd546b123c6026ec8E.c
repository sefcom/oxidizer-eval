bool __fastcall uu_seq::number::PreciseNumber::is_zero(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *(_QWORD *)a1 - 0x7FFFFFFFFFFFFFFFLL;
  result = 0;
  if ( *(_QWORD *)a1 >= (signed __int64)0x8000000000000004LL )
    v1 = 0LL;
  if ( v1 == 3 )
    return 1;
  if ( !v1 )
    return *(_BYTE *)(a1 + 24) == 1;
  return result;
}
