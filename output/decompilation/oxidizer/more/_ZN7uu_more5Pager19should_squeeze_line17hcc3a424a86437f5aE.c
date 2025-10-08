fn uu_more::Pager::should_squeeze_line(a0: i64, a1: &str) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r14
    let v5: u64;  // rbx
    let v6: u64;  // rax
    let v7: u64;  // rdx
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: u8;  // cl
    let v10: u64;  // rax
    let v11: &str;  // rax:rdx
    let v12: &str;  // rax:rdx

    if *((a0 + 129) as &i8) != 1 {
        return 0;
    }
    v2 = v4;
    v1 = v5;
    v0 = v6;
    v12 = core::str::<impl str>::trim_matches(a1, v7);
    v8 = *((a0 + 32) as &i64);
    match v8 {
        Err(_) => {
            v11 = core::str::<impl str>::trim_matches(*((*((a0 + 24) as &i64) + v8 * 24 - 16) as &i64), *((*((a0 + 24) as &i64) + v8 * 24 - 8) as &i64), v7);
        },
        Ok(_) => {
            v10 = v8;
        },
    }
    return v10 & -0x100 | !v12.data_ptr & v9;
}
