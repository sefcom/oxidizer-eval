__int64 __fastcall fd::exit_codes::merge_exitcodes(__int64 a1)
{
  unsigned int v1; // ebx
  _BYTE v3[40]; // [rsp+0h] [rbp-28h] BYREF

  <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(
    v3,
    a1);
  v1 = core::iter::traits::iterator::Iterator::any(v3);
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<std::thread::scoped::ScopedJoinHandle<fd::exit_codes::ExitCode>>,fd::walk::WorkerState::receive::{{closure}}::{{closure}}>>(v3);
  LOBYTE(v1) = 2 * v1 + 2;
  return v1;
}