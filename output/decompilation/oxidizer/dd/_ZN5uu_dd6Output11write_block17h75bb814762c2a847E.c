fn uu_dd::Output::write_block(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x40]
    let v2: void*;  // r12
    let v3: u64;  // rax
    let v4: u64;  // rdx

    v0 = a1;
    v2 = 0;
    loop {
        v3 = <uu_dd::Dest as std::io::Write>::write(a0) as u64;
        if !v3 {
            v2 += v4;
            if v2 >= a2 || !*((*((a0 + 16) as &i64) + 77) as &i8) {
                break;
            }
        } else if std::io::error::Error::kind(v4) != 35 {
            return v3;
        }
    }
    return v3;
}
