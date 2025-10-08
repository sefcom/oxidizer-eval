__int64 __fastcall uu_stty::tiocgwinsz(int a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = ioctl(a1, 0x5413uLL, a2);
  return nix::errno::<impl nix::errno::consts::Errno>::result(v2);
}