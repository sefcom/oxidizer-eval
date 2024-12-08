__int64 __fastcall uu_env::split_iterator::SplitIterator::get_current_char(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+8h] [rbp-10h] BYREF
  char v3; // [rsp+10h] [rbp-8h]

  uu_env::string_expander::StringExpander::peek((__int64)&v2, a1);
  result = 1114112LL;
  if ( v3 == 2 )
    return v2;
  return result;
}
