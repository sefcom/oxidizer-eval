fn uu_shred::pass_name(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v3: u64;  // [bp-0xe0]

    match (*(a1 as &i8)) {
        2 => {
            return <T as alloc::slice::hack::ConvertVec>::to_vec(a0) as u64;
        }
        _ => {
            return core::option::Option<T>::map_or_else(a0, &v3);
        }
    }
}
