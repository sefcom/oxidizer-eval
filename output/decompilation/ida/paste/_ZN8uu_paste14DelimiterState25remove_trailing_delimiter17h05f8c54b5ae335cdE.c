void __fastcall uu_paste::DelimiterState::remove_trailing_delimiter(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax

  if ( a1 && a2 )
  {
    v3 = *(_QWORD *)(a3 + 16);
    v4 = v3 < a2;
    v5 = v3 - a2;
    if ( v4 )
    {
      if ( *(_QWORD *)(a3 + 16) )
        core::panicking::panic(aAssertionFaile_3, 33LL, &off_113610);
    }
    else
    {
      alloc::vec::Vec<T,A>::truncate(a3, v5);
    }
  }
}
