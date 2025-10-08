__int64 __fastcall uu_sort::chunks::parse_lines(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v15; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-B0h]
  __int64 v17; // [rsp+10h] [rbp-A8h]
  __int64 v18; // [rsp+18h] [rbp-A0h]
  _QWORD v19[3]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  _BYTE v22[48]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v23; // [rsp+80h] [rbp-38h]

  v18 = a6;
  v8 = a5;
  LODWORD(v15) = 0;
  v9 = core::char::methods::encode_utf8_raw(a5, &v15);
  v11 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v9, v10, a1, a2);
  v13 = v12;
  if ( !v11 )
  {
    v13 = a2;
    v11 = a1;
  }
  if ( *(_QWORD *)(a3 + 16) )
    core::panicking::panic(aAssertionFaile_7, 34LL, &off_18C5A0);
  if ( a4[2] )
    core::panicking::panic(aAssertionFaile_6, 49LL, &off_18C588);
  if ( a4[5] )
    core::panicking::panic(aAssertionFaile_5, 48LL, &off_18C570);
  if ( a4[8] )
    core::panicking::panic(aAssertionFaile_4, 52LL, &off_18C558);
  if ( a4[11] )
    core::panicking::panic(aAssertionFaile_3, 54LL, &off_18C540);
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  <char as core::str::pattern::Pattern>::into_searcher(v22, v8, v11, v13);
  v20 = 0LL;
  v21 = v13;
  v23 = 1;
  v19[0] = a4;
  v19[1] = &v15;
  v19[2] = v18;
  alloc::vec::Vec<T,A>::extend_desugared(a3, v19);
  return core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v15, v16);
}