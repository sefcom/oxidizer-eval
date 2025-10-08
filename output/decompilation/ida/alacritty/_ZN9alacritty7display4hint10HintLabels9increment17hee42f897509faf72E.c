__int64 __fastcall alacritty::display::hint::HintLabels::increment(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 *v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  result = a1[5];
  if ( !result )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_882210);
  v2 = (unsigned __int64 *)a1[4];
  v3 = a1[6];
  if ( *v2 >= v3 )
  {
    *v2 = 0LL;
    v4 = a1[2];
    v5 = a1 + 3;
    v9 = v2;
    v10 = &v2[result];
    v11 = 1LL;
    v6 = v3 + 1;
    v7 = 1LL;
LABEL_9:
    v11 = 0LL;
    result = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::nth(&v9, v7);
    if ( result )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)result + 1LL;
        if ( v8 != v4 )
          break;
        *(_QWORD *)result = v6;
        v7 = v11;
        if ( v11 )
          goto LABEL_9;
        result = (__int64)v9;
        if ( v9 == v10 )
          return alloc::vec::Vec<T,A>::push(v5, v6);
        ++v9;
      }
      *(_QWORD *)result = v8;
    }
    else
    {
      return alloc::vec::Vec<T,A>::push(v5, v6);
    }
  }
  else
  {
    ++*v2;
  }
  return result;
}