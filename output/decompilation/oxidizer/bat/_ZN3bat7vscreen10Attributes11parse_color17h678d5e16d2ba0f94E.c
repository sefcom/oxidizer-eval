fn bat::vscreen::Attributes::parse_color(a1: i16, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u16;  // [bp-0x9a]
    let v1: struct24;  // [bp-0x98], Other Possible Types: struct_1 *
    let v2: Option<struct24>;  // [bp-0x90], Other Possible Types: u64
    let v3: struct16;  // [bp-0x88], Other Possible Types: struct_2 *
    let v4: u64;  // [bp-0x80]
    let v5: struct40;  // [bp-0x78]
    let v10: struct24;  // [bp-0x48]
    let v11: struct24;  // [bp-0x48]
    let v12: struct24;  // [bp-0x30]
    let v14: struct16;  // rax
    let v15: core::option::Option<&str>;  // cl
    let v16: u64;  // rdx
    let v17: struct16;  // dx

    v0 = a1;
    v14 = a1;
    v15 = (v14 as u32 * 205 >> 10 & 254) * 5;
    if (v14 - v15 as u64) as u8 != 8 {
        if v14 as u8 - v15 != 9 {
            core::option::Option<T>::map_or_else(a0, 0, v17, &v5);
            return;
        }
    } else {
        if (<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(a2) & 1) {
            if v16 == 2 {
                v12 = bat::vscreen::join(0x3, a2);
                v1 = &v0;
                v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v3 = &v12;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = struct40 {
                    field_0: "\x1b["
                    field_8: 3
                    field_16: &v1
                    field_24: 2
                };
                v11 = core::option::Option<T>::map_or_else(None, a2, &v5);
            } else if v16 == 5 {
                v12 = bat::vscreen::join(0x1, a2);
                v1 = &v0;
                v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v3 = &v12;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = struct40 {
                    field_0: "\x1b["
                    field_8: 3
                    field_16: &v1
                    field_24: 2
                };
                v10 = core::option::Option<T>::map_or_else(None, a2, &v5);
            } else {
                core::option::Option<T>::map_or_else(a0, 0, v17, &v5);
                return;
            }
            return v10;
        }
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, 1, 0);
    return;
}
