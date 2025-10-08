__int64 __fastcall forc_debug::server::state::ServerState::test_complete(__int64 a1)
{
  _BYTE v2[2648]; // [rsp+0h] [rbp-A58h] BYREF

  alloc::vec::Vec<T,A>::push(a1 + 1696);
  alloc::vec::Vec<T,A>::remove(v2, a1 + 1720);
  return core::ptr::drop_in_place<forc_test::execute::TestExecutor>(v2);
}