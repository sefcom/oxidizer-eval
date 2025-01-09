fn uu_cp::Attributes::diff(a0: &struct12, a1: u64, a2: u64) -> int {
    let v2: u128;  // xmm1
    let v4: u128;  // xmm0
    let v5: u128;  // xmm1

    v2 = *((a2 as &char + 6) as &i8) * 0x1000000 | *((a2 as &char + 4) as &i8) * 0x10000 | *((a2 as &char + 2) as &i8) * 0x100 | *(a2 as &i8);
    v4 = ...;
    v5 = a1->field_8 & v4;
    return struct12 {
        field_0: (...) as u64
        field_8: (v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (~(v4) & 0x1000100) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (~(v4) & 0x1000100 | a1->field_8 as u128 & v4) as u256) as u32
    };
}
