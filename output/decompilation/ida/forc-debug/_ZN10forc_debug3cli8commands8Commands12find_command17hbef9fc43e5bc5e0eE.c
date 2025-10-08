__int64 __fastcall forc_debug::cli::commands::Commands::find_command(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-30h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  forc_debug::cli::commands::Commands::all_commands(v6, a1);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7, v6);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(v7, v5);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&forc_debug::cli::commands::Command>>(v7);
  return v3;
}