fn uu_dd::try_get_len_of_block_device(a0: &Option<struct8>, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0xc8], Other Possible Types: u128
    let v1: i8;  // [bp-0x90]
    let v3: u64;  // rax
    let v4: u64;  // rdx

    v0 = std::fs::File::metadata(a1);
    if v0 as i32 == 2 {
        v3 = *((&v0 as &char + 8) as &i64);
        goto LABEL_4d8f86;
    } else {
        v3 = 0xf000 & v1;
        if v3 != 0x6000 {
            return struct8 {
                field_0: 0
            };
        }
        v3 = <std::fs::File as std::io::Seek>::seek(a1, 1);
        if v3 {
            a0[1] = v4;
        } else {
            v3 = std::io::Seek::rewind(a1);
            if !v3 {
                return struct16 {
                    field_0: 1
                    field_8: v5
                };
            }
LABEL_4d8f86:
            a0[1] = v3;
        }
        return struct8 {
            field_0: 2
        };
    }
}
