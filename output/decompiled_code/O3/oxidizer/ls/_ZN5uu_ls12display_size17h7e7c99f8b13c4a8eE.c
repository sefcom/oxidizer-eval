fn uu_ls::display_size(a0: u32, a1: u32, a2: u32) -> u64 {
    return uucore::features::format::human::human_readable(a0, a1, a2);
}
