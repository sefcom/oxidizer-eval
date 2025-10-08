fn fd::fmt::FormatTemplate::generate(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x70]

    v0 = <&T as core::convert::AsRef<U>>::as_ref(1, 0);
    if *(a1 as &i32) != 1 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, *((a1 + 16) as &i64), *((a1 + 24) as &i64));
    return;
}
