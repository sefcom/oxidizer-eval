fn uu_tail::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct80, struct24>;  // [bp-0xf8], Other Possible Types: struct28
    let v1: struct80;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf0]
    let v3: struct80;  // [bp-0x98]
    let v4: void*;  // [bp-0x48]
    let v5: &str;  // [bp-0x40]
    let v6: u8;  // [bp-0x30]
    let v7: alloc::string::String;  // [bp-0x28]
    let v9: u64;  // rax
    let v10: void*;  // rax

    v0 = uu_tail::args::parse_args(a0, a1);
    match v0 {
        Err(_) => {
            return v2;
        },
        Ok(v3) => {
            uu_tail::args::Settings::check_warnings(&v3);
            v9 = uu_tail::args::Settings::verify(&v3);
            if !v9 as u8 {
                return uu_tail::uu_tail(&v3);
            }
            if v9 as u32 != 1 {
                return v10;
            }
            v4 = 0;
            v5 = "-";
            v6 = 1;
            v7 = format!("cannot follow {} by name", &v4);
            v0 = struct28 {
                field_0: *(&v7.vec.buf.inner.cap as &i128)
                field_16: v7.vec.len
                field_24: 1
            };
            v10 = alloc::boxed::Box<T>::new(&v0) as u64;
            return v10;
        },
    }
}
