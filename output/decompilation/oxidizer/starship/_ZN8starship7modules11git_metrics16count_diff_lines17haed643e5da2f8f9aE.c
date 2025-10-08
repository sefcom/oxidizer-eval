fn starship::modules::git_metrics::count_diff_lines(a1: i64) -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: struct112;  // [bp-0x88]
    let v3: u32;  // edx

    match (*((a1 + 160) as &i8)) {
        0 => {
            v0 = gix_diff::blob::platform::prepare_diff::Outcome::interned_input(a1);
            return Some(struct8 {
                field_0: imara_diff::diff(*((a1 + 161) as &i8), &v0) as u32
                field_4: v3
            });
        }
        2 => {
            return struct4 {
                field_0: 0
            };
        }
        _ => {
            panic!("internal error: entered unreachable code: we disabled that");
        }
    }
}
