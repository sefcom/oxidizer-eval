fn uu_mktemp::dry_exec(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xb0]
    let v1: struct24;  // [bp-0xb0]
    let v2: void*;  // [bp-0xa0]
    let v3: struct24;  // [bp-0x88]
    let v4: Result<struct40, struct32>;  // [bp-0x70], Other Possible Types: u64
    let v5: struct24;  // [bp-0x48]
    let v6: core::fmt::rt::Argument;  // r13
    let v7: u32;  // rdx
    let v8: void*;  // r12
    let v9: void*;  // rcx
    let v10: i64;  // rax
    let v11: i64;  // rcx
    let v12: u128;  // xmm0
    let v13: u128;  // xmm14
    let v14: u128;  // xmm14
    let v15: u128;  // xmm14
    let v16: u128;  // xmm14
    let v17: u128;  // xmm14
    let v18: u128;  // xmm14
    let v19: u128;  // xmm14
    let v20: u128;  // xmm14
    let v21: iNone;  // xmm0
    let v22: iNone;  // xmm14
    let v23: u128;  // xmm0
    let v24: u256;  // ymm0
    let v25: u128;  // xmm13
    let v26: u128;  // xmm14
    let v27: u128;  // xmm14
    let v28: u128;  // xmm14
    let v29: u256;  // ymm14
    let v30: u64;  // rdx
    let v31: u256;  // ymm0
    let v32: u128;  // xmm14
    let v33: u128;  // xmm14
    let v34: struct712;  // xmm14
    let v35: struct712;  // xmm14
    let v36: struct640;  // xmm14
    let v37: struct712;  // xmm14
    let v38: struct640;  // xmm14
    let v39: struct640;  // xmm14
    let v40: struct640;  // xmm0
    let v41: struct640;  // xmm15
    let v42: u128;  // xmm0
    let v43: u128;  // xmm0
    let v44: u8;  // al
    let v45: u32;  // edx
    let v46: u8;  // dl
    let v47: u8;  // al

    v6 = a5 + a4;
    v0 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v6 + a7, 1, 1, "src/uu/mktemp/src/mktemp.rs");
    v2 = 0;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, a3, a3 + a4);
    alloc::vec::Vec<T,A>::extend_trusted(&v0, a5);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, a6, a7 + a6);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a4, v6, v7, v2);
    v4 = rand::rngs::thread::rng();
    <rand_core::block::BlockRng<R> as rand_core::RngCore>::fill_bytes(v4 + 16, v8, v7);
    if v7 {
        if v7 < 8 {
            v9 = v8;
        } else if v7 < 16 {
LABEL_465b8c:
            v30 = v7 & -8;
            v9 = v8 + v30;
            do {
                v31 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((v8 as &u8 + v10) as &i64);
                v32 = BinaryOp ShrNV & 169473963133173273960190490760135540607;
                v33 = BinaryOp InterleaveHIV;
                v34 = BinaryOp MulV;
                v35 = BinaryOp ShrNV;
                v36 = BinaryOp ShrNV & 20016609818878733144904388672456953615;
                v37 = BinaryOp InterleaveHIV;
                v38 = BinaryOp MulV;
                v39 = v38 & 1324055902416102970674609367438786815;
                v40 = BinaryOp SubV;
                v41 = BinaryOp CmpEQV;
                v42 = v40 | 3472328296227680304;
                v43 = v42 & v41;
                v24 = ((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
                v29 = ...;
                *(v8 as &u8 + v10) = v29;
                v10 += 8;
            } while (v30 != v10);
            if v7 == v30 {
                goto LABEL_465e3e;
            }
        } else {
            do {
                v12 = *((v8 as &u8 + v11) as &i128);
                v13 = BinaryOp ShrNV & 169473963133173273960190490760135540607;
                v14 = BinaryOp InterleaveHIV;
                v15 = BinaryOp MulV;
                v16 = BinaryOp ShrNV;
                v17 = BinaryOp ShrNV & 20016609818878733144904388672456953615;
                v18 = BinaryOp InterleaveHIV;
                v19 = BinaryOp MulV;
                v20 = v19 & 1324055902416102970674609367438786815;
                v21 = BinaryOp SubV;
                v22 = v21;
                v23 = v21 | 64053151420411946063694043751862251568;
                v24 = ((v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
                v25 = BinaryOp CmpGTV;
                v26 = BinaryOp AddV;
                v27 = v26 & v25;
                v28 = v27 | ~(v25) & (~(BinaryOp CmpEQV) & v23 | BinaryOp AddV & BinaryOp CmpEQV);
                v29 = ...;
                *(v8 as &u8 + v11) = v28;
                v11 += 16;
            } while (v10 != v11);
            if v7 == v10 {
                goto LABEL_465e3e;
            }
            if (v7 & 8) {
                goto LABEL_465b8c;
            }
        }
        do {
            v44 = *(v9 as &i8);
            v45 = (v44 >> 1) * 133 >> 12;
            v46 = v45 * 64 - v45 * 2;
            v47 = v44 - v46;
            *(v9 as &i32) = ((v44 - v46 & 255) < 10 ? v47 | 48 : (v47 < 36 ? v47 + 87 : v47 + 29));
            v9 += 1;
        } while (v9 != v8 + v7);
    }
LABEL_465e3e:
    v3 = v1;
    v4 = alloc::string::String::from_utf8(&v3);
    v5 = core::result::Result<T,E>::unwrap(&v4);
    std::path::Path::join(a0, a1, a2, &v5);
    return;
}
