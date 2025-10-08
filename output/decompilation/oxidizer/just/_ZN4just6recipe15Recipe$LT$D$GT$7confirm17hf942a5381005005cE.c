fn just::recipe::Recipe<D>::confirm(a0: i64, a1: u64) -> int {
    let v0: struct24;  // [bp-0x60]
    let v1: core::fmt::rt::Argument;  // [bp-0x60]
    let v2: alloc::string::String;  // [bp-0x48], Other Possible Types: core::fmt::Arguments, std::io::stdio::Stdin
    let v3: i64;  // [bp-0x38]
    let v5: struct17;  // rax
    let v6: struct192;  // rax
    let v7: u64;  // rdx
    let v8: u64;  // rdx
    let v10: &str;  // rax:rdx

    v5 = just::attribute_set::AttributeSet::get(a1 + 216, 0);
    if !v5 || *(v5 as &i64) != 9223372036854775809 {
        return struct2 {
            field_0: 312
        };
    }
    v2 = core::fmt::Arguments {
        pieces: &[&str] {
            ptr: v6
            len: 2
        }
        args: [v1]
        fmt: 0
    };
    std::io::stdio::_eprint(&v2);
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    v2 = std::io::stdio::stdin();
    if (std::io::stdio::Stdin::read_line(&v2, &v0) & 1) {
        return struct16 {
            field_0: 26
            padding_1: <UNKNOWN>
            field_8: v7
        };
    }
    v10 = core::str::<impl str>::trim_matches(1, None, v8);
    v2 = alloc::str::<impl str>::to_lowercase(v10.data_ptr, v8);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(2, v3, "y") {
        return struct2 {
            field_0: 56
            field_1: 1
        };
    }
    <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(2, v3, "yes");
    return struct2 {
        field_0: 56
        field_1: 1
    };
    return struct2 {
        field_0: 312
    };
}
