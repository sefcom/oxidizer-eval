fn linera_summary::performance_summary::PerformanceSummary::format_comment_body(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x1d8], Other Possible Types: struct_0 *, u8
    let v1: u128;  // [bp-0x1d8]
    let v2: Option<struct584>;  // [bp-0x1d0], Other Possible Types: struct12, u64
    let v3: i64;  // [bp-0x1c8], Other Possible Types: struct_8 *, struct_9 *, u64
    let v4: u64;  // [bp-0x1c0]
    let v5: void*;  // [bp-0x1b8], Other Possible Types: &str, struct_10 *
    let v6: u64;  // [bp-0x1b0]
    let v7: i64;  // [bp-0x1a8]
    let v8: u64;  // [bp-0x1a0]
    let v9: u128;  // [bp-0x198]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x178]
    let v12: u128;  // [bp-0x178]
    let v13: u64;  // [bp-0x168]
    let v14: struct24;  // [bp-0x158], Other Possible Types: struct_4 *, struct_7 *, u128
    let v15: u64;  // [bp-0x150]
    let v16: u64;  // [bp-0x148]
    let v17: core::fmt::Arguments;  // [bp-0x140], Other Possible Types: alloc::string::String, struct24
    let v18: u64;  // [bp-0x130]
    let v19: i64;  // [bp-0x130]
    let v20: u64;  // [bp-0x130]
    let v21: struct72;  // [bp-0x110]
    let v22: i64;  // [bp-0xc8]
    let v23: u64;  // [bp-0xc0]
    let v24: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0xb8]
    let v25: u64;  // [bp-0xb0]
    let v26: u128;  // [bp-0xa8]
    let v27: u64;  // [bp-0x98]
    let v28: u64;  // [bp-0x90]
    let v29: u64;  // [bp-0x88]
    let v30: u64;  // [bp-0x80]
    let v31: u64;  // [bp-0x78]
    let v32: u8;  // [bp-0x70]
    let v33: struct24;  // [bp-0x58]
    let v34: u128;  // [bp-0x40]
    let v35: u64;  // [bp-0x18]
    let v36: u64;  // [bp-0x10]
    let v38: u64;  // r15
    let v39: u64;  // r14
    let v40: i64;  // rdx
    let v42: i64;  // r12
    let v43: u64;  // rax
    let v44: u128;  // xmm0
    let v45: i64;  // xmm0lq
    let v46: u64;  // rcx
    let v47: struct40;  // r15
    let v48: i64;  // r13
    let v49: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v50: core::result::Result<u64, core::num::error::ParseIntError>;  // rbp
    let v51: struct24;  // r15

    v36 = v38;
    v35 = v39;
    v28 = *((a1 + 200) as &i64);
    v29 = *((a1 + 208) as &i64);
    v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v28, v29, v40) as u64;
    v31 = 7;
    v12 = *((a1 + 152) as &i128);
    v14 = *((a1 + 176) as &i128);
    v17 = format!("https://github.com/{}/{}/commit/{}", &v12, &v14 as u8, &v28);
    v26 = *(&v17.vec.buf.inner.cap as &i128);
    v27 = v18;
    v42 = &v0;
    v17 = format!("{} [{}]({})\n\n", "## Performance Summary for commit", &v30, &v26);
    v9 = *(&v17.vec.buf.inner.cap as &i128);
    v10 = v18;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_57a75d, &g_57a778);
    v43 = *((a1 + 280) as &i64);
    v21 = struct72 {
        field_0: v46
        field_8: 0
        field_16: v43
        field_24: v45
        field_32: v46
        field_40: 0
        field_48: v43
        field_56: v44
    };
    v47 = &v9;
    v48 = &v32;
    loop {
        v49 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v21) as u64;
        if let None = v49 {
            break;
        }
        v25 = v49;
        v14 = &v25;
        v15 = <&T as core::fmt::Display>::fmt;
        v0 = "#### Workflow: ";
        v2 = 2;
        v5 = 0;
        v3 = &v14;
        v4 = 1;
        v17 = core::option::Option<T>::map_or_else(None, v40, v42);
        v1 = v17.field_0;
        v3 = v18;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v47, 2, v18 + 2);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v47, &g_57a789, &g_57a7cb);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v47, &g_57a7cb, &g_57a7e5);
        v19 = v18;
        if *((v40 + 16) as &i64) {
            v50 = *((v40 + 8) as &i64);
            v23 = *((v40 + 16) as &i64) * 72;
            v51 = 0;
            v24 = v50;
            do {
                v0 = *((v50 + v51 + 48) as &i64);
                v2 = 0;
                <T as alloc::string::SpecToString>::spec_to_string(v48, v42);
                v0 = *((v50 + v51 + 56) as &i64);
                v2 = 0;
                v33 = <T as alloc::string::SpecToString>::spec_to_string(v42);
                v11 = *((v50 + v51 + 64) as &i64);
                v14 = &v11;
                v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v0 = &g_cf35f8;
                v2 = 2;
                v5 = "\x00";
                v3 = &v14;
                v4 = 1;
                v17 = core::option::Option<T>::map_or_else(None, v40, v42);
                v12 = v17.field_0;
                v13 = v18;
                v34 = *((v50 + v51 + 8) as &i128);
                v0 = &v34;
                v2 = <&T as core::fmt::Display>::fmt;
                v3 = &v32;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = &v33;
                v6 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &v12;
                v8 = <alloc::string::String as core::fmt::Display>::fmt;
                v17 = core::fmt::Arguments {
                    pieces: ["| ", " | ", " | ", " | ", " |\n"]
                    args: &[core::fmt::rt::Argument] {
                        ptr: v42
                        len: 4
                    }
                    fmt: 0
                };
                v14 = core::option::Option<T>::map_or_else(None, v40, &v17);
                v1 = v14.field_0;
                v3 = v16;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, <&T as core::fmt::Display>::fmt, v16 + <&T as core::fmt::Display>::fmt);
                v51 += 72;
                v50 = v24;
                v19 = v20;
                v18 = v20;
            } while (v23 != v51);
        }
        v18 = v19;
        v47 = &v9;
        alloc::string::String::push(&v9, 10);
    }
    *((v22 + 16) as &u64) = v10;
    *(v22 as &u128) = v9;
    return v22;
}
