fn uu_sort::exec(a0: u32, a1: u32, a2: u32, a3: &struct32, a4: u32) -> u64 {
    let v0: struct16;  // [bp-0xf0], Other Possible Types: struct24
    let v1: i648;  // [sp-0xd8], Other Possible Types: struct32, Result<struct80, struct16>, struct24
    let v3: i32;  // [sp-0xc0]
    let v5: struct96;  // [sp-0x78], Other Possible Types: i64
    let v10: i64;  // rax

    if *((a2 + 129) as &i8) {
        v1 = uu_sort::merge::merge(a0, a1, a2, (*(a3 as &i64) == 0x8000000000000000 ? 0 : *((a3 + 8) as &i64)), *((a3 + 16) as &i64), a4);
        v10 = *((&v1 as &char + 8) as &i64);
        if v5 == 3 {
            return v10;
        }
        v5 = struct96 {
            field_0: v11
            field_8: v10
            field_16: v2
            field_24: *((&v1 as &char + 24) as &i128)
            field_40: *((&v1 as &char + 40) as &i128)
            field_56: *((&v1 as &char + 56) as &i128)
            field_72: v2
            field_88: v4
        };
        v1 = struct32 {
            field_0: v12
            field_16: *((a3 + 16) as &i128)
        };
        v10 = uu_sort::merge::FileMerger::write_all(&v5, a2, &v1);
        return v10;
    } else if !*((a2 + 133) as &i8) {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v1 = struct32 {
            field_0: v9
            field_16: *((a3 + 16) as &i128)
        };
        v10 = uu_sort::ext_sort::ext_sort(&v0, a2, &v1, a4);
        return v10;
    } else {
        if a1 > 1 {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("only one file allowed with -c");
            v1 = v0;
            v3 = 2;
            v10 = alloc::boxed::Box<T>::new(&v1);
        } else {
            if a1 != 1 {
                core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
            }
            v10 = uu_sort::check::check(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        }
        return v10;
    }
}
