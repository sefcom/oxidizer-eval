fn uu_sort::exec(a0: &u64, a1: u32, a2: &u64, a3: &u64, a4: u32) -> u64 {
    let v0: struct16;  // [bp-0xf0], Other Possible Types: struct24
    let v1: struct32;  // [sp-0xd8], Other Possible Types: struct24
    let v3: i32;  // [bp-0xc0]
    let v8: i64;  // [bp-0x78], Other Possible Types: struct96
    let v13: i64;  // rax
    let v18: i64;  // r14

    if *((a2 + 129) as &i8) {
        v1 = uu_sort::merge::merge(a0, a1, a2, (*(a3 as &i64) == 0x8000000000000000 ? 0 : *((a3 + 8) as &i64)), *((a3 + 16) as &i64), a4);
        v13 = v1.field_8;
        if v8 == 3 {
            return v13;
        }
        v8 = struct96 {
            field_0: v14
            field_8: v13
            field_16: v2
            field_24: *(&v3 as &i128)
            field_40: *(&v4 as &i128)
            field_56: *(&v5 as &i128)
            field_72: *(&v6 as &i128)
            field_88: *(&v7 as &i64)
        };
        v1 = struct32 {
            field_0: v15
            field_16: *((a3 + 16) as &i128)
        };
        v13 = uu_sort::merge::FileMerger::write_all(&v8, a2, &v1);
        return v13;
    } else if !*((a2 + 133) as &i8) {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v1 = struct32 {
            field_0: v12
            field_16: *((a3 + 16) as &i128)
        };
        v13 = uu_sort::ext_sort::ext_sort(&v0, a2, &v1, a4);
        return v13;
    } else {
        if a1 > 1 {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("only one file allowed with -c");
            v1 = v0;
            v3 = 2;
            alloc::boxed::Box<T>::new(&v1);
        } else {
            if a1 != 1 {
                core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
            }
            uu_sort::check::check(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        }
        v13 = v18;
        return v13;
    }
}
