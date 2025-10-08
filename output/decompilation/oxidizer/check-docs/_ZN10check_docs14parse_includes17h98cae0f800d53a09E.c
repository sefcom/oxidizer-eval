fn check_docs::parse_includes(a1: &struct24) -> : struct48 {
    let a0: u64;  // rdi
    let v0: Result<struct32, struct32>;  // [bp-0x58], Other Possible Types: struct32
    let v1: struct32;  // [bp-0x30]
    let v2: struct32;  // [bp-0x30]

    v0 = regex::regex::string::Regex::new("^(\\S+):(\\d+):\\s*\\{\\{\\s*#include\\s*(\\S+?)\\s*(?::\\s*(\\S+)\\s*)?\\}\\}");
    v1 = core::result::Result<T,E>::expect(&v0, "scripts/check-docs/src/lib.rs");
    v0 = v2;
    check_docs::parse_includes::{{closure}}(a0, a1, &v0);
    return;
}
