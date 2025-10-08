__int64 __fastcall forc_debug::server::state::ServerState::reset(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2425) = 0;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a1 + 1720, *(_QWORD *)(a1 + 1752), *(_QWORD *)(a1 + 1760));
  core::ptr::drop_in_place<core::option::Option<forc_pkg::pkg::BuiltPackage>>(a1 + 16);
  *(_QWORD *)(a1 + 16) = 2LL;
  core::ptr::drop_in_place<core::option::Option<forc_test::setup::TestSetup>>(a1 + 1768);
  *(_QWORD *)(a1 + 1768) = 0x8000000000000002LL;
  result = core::ptr::drop_in_place<alloc::vec::Vec<forc_test::TestResult>>(a1 + 1696);
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_QWORD *)(a1 + 1704) = 8LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 2427) = 1;
  return result;
}