fn uu_sort::merge::merge(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: void*;  // rdx
    let v4: u64;  // rax
    let v5: struct120;  // rsi
    let v6: i64;  // rdx

    v0 = v2;
    v0 = a2;
    v3 = 0;
    v4 = uu_sort::merge::replace_output_file_in_input_files(a0, a1, v3, *((a3 + 16) as &i64), a4);
    if v4 {
        return v4;
    }
    v5 = a0 + a1 * 24;
    v6 = v0;
    if *((v0 + 48) as &i64) != 0x8000000000000000 {
        return uu_sort::merge::merge_with_file_limit(a0, v5, v6, a3, a4);
    }
    return uu_sort::merge::merge_with_file_limit(a0, v5, v6, a3, a4);
}
