bool __fastcall alacritty::display::bell::VisualBell::completed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r15
  int v3; // edx
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  bool v6; // cf
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+8h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 != 1000000000 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v8 = std::time::Instant::now();
    v9 = v3;
    v4 = std::time::Instant::saturating_duration_since(&v8, v2, v1);
    v6 = v4 < *(_QWORD *)a1;
    if ( v4 == *(_QWORD *)a1 )
      v6 = v5 < *(_DWORD *)(a1 + 8);
    if ( !v6 )
      *(_DWORD *)(a1 + 24) = 1000000000;
  }
  return v1 == 1000000000;
}