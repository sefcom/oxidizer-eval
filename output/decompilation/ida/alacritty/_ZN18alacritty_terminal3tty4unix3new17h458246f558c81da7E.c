__int64 __fastcall alacritty_terminal::tty::unix::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  int v7; // [rsp+8h] [rbp-20h] BYREF
  __int16 v8; // [rsp+Ch] [rbp-1Ch]
  __int16 v9; // [rsp+Eh] [rbp-1Ah]

  v7 = a3;
  v8 = WORD1(a3) * WORD2(a3);
  v9 = a3 * HIWORD(a3);
  v5 = rustix_openpty::openpty(0LL, &v7);
  if ( (_DWORD)v5 == -1 )
  {
    *(_QWORD *)a1 = ((unsigned __int64)(unsigned int)-SWORD2(v5) << 32) | 2;
    *(_DWORD *)(a1 + 32) = 2;
  }
  else
  {
    alacritty_terminal::tty::unix::from_fd(a1, a2, a4, (unsigned int)v5, HIDWORD(v5));
  }
  return a1;
}