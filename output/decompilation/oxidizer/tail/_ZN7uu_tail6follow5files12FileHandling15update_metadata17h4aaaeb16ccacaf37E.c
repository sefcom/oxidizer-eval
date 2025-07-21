fn uu_tail::follow::files::FileHandling::update_metadata(a0: i32, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x178]
    let v2: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // r12, Other Possible Types: struct56
    let v3: i64;  // rcx
    let v4: i64;  // rdi
    let v5: i64;  // rax

    v2 = *(a3 as &i64);
    if *(a3 as &i64) != 2 || (v0 = std::fs::metadata(a1, a2), v2 = v0 as i64, v2 != 2) {
        memcpy(v4, v3, 168);
    }
    v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    *(v5 as &core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>) = v2;
    return memcpy(v5 + 8, &v0 as u8, 168);
}
