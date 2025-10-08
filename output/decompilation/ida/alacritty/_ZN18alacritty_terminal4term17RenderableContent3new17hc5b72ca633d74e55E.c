__int64 __fastcall alacritty_terminal::term::RenderableContent::new(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // r13
  int v7; // edx
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  _OWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a2 + 192);
  v4 = *(_QWORD *)(a2 + 200);
  alacritty_terminal::term::RenderableCursor::new((__int64)&v10, a2);
  if ( *(_BYTE *)(a2 + 640) == 2 )
    LOBYTE(v13) = 2;
  else
    alacritty_terminal::selection::Selection::to_range(v12, a2 + 600, a2);
  v5 = core::cmp::Ord::min((unsigned int)(v3 + ~(_DWORD)v4), (unsigned int)(v3 - 1));
  v6 = v2 - 1;
  v7 = *(_DWORD *)(a2 + 1756);
  *(_QWORD *)(a1 + 8) = a2 + 40;
  *(_QWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 24) = ~(_DWORD)v4;
  *(_QWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 40) = v5;
  v8 = v12[0];
  *(_OWORD *)(a1 + 96) = v12[1];
  *(_QWORD *)(a1 + 112) = v13;
  *(_OWORD *)(a1 + 80) = v8;
  *(_OWORD *)(a1 + 56) = v10;
  result = v11;
  *(_QWORD *)(a1 + 72) = v11;
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 48) = a2 + 680;
  *(_DWORD *)(a1 + 120) = v7;
  return result;
}