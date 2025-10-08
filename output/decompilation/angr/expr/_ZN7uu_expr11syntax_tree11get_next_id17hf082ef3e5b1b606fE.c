long long uu_expr::syntax_tree::get_next_id()
{
    return std::thread::local::LocalKey<T>::with();
}
