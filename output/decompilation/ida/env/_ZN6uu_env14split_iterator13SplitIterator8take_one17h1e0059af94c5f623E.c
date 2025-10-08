__int64 __fastcall uu_env::split_iterator::SplitIterator::take_one(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // ecx

  result = uu_env::string_expander::StringExpander::take_one(a2);
  v4 = 12;
  if ( v3 != 2 )
  {
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    *(_BYTE *)(a1 + 24) = v3 & 1;
    v4 = 11;
  }
  *(_DWORD *)a1 = v4;
  return result;
}