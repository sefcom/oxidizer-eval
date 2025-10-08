__int64 __fastcall uu_mkdir::exec(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 i; // rax
  void *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-E0h]
  void *v15; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-D0h]
  _QWORD *v17; // [rsp+20h] [rbp-C8h]
  __int64 v18; // [rsp+28h] [rbp-C0h]
  __int64 v19; // [rsp+30h] [rbp-B8h]
  _QWORD v20[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-98h] BYREF
  _OWORD v22[7]; // [rsp+70h] [rbp-78h] BYREF

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v22[3] = a1[3];
  v22[2] = v4;
  v22[1] = v3;
  v22[0] = v2;
  for ( i = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v22);
        i;
        i = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v22) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
    v6 = v15;
    v7 = v16;
    v8 = uu_mkdir::mkdir(v16, v17, a2);
    if ( v8 )
    {
      v13 = v8;
      v14 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 88))(v8);
      uucore::mods::error::set_exit_code(v10);
      v20[0] = uucore::util_name();
      v20[1] = v11;
      v21[0] = v20;
      v21[1] = <&T as core::fmt::Display>::fmt;
      v21[2] = &v13;
      v21[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v15 = &unk_EDE10;
      v16 = 3LL;
      v19 = 0LL;
      v17 = v21;
      v18 = 2LL;
      std::io::stdio::_eprint(&v15);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v13, v14);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v9);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
  }
  return 0LL;
}