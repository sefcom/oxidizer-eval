__int64 __fastcall alacritty::display::damage::FrameDamage::reset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = alloc::vec::Vec<T,A>::reserve(a1, a2);
  if ( a2 )
  {
    v8 = 0LL;
    do
    {
      v9[0] = v8++;
      v9[1] = a3;
      v9[2] = 0LL;
      result = ((__int64 (__fastcall *)(__int64, _QWORD *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
                 a1,
                 v9,
                 &off_882360,
                 v5,
                 v6,
                 v7);
    }
    while ( a2 != v8 );
  }
  return result;
}