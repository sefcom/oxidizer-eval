fn uu_od::prn_char::format_item_c(a0: &struct24, a1: &u8, a2: u32) -> u64 {
    let v0: i8;  // [sp-0xa9]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98], Other Possible Types: struct56, int
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x68]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: i64;  // [sp-0x48]
    let v12: i64;  // [sp-0x40]
    let v13: i8;  // [sp-0x38]
    let v14: i64;  // [sp-0x30]
    let v15: i64;  // [sp-0x30], Other Possible Types: Result<struct16, struct10>
    let v16: i64;  // [sp-0x28]
    let v17: iNone;  // [sp-0x18]
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rdi

    v0 = *(a1 as &i8);
    if v0 >= 0 {
        v1 = "\\0" + (v0 * 16 & 4294967295);
        v14 = &v1;
        v16 = <&T as core::fmt::Display>::fmt;
        v7 = 2;
        v9 = 0;
        v10 = 4;
        v11 = 0;
        v12 = 32;
        v13 = 1;
        v19 = &g_40dad0;
        goto LABEL_4d57dd;
    }
    if (v0 & 192) == 128 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0);
        return a0;
    }
    if a2 != 1 && (v0 & 224) == 192 {
        v20 = "src/uu/od/src/prn_char.rs";
        v21 = 2;
        goto LABEL_4d587e;
    }
    if a2 >= 3 && (v0 & 240) == 224 {
        v20 = "src/uu/od/src/prn_char.rs";
        v21 = 3;
        goto LABEL_4d587e;
    } else {
        if a2 < 4 || (v0 & 248) != 240 {
            v14 = &v0;
            v16 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
            v7 = 2;
            v9 = 0;
            v10 = 3;
            v11 = 0;
            v12 = 34359738400;
            v13 = 3;
            v19 = " ";
LABEL_4d57dd:
            v4 = v19;
            v4 = &v7;
        } else {
            v20 = "src/uu/od/src/prn_char.rs";
            v21 = 4;
LABEL_4d587e:
            v15 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v21, a1, a2, v20), a2);
            if v15 {
                v2 = &v0;
                v3 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
                v9 = 0;
                v10 = 3;
                v11 = 0;
                v12 = 34359738400;
                v13 = 3;
            } else {
                v17 = *((&v15 as &char + 8) as &i128);
                v2 = &v17;
                v3 = <&T as core::fmt::Display>::fmt;
                v8 = 2;
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v12 = 32;
                v13 = 1;
            }
            v4 = struct56 {
                field_0: v23
                field_8: 1
                field_16: v22
                field_24: 1
                field_32: &v8
                field_40: 1
                field_48: 2
            };
            v5 = 1;
            v6 = 1;
        }
        core::option::Option<T>::map_or_else(a0, &v4);
        return a0;
    }
}
