void *__fastcall alacritty::display::content::Hint::advance(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // r12d
  char v8; // cl
  void *result; // rax
  unsigned __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx

  v6 = a4;
  v8 = alacritty::display::content::HintMatches::advance(a1, a4, a5);
  result = &unk_110001;
  if ( v8 )
  {
    v10 = a1[3];
    if ( v10 < a1[2] )
    {
      v11 = core::cmp::Ord::max(*(_QWORD *)(a1[1] + 40 * v10), *(unsigned int *)(a1[1] + 40 * v10 + 8), a2);
      v13 = v6 - v11 + (a5 - v12) * a3;
      v14 = 0LL;
      if ( v13 > 0 )
        v14 = (unsigned int)v13;
      v15 = a1[4];
      v16 = *(_QWORD *)(v15 + 16);
      if ( v10 >= v16 )
        core::panicking::panic_bounds_check(v10, v16, &off_882138);
      v17 = *(_QWORD *)(v15 + 8);
      result = &unk_110000;
      if ( *(_QWORD *)(v17 + 24 * v10 + 16) > v14 )
        return (void *)*(unsigned int *)(*(_QWORD *)(v17 + 24 * v10 + 8) + 4 * v14);
    }
  }
  return result;
}