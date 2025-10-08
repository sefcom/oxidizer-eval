fn starship::modules::ocaml::get_opam_switch(a0: i64, a1: void*) -> int {
    let v0: Option<struct48>;  // [bp-0x68], Other Possible Types: struct16
    let v1: u64;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: struct16;  // [bp-0x38]
    let v5: u128;  // [bp-0x28]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x18]
    let v8: &mut [u8];  // xmm0
    let v9: u32;  // rdx
    let v11: &str;  // rax:rdx

    v0 = starship::context::Context::exec_cmd(a1, "opam", "switch", 3);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v8 = v0 as i128;
        v6 = v3;
        v5 = *((&v0 as &char + 16) as &i128);
        v4 = v8;
        v0 = v4;
        v2 = v5 as i64;
        v11 = core::str::<impl str>::trim_matches(v1, v2, v9);
        starship::modules::ocaml::parse_opam_switch(a0, v11.data_ptr, v9);
        return;
    }
    *((a0 + 8) as &i64) = 0x8000000000000000;
    return;
}
