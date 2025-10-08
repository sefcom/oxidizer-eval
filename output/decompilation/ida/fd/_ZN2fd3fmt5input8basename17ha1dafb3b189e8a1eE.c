__int64 __fastcall fd::fmt::input::basename(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = std::path::Path::file_name(a1, a2);
  if ( !result )
    return a1;
  return result;
}