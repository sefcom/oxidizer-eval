fn uu_sort::merge::merge(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // rax
    let v1: i64;  // rdi
    let v2: u64;  // rdx
    let v3: u64;  // rdx
    let v4: u64;  // rdi
    let v5: u64;  // rdi

    v0 = uu_sort::merge::replace_output_file_in_input_files(a0, a1, a3, a4, a5);
    if v0 {
        *((v1 + 8) as &u64) = v0;
        *((v1 + 16) as &u64) = v2;
        *(v1 as &i64) = 3;
        return;
    }
    v3 = a0 + a1 * 24;
    if *((a2 + 48) as &i64) != 0x8000000000000000 {
        uu_sort::merge::merge_with_file_limit(v5, a0, v3, a2, a5);
        return;
    }
    uu_sort::merge::merge_with_file_limit(v4, a0, v3, a2, a5);
    return;
}
