__int64 __fastcall alacritty::gl::metaloadfn(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v8; // rbx

  result = ((__int64 (*)(void))core::ops::function::impls::<impl core::ops::function::FnMut<A> for &mut F>::call_mut)();
  if ( !result )
  {
    if ( a5 )
    {
      v8 = &a4[2 * a5];
      while ( 1 )
      {
        result = core::ops::function::impls::<impl core::ops::function::FnMut<A> for &mut F>::call_mut(a1, *a4, a4[1]);
        if ( result )
          break;
        a4 += 2;
        if ( a4 == v8 )
          return 0LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}