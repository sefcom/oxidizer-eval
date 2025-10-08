unsigned int *__fastcall just::signal_handler::SignalHandler::interrupt(__int64 *a1, unsigned int a2)
{
  unsigned int *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _BOOL8 v5; // rsi
  int v6; // eax
  unsigned int v7; // [rsp+Ch] [rbp-BCh] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v9[9]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v10[12]; // [rsp+68h] [rbp-60h] BYREF

  result = (unsigned int *)a1[2];
  if ( !result )
  {
    v6 = just::signal::Signal::code(a2);
    std::process::exit(v6);
  }
  if ( *((_DWORD *)a1 + 6) )
  {
    if ( a2 <= 3 )
      return result;
  }
  else
  {
    *((_DWORD *)a1 + 6) = a2;
    if ( a2 <= 3 )
      return result;
  }
  v3 = *a1;
  v4 = a1[1];
  v5 = *a1 != 0;
  if ( !*a1 )
    result = 0LL;
  v9[0] = *a1 != 0;
  v9[1] = 0LL;
  v9[2] = v3;
  v9[3] = v4;
  v9[4] = v5;
  v9[5] = 0LL;
  v9[6] = v3;
  v9[7] = v4;
  v9[8] = result;
  result = (unsigned int *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v9);
  if ( result )
  {
    if ( *((_BYTE *)a1 + 28) <= 1u )
    {
      do
      {
        nix::sys::signal::kill(*result);
        result = (unsigned int *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v9);
      }
      while ( result );
    }
    else
    {
      do
      {
        v7 = *result;
        v8[0] = &v7;
        v8[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v10[0] = &off_430F20;
        v10[1] = 2LL;
        v10[4] = 0LL;
        v10[2] = v8;
        v10[3] = 1LL;
        std::io::stdio::_eprint(v10);
        nix::sys::signal::kill(v7);
        result = (unsigned int *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v9);
      }
      while ( result );
    }
  }
  return result;
}