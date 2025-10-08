fn uu_sort::Output::new(a1: i64, a2: i64) -> Result<struct28, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xd8]
    let v1: u32;  // [bp-0xd0]
    let v2: u8;  // [bp-0xcf]
    let v3: Result<struct16, struct9>;  // [bp-0xcc], Other Possible Types: u16
    let v4: Result<struct4, struct8>;  // [bp-0xc8]
    let v5: struct16;  // [bp-0xc4]
    let v6: u64;  // [bp-0xc0]
    let v7: struct24;  // [bp-0xb8], Other Possible Types: struct72
    let v8: struct154;  // [bp-0xb8]
    let v9: iNone;  // [bp-0x78], Other Possible Types: u128
    let v10: u576;  // [bp-0x68]
    let v11: struct40;  // [bp-0x68]

    if !a1 {
        return Ok(struct32 {
            field_0: 0x8000000000000000
            field_8: v9
            field_24: vvar_36{reg 56}
        });
    }
    v0 = 0x1b600000000;
    v1 = 0;
    v3 = 0;
    v2 = 1;
    v3 = 1;
    v4 = std::fs::OpenOptions::open(&v0, a1, a2);
    match v4 {
        Ok(_) => {
            v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
            v9 = *(&v7.field_8 as &i128);
            return Ok(struct32 {
                field_0: v8
                field_8: v9
                field_24: v5
            });
        },
        Err(_) => {
            v11 = uu_sort::Output::new::{{closure}}(a1, a2, v6);
            v7 = v10;
            return struct24 {
                field_0: 9223372036854775809
                field_8: alloc::boxed::Box<T>::new(&v7) as u64
                field_16: &g_58c448
            };
        },
    }
}
