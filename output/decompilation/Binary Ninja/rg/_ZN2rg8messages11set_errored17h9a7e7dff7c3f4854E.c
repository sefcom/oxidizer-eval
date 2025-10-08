
  int64_t rg::messages::set_errored::h9a7e7dff7c3f4854()

{
    /* tailcall */
    return core::sync::atomic::atomic_store::h38ddd4926c0d3287(
        &rg::messages::ERRORED::h2048da74b4d28974, 1, 0);
}
