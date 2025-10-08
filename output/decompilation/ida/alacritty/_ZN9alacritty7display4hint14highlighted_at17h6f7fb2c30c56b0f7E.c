__int64 __fastcall alacritty::display::hint::highlighted_at(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  bool v8; // [rsp+7h] [rbp-41h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  int v10; // [rsp+10h] [rbp-38h]
  _QWORD v11[2]; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v8 = (*(_DWORD *)(a2 + 1756) & 0x2048) != 0;
  v9 = a5;
  v10 = a6;
  v11[0] = a3;
  v11[1] = a3 + 8 * a4;
  v12[0] = &a7;
  v12[1] = &v8;
  v12[2] = a2;
  v12[3] = &v9;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(a1, v11, v12);
}