fn ruff_python_formatter::string::docstring::CodeExampleDoctest::new(a1: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // r15
    let v3: u64;  // rdx
    let v4: core::option::Option<&str>;  // rax
    let v5: u64;  // rbp
    let v7: struct12;  // r12
    let v8: struct16;  // xmm0

    v2 = *((a1 + 8) as &i64);
    v0 = *(a1 as &i64);
    v4 = <&str as core::str::pattern::Pattern>::strip_prefix_of(">>> ", core::str::<impl str>::trim_start_matches(*(a1 as &i64), v2), v3) as u64;
    match v4 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v5 = v2;
            if v5 < v3 {
                core::option::expect_failed("suffix is <= original"); /* do not return */
            }
            v7 = alloc::alloc::Global::alloc_impl(8, 56);
            *((v7 + 32) as &i64) = *((a1 + 32) as &i64);
            v8 = *(a1 as &i128);
            *((v7 + 16) as &i128) = *((a1 + 16) as &i128);
            *(v7 as &struct16) = v8;
            *((v7 + 40) as &core::option::Option<&str>) = v4;
            *((v7 + 48) as &u64) = v3;
            return Some(struct32 {
                field_0: v7
                field_8: 1
                field_16: core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v5 - v3, v0, v2) as u64
                field_24: v3
            });
        },
    }
}
