__int64 __fastcall forc_debug::cli::commands::Commands::find_closest(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v5[3]; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v6[14]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v7[32]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v8; // [rsp+B0h] [rbp-28h]
  __int64 v9; // [rsp+B8h] [rbp-20h]

  forc_debug::cli::commands::Commands::all_commands(v5, a1);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7, v5);
  v6[0] = 2LL;
  v6[7] = 2LL;
  v8 = a2;
  v9 = a3;
  core::iter::traits::iterator::Iterator::reduce(v5, v6);
  return v5[1];
}