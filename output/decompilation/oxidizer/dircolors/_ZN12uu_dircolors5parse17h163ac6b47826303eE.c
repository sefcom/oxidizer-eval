fn uu_dircolors::parse(a0: i64, a1: u64, a2: i64, a3: u64, a4: u64) -> void {
    let v0: u64;  // [bp-0x238]
    let v2: u32;  // [bp-0x21c]
    let v4: void*;  // [bp-0x210]
    let v6: struct24;  // [bp-0x200]
    let v8: void*;  // [bp-0x1e8]
    let v9: u64;  // [bp-0x1e0]
    let v10: u64;  // [bp-0x1d8]
    let v11: void*;  // [bp-0x1d0]
    let v12: u64;  // [bp-0x1c8]
    let v13: u64;  // [bp-0x1c0]
    let v14: u64;  // [bp-0x1b8]
    let v15: u64;  // [bp-0x1b0]
    let v16: struct24;  // [bp-0x1a8], Other Possible Types: u128
    let v18: u64;  // [bp-0x198]
    let v20: void*;  // [bp-0x178], Other Possible Types: u64
    let v21: u64;  // [bp-0x170]
    let v22: u8;  // [bp-0x168]
    let v23: struct56;  // [bp-0x160], Other Possible Types: core::result::Result<alloc::string::String, std::env::VarError>, u8
    let v24: u64;  // [bp-0x158]
    let v25: u32;  // [bp-0x150]
    let v26: u64;  // [bp-0x148]
    let v27: u64;  // [bp-0x140]
    let v28: i8;  // [bp-0x138]
    let v29: struct32;  // [bp-0x128], Other Possible Types: struct48
    let v30: struct8;  // [bp-0x128]
    let v31: u64;  // [bp-0x120]
    let v32: void*;  // [bp-0x118]
    let v33: u64;  // [bp-0x110]
    let v34: u64;  // [bp-0xf8]
    let v35: u64;  // [bp-0xf0]
    let v36: u64;  // [bp-0xe8]
    let v38: u64;  // [bp-0xc8]
    let v39: Result<struct24, struct24>;  // [bp-0xc0]
    let v42: u64;  // [bp-0xa8]
    let v43: u64;  // [bp-0xa0]
    let v44: u64;  // [bp-0x98]
    let v45: u64;  // [bp-0x90]
    let v46: struct32;  // [bp-0x88]
    let v47: u64;  // [bp-0x80]
    let v48: u64;  // [bp-0x78]
    let v49: alloc::string::String;  // [bp-0x48]
    let v50: void*;  // [bp-0x38]
    let v51: u64;  // [bp-0x30]
    let v53: u64;  // rbx
    let v54: u64;  // rdx
    let v55: i64;  // r14
    let v57: u64;  // rax
    let v58: u64;  // r14
    let v64: &str;  // rax:rdx
    let v65: void*;  // [bp-0x180], Other Possible Types: alloc::string::String

    v51 = v53;
    v34 = a1;
    v6 = struct24 {
        field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(1790, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs")
        field_8: v54
        field_16: 0
    };
    uu_dircolors::get_colors_format_strings(&v23, a2);
    v13 = v23;
    v12 = v26;
    v38 = *(&v28 as &i64);
    v14 = v24;
    v15 = v27;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v6, v24, v25 + v24);
    v23 = std::env::var("TERM");
    match v23 {
        Err(_) => {
            v16 = uu_dircolors::parse::{{closure}}(v24, v25);
        },
        Ok(_) => {
            v18 = v26;
            v16 = *((&v23 as &char + 8) as &i128) as u128;
        },
    }
    v23 = std::env::var("COLORTERM");
    v39 = core::result::Result<T,E>::unwrap_or_default(&v23);
    v29 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v23 = core::iter::traits::iterator::Iterator::enumerate(&v29);
    loop {
        vvar_763{stack -136} = struct32 OrderedDict([(0, 𝜙@64b [((4582010, None), vvar_606{stack -136}), ((4581810, None), None), ((4582603, None), vvar_606{stack -136})]), (8, 𝜙@64b [((4582010, None), vvar_607{stack -128}), ((4581810, None), None), ((4582603, None), vvar_607{stack -128})])])
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v46, v55);
        if v47 == 0x8000000000000000 {
            break;
        }
        v42 = v46.field_0 + 1;
        v64 = alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(v48);
        v57 = <str as uu_dircolors::StrUtils>::purify(v64.data_ptr, v64.length);
        if !v54 {
            continue;
        }
        uu_dircolors::escape(&v43, v57, a2);
        v10 = v44;
        v29 = <str as uu_dircolors::StrUtils>::split_two(v44, v45);
        if !v33 {
            v65 = 0;
            v20 = a3;
            v21 = a4;
            v22 = 0;
            v49 = format!("{}:{}: invalid line;  missing second token", &v65, &v42);
            *(&v11[24] as &void*) = v50;
            *(&v11[8] as &i128) = *(&v49.vec.buf.inner.cap as &i128);
            *(v11 as &i64) = 1;
            return;
        }
        v9 = v33;
        v8 = v32;
        v36 = v29.field_0;
        v35 = v31;
        v65 = alloc::str::<impl str>::to_lowercase(v29.field_0, v31);
        v4 = v20;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v21, "term") {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v21, "colorterm") {
                goto LABEL_45ec95;
            }
            if v58 != 3 {
                v0 = v9;
                v30 = uu_dircolors::append_entry(&v6, a2, v36, v35, v4, v21, v8 as u32);
                if v30 != 0x8000000000000000 {
                    *(&v11[16] as &i128) = *(&v31 as &i128);
                    *(&v11[8] as &struct8) = v30;
                    *(v11 as &i64) = 1;
                    return;
                }
            }
        }
LABEL_45ec95:
        v2 = v58;
    }
    if *(a2 as &i8) == 2 {
        v6 as u64 = alloc::string::String::pop();
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v6 as u64, v15, v38 + v15);
    *(&v11[24] as &i64) = 0;
    *(&v11[8] as &i128) = *(&v6.field_0 as &i128);
    *(v11 as &i64) = 0;
    return;
}
