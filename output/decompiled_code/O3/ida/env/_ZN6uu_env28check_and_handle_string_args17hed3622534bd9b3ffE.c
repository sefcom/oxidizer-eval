        __int64 a7)
{
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rcx
  char v12; // bp
  _QWORD v14[3]; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v15[3]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v16; // [rsp+38h] [rbp-80h] BYREF
  __int64 v17; // [rsp+40h] [rbp-78h]
  __int64 v18; // [rsp+48h] [rbp-70h]
  _QWORD v19[3]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v20[80]; // [rsp+68h] [rbp-50h] BYREF

  v14[1] = a2;
  v14[2] = a3;
  v14[0] = 0x8000000000000000LL;
  v15[1] = a4;
  v15[2] = a5;
  v15[0] = 0x8000000000000000LL;
  v9 = core::slice::<impl [T]>::strip_prefix(a2, a3, a4, a5);
  if ( !v9 )
  {
    v12 = 0;
LABEL_8:
    *(_BYTE *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v14);
    return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v15);
  }
  if ( a7 )
  {
    v10 = v8;
    uu_env::debug_print_args(*(_QWORD *)(a7 + 8), *(_QWORD *)(a7 + 16));
    v8 = v10;
  }
  uu_env::parse_args_from_str((__int64)&v16, v9, v8);
  v11 = v18;
  if ( v16 != 0x8000000000000000LL )
  {
    v19[0] = v16;
    v19[1] = v17;
    v19[2] = v18;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v20, v19);
    v12 = 1;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a6, v20);
    goto LABEL_8;
  }
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v11;
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v14);
  return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(v15);
}
