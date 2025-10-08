__int64 __fastcall just::search::Search::global_justfile_paths(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 result; // rax
  _OWORD *v9; // rcx
  __int128 v10; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C8h]
  __int128 v12; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int128 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int128 v16; // [rsp+50h] [rbp-88h]
  __int128 v17; // [rsp+60h] [rbp-78h] BYREF
  __int64 v18; // [rsp+70h] [rbp-68h]
  __int64 v19; // [rsp+78h] [rbp-60h]
  __int64 v20; // [rsp+80h] [rbp-58h]
  __int64 v21; // [rsp+88h] [rbp-50h]
  __int64 v22; // [rsp+90h] [rbp-48h] BYREF
  __int64 v23; // [rsp+98h] [rbp-40h]
  __int64 v24; // [rsp+A0h] [rbp-38h]

  v21 = a1;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 8LL;
  v13 = 0LL;
  dirs::config_dir(&v10);
  if ( !__OFSUB__(0LL, (_QWORD)v10) )
  {
    std::path::Path::join(&v17, *((_QWORD *)&v10 + 1), v11, aJust, 4LL);
    *(_QWORD *)&v15 = v18;
    v14 = v17;
    *((_QWORD *)&v15 + 1) = aJustfile_0;
    *(_QWORD *)&v16 = 8LL;
    alloc::vec::Vec<T,A>::push(&v12, &v14, &off_430D68);
    core::ptr::drop_in_place<std::path::PathBuf>(&v10);
  }
  dirs::home_dir(&v22);
  if ( v22 != 0x8000000000000000LL )
  {
    v1 = v23;
    v2 = v24;
    std::path::Path::join(&v17, v23, v24, aConfig_0, 7LL);
    std::path::Path::join(&v10, *((_QWORD *)&v17 + 1), v18, aJust, 4LL);
    *(_QWORD *)&v15 = v11;
    v14 = v10;
    *((_QWORD *)&v15 + 1) = aJustfile_0;
    *(_QWORD *)&v16 = 8LL;
    alloc::vec::Vec<T,A>::push(&v12, &v14, &off_430D80);
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 2LL;
    v15 = *(_OWORD *)&off_42E5B0;
    v16 = *(_OWORD *)&off_42E5C0;
    v3 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v14);
    if ( v3 )
    {
      v5 = v3;
      v6 = v4;
      do
      {
        <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v10, v1, v2);
        v18 = v11;
        v17 = v10;
        v19 = v5;
        v20 = v6;
        alloc::vec::Vec<T,A>::push(&v12, &v17, &off_430D98);
        v5 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v14);
        v6 = v7;
      }
      while ( v5 );
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v22);
  }
  result = v13;
  v9 = (_OWORD *)v21;
  *(_QWORD *)(v21 + 16) = v13;
  *v9 = v12;
  return result;
}