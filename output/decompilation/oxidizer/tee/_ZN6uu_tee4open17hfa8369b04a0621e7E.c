fn uu_tee::open(a0: i64, a1: void*, a2: u64, a3: u32, a4: i64) -> void {
    let v0: struct8;  // [bp-0xd8]
    let v1: u64;  // [bp-0xd0]
    let v2: u32;  // [bp-0xc8]
    let v3: u8;  // [bp-0xc7]
    let v6: u16;  // [bp-0xc4]
    let v7: struct24;  // [bp-0xc0]
    let v8: u64;  // [bp-0xb8]
    let v9: u64;  // [bp-0xb0]
    let v10: u64;  // [bp-0x90]
    let v11: Result<struct4, struct8>;  // [bp-0x80]
    let v12: core::fmt::Arguments;  // [bp-0x7c]
    let v13: struct8;  // [bp-0x78]
    let v14: void*;  // [bp-0x50], Other Possible Types: u64
    let v15: void*;  // [bp-0x48], Other Possible Types: u64
    let v16: u64;  // [bp-0x40]
    let v17: u8;  // [bp-0x38]
    let v19: u64;  // rdx
    let v20: u64;  // rax

    v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v10 = v7.field_0;
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    v3 = 1;
    v6 = 1;
    v11 = std::fs::OpenOptions::open(&v1, v8, v9);
    match v11 {
        Ok(_) => {
            v20 = alloc::boxed::Box<T>::new(v12 as u64);
            v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
            return struct40 {
                field_0: *(&v7.field_0 as &i128)
                field_16: v9
                field_24: v20
                field_32: &g_4ea540
            };
        },
        Err(v0) => {
            v14 = uucore::util_name();
            v15 = v19;
            eprint!("{}: ", &v14);
            v14 = 0;
            v15 = a1;
            v16 = a2;
            v17 = 0;
            eprintln!("{}: {}", &v14, &v0);
            if !a4 || *(a4 as &i8) <= 1 {
                return struct8 {
                    field_0: 9223372036854775809
                };
            }
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v0
            };
            return struct8 {
                field_0: 9223372036854775809
            };
        },
    }
}
