__int64 __fastcall fd::filesystem::strip_current_dir(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = std::path::Path::strip_prefix(a1, a2);
  if ( !result )
    return a1;
  return result;
}