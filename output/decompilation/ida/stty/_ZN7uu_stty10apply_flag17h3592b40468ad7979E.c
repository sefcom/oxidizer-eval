char __fastcall uu_stty::apply_flag(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int *v7; // rdi
  char v8; // cl
  char result; // al
  int v10; // eax

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIgnbrk, 6LL) )
  {
    v7 = (int *)&unk_E3138;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aBrkint, 6LL) )
  {
    v7 = (int *)&unk_E3158;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIgnpar, 6LL) )
  {
    v7 = (int *)&unk_E3178;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aParmrk, 6LL) )
  {
    v7 = (int *)&unk_E3198;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aInpck, 5LL) )
  {
    v7 = (int *)&unk_E31B8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIstrip, 6LL) )
  {
    v7 = (int *)&unk_E31D8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aInlcr, 5LL) )
  {
    v7 = (int *)&unk_E31F8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIgncr, 5LL) )
  {
    v7 = (int *)&unk_E3218;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIcrnl, 5LL) )
  {
    v7 = (int *)&unk_E3238;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIxoff, 5LL) )
  {
    v7 = (int *)&unk_E3258;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aTandem, 6LL) )
  {
    v7 = (int *)&unk_E3278;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIxon, 4LL) )
  {
    v7 = (int *)&unk_E3298;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIxany, 5LL) )
  {
    v7 = (int *)&unk_E32B8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aImaxbel, 7LL) )
  {
    v7 = (int *)&unk_E32D8;
  }
  else
  {
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIutf8, 5LL);
    result = 2;
    if ( !v8 )
      return result;
    v7 = (int *)&unk_E32F8;
  }
  v10 = *v7;
  if ( a4 )
  {
    if ( v10 )
      return 0;
  }
  else if ( (v10 & 1) != 0 )
  {
    <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::apply(v7 + 1, a1, 0LL);
  }
  <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::apply(v7 + 6, a1, a4 ^ 1u);
  return 1;
}