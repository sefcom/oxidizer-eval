char __fastcall uu_du::uumain::uumain::{{closure}}(__int64 a1)
{
  __int64 one; // rax
  __int64 v2; // rdx
  __int64 v5; // [rsp+20h] [rbp-48h]
  __int64 v6; // [rsp+28h] [rbp-40h]
  _BYTE v7[48]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[8]; // [rsp+60h] [rbp-8h] BYREF

  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a1, aTime, 4LL, &off_1617C0);
  v5 = core::option::Option<T>::map(one);
  v6 = v2;
  if ( !v5
    || (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v2, aCtime, 5LL) & 1) != 0
    || (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v6, aStatus, 6LL) & 1) != 0 )
  {
    return 1;
  }
  if ( (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v6, aAccess, 6LL) & 1) != 0
    || (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v6, aAtime, 5LL) & 1) != 0
    || (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v6, aUse, 3LL) & 1) != 0 )
  {
    return 0;
  }
  if ( (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v5, v6, aBirth, 5LL) & 1) == 0
    && (core::str::traits::<impl core::cmp::PartialEq for str>::eq(
          v5,
          v6,
          "creationUIoErrorinternal error: entered unreachable code: should be caught by clapPrinting thread panicked./ho"
          "me/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_lex-0.5.0/src/lib.rs/rustc/8bfcae730a5db"
          "2438bbda72796175bba21427be1/library/std/src/thread/mod.rsfailed to spawn threadmain",
          8LL) & 1) == 0 )
  {
    core::fmt::Arguments::new_v1(v7, &off_1617D8, v8);
    core::panicking::panic_fmt(v7, &off_1617E8);
  }
  return 2;
}
