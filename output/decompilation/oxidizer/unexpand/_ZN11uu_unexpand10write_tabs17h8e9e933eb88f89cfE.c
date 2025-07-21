fn uu_unexpand::write_tabs(a1: i64, a2: i32, a3: i64, a4: i64, a5: i8, a6: i8, a7: i8) -> : struct8 {
    let a0: i64;  // rdi
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // rax
    let v4: u8;  // cl
    let v5: u64;  // rdx
    let v6: u64;  // r13
    let v7: core::fmt::Arguments;  // rax
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: u64;  // rbx
    let v10: u64;  // rbx
    let v11: core::fmt::Arguments;  // rax
    let v12: core::fmt::Arguments;  // rax

    v3 = a6;
    if (v3 || a7) && !a5 && a3 + 1 < a4 || a4 > a3 && ((v4 & a5) || v3) {
        loop {
            v3 = uu_unexpand::next_tabstop(a1, a2, a3);
            if v3 != 1 || !((v6 = v5 + a3, v6 <= a4)) {
                break;
            }
            v7 = *((a0 + 16) as &i64);
            if *(a0 as &i64) - v7 > 1 {
                *((*((a0 + 8) as &i64) + v7) as &i8) = 9;
                *((a0 + 16) as &core::fmt::Arguments) = v7 + 1;
                v8 = 0;
            } else {
                v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, "\t");
            }
            a3 = v6;
            if let Err(_) = v8 {
                v1 = uucore::util_name();
                v2 = v5;
                eprint!("{}: ", &v1);
                eprintln!("{}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
    }
    v9 = a4 - a3;
    if a4 <= a3 {
        return v3;
    }
    loop {
        v10 = v9;
        v11 = *((a0 + 16) as &i64);
        if *(a0 as &i64) - v11 >= 2 {
            *((*((a0 + 8) as &i64) + v11) as &i8) = 32;
            v12 = v11 + 1;
            *((a0 + 16) as &core::fmt::Arguments) = v12;
        } else {
            v12 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, " ");
            if v12 {
                v1 = uucore::util_name();
                v2 = v5;
                eprint!("{}: ", &v1);
                eprintln!("{}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
        v9 = v10 - 1;
        if v10 == 1 {
            return v12;
        }
    }
}
