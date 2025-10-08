fn uu_expr::syntax_tree::get_next_id() -> u64 {
    return std::thread::local::LocalKey<T>::with();
}
