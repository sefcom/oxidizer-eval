__int64 __fastcall uu_env::check_and_handle_string_args(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rcx
  __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h]
  _QWORD v14[3]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[80]; // [rsp+48h] [rbp-50h] BYREF

  if ( core::slice::<impl [T]>::strip_prefix(a2, a3, a4, a5) )
  {
    if ( a7 )
      uu_env::debug_print_args(*(_QWORD *)(a7 + 8), *(_QWORD *)(a7 + 16));
    uu_env::parse_args_from_str((__int64)&v11);
    v8 = v13;
    if ( v11 == 0x8000000000000000LL )
    {
      *a1 = v12;
      a1[1] = v8;
    }
    else
    {
      v14[0] = v11;
      v14[1] = v12;
      v14[2] = v13;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, v14);
      alloc::vec::Vec<T,A>::extend_trusted(a6, v15);
      *((_BYTE *)a1 + 8) = 1;
      *a1 = 0LL;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, a4);
  }
  else
  {
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, a4);
    *((_BYTE *)a1 + 8) = 0;
    *a1 = 0LL;
  }
  return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, a2);
}