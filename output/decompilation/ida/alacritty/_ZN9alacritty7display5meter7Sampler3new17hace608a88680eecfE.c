__int64 __fastcall alacritty::display::meter::Sampler::new(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = std::time::Instant::now(a1);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 16) = v3;
  return result;
}