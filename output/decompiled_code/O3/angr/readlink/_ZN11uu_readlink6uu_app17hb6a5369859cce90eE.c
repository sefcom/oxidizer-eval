long long uu_readlink::uu_app::hb6a5369859cce90e(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    char v1;  // [bp-0x800]
    unsigned long long v2;  // [sp-0x544]
    unsigned int v3;  // [sp-0x53c]
    char v4;  // [bp-0x538]
    char v5;  // [bp-0x27c]
    char v6;  // [bp-0x274]
    char v7;  // [bp-0x270]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h01c019dce2f6c6f8(&v1, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::h313d16302460a20b(&v4, &v1, v9);
    clap_builder::builder::command::Command::about::hb104c297ae8e8053(&v1, &v4);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]...canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given ", 24);
    clap_builder::builder::command::Command::override_usage::h8328a564352bd7a9(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v4, "canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all co", 12);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v4, 102);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v4, &v0, "canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all co", 12);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components mus", 127);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v1, "canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v1, 101);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v1, &v0, "canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v1, "canonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on compone", 115);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v4, "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport err", 20);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v4, 109);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v4, &v0, "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport err", 20);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate o", 134);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v1, "no-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src", 10);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v1, 110);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v1, &v0, "no-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src", 10);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v1, "do not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/patte", 36);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v4, "quietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 5);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v4, &v0, "quietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 5);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v4, "suppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 28);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v1, "silentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 6);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v1, &v0, "silentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 6);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v1, "suppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 28);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v4, "verbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 7);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v4, 118);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v4, &v0, "verbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 7);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v4, "report error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 20);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v1, "zero", 4);
    clap_builder::builder::arg::Arg::short::h22971b2646d31245(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long::hfa36530df8cb4b77(&v1, &v0, "zero", 4);
    clap_builder::builder::arg::Arg::help::h377853f89cc77af3(&v0, &v1, "separate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 44);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::ha0d122a0dc7df78f(&v4, "filessrc/uu/readlink/src/readlink.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 5);
    clap_builder::builder::arg::Arg::action::h087a8b53b220d0ef(&v0, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint::hb741f738c5d40b01(&v4, &v0);
    clap_builder::builder::command::Command::arg::h5c0b419c917e3a7d(a0, &v1, &v4);
    return a0;
}
