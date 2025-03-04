void __fastcall uu_ptx::assert_str_integrity(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( a2 > a3 )
    core::panicking::panic(aAssertionFaile_9, 28LL, &off_2EDE08);
  if ( a3 > a1 )
    core::panicking::panic(aAssertionFaile_0, 32LL, &off_2EDE20);
}
