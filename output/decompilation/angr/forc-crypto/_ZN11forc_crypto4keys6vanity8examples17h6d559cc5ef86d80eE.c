long long forc_crypto::keys::vanity::examples()
{
    char v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    int v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    char *v4;  // [bp-0x108], Other Possible Types: unsigned long long
    uint128_t v5;  // [bp-0x100]
    unsigned long long v6;  // [bp-0xf0]
    int v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc0]
    int v11;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v12;  // [bp-0xa0]
    int v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x88]
    int v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x68]
    int v17;  // [bp-0x58], Other Possible Types: char
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x30]
    char v21;  // [bp-0x28]
    unsigned long long v23;  // rax

    v1 = &g_a2f2f8;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v17.map_or_else("    # Generate a checksummed vanity address with a given prefix\n    forc crypto vanity --starts-with \"aaa\"\n\n    # Generate a checksummed vanity address with a given suffix\n    forc crypto vanity --ends-with \"aaa\"\n\n    # Generate a checksummed vanity addres", 108, &v1);
    v1 = &g_a2f308;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v11.map_or_else("    # Generate a checksummed vanity address with a given suffix\n    forc crypto vanity --ends-with \"aaa\"\n\n    # Generate a checksummed vanity address with a given prefix and suffix\n    forc crypto vanity --starts-with \"00\" --ends-with \"ff\"\n\n    # Generate ", 106, &v1);
    v13 = v11;
    v14 = v12;
    v1 = &g_a2f318;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v11.map_or_else("    # Generate a checksummed vanity address with a given prefix and suffix\n    forc crypto vanity --starts-with \"00\" --ends-with \"ff\"\n\n    # Generate a checksummed vanity address with a given regex pattern\n    forc crypto vanity --regex \"^00.*ff$\"\n\nforc-cr", 135, &v1);
    v15 = v11;
    v16 = v12;
    *((unsigned long long **)&v2) = &g_a2f328;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v19.map_or_else("    # Generate a checksummed vanity address with a given regex pattern\n    forc crypto vanity --regex \"^00.*ff$\"\n\nforc-cryptostarts_withends_withregextimeoutThe following required argument was not provided: mnemonicsave_pathSTARTS_WITHDesired hex string pr", 114, &(unsigned long long)v2);
    v2 = v17;
    v4 = v18;
    memcpy(&v5, &v13, 16);
    v6 = v14;
    v7 = v15;
    v8 = v16;
    memcpy(&v9, &v19, 16);
    v10 = v20;
    alloc::str::join_generic_copy(&v21, &(unsigned long long)v2, 4);
    v23 = v21.into_boxed_slice();
    core::ptr::drop_in_place<[alloc::string::String; 4]>(&(unsigned long long)v2);
    return v23;
}
