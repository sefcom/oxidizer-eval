long long uu_factor::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8]
    unsigned long long v4;  // [bp-0x7fc]
    unsigned int v5;  // [bp-0x7f4]
    char v6;  // [bp-0x7f0]
    char v7;  // [bp-0x570]
    unsigned long v8;  // [bp-0x2b4]
    unsigned int v9;  // [bp-0x2ac]
    char v10;  // [bp-0x2a8]
    unsigned long long v13;  // rdx

    v3.new(uucore::util_name(), v13);
    v7.version(&v3);
    uucore::mods::locale::get_message(&v6, "factor-aboutfactor-usagefactor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-", 12);
    v3.about(&v7, &v6);
    uucore::mods::locale::get_message(&v0, "factor-usagefactor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/bl", 12);
    uucore::format_usage(&v6, v1, v2);
    v7.override_usage(&v3, &v6);
    memcpy(&v3, &v7, 700);
    v4 = 2252383929761928 | v8;
    v5 = v9;
    v7.new("NUMBER(uutils coreutils) 0.1.0factor-aboutfactor-usagefactor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/index.crates.", 6);
    v6.action(&v7, 1);
    v7.arg(&v3, &v6);
    v3.new("exponentsNUMBER(uutils coreutils) 0.1.0factor-aboutfactor-usagefactor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/inde", 9);
    v6.short(&v3);
    v3.long(&v6, "exponentsNUMBER(uutils coreutils) 0.1.0factor-aboutfactor-usagefactor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/inde", 9);
    uucore::mods::locale::get_message(&v10, "factor-help-exponentsOnly odd modulus are supported by the Montgomery form/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/block.rs/root/", 21);
    v6.help(&v3, &v10);
    v10.action(&v6, 2);
    v3.arg(&v7, &v10);
    v7.new("helpNoneshimname", 4);
    v6.long(&v7, "helpNoneshimname", 4);
    uucore::mods::locale::get_message(&v10, "factor-help-help", 16);
    v7.help(&v6, &v10);
    v6.action(&v7, 5);
    a0.arg(&v3, &v6);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
