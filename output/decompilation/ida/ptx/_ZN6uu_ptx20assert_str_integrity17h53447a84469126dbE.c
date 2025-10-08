void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> uu_ptx::assert_str_integrity(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( a2 > a3 )
    core::panicking::panic(aAssertionFaile_5, 28LL, &off_2518F8);
  if ( a3 > a1 )
    core::panicking::panic(aAssertionFaile_0, 32LL, &off_251910);
}