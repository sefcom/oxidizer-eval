__int64 __fastcall just::function::absolute_path(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD *v11; // [rsp+18h] [rbp-A0h]
  __int64 v12; // [rsp+20h] [rbp-98h]
  __int64 v13; // [rsp+28h] [rbp-90h]
  __int128 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+48h] [rbp-70h]
  _QWORD v16[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int64 v19; // [rsp+70h] [rbp-48h]
  __int128 v20; // [rsp+78h] [rbp-40h] BYREF
  __int64 v21; // [rsp+88h] [rbp-30h]

  v6 = *a2;
  just::execution_context::ExecutionContext::working_directory(
    (__int64)&v10,
    *(_QWORD *)(*a2 + 16),
    *(_QWORD *)(*a2 + 24));
  std::path::Path::join(&v14, *((_QWORD *)&v10 + 1), v11, a3, a4);
  <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v17, *((_QWORD *)&v14 + 1), v15);
  core::ptr::drop_in_place<std::path::PathBuf>(&v14);
  core::ptr::drop_in_place<std::path::PathBuf>(&v10);
  core::str::converts::from_utf8(&v10, v18, v19);
  if ( (_DWORD)v10 == 1 )
  {
    v14 = *(_OWORD *)(*(_QWORD *)(v6 + 24) + 32LL);
    v16[0] = &v14;
    v16[1] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_42FD60;
    *((_QWORD *)&v10 + 1) = 1LL;
    v13 = 0LL;
    v11 = v16;
    v12 = 1LL;
    core::option::Option<T>::map_or_else(&v20, 0LL, v7, &v10);
    *(_QWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    v8 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, *((_QWORD *)&v10 + 1));
    *(_QWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v10;
    v8 = 0LL;
  }
  *(_QWORD *)a1 = v8;
  core::ptr::drop_in_place<std::path::PathBuf>(v17);
  return a1;
}