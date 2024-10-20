__int64 __fastcall uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // [rsp+40h] [rbp-98h] BYREF
  __int64 v6; // [rsp+50h] [rbp-88h]
  _BYTE v7[40]; // [rsp+58h] [rbp-80h] BYREF
  __int128 v8; // [rsp+80h] [rbp-58h]
  __int64 v9; // [rsp+90h] [rbp-48h]
  char v10; // [rsp+A7h] [rbp-31h]
  __int64 v11; // [rsp+B8h] [rbp-20h]
  __int64 v12[3]; // [rsp+C0h] [rbp-18h] BYREF

  v10 = 0;
  alloc::vec::Vec<T,A>::drain();
  core::iter::traits::iterator::Iterator::collect(&v5, v7);
  v10 = 1;
  v11 = std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write_all(a1 + 72, a2, a3);
  if ( v11 )
  {
    v12[0] = v11;
    core::result::unwrap_failed(aCalledResultUn, 43LL, v12, &off_129790, &off_1297E0);
  }
  v10 = 0;
  v9 = v6;
  v8 = v5;
  return <alloc::vec::Vec<T,A> as core::iter::traits::collect::Extend<T>>::extend((int)a1 + 72);
}
