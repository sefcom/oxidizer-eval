fn uu_od::prn_char::format_item_c(a0: void*, a1: &u8, a2: u64) -> u64 {
    let v0: u8;  // [sp-0xa9]
    let v1: u64;  // [sp-0xa8], Other Possible Types: &u8
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: &u8;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: &u8;  // [sp-0x78]
    let v8: u64;  // [sp-0x70]
    let v9: u64;  // [sp-0x68]
    let v10: void*;  // [sp-0x58]
    let v11: u64;  // [sp-0x50]
    let v12: void*;  // [sp-0x48]
    let v13: u64;  // [sp-0x40]
    let v14: u8;  // [sp-0x38]
    let v15: &u8;  // [sp-0x30], Other Possible Types: u64, Result<struct16, struct10>
    let v16: u64;  // [sp-0x28]
    let v17: u128;  // [sp-0x18]
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v21: u64;  // rdi
    let v22: &u8;  // rax
    let v23: u32;  // rdx
    let v24: u64;  // rax

    v0 = *(a1);
    if v0 >= 0 {
        v1 = "\\0" + (v0 * 16 & 4294967295);
        v15 = &v1;
        v16 = <&T as core::fmt::Display>::fmt;
        v9 = 2;
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v13 = 32;
        v14 = 1;
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
            v15 = &v0;
            v16 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
            v9 = 2;
            v10 = 0;
            v11 = 3;
            v12 = 0;
            v13 = 34359738400;
            v14 = 3;
            v19 = " ";
LABEL_4d57dd:
            v3 = v19;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v15;
        } else {
            v20 = "src/uu/od/src/prn_char.rs";
            v21 = 4;
LABEL_4d587e:
            v15 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v21, a1, a2, v20), v23);
            if v15 {
                v1 = &v0;
                v2 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
                v9 = 2;
                v10 = 0;
                v11 = 3;
                v12 = 0;
                v13 = 34359738400;
                v14 = 3;
                v24 = " ";
            } else {
                v17 = *(&v16 as &i128);
                v1 = &v17;
                v2 = <&T as core::fmt::Display>::fmt;
                v9 = 2;
                v10 = 0;
                v11 = 4;
                v12 = 0;
                v13 = 32;
                v14 = 1;
                v24 = &g_40dad0;
            }
            v3 = v24;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v1;
        }
        v5 = v22;
        v6 = 1;
        core::option::Option<T>::map_or_else(a0, &v3);
        return a0;
    }
}
