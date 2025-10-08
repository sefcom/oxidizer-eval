char __fastcall just::subcommand::Subcommand::summary(__int64 a1, char a2, __int64 a3)
{
  char result; // al
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  char **v5; // [rsp+10h] [rbp-38h] BYREF
  __int64 v6; // [rsp+18h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  just::subcommand::Subcommand::summary_recursive(a1, &v5, &v4, a3);
  core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
    v5,
    v6);
  v5 = (char **)&off_42DBF8;
  v6 = 1LL;
  v7 = 8LL;
  v8 = 0LL;
  std::io::stdio::_print(&v5);
  result = v4 != 0;
  if ( v4 == 0 && a2 != 0 )
  {
    v5 = &off_431490;
    v6 = 1LL;
    v7 = 8LL;
    v8 = 0LL;
    return std::io::stdio::_eprint(&v5);
  }
  return result;
}