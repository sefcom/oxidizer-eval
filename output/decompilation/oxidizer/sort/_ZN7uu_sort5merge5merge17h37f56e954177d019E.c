fn uu_sort::merge::merge(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32, a6: u32) -> u64 {
    let v2: u64;  // rdx

    if uu_sort::merge::replace_output_file_in_input_files(a1, a2, a4, a5, a6) {
        return struct24 {
            field_0: 3
            field_8: v0
            field_16: v1
        };
    }
    v2 = a1 + a2 * 24;
    if a3->field_30 != 0x8000000000000000 {
        uu_sort::merge::merge_with_file_limit(a0, a1, v2, a3, a6);
    }
    uu_sort::merge::merge_with_file_limit(a0, a1, v2, a3, a6);
}
