fn uu_sort::chunks::Chunk::recycle(a0: u64, a1: u64) -> int {
    let v0: i64;  // [sp-0x70]
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: i192;  // [sp-0x48], Other Possible Types: struct24
    let v5: i64;  // r13
    let v6: i64;  // rbx
    let v7: i64;  // r14
    let v8: i64;  // r15
    let v9: i64;  // rbp
    let v10: i128;  // xmm0
    let v11: i256;  // ymm0

    v2 = *((a1 + 24) as &i64);
    v1 = *((a1 + 32) as &i64);
    *((a1 + 24) as &i64) = 0;
    *((a1 + 32) as &i64) = 8;
    v5 = *((a1 + 48) as &i64);
    *((a1 + 40) as &i128) = 0;
    v6 = *((a1 + 56) as &i64);
    *((a1 + 56) as &i64) = 8;
    v7 = *((a1 + 72) as &i64);
    *((a1 + 64) as &i128) = 0;
    v8 = *((a1 + 80) as &i64);
    *((a1 + 80) as &i64) = 8;
    v0 = *((a1 + 96) as &i64);
    *((a1 + 88) as &i128) = 0;
    v9 = *((a1 + 104) as &i64);
    *((a1 + 104) as &i64) = 8;
    *((a1 + 112) as &i64) = 0;
    v3 = self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::into_owner(a1);
    *(a0 as &i64) = v2;
    *((a0 + 8) as &i64) = v1;
    *((a0 + 16) as &i64) = 0;
    *((a0 + 24) as &i64) = v5;
    *((a0 + 32) as &i64) = v6;
    *((a0 + 40) as &i64) = 0;
    *((a0 + 48) as &i64) = v7;
    *((a0 + 56) as &i64) = v8;
    *((a0 + 64) as &i64) = 0;
    *((a0 + 72) as &i64) = v0;
    *((a0 + 80) as &i64) = v9;
    *((a0 + 88) as &i64) = 0;
    v10 = v3;
    *((a0 + 96) as &i128) = v10;
    *((a0 + 112) as &i64) = *((&v3 as &char + 16) as &i64);
    return Conv(256->64, (((vvar_27{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_40{reg 224})));
}
