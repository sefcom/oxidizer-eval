fn uu_ls::dired::is_dired_arg_present() -> u64 {
    let v0: struct24;  // [sp-0x60], Other Possible Types: i192
    let v1: Arguments;  // [sp-0x48], Other Possible Types: i384
    let v3: i64;  // rbx
    let v4: i64;  // r14
    let v5: i64;  // rcx
    let v6: i32;  // ebp
    let v7: i64;  // rdi
    let v8: i64;  // r8
    let v9: i64;  // r15
    let v11: i64;  // r14

    v1 = std::env::args();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v1);
    v3 = *((&v0 as &char + 8) as &i64);
    v4 = *((&v0 as &char + 16) as &i64);
    if !v4 {
        return 0;
    }
    v5 = 0;
LABEL_4e7054:
    v7 = *((v3 + v5 + 8) as &i64);
    v8 = *((v3 + v5 + 16) as &i64);
    switch (v8) {
    case 2:
        if !(*(v7 as &i16) == 17453) {
            goto LABEL_4e704b;
        }
LABEL_4e707a:
        v6 = vvar_62{reg 56} | -0x100 | 1;
        break;
    case 7:
        if !(!(*((v7 + 3) as &i32) ^ 1684370025)) || !(!(*(v7 as &i32) ^ 1768172845)) {
            goto LABEL_4e704b;
        }
        goto LABEL_4e707a;
    default:
LABEL_4e704b:
        v5 += 24;
        if (v4 << 3) + (v4 << 3 << 1) == v5 {
            goto LABEL_4e70b0;
        } else {
            goto LABEL_4e7054;
        }
        goto LABEL_4e7054;
    }
LABEL_4e70b0:
    v6 = 0;
    v9 = v3 + 8;
    do {
    } while ((v9 += 24, v11 = v4 - 1, v4 != 1));
    return v6;
}
