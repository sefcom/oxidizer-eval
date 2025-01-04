        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  v8 = std::path::Path::strip_prefix(a4, a5, a2, a3);
  if ( v8 )
  {
    std::path::Path::join(a1 + 1, a6, a7, v8, v9);
    v10 = 13LL;
  }
  else
  {
    v10 = 7LL;
  }
  *a1 = v10;
  return a1;
}
