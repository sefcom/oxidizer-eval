__int64 __fastcall forc_debug::server::state::ServerState::init_executors(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a1 + 1720, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  core::ptr::drop_in_place<alloc::vec::Vec<forc_test::execute::TestExecutor>>(a1 + 1744);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 1760) = result;
  *(_OWORD *)(a1 + 1744) = *(_OWORD *)a2;
  return result;
}