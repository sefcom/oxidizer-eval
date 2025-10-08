__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_left(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int16 v9; // [rsp+Eh] [rbp-8Ah] BYREF
  __int128 v10; // [rsp+10h] [rbp-88h] BYREF
  __int64 v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  unsigned int v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+80h] [rbp-18h]

  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_left(
    (__int64)&v12,
    (_QWORD *)a1,
    a2,
    a3,
    *(_QWORD *)(a1 + 544),
    *(_QWORD *)(a1 + 552));
  result = v13;
  if ( v12 != 1 )
  {
    v9 = 1088;
    v5 = *(_DWORD *)(a1 + 192) - 1;
    v6 = *(_QWORD *)(a1 + 184) - 1LL;
    v17[0] = a1 + 40;
    v7 = v13;
    v17[1] = v13;
    v8 = v14;
    v18 = v14;
    v19 = v6;
    v20 = v5;
    core::iter::traits::iterator::Iterator::try_fold(&v15, v17, &v9);
    if ( (_QWORD)v15 )
    {
      v11 = v16;
      v10 = v15;
    }
    else
    {
      *(_QWORD *)&v10 = 0LL;
    }
    return core::option::Option<T>::map_or(&v10, v7, v8);
  }
  return result;
}