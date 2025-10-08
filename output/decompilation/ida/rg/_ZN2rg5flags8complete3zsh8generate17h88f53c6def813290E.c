__int64 __fastcall rg::flags::complete::zsh::generate(int a1)
{
  __int64 v1; // r14
  int v2; // eax
  __int64 v3; // rdx
  __int128 v5; // [rsp+8h] [rbp-70h] BYREF
  __int64 v6; // [rsp+18h] [rbp-60h]
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h]
  _BYTE v9[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  grep_printer::hyperlink::hyperlink_aliases(&v12);
  v1 = v13;
  core::iter::traits::iterator::Iterator::collect(v9, v13, v13 + 56 * v14);
  alloc::str::join_generic_copy(&v5, v10, v11, asc_66865, 1LL);
  v8 = v6;
  v7 = v5;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v9);
  core::ptr::drop_in_place<alloc::vec::Vec<regex_syntax::ast::FlagsItem>>(v12, v1);
  v2 = core::str::<impl str>::trim_end_matches(aThisIsImpossib, 1453LL);
  alloc::str::<impl str>::replace(
    (unsigned int)&v5,
    (unsigned int)aCompdefRgZshCo,
    30642,
    (unsigned int)aEncodings,
    11,
    v2,
    v3);
  alloc::str::<impl str>::replace(a1, DWORD2(v5), v6, (unsigned int)aHyperlinkAlias, 19, DWORD2(v7), v8);
  core::ptr::drop_in_place<alloc::string::String>(&v5);
  return core::ptr::drop_in_place<alloc::string::String>(&v7);
}