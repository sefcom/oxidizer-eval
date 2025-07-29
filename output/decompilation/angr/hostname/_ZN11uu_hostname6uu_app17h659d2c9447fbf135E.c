long long uu_hostname::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x898]
    unsigned long long v1;  // [bp-0x890]
    unsigned long long v2;  // [bp-0x888]
    unsigned long long v3;  // [bp-0x880]
    unsigned long long v4;  // [bp-0x878]
    unsigned long long v5;  // [bp-0x870]
    unsigned long long v6;  // [bp-0x868]
    unsigned long long v7;  // [bp-0x860]
    char v8;  // [bp-0x858]
    unsigned long long v9;  // [bp-0x850]
    unsigned long long v10;  // [bp-0x848]
    char v11;  // [bp-0x840]
    unsigned long v12;  // [bp-0x584]
    unsigned int v13;  // [bp-0x57c]
    char v14;  // [bp-0x578]
    char v15;  // [bp-0x2f8]
    unsigned long long v16;  // [bp-0x3c]
    unsigned int v17;  // [bp-0x34]
    unsigned long long v20;  // rdx

    v15.new(uucore::util_name(), v20);
    v11.version(&v15, "(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/f", 24);
    uucore::mods::locale::get_message(&v14, "hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 14);
    v15.about(&v11, &v14);
    uucore::mods::locale::get_message(&v8, "hostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 14);
    uucore::format_usage(&v14, v9, v10);
    v11.override_usage(&v15, &v14);
    memcpy(&v15, &v11, 700);
    v16 = 549755814016 | v12;
    v17 = v13;
    v11.new("domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil", 6);
    v14.short(&v11, 100);
    v11.long(&v14, "domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil", 6);
    v0 = "domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.";
    v3 = 10;
    v4 = "fqdntest -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u";
    v7 = 5;
    v14.overrides_with_all(&v11, &v0);
    uucore::mods::locale::get_message(&v0, "hostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 20);
    v11.help(&v14, &v0);
    v14.action(&v11);
    v11.arg(&v15, &v14);
    v15.new("ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.", 10);
    v14.short(&v15, 105);
    v15.long(&v14, "ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.", 10);
    v0 = "domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.";
    v3 = 10;
    v4 = "fqdntest -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u";
    v7 = 5;
    v14.overrides_with_all(&v15, &v0);
    uucore::mods::locale::get_message(&v0, "hostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 24);
    v15.help(&v14, &v0);
    v14.action(&v15);
    v15.arg(&v11, &v14);
    v11.new("fqdntest -> ", 4);
    v14.short(&v11, 102);
    v11.long(&v14, "fqdntest -> ", 4);
    v0 = "domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.";
    v3 = 10;
    v4 = "fqdntest -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u";
    v7 = 5;
    v14.overrides_with_all(&v11, &v0);
    uucore::mods::locale::get_message(&v0, "hostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 18);
    v11.help(&v14, &v0);
    v14.action(&v11);
    v11.arg(&v15, &v14);
    v15.new("short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u", 5);
    v14.short(&v15, 115);
    v15.long(&v14, "short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u", 5);
    v0 = "domainip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.";
    v3 = 10;
    v4 = "fqdntest -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.1.0hostname-abouthostname-usagehostname-help-domainhostname-help-ip-addresshostname-help-fqdnhostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/u";
    v7 = 5;
    v14.overrides_with_all(&v15, &v0);
    uucore::mods::locale::get_message(&v0, "hostname-help-short:1\nsrc/uu/hostname/src/hostname.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 19);
    v15.help(&v14, &v0);
    v14.action(&v15);
    v15.arg(&v11, &v14);
    v11.new("hostname", 4);
    v0 = 2;
    v14.value_parser(&v11, &v0);
    v11.value_hint(&v14, 10);
    a0.arg(&v15, &v11);
    ::0x496e90::core::ptr::drop_in_place<alloc::string::String>(&v8);
    return a0;
}
