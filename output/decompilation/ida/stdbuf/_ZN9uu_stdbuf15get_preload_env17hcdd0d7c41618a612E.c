_QWORD *__fastcall uu_stdbuf::get_preload_env(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v7; // xmm0
  unsigned int v8; // [rsp+Ch] [rbp-7Ch] BYREF
  __int128 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int128 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int128 v13; // [rsp+48h] [rbp-40h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  std::path::Path::join(&v9, *a2, a2[1]);
  v2 = *((_QWORD *)&v9 + 1);
  std::path::Path::with_extension(&v13, *((_QWORD *)&v9 + 1), v10);
  core::ptr::drop_in_place<std::path::PathBuf>(v9, v2);
  std::fs::File::create(&v9, &v13);
  if ( (_DWORD)v9 == 1 )
  {
    a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v9 + 1));
    a1[2] = v3;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v8 = DWORD1(v9);
    v4 = std::io::Write::write_all(&v8);
    if ( !v4 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, aLdPreload, 10LL);
      v10 = v16;
      v7 = v15;
      v9 = v15;
      v12 = v14;
      v11 = v13;
      a1[4] = *((_QWORD *)&v13 + 1);
      a1[5] = v12;
      a1[2] = v10;
      a1[3] = v11;
      *(_OWORD *)a1 = v7;
      core::ptr::drop_in_place<std::fs::File>(v8);
      return a1;
    }
    a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    a1[2] = v5;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::fs::File>(v8);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v13, *((_QWORD *)&v13 + 1));
  return a1;
}