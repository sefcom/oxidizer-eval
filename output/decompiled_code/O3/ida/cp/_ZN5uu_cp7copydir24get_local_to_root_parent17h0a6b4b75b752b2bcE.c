        __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( !a4 )
    return std::path::Path::to_path_buf(a1, a2);
  v5 = std::path::Path::strip_prefix(a2, a3, a4, a5);
  if ( v5 )
  {
    a2 = v5;
    return std::path::Path::to_path_buf(a1, a2);
  }
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}
