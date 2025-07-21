fn uu_sort::exec(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: struct16;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe0]
    let v2: struct16;  // [bp-0xd8], Other Possible Types: struct24, struct32
    let v3: struct96;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: u64;  // [bp-0xc8]
    let v6: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xc0]
    let v7: struct96;  // [bp-0x78]
    let v9: u128;  // xmm0
    let v10: u128;  // xmm0
    let v11: u64;  // rax

    if *((a2 + 129) as &i8) {
        v2 = uu_sort::merge::merge(a0, a1, a2, (*(a3 as &i64) == 0x8000000000000000 ? 0 : *((a3 + 8) as &i64)), *((a3 + 16) as &i64), a4);
        if v2.field_0 == 3 {
            return v4;
        }
        v7 = v3;
        v7 = v3;
        v10 = *(a3 as &i128);
        v2 = struct32 {
            field_0: v10
            field_16: *((a3 + 16) as &i128)
        };
        return uu_sort::merge::FileMerger::write_all(&v7, a2, &v2);
    } else if *((a2 + 133) as &i8) {
        if a1 > 1 {
            <T as alloc::slice::hack::ConvertVec>::to_vec("only one file allowed with -c", a3);
            v5 = v1;
            *(&v2.field_0 as &i128) = *(&v0.field_0 as &i128);
            v6 = 2;
            v11 = alloc::boxed::Box<T>::new(&v2 as u8);
        } else if a1 == 1 {
            v11 = uu_sort::check::check(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a2);
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
        return v11;
    } else {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v9 = *(a3 as &i128);
        v2 = struct32 {
            field_0: v9
            field_16: *((a3 + 16) as &i128)
        };
        return uu_sort::ext_sort::ext_sort(&v0, a2, &v2, a4);
    }
}
