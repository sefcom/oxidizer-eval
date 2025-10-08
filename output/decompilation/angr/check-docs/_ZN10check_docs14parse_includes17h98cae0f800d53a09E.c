long long check_docs::parse_includes(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x20]

    v0.new("^(\\S+):(\\d+):\\s*\\{\\{\\s*#include\\s*(\\S+?)\\s*(?::\\s*(\\S+)\\s*)?\\}\\}could not construct regexscripts/check-docs/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.3/src/regex/string.rs", 64);
    v2.expect(&v0, &g_5d3468);
    memcpy(&v0, &v2, 16);
    memcpy(&v1, &v3, 16);
    check_docs::parse_includes::{{closure}}(a0, a1, &v0);
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return a0;
}
