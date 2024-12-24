fn uu_cp::platform::linux::clone(a0: u64, a1: u64, a2: u64, a3: u64, a4: i32, a5: i64) -> u64 {
    let v0: struct32;  // [bp-0x48]
    let v1: Result<struct4, struct8>;  // [sp-0x28], Other Possible Types: u64
    let v2: u8;  // [bp-0x20]
    let v4: u64;  // rax
    let v5: u64;  // rdx

    v0 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v1 = std::fs::File::open(&v0, a2);
    match v1 {
        Err(_) => {
            v4 = *(&v2 as &i64);
            return v4;
        },
        Ok(_) => {
            v1 = std::fs::File::create(&v0, v5);
            if v1 as i32 {
                v4 = *(&v2 as &i64);
            } else if ioctl(*((&v1 as &char + 4) as &i32) as u32 as u64, 1074041865) {
                goto (*((4380364 + vvar_4 as u32 as u64 * 4) as &i32) + 4380364) as i64;
            } else {
                v4 = 0;
            }
            return v4;
        },
    }
}
