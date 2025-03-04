__int64 __fastcall uu_ls::display_group(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // [rsp-4h] [rbp-8h] BYREF

  if ( !a3 )
    return uu_ls::cached_gid2grp(a1, a2);
  v5 = __PAIR64__(a2, v3);
  <T as alloc::string::ToString>::to_string(a1, (char *)&v5 + 4);
  return v5;
}
