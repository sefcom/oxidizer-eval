fn versions_replacer::replace::replace_versions_in_string(a1: i64, a2: i64, a3: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x28], Other Possible Types: u64
    let v2: u64;  // rax

    v0 = v2;
    v0 = 0;
    regex::regex::string::Regex::replacen(a0, once_cell::sync::OnceCell<T>::get_or_try_init(), a1, a2, a3, &v0);
    *((a0 + 24) as &void*) = v0;
    return;
}
