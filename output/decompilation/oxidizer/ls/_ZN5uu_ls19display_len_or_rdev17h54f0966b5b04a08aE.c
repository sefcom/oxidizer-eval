fn uu_ls::display_len_or_rdev(a1: i64, a2: i32, a3: i8) -> Option<struct48> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x58]
    let v1: core::fmt::Arguments;  // [bp-0x48]
    let v2: struct24;  // [bp-0x40], Other Possible Types: u8
    let v3: u8;  // [bp-0x22]
    let v5: struct40;  // r14
    let v9: u64;  // rax
    let v10: u64;  // rdx
    let v11: core::result::Result<(), core::fmt::Error>;  // rax
    let v12: core::result::Result<(), core::fmt::Error>;  // rax

    if (0xb000 & *((a1 + 56) as &i32) | 0x4000) != 0x6000 {
        uu_ls::display_size(a0 + 8, v9 + 1 - (v10 < 1), a3);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v5 = *((a1 + 72) as &i64);
    v12 = core::fmt::num::imp::<impl u32>::_fmt((v5 >> 32) as u32 & -0x1000 | ((v5 & 4294967295) >> 8) as u32 & 4095, &v2) as u64;
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v12 as &i64), a2);
    v11 = core::fmt::num::imp::<impl u32>::_fmt((v5 >> 12) as u32 & -0x100 | v5 as u32, &v3) as u64;
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v11 as &i64), a2);
    return Some(struct48 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
        field_24: *(&v2.field_0 as &i128)
        field_40: v2.field_16
    });
}
