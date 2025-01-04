        __int64 a7)
{
  __int64 v8; // rcx
  char v9; // bp
  _QWORD v11[3]; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-80h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h]
  __int64 v15; // [rsp+48h] [rbp-70h]
  _QWORD v16[3]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v17[80]; // [rsp+68h] [rbp-50h] BYREF

  v11[1] = a2;
  v11[2] = a3;
  v11[0] = 0x8000000000000000LL;
  v12[1] = a4;
  v12[2] = a5;
  v12[0] = 0x8000000000000000LL;
  if ( !core::slice::<impl [T]>::strip_prefix(a2, a3, a4, a5) )
  {
    v9 = 0;
LABEL_8:
    *(_BYTE *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v11);
    return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v12);
  }
  if ( a7 )
    uu_env::debug_print_args(*(_QWORD *)(a7 + 8), *(_QWORD *)(a7 + 16));
  uu_env::parse_args_from_str((__int64)&v13);
  v8 = v15;
  if ( v13 != 0x8000000000000000LL )
  {
    v16[0] = v13;
    v16[1] = v14;
    v16[2] = v15;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, v16);
    v9 = 1;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a6, v17);
    goto LABEL_8;
  }
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v8;
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v11);
  return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v12);
}
