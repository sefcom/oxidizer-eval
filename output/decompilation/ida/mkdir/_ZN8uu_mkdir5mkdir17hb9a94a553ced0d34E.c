__int64 __fastcall uu_mkdir::mkdir(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 dir; // r15
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  int v10; // [rsp+18h] [rbp-20h]

  if ( a2 )
  {
    uucore::features::fs::dir_strip_dot_for_creation(&v7, a1, a2);
    v4 = v8;
    dir = uu_mkdir::create_dir(v8, v9, 0LL, a3);
    core::ptr::drop_in_place<std::path::PathBuf>(v7, v4);
    return dir;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, aCannotCreateDi, 53LL);
    v10 = 1;
    return alloc::boxed::Box<T>::new(&v7);
  }
}