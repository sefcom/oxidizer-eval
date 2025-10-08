__int64 __fastcall linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_startup_exporters(__int64 a1)
{
  __int128 v2; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v3; // [rsp+10h] [rbp-E8h]
  __int128 v4; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v5; // [rsp+30h] [rbp-C8h]
  __int128 v6; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-A8h]
  _BYTE v8[64]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v9[96]; // [rsp+98h] [rbp-60h] BYREF

  <hashbrown::map::HashMap<K,V,S,A> as core::clone::Clone>::clone(v9, a1 + 352);
  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8, v9);
  <hashbrown::raw::RawIntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2, v8);
  if ( !__OFSUB__(0LL, (_QWORD)v2) )
  {
    do
    {
      v5 = v3;
      v4 = v2;
      <alloc::string::String as core::clone::Clone>::clone(&v6, &v4);
      v2 = v6;
      *(_QWORD *)&v3 = v7;
      BYTE8(v3) = BYTE8(v5);
      linera_exporter::runloops::task_manager::ExportersTracker<F,S>::spawn(a1, &v2);
      core::ptr::drop_in_place<linera_service::config::DestinationId>(&v4);
      <hashbrown::raw::RawIntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2, v8);
    }
    while ( (_QWORD)v2 != 0x8000000000000000LL );
  }
  return core::ptr::drop_in_place<std::collections::hash::set::IntoIter<linera_service::config::DestinationId>>(v8);
}