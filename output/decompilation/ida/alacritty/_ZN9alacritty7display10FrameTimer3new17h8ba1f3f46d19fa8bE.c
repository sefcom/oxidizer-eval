__int64 __fastcall alacritty::display::FrameTimer::new(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = std::time::Instant::now(a1);
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = result;
  *(_DWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}