fn uu_du::parse_depth(a1: i64, a2: i64, a3: i8) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x40], Other Possible Types: u64
    let v2: u8;  // bpl
    let v3: u64;  // rcx
    let v4: u64;  // rax
    let v5: i64;  // rdi
    let v6: u64;  // rax

    if a0 {
        v2 = a2;
        v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a0, a1);
        match v0 {
            Err(_) => {
                if !(!v2) {
                    goto LABEL_4f4075;
                }
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, a2 as u64);
            },
            Ok(_) => {
                if !v2 {
                    goto LABEL_4f40b8;
                }
LABEL_4f4075:
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, a2 as u64);
            },
        }
        *((v5 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((v5 + 16) as &&u8) = &g_584558;
        v6 = 1;
    } else {
LABEL_4f40b8:
        *((v5 + 8) as &u64) = v3;
        *((v5 + 16) as &u64) = v4;
        v6 = 0;
    }
    *(v5 as &u64) = v6;
    return;
}
