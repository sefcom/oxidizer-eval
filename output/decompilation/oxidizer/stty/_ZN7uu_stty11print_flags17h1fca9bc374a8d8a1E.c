fn uu_stty::print_flags(a0: i64, a1: i8) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0x88]
    let v1: struct24;  // [bp-0x70], Other Possible Types: u64
    let v2: u64;  // [bp-0x70]
    let v3: i64;  // [bp-0x48]
    let v4: u128;  // [bp-0x40]
    let v6: i64;  // rax
    let v7: void*;  // r13
    let v8: u8;  // r15b
    let v9: u8;  // al

    v6 = a0;
    v7 = 0;
    loop {
        v4 = v7[5124000] as i128;
        if !v7[5124020] as i8 {
            v7 += 32;
            if v7 == 416 {
                break;
            }
            continue;
        }
        v3 = v6;
        v9 = <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::is_in(v7[5124016] as i32, *((v6 + 112) as &i32), v7[5123992] as i32, v7[5123996] as i32);
        if v7[5123992] as i32 {
            if ((v7[5124021] as i8 ^ 1 | a1) & v9) {
                goto LABEL_459230;
            }
            goto LABEL_4591e0;
        } else if !(a1 & 1) && !(v7[5124021] as i8 ^ v9) {
LABEL_4591e0:
            v6 = v3;
            if v7 == 384 {
                break;
            }
        } else {
            if !v9 {
                print!("-");
            }
LABEL_459230:
            print!("{} ", &v4);
            v8 = 1;
            v6 = v3;
            v1 = v2;
            if v7 == 384 {
                break;
            }
        }
    }
    v1 = v1;
    if (v8 & 1) {
        v0 = core::fmt::Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        v6 = std::io::stdio::_print(&v0);
    }
    return v6;
}
