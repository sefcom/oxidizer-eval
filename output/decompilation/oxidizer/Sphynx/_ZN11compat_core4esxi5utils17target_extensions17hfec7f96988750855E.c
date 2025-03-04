fn compat_core::esxi::utils::target_extensions(a0: &Result<struct16, struct16>) -> u64 {
    let v0: struct24;  // [bp-0x30]
    let v3: &u64;  // rbx
    let v4: u64;  // rax

    v3 = __rust_alloc(192, 8);
    *(v3) = &anon.72dc3a396521a012288a77322dff36ea.15.llvm.3663384724368157838;
    v3[1] = 3;
    v3[2] = &anon.72dc3a396521a012288a77322dff36ea.4.llvm.3663384724368157838;
    v3[3] = 4;
    v3[4] = &anon.72dc3a396521a012288a77322dff36ea.5.llvm.3663384724368157838;
    v3[5] = 4;
    v3[6] = &anon.72dc3a396521a012288a77322dff36ea.6.llvm.3663384724368157838;
    v3[7] = 4;
    v3[8] = &anon.72dc3a396521a012288a77322dff36ea.7.llvm.3663384724368157838;
    v3[9] = 4;
    v3[10] = &anon.72dc3a396521a012288a77322dff36ea.8.llvm.3663384724368157838;
    v3[11] = 4;
    v3[12] = &anon.72dc3a396521a012288a77322dff36ea.9.llvm.3663384724368157838;
    v3[13] = 3;
    v3[14] = &anon.72dc3a396521a012288a77322dff36ea.10.llvm.3663384724368157838;
    v3[15] = 3;
    v3[16] = &anon.72dc3a396521a012288a77322dff36ea.11.llvm.3663384724368157838;
    v3[17] = 3;
    v3[18] = &anon.72dc3a396521a012288a77322dff36ea.12.llvm.3663384724368157838;
    v3[19] = 3;
    v3[20] = &anon.72dc3a396521a012288a77322dff36ea.13.llvm.3663384724368157838;
    v3[21] = 5;
    v3[22] = &anon.72dc3a396521a012288a77322dff36ea.14.llvm.3663384724368157838;
    v3[23] = 4;
    *(a0) = 8;
    *(&a0[1] as &i128) = 0;
    alloc::raw_vec::RawVec<T,A>::reserve(a0, 0, 12);
    v4 = a0[2];
    v0 = struct24 {
        field_0: v4 * 24 + *(a0)
        field_8: a0 + 16
        field_16: v4
    };
    <core::iter::adapters::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v3, v3 + 24, &v0);
    return a0;
}
