fn uu_sort::merge::check_child_success(a0: void*, a1: void*, a2: u32) -> long long {
    let v0: struct24;  // [sp-0x70], Other Possible Types: u32
    let v1: i32;  // [bp-0x6c]
    let v2: u32;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: Result<struct4, struct8>;  // [bp-0x58]
    let v5: u64;  // [bp-0x58]
    let v6: u32;  // [bp-0x54]
    let v7: Result<struct16, struct9>;  // [bp-0x50]
    let v8: u64;  // [bp-0x40]
    let v10: u64;  // rax
    let v11: i8;  // al
    let v12: void*;  // rax

    v4 = std::process::Child::wait(a0);
    if let Err(_) = v4 {
        return v12;
    }
    v10 = v6;
    v11 = v10 >> 8;
    v1 = !(v10 & 127);
    v2 = v11;
    v0 = 0;
    if !!v11 && !(v10 & 127) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        v8 = v3;
        v7 = *(&v0.field_0 as &i128);
        v5 = 9223372036854775813;
        v12 = alloc::boxed::Box<T>::new(&v4) as u64;
    }
    return v12;
}
