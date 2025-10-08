fn uu_unexpand::write_tabs(a0: i64, a1: void*, a2: u64, a3: u64, a4: u64, a5: u8, a6: u8, a7: u8) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: u64;  // rax
    let v2: u64;  // rbp
    let v3: u8;  // cl
    let v4: u64;  // rdx
    let v6: u64;  // rax
    let v7: void*;  // rdi
    let v9: core::str::pattern::CharSearcher;  // rbx
    let v10: u64;  // rcx

    v0 = v1;
    if a6 {
        if !a5 {
            goto LABEL_45cc0b;
        }
    } else {
        if a7 == 1 && !a5 {
LABEL_45cc0b:
        }
    }
    if !((a6 | a5 & v3) & (a4 <= a3 ^ 1)) {
        goto LABEL_45cc9a;
    }
    while ((uu_unexpand::next_tabstop(a1, a2, v2) & 1) && a4 >= v4 + v2) {
        v6 = *((a0 + 16) as &i64);
        if *(a0 as &i64) - v6 > 1 {
            *((*((a0 + 8) as &i64) + v6) as &i8) = 9;
            *((a0 + 16) as &u64) = v6 + 1;
            v7 = 0;
            if false {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            }
        } else {
            v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, "\t");
            if v7 {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            }
        }
    }
LABEL_45cc9a:
    if a4 <= a3 {
        return 0;
    }
    loop {
        v9 -= 1;
        v10 = *((a0 + 16) as &i64);
        if *(a0 as &i64) - v10 > 1 {
            *((*((a0 + 8) as &i64) + v10) as &i8) = 32;
            *((a0 + 16) as &u64) = v10 + 1;
        } else {
            v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, " ");
            if v7 {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            }
        }
        if v9 == 1 {
            return 0;
        }
    }
}
