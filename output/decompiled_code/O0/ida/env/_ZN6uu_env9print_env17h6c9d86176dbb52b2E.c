__int64 __fastcall uu_env::print_env(char a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  char v7; // [rsp+Fh] [rbp-179h] BYREF
  __int64 v8; // [rsp+10h] [rbp-178h] BYREF
  __int64 v9; // [rsp+18h] [rbp-170h] BYREF
  __int64 v10; // [rsp+20h] [rbp-168h] BYREF
  __int64 v11; // [rsp+28h] [rbp-160h]
  __int64 v12; // [rsp+30h] [rbp-158h]
  __int64 v13; // [rsp+38h] [rbp-150h] BYREF
  __int128 v14; // [rsp+40h] [rbp-148h] BYREF
  __int64 v15; // [rsp+50h] [rbp-138h] BYREF
  __int128 v16; // [rsp+60h] [rbp-128h] BYREF
  __int64 v17; // [rsp+70h] [rbp-118h] BYREF
  _OWORD v18[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v19[6]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v20[6]; // [rsp+D8h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+108h] [rbp-80h] BYREF
  __int64 v22; // [rsp+118h] [rbp-70h]
  __int128 v23; // [rsp+120h] [rbp-68h]
  __int64 v24; // [rsp+130h] [rbp-58h]
  _OWORD v25[5]; // [rsp+138h] [rbp-50h] BYREF

  v7 = a1;
  v13 = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(&v13);
  std::env::vars(v25);
  v18[1] = v25[1];
  v18[0] = v25[0];
  while ( 1 )
  {
    <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v21, v18);
    if ( (_QWORD)v21 == 0x8000000000000000LL )
      break;
    v15 = v22;
    v14 = v21;
    v16 = v23;
    v17 = v24;
    v19[0] = &v14;
    v19[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v19[2] = &v16;
    v19[3] = <alloc::string::String as core::fmt::Display>::fmt;
    v19[4] = &v7;
    v19[5] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v20[0] = &unk_138D38;
    v20[1] = 3LL;
    v20[4] = 0LL;
    v20[2] = v19;
    v20[3] = 3LL;
    v1 = std::io::Write::write_fmt(&v8, v20);
    if ( v1 )
    {
      v9 = v1;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v9, &off_138CF8, &off_138D68);
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v16);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v17, v10, v11, v12);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v14);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v15, v10, v11, v12);
  }
  result = <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v18);
  v3 = v8;
  if ( (*(_DWORD *)(v8 + 12))-- == 1 )
  {
    v5 = core::option::Option<T>::map_or(0LL, 0LL);
    result = core::sync::atomic::atomic_store(v3, v5, 0LL);
    v6 = v8;
    if ( _InterlockedExchange((volatile __int32 *)(v8 + 8), 0) == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(v6 + 8);
  }
  return result;
}
