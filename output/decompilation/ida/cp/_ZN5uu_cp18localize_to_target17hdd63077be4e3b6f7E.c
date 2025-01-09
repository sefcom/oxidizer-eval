__int64 *__fastcall uu_cp::localize_to_target(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
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
