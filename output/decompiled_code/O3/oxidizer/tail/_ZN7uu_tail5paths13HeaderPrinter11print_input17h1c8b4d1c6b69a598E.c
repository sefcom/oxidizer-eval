fn uu_tail::paths::HeaderPrinter::print_input(a0: i64, a1: i64) -> u64 {
    return uu_tail::paths::HeaderPrinter::print(a0, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
}
