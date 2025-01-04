        __int64 a6)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  _QWORD v16[3]; // [rsp+8h] [rbp-E0h] BYREF
  _OWORD v17[3]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v19; // [rsp+68h] [rbp-80h]
  __int64 v20; // [rsp+78h] [rbp-70h]
  __int128 v21; // [rsp+80h] [rbp-68h]
  __int128 v22; // [rsp+90h] [rbp-58h]
  __int128 v23; // [rsp+A0h] [rbp-48h]
  __int16 v24; // [rsp+B0h] [rbp-38h]

  v8 = a5;
  LODWORD(v17[0]) = 0;
  v9 = core::char::methods::encode_utf8_raw(a5, v17);
  v11 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v9, v10, a1, a2);
  v13 = v12;
  if ( !v11 )
  {
    v13 = a2;
    v11 = a1;
  }
  if ( *(_QWORD *)(a3 + 16) )
    core::panicking::panic(aAssertionFaile_21, 34LL, &off_201948);
  if ( a4[2] )
    core::panicking::panic(aAssertionFaile_20, 49LL, &off_201930);
  if ( a4[5] )
    core::panicking::panic(aAssertionFaile_19, 48LL, &off_201918);
  if ( a4[8] )
    core::panicking::panic(aAssertionFaile_18, 52LL, &off_201900);
  v16[0] = 0LL;
  v16[1] = 8LL;
  v16[2] = 0LL;
  <char as core::str::pattern::Pattern>::into_searcher(v17, v8, v11, v13);
  v23 = v17[2];
  v22 = v17[1];
  v21 = v17[0];
  v19 = 0LL;
  v20 = v13;
  v24 = 1;
  v18[0] = a4;
  v18[1] = v16;
  v18[2] = a6;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a3, v18);
  return core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(v16);
}
