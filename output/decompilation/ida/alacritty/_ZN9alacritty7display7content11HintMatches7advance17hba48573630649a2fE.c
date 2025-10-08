char __fastcall alacritty::display::content::HintMatches::advance(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned __int64 v8; // r13
  unsigned int *i; // rbp
  __int64 v10; // rax

  v3 = a1[2];
  v4 = a1[3];
  if ( v4 < v3 )
  {
    v6 = -(__int64)v3;
    v7 = 5 * v4;
    v8 = v4 + 1;
    for ( i = (unsigned int *)(a1[1] + 8 * v7 + 24);
          (char)<alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(*((_QWORD *)i - 3), *(i - 4), a2, a3) <= 0;
          i += 10 )
    {
      if ( (<alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(*((_QWORD *)i - 1), *i, a2, a3) & 0x80u) == 0LL )
        return 1;
      a1[3] = v8;
      v10 = v6 + v8++ + 1;
      if ( v10 == 1 )
        return 0;
    }
  }
  return 0;
}