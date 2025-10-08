fn zoxide::util::resolve_path(a1: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x208], Other Possible Types: struct16, struct8
    let v1: u64;  // [bp-0x200]
    let v2: void*;  // [bp-0x1f8]
    let v3: u64;  // [bp-0x1f0]
    let v4: &u8;  // [bp-0x1e8]
    let v5: struct20;  // [bp-0x1d8]
    let v6: Result<struct24, struct16>;  // [bp-0x1d8]
    let v7: u8;  // [bp-0x1d8]
    let v8: u128;  // [bp-0x1d8]
    let v9: u8;  // [bp-0x1d8]
    let v10: struct24;  // [bp-0x1d8]
    let v11: &u8;  // [bp-0x1d0]
    let v12: u128;  // [bp-0x1c8]
    let v13: i8;  // [bp-0x1b8], Other Possible Types: u128
    let v14: i8;  // [bp-0x1a8], Other Possible Types: u128
    let v15: iNone;  // [bp-0x198]
    let v16: iNone;  // [bp-0x188]
    let v17: iNone;  // [bp-0x178]
    let v18: u64;  // [bp-0x168]
    let v19: struct56;  // [bp-0x158]
    let v20: i8;  // [bp-0x157]
    let v21: u8;  // [bp-0x148]
    let v22: i8;  // [bp-0x147]
    let v23: u8;  // [bp-0x138]
    let v24: i8;  // [bp-0x137]
    let v25: u64;  // [bp-0x128]
    let v26: struct64;  // [bp-0x120]
    let v27: u64;  // [bp-0xe8]
    let v28: struct49;  // [bp-0xe0]
    let v29: u8;  // [bp-0xa8]
    let v30: core::option::Option<std::path::Component>;  // [bp-0xa8]
    let v31: iNone;  // [bp-0xa7]
    let v32: iNone;  // [bp-0x97]
    let v33: u128;  // [bp-0x87]
    let v34: u64;  // [bp-0x78]
    let v35: struct20;  // [bp-0x70]
    let v38: u32;  // rdx
    let v39: iNone;  // xmm0
    let v40: iNone;  // xmm1
    let v41: iNone;  // xmm2
    let v42: iNone;  // xmm0
    let v43: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // xmm1
    let v44: u8;  // bpl
    let v45: iNone;  // xmm0
    let v46: iNone;  // xmm1
    let v47: u128;  // xmm2
    let v48: iNone;  // xmm0
    let v49: iNone;  // xmm1

    v5 = std::path::Path::components(<&T as core::convert::AsRef<U>>::as_ref(a1), v38);
    v39 = *(&v5.field_0 as &i128);
    v40 = *(&v5.field_0 as &i128);
    v41 = *(&v13 as &i128);
    v26 = struct64 {
        field_0: v39
        field_16: v40
        field_32: v41
        field_48: *(&v14 as &i128)
    };
    v19 = 11;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    core::option::Option<T>::get_or_insert_with(&v19, &v26);
    if <std::path::Component as core::cmp::PartialEq>::eq(0xb, a1) {
        v42 = *(&v20 as &i128);
        v43 = *(&v22 as &i128);
        v19 = 11;
        v28 = struct49 {
            field_0: 11
            field_1: v42
            field_17: v43
            field_33: *(&v24 as &i128)
        };
        v0 = alloc::vec::Vec<T,A>::push(&v28, "src/util.rs");
    } else {
        v6 = zoxide::util::current_dir();
        if (((0 ^ v6 as i64) & (0 ^ -(vvar_347{stack -472}))) >> 63) as char {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v11
            };
        }
        v3 = v6 as i64;
        v4 = v11;
        v35 = std::path::Path::components(v11, *((&v6 as &char + 16) as &i64));
        v44 = 1;
        v0 = alloc::vec::Vec<T,A>::extend_desugared(&v35);
    }
    v18 = v27;
    v17 = *((&v26.field_32 as &char + 8) as &i128);
    v16 = *((&v26.field_16 as &char + 8) as &i128);
    v15 = *((&v26.field_0 as &char + 8) as &i128);
    v45 = v19.field_0;
    v46 = *(&v21 as &i128);
    v47 = *(&v23 as &i128);
    v14 = *(&v25 as &i128);
    v13 = v47;
    *(&v12 as void*) = v46;
    *(&v8 as void*) = v45;
    v9 = 11;
    if v7 != 11 {
        v34 = v14;
        v48 = *((&v8 as &char + 1) as &i128);
        v49 = *((&v12 as &char + 1) as &i128);
        v33 = *((&v13 as &char + 1) as &i128);
        v32 = v49;
        v31 = v48;
        v29 = v7;
    } else {
        v30 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v14);
    }
    v10 = core::iter::traits::iterator::Iterator::collect(0x8, 8);
    return Ok(struct24 {
        field_0: v10.field_0
        field_16: v10.field_16
    });
    core::mem::drop(v3, v4);
    return;
}
