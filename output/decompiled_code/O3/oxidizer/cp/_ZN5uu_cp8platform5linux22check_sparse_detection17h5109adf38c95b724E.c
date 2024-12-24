fn uu_cp::platform::linux::check_sparse_detection(a0: &struct_0, a1: u64, a2: u64) -> u64 {
    let v0: struct4;  // [bp-0xc4]
    let v1: Result<struct4, struct8>;  // [sp-0xc0], Other Possible Types: u64
    let v2: i8;  // [bp-0xb8]
    let v3: i8;  // [bp-0x70]
    let v4: i8;  // [bp-0x60]
    let v6: u64;  // rax

    v1 = std::fs::File::open(a1, a2);
    match v1 {
        Err(_) => {
            v6 = v2;
            return struct9 {
                field_0: 1
                field_8: <UNKNOWN>
            };
        },
        Ok(_) => {
            v0 = struct4 {
                field_0: *((&v1 as &char + 4) as &i32)
            };
            std::fs::File::metadata(&v1, &v0);
            if v1 as i32 == 2 {
                *(&a0->field_8 as &i8) = v2;
                a0->field_0 = 1 as u8;
            } else if v4 >= v3 >> 9 {
                *(&a0->field_0 as &i16) = 0;
            } else {
                a0->padding_1[0] = 1 as u8;
                a0->field_0 = 0 as u8;
            }
            return v6;
        },
    }
}
