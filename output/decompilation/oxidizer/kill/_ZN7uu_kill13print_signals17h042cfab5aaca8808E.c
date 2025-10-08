fn uu_kill::print_signals() -> long long {
    let v0: u64;  // [bp-0x290]
    let v1: u64;  // [bp-0x288]
    let v2: struct16;  // [bp-0x240]
    let v3: u8;  // [bp-0x230]
    let v5: u64;  // rax
    let v6: u64;  // rdx

    memcpy(&v3, "EXIT", 0x200);
    v2 = struct16 {
        field_0: 0
        field_8: 32
    };
    v5 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2);
    if !v5 {
        return v5;
    }
    do {
        v0 = v5;
        v1 = v6;
        println!("{}", &v0);
        v5 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2);
    } while (v5);
    return v5;
}
