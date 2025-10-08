char __fastcall uu_cp::TargetType::determine(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char is_dir; // cl
  char result; // al

  if ( a1 > 1 )
    return 0;
  is_dir = std::path::Path::is_dir(a2, a3);
  result = 1;
  if ( is_dir )
    return 0;
  return result;
}