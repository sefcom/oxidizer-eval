fn starship::modules::typst::get_typst_config(a0: u64, a1: void*) -> int {
    let v0: u128;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: core::option::Option<&str>;  // [bp-0x68]
    let v3: struct16;  // [bp-0x58]
    let v4: Option<struct48>;  // [bp-0x40]
    let v5: iNone;  // [bp-0x30]
    let v7: u64;  // rdx
    let v9: core::option::Option<&str>;  // rax
    let v10: &str;  // rax:rdx

    v4 = starship::context::Context::exec_cmd(a1, "typst", "--version", 1);
    if (((0 ^ v4 as i64) & (0 ^ -(v4 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = *((&v4 as &char + 32) as &i128);
    v2 = v5;
    v0 = v4 as i128;
    v10 = core::str::<impl str>::trim_matches(v1, v2 as i64, v7);
    v9 = <&str as core::str::pattern::Pattern>::strip_prefix_of("typst ", v10.data_ptr, v10.length) as u64;
    match v9 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            starship::modules::buf::parse_buf_version(a0, v9, v7);
        },
    }
}
