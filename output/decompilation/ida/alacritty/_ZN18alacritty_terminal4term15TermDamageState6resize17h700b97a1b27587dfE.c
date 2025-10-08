__int64 __fastcall alacritty_terminal::term::TermDamageState::resize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbp
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 1;
  *(_OWORD *)(a1 + 16) = 0LL;
  result = alloc::vec::Vec<T,A>::reserve(a1, a3);
  if ( a3 )
  {
    v5 = 0LL;
    do
    {
      v6[0] = v5++;
      v6[1] = a2;
      v6[2] = 0LL;
      result = ((__int64 (__fastcall *)(__int64, _QWORD *, char **))alloc::vec::Vec<T,A>::push)(a1, v6, &off_877998);
    }
    while ( a3 != v5 );
  }
  return result;
}