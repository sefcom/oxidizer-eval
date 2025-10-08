__int64 __fastcall alacritty_terminal::term::TermDamageState::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v6 = a2;
  v7[1] = 0LL;
  v7[2] = a3;
  v7[0] = &v6;
  core::iter::traits::iterator::Iterator::collect(&v8, v7);
  v3 = v8;
  v4 = v9;
  *(_BYTE *)(a1 + 40) = 1;
  *(_OWORD *)a1 = v3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  return a1;
}