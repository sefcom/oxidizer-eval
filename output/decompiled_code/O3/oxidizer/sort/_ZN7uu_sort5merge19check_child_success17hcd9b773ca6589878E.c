fn uu_sort::merge::check_child_success(a0: i64, a1: i64) -> u64 {
    let v0: i32;  // [sp-0x70], Other Possible Types: struct24
    let v1: i32;  // [sp-0x6c]
    let v2: i64;  // [bp-0x68]
    let v3: i64;  // [sp-0x58], Other Possible Types: Result<struct4, struct8>
    let v4: i192;  // [bp-0x50]
    let v6: i64;  // rax
    let v7: i32;  // eax
    let v9: i64;  // rdx

    v3 = std::process::Child::wait(a0);
    match v3 {
        Err(v2) => {
            v0 = 1;
        },
        Ok(_) => {
            v6 = *((&v3 as &char + 4) as &i32) as u32 as u64;
            v7 = (v6 >> 8) as i32;
            v1 = (-0x100 | (!(v6 as i8 & 127)) as u8 as u64) as u32;
            v2 = v7;
            v0 = 0;
            if !(v6 as i8 & 127) && v7 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v9);
                v4 = v0;
                v3 = 6;
                return alloc::boxed::Box<T>::new(&v3);
            }
        },
    }
    return 0;
}
