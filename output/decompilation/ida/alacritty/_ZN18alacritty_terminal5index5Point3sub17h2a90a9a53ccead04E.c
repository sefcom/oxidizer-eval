__int64 __fastcall alacritty_terminal::index::Point::sub(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  int v14; // esi

  v4 = *(_QWORD *)(a3 + 144);
  if ( !v4 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_877C58);
  v6 = a4 + v4 - 1;
  v7 = 0LL;
  v8 = v6 < a1;
  v9 = v6 - a1;
  if ( !v8 )
    v7 = v9;
  if ( (v4 | v7) >> 32 )
    v10 = v7 / v4;
  else
    LODWORD(v10) = (unsigned int)v7 / (unsigned int)v4;
  v11 = v4 + a1;
  if ( (v4 | a4) >> 32 )
    v12 = a4 % v4;
  else
    v12 = (unsigned int)a4 % (unsigned int)v4;
  v13 = v11 - v12;
  v14 = a2 - v10;
  if ( (v4 | v13) >> 32 )
    return alacritty_terminal::index::Point::grid_clamp(v13 % v4, v14, a3);
  else
    return alacritty_terminal::index::Point::grid_clamp((unsigned int)v13 % (unsigned int)v4, v14, a3);
}