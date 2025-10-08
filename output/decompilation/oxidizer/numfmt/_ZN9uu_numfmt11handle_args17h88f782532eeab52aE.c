fn uu_numfmt::handle_args(a0: i64, a1: void*) -> long long {
    let v0: struct64;  // [bp-0x68]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rax

    v0 = struct64 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
    };
    loop {
        v2 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v2 {
            return 0;
        }
        v4 = uu_numfmt::format_and_handle_validation(v2, v3, a1);
        if v4 {
            return v4;
        }
    }
}
