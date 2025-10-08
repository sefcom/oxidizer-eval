__int128 __usercall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> zoxide::cmd::import::sigmoid@<xmm0>(double a1@<xmm0>)
{
  __int128 v1; // xmm1

  v1 = 0x3FF0000000000000uLL;
  *(double *)&v1 = 1.0 / (exp(-a1) + 1.0);
  return v1;
}