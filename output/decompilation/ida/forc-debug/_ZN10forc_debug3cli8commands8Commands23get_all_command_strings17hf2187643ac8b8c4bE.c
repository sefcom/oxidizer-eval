_OWORD *__fastcall forc_debug::cli::commands::Commands::get_all_command_strings(_OWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r12
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD v7[3]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v9[7]; // [rsp+50h] [rbp-38h] BYREF

  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v7);
  forc_debug::cli::commands::Commands::all_commands(v9, a2);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8, v9);
  while ( 1 )
  {
    v2 = (_QWORD *)<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v8);
    if ( !v2 )
      break;
    v3 = v2;
    hashbrown::map::HashMap<K,V,S,A>::insert(v7, *v2, v2[1]);
    <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(v7, v3[2], v3[2] + 16LL * v3[3]);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&forc_debug::cli::commands::Command>>(v8);
  v4 = v7[0];
  v5 = v7[1];
  a1[2] = v7[2];
  a1[1] = v5;
  *a1 = v4;
  return a1;
}