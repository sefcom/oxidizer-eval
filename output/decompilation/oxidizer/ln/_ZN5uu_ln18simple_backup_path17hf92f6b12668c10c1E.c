fn uu_ln::simple_backup_path(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x38]
    let v1: struct24;  // [bp-0x38]
    let v2: void*;  // [bp-0x30]
    let v4: u64;  // rax

    v0 = core::str::converts::from_utf8(a1, a2);
    core::option::unwrap(v0);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, *((&v0 as &char + 16) as &i64));
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, a3, a4 + a3);
    v4 = v1.field_16;
    return struct24 {
        field_0: *(&v1.field_0 as &i128)
        field_16: v4
    };
}
