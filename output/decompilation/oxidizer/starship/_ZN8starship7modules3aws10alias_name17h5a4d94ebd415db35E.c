fn starship::modules::aws::alias_name(a0: u64, a1: void*, a2: &u64) -> void {
    let v0: struct24;  // [bp-0x48]
    let v3: struct16;  // [bp-0x28]
    let v5: i64;  // rax

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v5 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, a1);
        if v5 {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v5 + 24) as &i64), *((v5 + 32) as &i64));
        }
    }
    v0 = struct24 {
        field_0: *(a1 as &i128)
        field_16: a1[16] as i64
    };
    core::option::Option<T>::or(a0, &v3, &v0);
    return;
}
