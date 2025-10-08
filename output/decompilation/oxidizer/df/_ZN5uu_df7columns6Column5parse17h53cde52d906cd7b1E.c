fn uu_df::columns::Column::parse(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
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

    v0 = v2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "source") {
        return 0;
    }
    v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "fstype");
    if v3 {
        return v3 & -0x100 | 11;
    }
    v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "itotal");
    if v4 {
        return v4 & -0x100 | 6;
    }
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "iused");
    if v5 {
        return v5 & -0x100 | 7;
    }
    v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "iavail");
    if v6 {
        return v6 & -0x100 | 8;
    }
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "ipcent");
    if v7 {
        return v7 & -0x100 | 9;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "size");
    if v8 {
        return v8 & -0x100 | 1;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "used");
    if v9 {
        return v9 & -0x100 | 2;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "avail");
    if v10 {
        return v10 & -0x100 | 3;
    }
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "pcent");
    if v11 {
        return v11 & -0x100 | 4;
    }
    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "file");
    if !v12 {
        return (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "target") ? 5 : 12);
    }
    return v12 & -0x100 | 10;
}
