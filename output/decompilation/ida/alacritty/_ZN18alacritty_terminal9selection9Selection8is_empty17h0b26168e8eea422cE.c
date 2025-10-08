bool __fastcall alacritty_terminal::selection::Selection::is_empty(__int128 *a1)
{
  int v2; // ebx
  int v3; // ebp
  bool v4; // al
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  __int64 v7; // rdx
  unsigned __int8 v8; // di
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  if ( (unsigned int)*((unsigned __int8 *)a1 + 48) - 2 < 2 )
    return 0;
  if ( !*((_BYTE *)a1 + 48) )
  {
    v14 = *((_QWORD *)a1 + 5);
    v13 = *(__int128 *)((char *)a1 + 24);
    v11 = *a1;
    v12 = *((_QWORD *)a1 + 2);
    v2 = DWORD2(v11);
    v3 = DWORD2(v13);
    if ( (char)<alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(v11, DWORD2(v11), v13, DWORD2(v13)) > 0 )
    {
      core::intrinsics::typed_swap_nonoverlapping(&v11, &v13);
      v2 = DWORD2(v11);
      v3 = DWORD2(v13);
    }
    if ( v2 == v3 )
    {
      v4 = 1;
      if ( (_BYTE)v12 == (unsigned __int8)v14 && (_QWORD)v11 == (_QWORD)v13 )
        return v4;
      if ( (((_BYTE)v14 == 0) & (unsigned __int8)v12) == 1 )
        return (_QWORD)v11 + 1LL == (_QWORD)v13;
    }
    return 0;
  }
  v5 = *(_QWORD *)a1;
  v6 = *((_BYTE *)a1 + 16);
  v7 = *((_QWORD *)a1 + 3);
  v8 = *((_BYTE *)a1 + 40);
  if ( v5 == v7 )
  {
    v4 = 1;
    if ( ((v6 ^ v8) & 1) == 0 )
      return v4;
  }
  if ( v5 + 1 == v7 )
  {
    v8 &= 1u;
    v4 = 1;
    if ( ((v8 == 0) & v6) != 0 )
      return v4;
  }
  v9 = v7 + 1;
  v10 = v8;
  if ( (v6 & 1) != 0 )
    v10 = 0;
  if ( v9 != v5 )
    v10 = 0;
  return v10 & 1;
}