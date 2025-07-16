fn uu_sort::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u128;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe0]
    let v2: u128;  // [bp-0xd8], Other Possible Types: struct24
    let v3: u192;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: u64;  // [bp-0xc8]
    let v6: Result<struct24, struct16>;  // [bp-0xc0], Other Possible Types: u8
    let v7: u128;  // [bp-0xb0]
    let v8: u128;  // [bp-0xa0]
    let v9: u8;  // [bp-0x90]
    let v10: u64;  // [bp-0x80]
    let v11: u192;  // [bp-0x78]
    let v12: u8;  // [bp-0x60]
    let v13: u128;  // [bp-0x50]
    let v14: u128;  // [bp-0x40]
    let v15: u8;  // [bp-0x30]
    let v16: u64;  // [bp-0x20]
    let v18: u128;  // xmm0
    let v19: u128;  // xmm0
    let v20: u64;  // rax

    if *((a2 + 129) as &i8) {
        v2 = uu_sort::merge::merge(a0, a1, a2, (*(a3 as &i64) == 0x8000000000000000 ? 0 : *((a3 + 8) as &i64)), *((a3 + 16) as &i64), a4);
        if v2.field_0 == 3 {
            return v4;
        }
        v16 = v10;
        memcpy(&v15, &v9, 16);
        v14 = v8;
        v13 = v7;
        memcpy(&v12, &v6, 16);
        v11 = v3;
        v19 = *(a3 as &i128);
        v2 = struct32 {
            field_0: v19
            field_16: *((a3 + 16) as &i128)
        };
        return uu_sort::merge::FileMerger::write_all(&v11, a2, &v2);
    } else if *((a2 + 133) as &i8) {
        if a1 > 1 {
            <T as alloc::slice::hack::ConvertVec>::to_vec("only one file allowed with -c", a3);
            v5 = v1;
            v2 = v0;
            v6 = 2;
            v20 = alloc::boxed::Box<T>::new(&v2);
        } else if a1 == 1 {
            v20 = uu_sort::check::check(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a2);
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
        return v20;
    } else {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v18 = *(a3 as &i128);
        v2 = struct32 {
            field_0: v18
            field_16: *((a3 + 16) as &i128)
        };
        return uu_sort::ext_sort::ext_sort(&v0, a2, &v2, a4);
    }
}
