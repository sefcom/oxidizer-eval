__int64 __fastcall uu_mkdir::exec(__int128 *a1, unsigned __int8 a2, unsigned int a3, unsigned __int8 a4)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-108h] BYREF
  __int64 v16; // [rsp+8h] [rbp-100h]
  __int128 v17; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E8h]
  _QWORD v19[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  _QWORD v24[4]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v25[7]; // [rsp+90h] [rbp-78h] BYREF

  v6 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  v25[3] = a1[3];
  v25[2] = v8;
  v25[1] = v7;
  v25[0] = v6;
  for ( i = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v25);
        i;
        i = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v25) )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v20, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
    v18 = (__int64)v21;
    v17 = v20;
    v10 = uu_mkdir::mkdir(*((__int64 *)&v20 + 1), (__int64)v21, a2, a3, a4);
    if ( v10 )
    {
      v15 = v10;
      v16 = v11;
      v12 = (*(unsigned int (__fastcall **)(__int64))(v11 + 96))(v10);
      uucore::mods::error::set_exit_code(v12);
      v19[0] = uucore::util_name();
      v19[1] = v13;
      v24[0] = v19;
      v24[1] = <&T as core::fmt::Display>::fmt;
      v24[2] = &v15;
      v24[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = &unk_120510;
      *((_QWORD *)&v20 + 1) = 3LL;
      v23 = 0LL;
      v21 = v24;
      v22 = 2LL;
      std::io::stdio::_eprint(&v20);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v15, v16);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
  }
  return 0LL;
}
