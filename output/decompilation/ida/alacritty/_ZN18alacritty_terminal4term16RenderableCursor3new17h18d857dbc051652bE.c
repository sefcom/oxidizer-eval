__int64 __fastcall alacritty_terminal::term::RenderableCursor::new(__int64 a1, __int64 a2)
{
  int v3; // r12d
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rcx
  unsigned int *v6; // rdx
  unsigned int *v7; // rsi
  int v8; // ebp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int16 v12; // r13
  char v13; // dl
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 1756);
  v4 = (unsigned __int64 *)(a2 + 656);
  v5 = (unsigned __int64 *)(a2 + 88);
  v6 = (unsigned int *)(a2 + 664);
  v7 = (unsigned int *)(a2 + 96);
  if ( (v3 & 0x10000) != 0 )
    v7 = v6;
  else
    v4 = v5;
  v8 = *v7;
  v9 = *v4;
  v10 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
          a2 + 40,
          *v7,
          &off_8779B0);
  v11 = *(_QWORD *)(v10 + 16);
  if ( v9 >= v11 )
    core::panicking::panic_bounds_check(v9, v11, &off_8779B0);
  v12 = *(_WORD *)(*(_QWORD *)(v10 + 8) + 24 * v9 + 20);
  if ( (v3 & 0x10001) != 0 )
    alacritty_terminal::term::Term<T>::cursor_style(a2);
  else
    v13 = 4;
  result = (__int16)((unsigned int)(__int16)(v12 << 9) >> 15);
  *(_BYTE *)(a1 + 16) = v13;
  *(_QWORD *)a1 = result + v9;
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}