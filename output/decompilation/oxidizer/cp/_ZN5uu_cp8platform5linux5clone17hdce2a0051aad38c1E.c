fn uu_cp::platform::linux::clone(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct32;  // [bp-0x48]
    let v1: i96;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v3: i64;  // rax

    v0 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v1 = std::fs::File::open(&v0);
    match v1 {
        Err(v3) => {
            return v3;
        },
        Ok(_) => {
            v1 = std::fs::File::create(&v0);
            if !(!v1 && ioctl(*((&v1 as &char + 4) as &i32) as u32 as u64, 1074041865)) {
                return v3;
            }
            goto (*((4380876 + vvar_4 as u32 as u64 * 4) as &i32) + 4380876) as i64;
        },
    }
}
