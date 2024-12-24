fn uu_sort::merge::merge(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [bp+0x8]
    let v1: u64;  // r15
    let v2: u64;  // rax
    let v4: u64;  // rdx

    v1 = v0;
    v2 = uu_sort::merge::replace_output_file_in_input_files(a1, a2, a4, a5, v1, a5);
    if v2 {
        return struct24 {
            field_0: 3
            field_8: v2
            field_16: v3
        };
    }
    v4 = a1 + a2 * 24;
    if a3->field_30 != 0x8000000000000000 {
        uu_sort::merge::merge_with_file_limit(a0, a1, v4, a3, v1);
        return struct24 {
            field_0: 3
            field_8: v2
            field_16: v3
        };
    }
    uu_sort::merge::merge_with_file_limit(a0, a1, v4, a3, v1);
    return struct24 {
        field_0: 3
        field_8: v2
        field_16: v3
    };
}
