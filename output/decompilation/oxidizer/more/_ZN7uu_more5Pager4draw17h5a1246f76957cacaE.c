fn uu_more::Pager::draw(a0: &struct16, a1: i64, a2: i32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // cc_ndep
    let v3: i64;  // rsi
    let v5: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = uu_more::Pager::draw_lines(a0, a1);
    if v1 {
        return v1;
    }
    v3 = (_ccall(3, 4, *((a0 + 80) as &i64), *((a0 + 88) as &i64), v2) as char ? *((a0 + 80) as &i64) + *((a0 + 88) as &i64) : -1);
    uu_more::Pager::draw_prompt(a0, a1, core::cmp::Ord::min(*((a0 + 112) as &i64), (_ccall(3, 4, *((a0 + 80) as &i64), *((a0 + 88) as &i64), v2) as char ? *((a0 + 80) as &i64) + *((a0 + 88) as &i64) : -1)), a2);
    v5 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    match v5 {
        Ok(_) => {
            return 0;
        },
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        },
    }
}
