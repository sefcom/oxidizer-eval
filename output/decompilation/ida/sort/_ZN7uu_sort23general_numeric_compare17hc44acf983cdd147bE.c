__int64 __fastcall uu_sort::general_numeric_compare(__int64 a1)
{
  __int64 result; // rax

  result = <uu_sort::GeneralF64ParseResult as core::cmp::PartialOrd>::partial_cmp(a1);
  if ( (_BYTE)result == 2 )
    core::option::unwrap_failed(&off_18D3C0);
  return result;
}