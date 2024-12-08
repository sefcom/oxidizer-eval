long long uu_base32::base_common::base_app::h9b917df7b5838c03(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x838], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x830]
    char v2;  // [bp-0x828]
    char v3;  // [bp-0x810], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x808]
    unsigned long long v5;  // [sp-0x800]
    unsigned long long v6;  // [sp-0x7f8]
    void* v7;  // [sp-0x7f0]
    char v8;  // [bp-0x554]
    char v9;  // [bp-0x54c]
    char v10;  // [bp-0x548]
    char v11;  // [bp-0x2f8]
    unsigned long long v12;  // [sp-0x3c]
    unsigned int v13;  // [sp-0x34]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::h2b4229f1163a673f(&v11, uucore::util_name::h412db5e565a079f3(), v15);
    clap_builder::builder::command::Command::version::he3bbb52732f5cccd(&v3, &v11, "0.0.28decode datawhen decoding, ignore non-alphabetic characterswrap encoded lines after COLS character (default , 0 to disable wrapping)", 6);
    clap_builder::builder::command::Command::about::h64f67e312d16c6dc(&v11, &v3, a1, a2);
    uucore::format_usage::h00b69bae12d8ac9c(&v10, a3, a4);
    clap_builder::builder::command::Command::override_usage::h0787341d76604907(&v3, &v11, &v10);
    memcpy(&v11, &v3, 700);
    v12 = 549755814016 | *((long long *)&v8);
    v13 = *((int *)&v9);
    clap_builder::builder::arg::Arg::new::he727d213dd086750(&v3, "decodeignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.i", 6);
    clap_builder::builder::arg::Arg::short::h2ed999a6a2812093(&v10, &v3, 100);
    clap_builder::builder::arg::Arg::long::h263ab39fa190a4ee(&v3, &v10, "decodeignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.i", 6);
    clap_builder::builder::arg::Arg::help::ha044496e3f15c4fd(&v10, &v3, "decode datawhen decoding, ignore non-alphabetic characterswrap encoded lines after COLS character (default , 0 to disable wrapping)", 11);
    clap_builder::builder::arg::Arg::action::he277caa56f0653d3(&v3, &v10, 2);
    clap_builder::builder::arg::Arg::overrides_with::h77d9844f4ed4ee25(&v10, &v3, "decodeignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.i", 6);
    clap_builder::builder::command::Command::arg::hee660555d8a579f4(&v3, &v11, &v10);
    clap_builder::builder::arg::Arg::new::he727d213dd086750(&v11, "ignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/z85-3.0.5/src/lib.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsmid > len/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 14);
    clap_builder::builder::arg::Arg::short::h2ed999a6a2812093(&v10, &v11, 105);
    clap_builder::builder::arg::Arg::long::h263ab39fa190a4ee(&v11, &v10, "ignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/z85-3.0.5/src/lib.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsmid > len/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 14);
    clap_builder::builder::arg::Arg::help::ha044496e3f15c4fd(&v10, &v11, "when decoding, ignore non-alphabetic characterswrap encoded lines after COLS character (default , 0 to disable wrapping)", 47);
    clap_builder::builder::arg::Arg::action::he277caa56f0653d3(&v11, &v10, 2);
    clap_builder::builder::arg::Arg::overrides_with::h77d9844f4ed4ee25(&v10, &v11, "ignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/z85-3.0.5/src/lib.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsmid > len/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 14);
    clap_builder::builder::command::Command::arg::hee660555d8a579f4(&v11, &v3, &v10);
    clap_builder::builder::arg::Arg::new::he727d213dd086750(&v3, "wrap", 4);
    clap_builder::builder::arg::Arg::short::h2ed999a6a2812093(&v10, &v3, 119);
    clap_builder::builder::arg::Arg::long::h263ab39fa190a4ee(&v3, &v10, "wrap", 4);
    clap_builder::builder::arg::Arg::value_name::h075f9d86a53a2313(&v10, &v3, v15);
    v0 = "L";
    v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v3 = &g_54a3b8;
    v4 = 2;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h7c2a51b30d484005(&v2, &v3);
    clap_builder::builder::arg::Arg::help::h7c71d7cc6b83b117(&v3, &v10, &v2);
    clap_builder::builder::arg::Arg::overrides_with::h77d9844f4ed4ee25(&v10, &v3, "wrap", 4);
    clap_builder::builder::command::Command::arg::hee660555d8a579f4(&v3, &v11, &v10);
    clap_builder::builder::arg::Arg::new::he727d213dd086750(&v11, "filei128", 4);
    clap_builder::builder::arg::Arg::index::h27c703e9bb53026d(&v10, &v11);
    clap_builder::builder::arg::Arg::action::he277caa56f0653d3(&v11, &v10, 1);
    clap_builder::builder::arg::Arg::value_hint::hd6b3292204428240(&v10, &v11, 3);
    clap_builder::builder::command::Command::arg::hee660555d8a579f4(a0, &v3, &v10);
    return a0;
}
