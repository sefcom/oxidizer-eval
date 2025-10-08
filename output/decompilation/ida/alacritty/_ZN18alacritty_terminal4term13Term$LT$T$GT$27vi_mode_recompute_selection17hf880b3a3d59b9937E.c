void __fastcall alacritty_terminal::term::Term<T>::vi_mode_recompute_selection(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // edx

  if ( (*(_BYTE *)(a1 + 1758) & 1) != 0 )
  {
    v2 = a1 + 600;
    v3 = 0LL;
    if ( *(_BYTE *)(a1 + 640) != 2 )
      v3 = v2;
    v4 = core::option::Option<T>::filter(v3);
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 664);
      *(_QWORD *)(v4 + 24) = *(_QWORD *)(a1 + 656);
      *(_DWORD *)(v4 + 32) = v5;
      *(_BYTE *)(v4 + 40) = 0;
      alacritty_terminal::selection::Selection::include_all(v4);
    }
  }
}