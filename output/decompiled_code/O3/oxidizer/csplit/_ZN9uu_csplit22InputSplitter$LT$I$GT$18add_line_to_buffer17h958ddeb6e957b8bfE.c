fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a0: &u64, a1: &struct_0, a2: u64, a3: &struct_2) -> u64 {
    let v0: u64;  // [bp-0x58], Other Possible Types: struct32
    let v1: u128;  // [sp-0x50]
    let v2: u64;  // [sp-0x40]
    let v3: u128;  // [sp-0x38]
    let v4: u64;  // [sp-0x28]
    let v6: &u128;  // r12
    let v7: &u128;  // r14
    let v8: &u128;  // rax
    let v9: &u128;  // rcx
    let v10: u128;  // xmm0
    let v11: u64;  // rax
    let v12: &u128;  // rax
    let v13: &u128;  // rcx
    let v14: u128;  // xmm0
    let v15: u64;  // rcx

    if a1->field_38 {
        *(&v0 as &struct32) = struct32 {
            field_0: a2
            field_8: a3->field_0
            field_24: a3->field_10
        };
        alloc::vec::Vec<T,A>::insert(a1, 0, &v0);
    } else {
        v6 = a1->field_10;
        if v6 >= a1->field_30 {
            v0 = alloc::vec::Vec<T,A>::remove(a1, 0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
            v4 = v2;
            v3 = v1;
            v2 = a3->field_10;
            v1 = a3->field_0;
            v0 = a2;
            v7 = a1->field_10;
            if v7 == a1->field_0 {
                alloc::raw_vec::RawVec<T,A>::grow_one(a1);
            }
            v12 = a1->field_8;
            v13 = v7 * 32;
            v14 = *(&v0 as &i128);
            *((v12 + v13 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
            *((v12 + v13) as &u128) = v14;
            a1->field_10 = v7 as &char + 1;
            v15 = v3;
            v11 = *((&v3 as &char + 8) as &i64);
            if v15 != 0x8000000000000000 {
                *(a0) = v15;
                a0[1] = v0;
                a0[2] = v4;
                return v11;
            }
            v0 = v11;
            core::result::unwrap_failed(); /* do not return */
        }
        v2 = a3->field_10;
        v1 = a3->field_0;
        v0 = a2;
        if v6 == a1->field_0 {
            alloc::raw_vec::RawVec<T,A>::grow_one(a1);
        }
        v8 = a1->field_8;
        v9 = v6 * 32;
        v10 = *(&v0 as &i128);
        *((v8 + v9 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
        *((v8 + v9) as &u128) = v10;
        a1->field_10 = v6 as &char + 1;
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
