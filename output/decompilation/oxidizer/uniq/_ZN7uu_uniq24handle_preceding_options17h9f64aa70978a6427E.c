fn uu_uniq::handle_preceding_options(a0: u32, a1: u32, a2: &struct1, a3: &struct1) -> u64 {
    let v0: struct4;  // [bp-0x3c]
    let v1: &u8;  // [sp-0x38]
    let v3: &u8;  // r13
    let v4: u64;  // rax
    let v5: u64;  // r13
    let v6: u64;  // rdx
    let v7: u64;  // rax

    v3 = a2;
    if core::slice::<impl [T]>::starts_with(a0, a1, "--") as i8 {
        v1 = a2;
        v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a0, a1);
        v5 = v4;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "skip-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "skip-fields") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "check-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "group") as i8 {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "all-repeated");
        }
        v3 = v1;
        *(v3) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-s") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-f") as i8 {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-w");
    }
    *(a3) = 1;
    v0 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    v7 = core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(45, &v0), v6);
    if !v7 {
        *(a3) = 0;
        *(v3) = 0;
        return v7;
    }
    return v7;
}
