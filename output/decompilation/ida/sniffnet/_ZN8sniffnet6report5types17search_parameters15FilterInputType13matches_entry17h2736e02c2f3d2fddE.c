__int64 __fastcall sniffnet::report::types::search_parameters::FilterInputType::matches_entry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int is_contained_in; // eax
  unsigned int v16; // ebx
  _BYTE v18[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  int v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  _BYTE v23[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-30h]

  v8 = sniffnet::report::types::search_parameters::FilterInputType::current_value(a1, a2);
  alloc::str::<impl str>::to_lowercase(v23, v8);
  v9 = v25;
  if ( v25 )
  {
    sniffnet::report::types::search_parameters::FilterInputType::entry_value(&v21, (unsigned __int8)a1, a3, a4, a5);
    alloc::str::<impl str>::to_lowercase(v18, v22);
    core::ptr::drop_in_place<alloc::string::String>(&v21);
    v10 = v24;
    v21 = 0;
    v11 = core::char::methods::encode_utf8_raw(61LL, &v21, 4LL);
    v13 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v11, v12, v10, v9);
    if ( v13 )
      is_contained_in = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v20, v13, v14);
    else
      is_contained_in = <&str as core::str::pattern::Pattern>::is_contained_in(v10, v9, v19, v20);
    v16 = is_contained_in;
    core::ptr::drop_in_place<alloc::string::String>(v18);
  }
  else
  {
    v16 = 1;
  }
  core::ptr::drop_in_place<alloc::string::String>(v23);
  return v16;
}