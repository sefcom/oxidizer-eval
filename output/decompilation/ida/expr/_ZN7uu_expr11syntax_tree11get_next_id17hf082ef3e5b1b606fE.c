// attributes: thunk
__int64 uu_expr::syntax_tree::get_next_id(void)
{
  return std::thread::local::LocalKey<T>::with();
}