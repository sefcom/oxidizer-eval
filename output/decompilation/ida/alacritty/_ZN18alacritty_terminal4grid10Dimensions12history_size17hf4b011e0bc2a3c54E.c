unsigned __int64 __fastcall alacritty_terminal::grid::Dimensions::history_size(
        unsigned __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  bool v3; // cf
  unsigned __int64 v4; // rdi

  result = 0LL;
  v3 = a1 < a2;
  v4 = a1 - a2;
  if ( !v3 )
    return v4;
  return result;
}