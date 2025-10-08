fn fd::cli::Opts::gen_completions(a0: i64, a1: u8) -> long long {
    let v0: Result<struct1, struct8>;  // [bp-0x18]

    if a1 == 6 {
        *((a0 + 1) as &i8) = 5;
    }
    v0 = fd::cli::Opts::gen_completions::{{closure}}(a1);
    match v0 {
        Ok(_) => {
            return struct2 {
                field_0: 0
                field_1: *((&v0 as &char + 1) as &i8)
            };
        },
        Err(_) => {
            return struct16 {
                field_0: 1
                padding_1: <UNKNOWN>
                field_8: *((&v0 as &char + 8) as &i64)
            };
        },
    }
}
