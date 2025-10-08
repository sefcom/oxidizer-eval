fn uu_basename::basename(a0: &struct24, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: struct20;  // [bp-0xa0], Other Possible Types: struct24
    let v1: &u8;  // [bp-0x98]
    let v2: core::option::Option<std::path::Component>;  // [bp-0x60]
    let v4: void*;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdx
    let v7: void*;  // rax

    v4 = core::str::<impl str>::trim_end_matches(a1, a2);
    if !v5 {
        v6 = a2;
        if !v5 {
            goto LABEL_456e83;
        }
LABEL_456e82:
        v7 = v4;
    } else {
        v6 = v5;
        if v5 {
            goto LABEL_456e82;
        }
LABEL_456e83:
        v7 = a1;
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v6);
    v0 = std::path::Path::components(v1, v0.field_16);
    v2 = <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v0);
    core::option::Option<T>::map_or_else(a0, &v2, a3, a4);
    return a0;
}
