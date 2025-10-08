fn starship::modules::pulumi::parse_version(a0: i128, a1: i192) -> long long {
    let v0: Option<struct24>;  // [bp-0x38], Other Possible Types: struct24
    let v3: struct24;  // rdx
    let v4: core::option::Option<&str>;  // rax
    let v5: struct24;  // rbx, Other Possible Types: u64
    let v6: &mut [u8];  // rax
    let v7: struct92;  // rbx
    let v8: struct24;  // rax
    let v9: Option<struct48>;  // ebp
    let v10: &str;  // rdx
    let v12: &mut [u8];  // rax:rdx

    v0 = 0;
    v12 = core::char::methods::encode_utf8_raw(118, &v0 as u64, 4);
    v4 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v12.data_ptr, v12.length, a0, a1) as u64;
    match v4 {
        Some(_) => {
            v5 = v3;
            if let None = v4 {
                goto LABEL_bb3ae3;
            }
LABEL_bb3ae2:
            v6 = v4;
        },
        None => {
            v5 = a1;
            if let Some(_) = v4 {
                goto LABEL_bb3ae2;
            }
LABEL_bb3ae3:
            v6 = a0;
        },
    }
    v7 = core::str::<impl str>::trim_end_matches(v6, v5);
    v0 = struct24 {
        field_0: v7
        field_8: v7 + v3
        field_16: 0
    };
    v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v3 {
        return v7;
    }
    loop {
        if v10 == "." && v9 == 2 {
            return core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v8, v7, v3) as u64;
        }
        v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v0);
        v10 = v3;
        if !v10 {
            return v7;
        }
    }
}
