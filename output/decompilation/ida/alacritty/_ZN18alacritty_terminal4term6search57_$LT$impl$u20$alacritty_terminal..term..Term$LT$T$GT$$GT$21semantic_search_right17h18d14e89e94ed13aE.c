__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_right(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // ebp
  int v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  unsigned int v11; // [rsp+18h] [rbp-60h]
  _QWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+40h] [rbp-38h]
  _BYTE v16[48]; // [rsp+48h] [rbp-30h] BYREF

  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_right(
    (__int64)&v9,
    (_QWORD *)a1,
    a2,
    a3,
    *(_QWORD *)(a1 + 544),
    *(_QWORD *)(a1 + 552));
  result = v10;
  if ( v9 != 1 )
  {
    v5 = *(_DWORD *)(a1 + 192) - 1;
    v6 = *(_QWORD *)(a1 + 184) - 1LL;
    v12[0] = a1 + 40;
    v12[1] = v10;
    v13 = v11;
    v14 = v6;
    v15 = v5;
    v7 = v10;
    v8 = v11;
    <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v16, v12);
    return core::option::Option<T>::map_or(v16, v7, v8);
  }
  return result;
}