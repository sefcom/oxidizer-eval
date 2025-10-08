fn uu_wc::Input::try_as_files0(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x188]
    let v1: u64;  // [bp-0x180]
    let v2: u64;  // [bp-0x178]
    let v3: Result<struct73, struct24>;  // [bp-0x170], Other Possible Types: u8
    let v4: struct73;  // [bp-0x170]
    let v5: u64;  // [bp-0x168]
    let v6: u64;  // [bp-0x160]
    let v7: struct73;  // [bp-0x120]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0], Other Possible Types: struct81
    let v10: u64;  // rdx

    if *(a1 as &i64) != 9223372036854775809 {
        v8 = std::fs::metadata(a1, v10);
        if v8 as i64 == 2 || (0xf000 & *((&v8 as &char + 56) as &i32)) != 0x8000 || *((&v8 as &char + 80) as &i64) > 0xa00000 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v3 = uu_wc::files0_iter_file(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        if let Err(_) = v3 {
            return struct24 {
                field_0: 9223372036854775809
                field_8: v1
                field_16: v2
            };
        }
        v7 = v4;
        core::iter::traits::iterator::Iterator::collect(&v0, &v7);
        if v0 != 0x8000000000000000 {
            return struct24 {
                field_0: v0
                field_8: v1
                field_16: v2
            };
        }
        return struct24 {
            field_0: 9223372036854775809
            field_8: v1
            field_16: v2
        };
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else if uu_wc::is_stdin_small_file() {
        v8 = uu_wc::files0_iter_stdin();
        core::iter::traits::iterator::Iterator::collect(&v3, &v8);
        if v3 != 0x8000000000000000 {
            return struct24 {
                field_0: v3
                field_8: v5
                field_16: v6
            };
        }
        return struct24 {
            field_0: 9223372036854775809
            field_8: v5
            field_16: v6
        };
    } else {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
