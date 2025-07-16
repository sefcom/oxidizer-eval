fn uu_od::prn_char::format_item_c(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0xa9]
    let v1: struct24;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa0]
    let v3: u448;  // [bp-0x98]
    let v4: u64;  // [bp-0x98]
    let v5: u64;  // [bp-0x90]
    let v6: i64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: u64;  // [bp-0x68], Other Possible Types: struct25
    let v9: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x58]
    let v10: struct48;  // [bp-0x50]
    let v11: Result<struct99, struct24>;  // [bp-0x48]
    let v12: u64;  // [bp-0x40]
    let v13: u8;  // [bp-0x38]
    let v14: &[u8];  // [bp-0x30], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v16: u8;  // [bp-0x18]
    let v18: u64;  // rax
    let v19: u64;  // rax
    let v20: u8;  // cl
    let v21: u8;  // cl
    let v23: u64;  // rdi
    let v26: i64;  // rax
    let v27: core::option::Option<&str>;  // rax

    v18 = *(a1 as &i8);
    v0 = v18;
    if v18 >= 0 {
LABEL_4d57dd:
        v3 = v19;
        v5 = 1;
        v6 = &v8;
        v7 = 1;
        v26 = &v14;
    } else {
        v20 = v18;
        v21 = v20 & 192;
        if (v20 & 192) == 128 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0);
            return a0;
        }
        if !(a2 != 1 && !((v21 = v18 as u8 & 224, (v18 as u8 & 224) != 192)) || a2 >= 3 && !((v21 = v18 as u8 & 240, (v18 as u8 & 240) != 224)) || a2 >= 4 && (v18 & 248) == 240) {
            goto LABEL_4d57dd;
        }
        v14 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v23, a1, a2, v21), a2);
        if let Ok(_) = v14 {
            memcpy(&v16, &v14, 16);
            v1 = &v16 as u128;
            v2 = <&T as core::fmt::Display>::fmt;
            v8 = 2;
            v9 = 0;
            v10 = 4;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v27 = &g_40dad0;
        }
        v4 = v27;
        v5 = 1;
        v6 = &v8;
        v7 = 1;
        v26 = &v1;
    }
    vvar_281{stack -152} = struct56 OrderedDict({0: 𝜙@64b [((5068765, None), vvar_246{stack -152}), ((5069150, None), vvar_271{stack -152})], 16: vvar_20{reg 16}, 24: 0x1<64>})
    core::option::Option<T>::map_or_else(a0, &v3);
    return a0;
}
