fn uu_dd::bufferedoutput::BufferedOutput::new(a0: i64, a1: i64) -> double {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u32;  // ebp
    let v4: u64;  // rax
    let v5: u128;  // xmm0
    let v6: u64;  // rdx

    v0 = v2;
    v3 = *((a1 + 4) as &i32);
    v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*((*((a1 + 16) as &i64) + 120) as &i64), 1, 1, "src/uu/dd/src/bufferedoutput.rs");
    v5 = *((a1 + 8) as &i128);
    return struct56 {
        field_0: v4
        field_8: v6
        field_16: 0
        field_24: *(a1 as &i8)
        field_25: <UNKNOWN>
        field_27: v3
        field_28: v5
        field_32: <UNKNOWN>
    };
}
