fn fd::walk::ReceiverBuffer<W>::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> double {
    let v0: struct24;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: struct24;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: struct24;  // [bp-0x70]
    let v5: u128;  // [bp-0x58]
    let v6: struct24;  // [bp-0x48]
    let v7: struct24;  // [bp-0x38]
    let v9: u32;  // r15d
    let v10: core::fmt::Arguments;  // rbp
    let v12: u32;  // edx
    let v13: std::time::Instant;  // rax
    let v14: &mut [u8];  // rax
    let v15: u128;  // xmm0
    let v16: struct24;  // xmm1
    let v17: u128;  // xmm0
    let v18: u64;  // rdx

    v1 = a2;
    v2 = a3;
    v9 = *((a1 + 408) as &i32);
    v10 = *((a1 + 400) as &i64);
    v13 = <std::time::Instant as core::ops::arith::Add<core::time::Duration>>::add(std::time::Instant::now(), v12, v10, (v9 != 0x3b9aca00 ? v9 : 0x5f5e100)) as u64;
    v3 = a2;
    v4 = v0;
    v7 = *((a4 + 32) as &i64);
    v6 = *((a4 + 16) as &i128);
    v5 = *(a4 as &i128);
    v14 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(1000, 8, 312, "src/walk.rs");
    v15 = *(a4 as &i128);
    v16 = *((a4 + 16) as &i128);
    return struct136 {
        field_0: a2
        field_8: v0
        field_16: v15
        field_32: v16
        field_48: *((a4 + 32) as &i64)
        field_56: v14
        field_64: v18
        field_72: 0
        field_80: v13
        field_88: v12
        field_96: a1
        field_104: BinaryOp AddV
        field_120: 0
        field_128: 0
    };
}
