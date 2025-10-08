_QWORD *__fastcall alacritty::display::hint::HintPostProcessor<T>::hint_post_processing(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // r13
  int v10; // ebx
  int v11; // ebp
  int v12; // r15d
  unsigned int v13; // r15d
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  char v17; // al
  char v18; // cl
  bool v19; // cc
  _QWORD *result; // rax
  unsigned int v21; // [rsp+4h] [rbp-84h]
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  unsigned int v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  int v26; // [rsp+30h] [rbp-58h]
  _QWORD *v27; // [rsp+38h] [rbp-50h]
  _QWORD v28[9]; // [rsp+40h] [rbp-48h] BYREF

  v27 = a1;
  v4 = *a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_DWORD *)(a2 + 192) - 1;
  v7 = *(_QWORD *)(a2 + 184) - 1LL;
  v22 = a2 + 40;
  v23 = v4;
  v21 = v5;
  v24 = v5;
  v25 = v7;
  v26 = v6;
  v8 = *(_DWORD *)(alacritty_terminal::grid::GridIterator<T>::cell((__int64)&v22) + 16);
  v9 = a3[2];
  v10 = *((_DWORD *)a3 + 6);
  v11 = 0;
  v12 = 0;
  if ( v8 > 90 )
    goto LABEL_7;
LABEL_2:
  if ( v8 == 40 )
  {
    ++v12;
  }
  else if ( v8 == 41 )
  {
    if ( !v12 )
      goto LABEL_20;
    --v12;
    if ( v24 == v10 )
      goto LABEL_14;
    goto LABEL_15;
  }
LABEL_13:
  if ( v24 != v10 )
    goto LABEL_15;
LABEL_14:
  if ( v23 == v9 )
    goto LABEL_21;
LABEL_15:
  while ( 1 )
  {
    <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v28, &v22);
    if ( !v28[0] )
      break;
    v8 = *(_DWORD *)(v28[0] + 16LL);
    if ( v8 <= 90 )
      goto LABEL_2;
LABEL_7:
    if ( v8 == 91 )
    {
      ++v11;
      if ( v24 == v10 )
        goto LABEL_14;
    }
    else
    {
      if ( v8 != 93 )
        goto LABEL_13;
      if ( !v11 )
      {
LABEL_20:
        <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v28, &v22);
        break;
      }
      --v11;
      if ( v24 == v10 )
        goto LABEL_14;
    }
  }
LABEL_21:
  v13 = v21;
  v14 = v4;
  if ( v23 != v4 || v24 != v21 )
  {
    v15 = 0x4000000460028C1LL;
    v13 = v24;
    v14 = v23;
    while ( 1 )
    {
      v16 = (unsigned int)(v8 - 33);
      if ( (unsigned int)v16 > 0x3A || !_bittest64(&v15, v16) )
        break;
      <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v28, &v22);
      if ( !v28[0] )
      {
        v14 = v23;
        v13 = v24;
        break;
      }
      v8 = *(_DWORD *)(v28[0] + 16LL);
      v13 = v24;
      v14 = v23;
      if ( v23 == v4 && v24 == v21 )
      {
        v13 = v21;
        v14 = v4;
        break;
      }
    }
  }
  v17 = <alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(v4, v21, v14, v13);
  v18 = 2;
  v19 = v17 <= 0;
  result = v27;
  if ( v19 )
  {
    *v27 = v4;
    *((_DWORD *)result + 2) = v21;
    result[2] = v14;
    *((_DWORD *)result + 6) = v13;
    v18 = 0;
  }
  *((_BYTE *)result + 32) = v18;
  return result;
}