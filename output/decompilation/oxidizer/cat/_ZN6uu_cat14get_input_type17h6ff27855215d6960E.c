fn uu_cat::get_input_type(a1: i64, a2: i64) -> : struct9 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0xe4]
    let v1: struct9;  // [bp-0xe0]
    let v2: std::io::error::Error;  // [bp-0xd0]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc0]
    let v6: i64;  // rdi

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        *((v6 + 8) as &i8) = 2;
    } else {
        v3 = std::fs::metadata(a0, a1);
        match v3 {
            Err(v2) => {
                v1 = std::io::error::repr_bitpacked::decode_repr(v4);
            },
            Ok(_) => {
                v0 = *((&v3 as &char + 56) as &i32);
                match ((v0 & 0xf000) - 0x1000 >> 12) {
                    0 => {
                        *((v6 + 8) as &i8) = 6;
                        break;
                    }
                    1 => {
                        *((v6 + 8) as &i8) = 5;
                        break;
                    }
                    3 => {
                        *((v6 + 8) as &i8) = 0;
                        break;
                    }
                    5 => {
                        *((v6 + 8) as &i8) = 4;
                        break;
                    }
                    7 => {
                        *((v6 + 8) as &i8) = 1;
                        break;
                    }
                    9 => {
                        *((v6 + 8) as &i8) = 3;
                        break;
                    }
                    11 => {
                        *((v6 + 8) as &i8) = 7;
                        break;
                    }
                    _ => {
                        format!("{}", &v0);
                        return;
                    }
                }
            },
        }
    }
    *(v6 as &i64) = 9223372036854775814;
    return;
}
