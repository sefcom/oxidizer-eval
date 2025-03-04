fn uu_pwd::logical_path(a0: &struct24) -> u64 {
    let v0: i64;  // [sp-0x40], Other Possible Types: struct24
    let v1: Option<struct24>;  // [sp-0x28]

    v1 = std::env::var_os("PWD");
    match v1 {
        None => {
            v0 = 0x8000000000000000;
        },
        Some(_) => {
            v0 = core::ops::function::FnOnce::call_once(&v1);
            if v0 != 0x8000000000000000 && uu_pwd::logical_path::looks_reasonable(*((&v0.field_0 as &char + 8) as &i64), v0.field_16) as i8 {
                return v0;
            }
        },
    }
    std::env::current_dir(a0);
}
