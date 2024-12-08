_OWORD *__fastcall example::Person::new(_OWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v11; // [rsp+20h] [rbp-148h]
  __int64 v12; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v13; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+98h] [rbp-D0h]
  __int64 v15; // [rsp+A0h] [rbp-C8h]
  __int64 v16; // [rsp+A8h] [rbp-C0h]
  __int128 v17; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-A8h]
  _BYTE v19[24]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-88h]
  __int64 v21; // [rsp+E8h] [rbp-80h]
  _BYTE v22[8]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-70h]
  __int128 v24; // [rsp+100h] [rbp-68h]
  __int128 v25; // [rsp+110h] [rbp-58h]
  __int128 v26; // [rsp+120h] [rbp-48h]
  __int64 v27; // [rsp+130h] [rbp-38h]
  char v28; // [rsp+13Eh] [rbp-2Ah]
  char v29; // [rsp+13Fh] [rbp-29h]
  _BYTE v30[17]; // [rsp+157h] [rbp-11h] BYREF

  v29 = 0;
  v12 = std::io::stdio::stdin();
  v28 = 1;
  ((void (*)(void))alloc::string::String::new)();
  v1 = std::io::stdio::Stdin::read_line(&v12, &v13);
  v15 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v1, v2);
  v16 = v3;
  if ( v15 )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      v16,
      &off_5AFF8);
  }
  else
  {
    v28 = 0;
    v29 = 1;
    v18 = v14;
    v17 = v13;
    alloc::string::String::new(v19);
    v4 = std::io::stdio::Stdin::read_line(&v12, v19);
    v11 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v4, v5);
    v20 = v11;
    v21 = v6;
    if ( !v11 )
    {
      v7 = <alloc::string::String as core::ops::deref::Deref>::deref(v19);
      core::str::<impl str>::parse(v22, v7, v8);
      if ( (v22[0] & 1) != 0 )
      {
        v30[0] = v22[1];
        core::result::unwrap_failed(aCalledResultUn, 43LL, v30, &unk_5AF38, &off_5AFC8);
      }
      v29 = 0;
      v27 = v18;
      v26 = v17;
      *(_QWORD *)&v25 = v18;
      v24 = v17;
      *((_QWORD *)&v25 + 1) = v23;
      v9 = v17;
      a1[1] = v25;
      *a1 = v9;
      core::ptr::drop_in_place<alloc::string::String>(v19);
      v29 = 0;
      v28 = 0;
      return a1;
    }
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      v21,
      &off_5AFE0);
    core::ptr::drop_in_place<alloc::string::String>(v19);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    v29 = 0;
  }
  if ( (v28 & 1) != 0 )
    core::ptr::drop_in_place<alloc::string::String>(&v13);
  v28 = 0;
  return a1;
}
