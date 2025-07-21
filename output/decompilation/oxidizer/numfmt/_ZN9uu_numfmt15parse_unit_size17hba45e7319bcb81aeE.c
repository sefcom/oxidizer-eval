fn uu_numfmt::parse_unit_size(a1: i64, a2: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [sp-0xc0], Other Possible Types: core::result::Result<usize, core::num::error::ParseIntError>, struct24
    let v1: core::fmt::Arguments;  // [bp-0xb8]
    let v2: core::fmt::rt::Argument;  // [bp-0xb0]
    let v3: u64;  // [bp-0xb0]
    let v4: struct24;  // [bp-0x90]
    let v5: core::fmt::rt::Argument;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: void*;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: u8;  // [bp-0x50]
    let v11: alloc::string::String;  // [bp-0x48]
    let v13: core::option::Option<&str>;  // rax
    let v14: u32;  // rdx

    v2 = 0;
    v0 = struct24 {
        field_0: a1
        field_8: a1 + a2
        field_16: v3 & -0x100
    };
    v4 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v0);
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v6, a1, a2) as u64;
    if (!v6 || (v0 = alloc::str::<impl str>::repeat("0", v6), !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v0, v5, v6) as i8)) && uu_numfmt::parse_unit_size_suffix(v13, v14) == 1 {
        if v6 {
            v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v5, v6);
            if let Ok(_) = v0 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v1 * v14
                };
            }
        } else {
            *((a0 + 8) as &u32) = v14;
        }
    }
    v7 = 0;
    v8 = a1;
    v9 = a2;
    v10 = 1;
    v11 = format!("invalid unit size: {}", &v7);
    return Ok(struct24 {
        field_0: *(&v11.vec.buf.cap as &i128)
        field_16: v11.vec.len
    });
}
