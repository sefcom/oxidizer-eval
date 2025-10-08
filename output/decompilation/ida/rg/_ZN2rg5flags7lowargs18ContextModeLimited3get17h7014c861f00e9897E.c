__int64 __fastcall rg::flags::lowargs::ContextModeLimited::get(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) )
  {
    result = 0LL;
    if ( !*(_BYTE *)a1 )
      return result;
    return *(_QWORD *)(a1 + 8);
  }
  result = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)a1 )
    return *(_QWORD *)(a1 + 8);
  return result;
}