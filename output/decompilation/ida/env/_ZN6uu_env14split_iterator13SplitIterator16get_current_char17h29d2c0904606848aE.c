_UNKNOWN **__fastcall uu_env::split_iterator::SplitIterator::get_current_char(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // [rsp+8h] [rbp-10h] BYREF
  char v3; // [rsp+10h] [rbp-8h]

  uu_env::string_expander::StringExpander::peek(&v2, a1);
  result = &off_110000;
  if ( v3 == 2 )
    return (_UNKNOWN **)v2;
  return result;
}