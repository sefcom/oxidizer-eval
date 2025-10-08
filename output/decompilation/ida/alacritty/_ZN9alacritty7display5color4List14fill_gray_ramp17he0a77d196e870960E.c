__int64 __fastcall alacritty::display::color::List::fill_gray_ramp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  char v5; // bp
  char v6; // r15
  __int64 result; // rax
  char v8; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a2 + 4 * a3;
  v4 = a1 + 696;
  v5 = 8;
  v6 = -24;
  do
  {
    while ( 1 )
    {
      v8 = v6;
      v9[0] = a2;
      v9[1] = v3;
      result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v9, &v8);
      if ( !result )
        break;
      *(_BYTE *)(v4 + 2) = *(_BYTE *)(result + 2);
      result = *(unsigned __int16 *)result;
      *(_WORD *)v4 = result;
      v4 += 3LL;
      v5 += 10;
      if ( !++v6 )
        return result;
    }
    *(_BYTE *)v4 = v5;
    *(_BYTE *)(v4 + 1) = v5;
    *(_BYTE *)(v4 + 2) = v5;
    v4 += 3LL;
    v5 += 10;
    ++v6;
  }
  while ( v6 );
  return result;
}