fn uu_tee::ensure_stdout_not_broken() -> : struct9 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xb0]
    let v1: struct8;  // [bp-0xa8]
    let v2: i64;  // [bp-0xa8]
    let v3: u32;  // [bp-0xa4]
    let v4: i64;  // [bp-0xa0]
    let v5: i8;  // [bp-0x88]
    let v7: u64;  // rdx
    let v8: u8;  // al
    let v9: u32;  // edx
    let v10: u8;  // al

    std::io::stdio::stdout();
    v2 = nix::sys::stat::fstat(0x1);
    if v1.field_0 == 1 {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v3 as u64 * 0x100000000 | 2
        };
    } else if !(*(&v5 as &i32) & 0x1000) {
        return struct2 {
            field_0: 0x100
        };
    } else {
        v0 = 549755813889;
        if (nix::poll::poll() & 1) {
            *((a0 + 8) as &u64) = v7 * 0x100000000 | 2;
            v8 = 1;
        } else if v9 > 0 {
            *(&v2 as &&u64) = &v0;
            v4 = &v2;
            return struct2 {
                field_0: v10
                field_1: <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2) ^ 1
            };
        } else {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
    }
}
