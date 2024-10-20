__int64 __fastcall uu_du::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-28h]
  _QWORD v4[4]; // [rsp+18h] [rbp-20h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v3 = uucore::mods::error::USimpleError::new(
         1LL,
         "Printing thread panicked./home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_lex-0.5.0/src"
         "/lib.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/mod.rsfailed to spawn threadmain",
         25LL);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::any::Any+core::marker::Send>>(v4);
  return v3;
}
