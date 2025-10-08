fn just::compiler::Compiler::expand_tilde(a1: &str) -> : struct25 {
    let a0: i64;  // rdi
    let v0: Option<struct24>;  // [bp-0xa8]
    let v2: void*;  // [bp-0xa0]
    let v3: &u8;  // [bp-0x98]
    let v5: struct24;  // [bp-0x90], Other Possible Types: u192
    let v7: core::option::Option<&str>;  // rax
    let v9: u64;  // rdx
    let v11: u8;  // al
    let v12: u8;  // al

    v7 = <&str as core::str::pattern::Pattern>::strip_prefix_of("~/", a1) as u64;
    match v7 {
        Some(_) => {
            v0 = dirs::home_dir();
            v5 = std::path::Path::join(v2, v3, core::str::<impl str>::trim_start_matches(v7, v9), v9);
        },
        None => {
            v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
        },
    }
    v11 = 56;
    return struct32 {
        field_0: v12
        padding_1: <UNKNOWN>
        field_8: v5 as i128
        field_24: *((&v5 as &char + 16) as &i64)
    };
}
