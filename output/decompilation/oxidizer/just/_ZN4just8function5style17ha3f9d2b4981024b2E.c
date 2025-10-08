fn just::function::style(a0: u64, a1: i64, a2: void*, a3: u32) -> long long {
    let v0: u8;  // [bp-0x70]
    let v1: u32;  // [bp-0x6f]
    let v2: u64;  // [bp-0x6c]
    let v3: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x68]
    let v4: struct24;  // [bp-0x64]
    let v5: struct16;  // [bp-0x40]
    let v7: core::result::Result<usize, core::num::error::ParseIntError>;  // eax
    let v8: u64;  // rax

    v5 = struct16 {
        field_0: a2
        field_8: a3
    };
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "command") {
        v7 = *((*(*(a1 as &i64) as &i64) + 384) as &i32);
        v0 = 1;
        v1 = 0;
        v2 = 0;
        v3 = v7;
    } else {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "error") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "warning") {
            format!("unknown style: `{}`", &v5);
            return struct8 {
                field_0: 1
            };
        }
        v2 = v8;
        v1 = 0;
    }
    v4 = 10;
    <T as alloc::string::SpecToString>::spec_to_string(a0 + 8, &v0);
    return struct8 {
        field_0: 0
    };
}
