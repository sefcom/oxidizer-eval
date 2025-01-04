fn uu_df::columns::Column::parse(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax

    v0 = v2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "source") as i8 {
        return 0;
    }
    v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "fstype");
    v3 = v4 | -0x100 | 11;
    if v4 {
        return v3;
    }
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "itotal");
    v3 = v5 | -0x100 | 6;
    if v5 {
        return v3;
    }
    v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "iused");
    v3 = v6 | -0x100 | 7;
    if v6 {
        return v3;
    }
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "iavail");
    v3 = v7 | -0x100 | 8;
    if v7 {
        return v3;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "ipcent");
    v3 = v8 | -0x100 | 9;
    if v8 {
        return v3;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "size");
    v3 = v9 | -0x100 | 1;
    if v9 {
        return v3;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "used");
    v3 = v10 | -0x100 | 2;
    if v10 {
        return v3;
    }
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "avail");
    v3 = v11 | -0x100 | 3;
    if v11 {
        return v3;
    }
    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "pcent");
    v3 = v12 | -0x100 | 4;
    if v12 {
        return v3;
    }
    v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "file");
    v3 = v13 | -0x100 | 10;
    if !v13 {
        v3 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "target") as i8 ? 5 : 12);
        return v3;
    }
    return v3;
}
