__int64 __fastcall uu_nl::SectionDelimiter::parse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r14
  _BYTE v9[136]; // [rsp+0h] [rbp-88h] BYREF

  LOBYTE(v4) = 3;
  if ( a2 && a4 )
  {
    core::str::pattern::StrSearcher::new(v9, a1, a2, a3, a4);
    v6 = core::iter::traits::iterator::Iterator::fold(v9);
    v7 = v6 * a4;
    switch ( v6 )
    {
      case 1LL:
        LOBYTE(v4) = (v7 == a2) ^ 3;
        break;
      case 2LL:
        LOBYTE(v4) = (2 * (v7 != a2)) | 1;
        break;
      case 3LL:
        return 3 * (unsigned int)(v7 != a2);
    }
  }
  return v4;
}
