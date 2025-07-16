fn uu_dd::blocks::block(a1: i64, a2: i64, a3: i64, a4: i8, a5: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u192;  // [bp-0x78]
    let v1: Result<struct4, struct8>;  // [bp-0x68]
    let v2: struct24;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: Result<struct16, struct12>;  // [bp-0x50]
    let v5: struct437;  // [bp-0x48]
    let v6: u136;  // [bp-0x40]
    let v8: u64;  // r14
    let v9: core::result::Result<u64, std::io::error::Error>;  // r15
    let v10: u64;  // r12
    let v11: i64;  // rax

    v5 = a3;
    v6 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v2 = core::iter::traits::iterator::Iterator::fold(&v6, &v0, &v5, a5 + 24);
    if let Ok(_) = v4 {
        if !a4 || !*((a5 + 8) as &i64) {
            v8 = v3;
            v9 = v4 - 1;
            v10 = v9 * 3;
            v0 = struct16 {
                field_0: *((v8 + v10 * 8 + 8) as &i64)
                field_8: *((v8 + v10 * 8 + 16) as &i64) + *((v8 + v10 * 8 + 8) as &i64)
            };
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) {
                v11 = v8 + v10 * 8;
                v4 = v9;
                v1 = *((v11 + 16) as &i64);
                v0 = *(v11 as &i128) as u128;
            }
        }
    }
    return struct24 {
        field_0: v2.field_0
        field_16: v4
    };
}
