__int64 __fastcall sniffnet::utils::types::icon::Icon::get_hourglass(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  char v4; // si

  v2 = a2 == 2;
  v3 = 2 * (a2 == 3) + 19;
  v4 = 20;
  if ( !v2 )
    v4 = v3;
  return sniffnet::utils::types::icon::Icon::to_text(a1, v4);
}