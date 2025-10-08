unsigned __int64 *__fastcall uu_cp::localize_to_target(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx

  v8 = 0x8000000000000006LL;
  v9 = std::path::Path::strip_prefix(a4, a5, a2, a3);
  if ( v9 )
  {
    std::path::Path::join(a1 + 1, a6, a7, v9, v10);
    v8 = 0x800000000000000CLL;
  }
  *a1 = v8;
  return a1;
}