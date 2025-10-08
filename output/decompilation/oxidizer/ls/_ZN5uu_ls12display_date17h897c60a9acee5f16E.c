fn uu_ls::display_date(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: Result<(), Error>;  // [bp-0x20]

    v0 = uu_ls::get_time(a1, a2);
    match v0 {
        Ok(_) => {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "???");
            return;
        },
        Err(_) => {
            uu_ls::TimeStyler::format(a0, a3 + 40, &v0);
            return;
        },
    }
}
