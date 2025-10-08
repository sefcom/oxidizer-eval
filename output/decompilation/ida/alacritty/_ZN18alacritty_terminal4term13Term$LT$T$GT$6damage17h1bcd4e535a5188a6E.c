__int64 __fastcall alacritty_terminal::term::Term<T>::damage(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 result; // rax
  int v9; // ecx

  if ( (*(_BYTE *)(a2 + 1757) & 4) != 0 )
  {
    *(_BYTE *)(a2 + 528) = 1;
    result = *(_QWORD *)(a2 + 88);
    v9 = *(_DWORD *)(a2 + 96);
    *(_QWORD *)(a2 + 512) = result;
    *(_DWORD *)(a2 + 520) = v9;
    goto LABEL_6;
  }
  v2 = *(_QWORD *)(a2 + 88);
  v3 = *(_QWORD *)(a2 + 512);
  v4 = *(int *)(a2 + 96);
  v5 = *(int *)(a2 + 520);
  *(_QWORD *)(a2 + 512) = v2;
  *(_DWORD *)(a2 + 520) = v4;
  if ( (*(_BYTE *)(a2 + 528) & 1) != 0 )
  {
LABEL_6:
    *a1 = 0LL;
    return result;
  }
  v6 = *(_QWORD *)(a2 + 496);
  v7 = *(_QWORD *)(a2 + 504);
  if ( (_DWORD)v4 != (_DWORD)v5 || v2 != v3 )
    alacritty_terminal::term::TermDamageState::damage_line(v6, v7, v5, v3, v3);
  alacritty_terminal::term::TermDamageState::damage_line(v6, v7, v4, v2, v2);
  return alacritty_terminal::term::TermDamageIterator::new(a1, v6, v7, *(_QWORD *)(a2 + 200));
}