fn uu_who::platform::unix::Who::print_line(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i32, a7: i64, a8: i32, a9: i64, a10: i32, a11: i64, a12: i32, a13: i64, a14: i32) -> int {
    let v0: struct32;  // [bp-0x130], Other Possible Types: struct64
    let v1: struct64;  // [bp-0x130]
    let v2: struct64;  // [bp-0x130]
    let v3: struct64;  // [bp-0x130]
    let v4: u512;  // [sp-0x130]
    let v6: struct64;  // [bp-0x130]
    let v7: u64;  // [bp-0x100]
    let v8: u64;  // [bp-0xf8]
    let v9: void*;  // [bp-0xf0]
    let v10: u16;  // [bp-0xe8]
    let v11: struct24;  // [bp-0xe0]
    let v12: struct24;  // [bp-0xc8]
    let v13: u64;  // [bp-0xc0]
    let v14: u64;  // [bp-0xb8]
    let v15: u64;  // [bp-0xb0]
    let v16: u64;  // [bp-0xa8]
    let v17: u64;  // [bp-0xa0]
    let v18: u64;  // [bp-0x98]
    let v19: iNone;  // [bp-0x80]
    let v20: iNone;  // [bp-0x70]
    let v21: iNone;  // [bp-0x60]
    let v22: iNone;  // [bp-0x50]
    let v23: iNone;  // [bp-0x40]
    let v24: i64;  // rax
    let v32: u64;  // rdx

    v15 = a1;
    v16 = a2;
    v17 = a4;
    v18 = a5;
    v19 = vvar_6;
    v20 = vvar_8;
    v21 = vvar_10;
    v22 = vvar_12;
    v23 = vvar_14;
    v11 = struct24 {
        field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(64, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs")
        padding_8: <UNKNOWN>
        field_16: 0
    };
    v24 = alloc::alloc::Global::alloc_impl(4, 8);
    *(v24 as &i32) = 32;
    *((v24 + 4) as &u32) = a3;
    v4 = struct24 {
        field_0: 2
        field_8: v24
        field_16: 2
    };
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v12 = core::iter::traits::iterator::Iterator::collect(&v0);
    v1 = struct64 {
        field_0: "\x01"
        field_16: &v4 as u192
        field_24: 1
        field_32: "\x02"
        field_48: &v15
        field_56: <&T as core::fmt::Display>::fmt
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v1), "src/uu/who/src/platform/unix.rs");
    if *((a0 + 29) as &i8) {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v11, v13, v14 + v13);
    }
    v2 = struct64 {
        field_0: " "
        field_8: 1
        field_16: &v4 as u192
        field_24: 1
        field_32: "\x02"
        field_48: &v17
        field_56: <&T as core::fmt::Display>::fmt
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v2), "src/uu/who/src/platform/unix.rs");
    v9 = 0;
    v10 = 10;
    v3 = struct64 {
        field_0: " "
        field_8: 1
        field_16: &v4 as u192
        field_24: 2
        field_32: "\x02"
        field_48: &v19
        field_56: <&T as core::fmt::Display>::fmt
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v3), "src/uu/who/src/platform/unix.rs");
    if !*((a0 + 26) as &i8) {
        if *((a0 + 27) as &i8) {
            v0 = struct64 {
                field_0: " "
                field_8: 1
                field_16: &v4 as u192
                field_24: 1
                field_32: "\x02"
                field_48: &v20
                field_56: <&T as core::fmt::Display>::fmt
            };
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v0), "src/uu/who/src/platform/unix.rs");
        }
        v0 = struct64 {
            field_0: " "
            field_8: 1
            field_16: &v4 as u192
            field_24: 1
            field_32: "\x02"
            field_48: &v21
            field_56: <&T as core::fmt::Display>::fmt
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v0), "src/uu/who/src/platform/unix.rs");
    }
    v6 = struct64 {
        field_0: " "
        field_8: 1
        field_16: &v4 as u192
        field_24: 1
        field_32: "\x02"
        field_48: &v22
        field_56: <&T as core::fmt::Display>::fmt
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v6), "src/uu/who/src/platform/unix.rs");
    if *((a0 + 30) as &i8) {
        v0 = struct64 {
            field_0: " "
            field_8: 1
            field_16: &v4 as u192
            field_24: 1
            field_32: "\x02"
            field_48: &v23
            field_56: <&T as core::fmt::Display>::fmt
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v0), "src/uu/who/src/platform/unix.rs");
    }
    v7 = core::str::<impl str>::trim_end_matches(v32, 0);
    v8 = v32;
    println!("{}", &v7);
    return;
}
