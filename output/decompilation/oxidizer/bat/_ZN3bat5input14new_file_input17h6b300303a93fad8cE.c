fn bat::input::new_file_input(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct160 {
    let a0: u64;  // rdi
    let v0: struct160;  // [bp-0xd0]
    let v2: u64;  // rbx
    let v3: u64;  // 4096

    v0 = bat::input::Input::ordinary_file(a1, a2);
    if !a3 {
        v2 = a2;
        if a3 {
            goto LABEL_7ad6a6;
        }
LABEL_7ad6a5:
        v3 = a1;
    } else {
        v2 = a4;
        if !a3 {
            goto LABEL_7ad6a5;
        }
LABEL_7ad6a6:
        v3 = a3;
    }
    bat::input::named(a0, &v0, v3, v2);
    return;
}
