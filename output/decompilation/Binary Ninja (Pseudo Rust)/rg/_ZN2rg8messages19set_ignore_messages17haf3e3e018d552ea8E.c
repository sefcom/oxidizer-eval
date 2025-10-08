
  fn rg::messages::set_ignore_messages::haf3e3e018d552ea8(arg1: i8) -> i64

{
    /* tailcall */
    core::sync::atomic::atomic_store::h38ddd4926c0d3287(
        &rg::messages::IGNORE_MESSAGES::h8860e4569fc67d6d, arg1, 0)
}
