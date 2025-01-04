fn uu_wc::Input::to_title(a0: &u64, a1: &struct_0) -> u64 {
    let v0: u128;  // [sp-0x48], Other Possible Types: Result<struct16, struct10>
    let v1: i8;  // [bp-0x38]
    let v3: u64;  // rbp
    let v4: struct24;  // rax
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // r12
    let v8: u64;  // r13

    v3 = 0x8000000000000000;
    if a1->field_0 != 9223372036854775809 {
        v5 = *(&a1->field_8 as &i64);
        v6 = a1->field_10;
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v5, v6);
        if v0 as i64 || (v7 = *((&v0 as &char + 8) as &i64), v8 = v1, v4 = <char as core::str::pattern::Pattern>::is_contained_in(v7, v8), v4 as u8) {
            v4 = uucore::features::quoting_style::escape_name(v5, v6, &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
            v3 = v0;
            v7 = *((&v0 as &char + 8) as &i64);
            v8 = v1;
        }
        return struct24 {
            field_0: v3
            field_8: v7
            field_16: v8
        };
    } else if !a1->field_8 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: &g_41e2e7
            field_16: 1
        };
    } else {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
}
