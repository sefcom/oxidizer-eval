__int64 __fastcall uu_cksum::handle_tag_text_binary_flags(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r15
  char v4; // r12
  unsigned __int8 v5; // r13
  __int64 result; // rax
  char v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // [rsp+8h] [rbp-70h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  _OWORD v15[5]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *a2;
  v15[1] = a2[1];
  v15[0] = v2;
  <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(&v12, v15);
  v3 = v12;
  v4 = 1;
  v5 = 0;
  if ( !__OFSUB__(-v12, 1LL) )
  {
    do
    {
      v8 = v13;
      v9 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(v13, v14);
      v11 = v10;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aB, 2LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v11, aBinary, 8LL) )
      {
        v5 = 1;
      }
      else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v11, aTag, 5LL) )
      {
        v4 = 1;
        v5 = 0;
      }
      else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v11, aUntagged_0, 10LL) )
      {
        v4 = 0;
      }
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v3, v8);
      <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(&v12, v15);
      v3 = v12;
    }
    while ( v12 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<std::env::ArgsOs>(v15);
  result = v5;
  v7 = v4 & 1;
  if ( v7 )
    result = 0LL;
  *(_BYTE *)(a1 + 8) = v7;
  *(_BYTE *)(a1 + 9) = result;
  *(_QWORD *)a1 = 0LL;
  return result;
}