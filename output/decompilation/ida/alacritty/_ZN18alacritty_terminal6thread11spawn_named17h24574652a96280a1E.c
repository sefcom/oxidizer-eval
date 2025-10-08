__int64 __fastcall alacritty_terminal::thread::spawn_named(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+0h] [rbp-88h] BYREF
  __int128 v5; // [rsp+10h] [rbp-78h]
  __int64 v6; // [rsp+20h] [rbp-68h]
  char v7; // [rsp+28h] [rbp-60h]
  _BYTE v8[24]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[64]; // [rsp+48h] [rbp-40h] BYREF

  *(_QWORD *)&v5 = 0x8000000000000000LL;
  *(_QWORD *)&v4 = 0LL;
  v7 = 0;
  <T as core::convert::Into<U>>::into(v8, aSocketListener, 15LL);
  std::thread::Builder::name(v9, &v4, v8);
  v6 = *((_QWORD *)a2 + 4);
  v2 = *a2;
  v5 = a2[1];
  v4 = v2;
  ((void (__fastcall *)(_BYTE *, _BYTE *, __int128 *))std::thread::Builder::spawn_unchecked)(v8, v9, &v4);
  return core::result::Result<T,E>::expect(a1, v8);
}