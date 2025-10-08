unsigned __int64 __fastcall alacritty_terminal::grid::storage::Storage<T>::truncate(_QWORD *a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 result; // rax
  bool v4; // cf
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r14
  __int64 v7; // rdi

  if ( a1[3] )
  {
    v2 = a1[2];
    core::slice::<impl [T]>::rotate_left(a1[1], v2);
    a1[3] = 0LL;
    result = a1[5];
    v4 = v2 < result;
    v5 = v2 - result;
    if ( v4 )
      return result;
LABEL_5:
    v7 = a1[1] + 32 * result;
    a1[2] = result;
    return core::ptr::drop_in_place<[alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>]>(v7, v5);
  }
  v6 = a1[2];
  result = a1[5];
  v4 = v6 < result;
  v5 = v6 - result;
  if ( !v4 )
    goto LABEL_5;
  return result;
}