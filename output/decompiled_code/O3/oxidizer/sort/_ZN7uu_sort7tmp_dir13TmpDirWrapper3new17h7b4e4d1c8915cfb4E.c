fn uu_sort::tmp_dir::TmpDirWrapper::new(a0: u64, a1: u64) -> int {
    let v0: i8;  // [bp-0x38]
    let v1: u8;  // [sp-0x28]
    let v3: u64;  // rbx
    let v4: u64;  // r14
    let v5: u64;  // r12
    let v6: &u64;  // rax
    let v7: u128;  // xmm0
    let v8: u256;  // ymm0

    v3 = *(a1);
    v4 = a1[1];
    v5 = a1[2];
    v1 = 2;
    v6 = __rust_alloc(24, 8);
    *(v6) = 1;
    v6[1] = 1;
    v6[2] = 0;
    *((&a0->field_18 as &char + 8) as &i64) = *(&v1 as &i64);
    v7 = v0;
    (&a0->field_10)[1] = v7;
    a0->field_0 = v3;
    a0->field_8 = v4;
    a0->field_10 = v5;
    a0->field_30 = 0;
    a0->field_28 = v6;
    return Conv(256->64, ((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_32{reg 224})));
}
