unsigned __int64 __fastcall alacritty_terminal::grid::storage::Storage<T>::initialize(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = a3;
  result = a2 + a1[5];
  v4 = a1[2];
  if ( result > v4 )
  {
    if ( a1[3] )
    {
      core::slice::<impl [T]>::rotate_left(a1[1], v4);
      a1[3] = 0LL;
    }
    v5 = core::cmp::Ord::max(a2, 1000LL);
    alloc::vec::Vec<T,A>::resize_with(a1, v5 + v4, v6);
    result = a1[5] + a2;
  }
  a1[5] = result;
  return result;
}