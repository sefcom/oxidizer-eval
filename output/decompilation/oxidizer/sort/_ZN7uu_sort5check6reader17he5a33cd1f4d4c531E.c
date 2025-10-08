fn uu_sort::check::reader(a0: u64, a1: i64, a2: &u64, a3: u64, a4: u64, a5: i64) -> long long {
    let v0: u64;  // [bp-0x108]
    let v1: u64;  // [bp-0xf8]
    let v2: void*;  // [bp-0xe8]
    let v3: u64;  // [bp-0xe0]
    let v4: void*;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: Result<struct16, struct9>;  // [bp-0xd0]
    let v7: u64;  // [bp-0xc8]
    let v8: struct184;  // [bp-0xc0]
    let v10: void*;  // rbx
    let v11: std::path::PathBuf;  // rbx

    v0 = a0;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v10 = 0;
    loop {
        <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8, a2);
        v11 = v10;
        if (((0 ^ v8.field_0) & (0 ^ -(v8.field_0))) >> 63) as char {
            break;
        }
        v6 = uu_sort::chunks::read(a3, a4, &v8, &v2, &v0, *((a5 + 153) as &i8), a5);
        match v6 {
            Err(_) => {
                v11 = v10;
                if !v7 as i8 {
                    break;
                }
            },
            Ok(_) => {
                v1 = v7;
                v11 = v5;
                break;
            },
        }
    }
    return v11;
}
