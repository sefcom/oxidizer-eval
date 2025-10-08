__int64 __fastcall alacritty_terminal::selection::Selection::rotate(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int128 *v9; // r12
  __int128 *v10; // rbx
  int v11; // r13d
  int v12; // edi
  int v13; // eax
  __int64 result; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // [rsp+4h] [rbp-44h]

  v17 = alacritty_terminal::grid::Dimensions::bottommost_line(a4);
  v9 = (__int128 *)((char *)a2 + 24);
  v10 = (__int128 *)((char *)a2 + 24);
  if ( (char)<alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(
               *(_QWORD *)a2,
               *((unsigned int *)a2 + 2),
               *((_QWORD *)a2 + 3),
               *((unsigned int *)a2 + 8)) <= 0 )
    v9 = a2;
  else
    v10 = a2;
  v11 = *((_DWORD *)v9 + 2);
  if ( v11 < a6 && (v11 >= a5 || a5 == 0) )
  {
    v11 = core::cmp::Ord::min((unsigned int)(v11 - a7), v17);
    *((_DWORD *)v9 + 2) = v11;
    if ( v11 >= a6 && *((_DWORD *)v10 + 2) < a6 )
      goto LABEL_14;
    if ( a5 && v11 < a5 )
    {
      if ( *((_BYTE *)a2 + 48) != 1 )
      {
        *(_QWORD *)v9 = 0LL;
        *((_BYTE *)v9 + 16) = 0;
      }
      *((_DWORD *)v9 + 2) = a5;
      v11 = a5;
    }
  }
  v12 = *((_DWORD *)v10 + 2);
  if ( v12 < a6 && (a5 == 0 || v12 >= a5) )
  {
    v13 = core::cmp::Ord::min((unsigned int)(v12 - a7), v17);
    *((_DWORD *)v10 + 2) = v13;
    if ( v13 < v11 )
    {
LABEL_14:
      result = a1;
      *(_BYTE *)(a1 + 40) = 2;
      return result;
    }
    if ( v13 >= a6 )
    {
      if ( *((_BYTE *)a2 + 48) != 1 )
      {
        *(_QWORD *)v10 = alacritty_terminal::grid::Dimensions::last_column(a3);
        *((_BYTE *)v10 + 16) = 1;
      }
      *((_DWORD *)v10 + 2) = a6 - 1;
    }
  }
  result = *((_QWORD *)a2 + 6);
  *(_QWORD *)(a1 + 48) = result;
  v15 = *a2;
  v16 = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  return result;
}