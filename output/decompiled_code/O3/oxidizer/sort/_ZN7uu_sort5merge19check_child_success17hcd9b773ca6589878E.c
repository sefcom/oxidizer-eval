fn uu_sort::merge::check_child_success(a0: i64, a1: i64) -> u64 {
    let v0: i192;  // [sp-0x70], Other Possible Types: struct24
    let v1: i32;  // [sp-0x6c]
    let v2: i64;  // [bp-0x68]
    let v3: struct1;  // [sp-0x58], Other Possible Types: i64, Result<struct4, struct8>
    let v4: i8;  // [bp-0x50]
    let v5: i64;  // [sp-0x40]
    let v7: i64;  // rax
    let v8: i32;  // eax
    let v10: i64;  // rdx

    v3 = std::process::Child::wait(a0);
    match v3 {
        Err(v2) => {
            v0 = 1;
        },
        Ok(_) => {
            v7 = *((&v3 as &char + 4) as &i32) as u32 as u64;
            v8 = (v7 >> 8) as i32;
            v1 = (-0x100 | (!(v7 as i8 & 127)) as u8 as u64) as u32;
            v2 = v8;
            v0 = 0;
            if !(v7 as i8 & 127) && v8 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v10);
                v5 = *((&v0 as &char + 16) as &i64);
                v4 = v0;
                v3 = struct1 {
                    field_0: 6
                };
                return alloc::boxed::Box<T>::new(&v3);
            }
        },
    }
    return 0;
}
