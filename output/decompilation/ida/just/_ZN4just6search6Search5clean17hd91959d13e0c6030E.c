__int64 __fastcall just::search::Search::clean(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+0h] [rbp-118h] BYREF
  __int64 v7; // [rsp+8h] [rbp-110h]
  __int64 v8; // [rsp+10h] [rbp-108h]
  _BYTE v9[8]; // [rsp+18h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-F8h]
  __int64 v11; // [rsp+28h] [rbp-F0h]
  _OWORD v12[4]; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v13[4]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v14[104]; // [rsp+B0h] [rbp-68h] BYREF

  std::path::Path::join(v9, a2, a3, a4, a5);
  v6 = 0LL;
  v7 = 8LL;
  v8 = 0LL;
  std::path::Path::components(v13, v10, v11);
  v12[3] = v13[3];
  v12[2] = v13[2];
  v12[1] = v13[1];
  v12[0] = v13[0];
  while ( 1 )
  {
    <std::path::Components as core::iter::traits::iterator::Iterator>::next(v14, v12);
    if ( v14[0] == 10 )
      break;
    if ( (unsigned __int8)<std::path::Component as core::cmp::PartialEq>::eq(v14, "\b") )
    {
      if ( v8 )
      {
        if ( *(_BYTE *)(v7 + 56 * (v8 - 1)) == 9 )
          --v8;
      }
    }
    else
    {
      alloc::vec::Vec<T,A>::push(&v6, v14);
    }
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v12, &v6);
  core::iter::traits::iterator::Iterator::collect(a1, v12);
  return core::ptr::drop_in_place<std::path::PathBuf>(v9);
}