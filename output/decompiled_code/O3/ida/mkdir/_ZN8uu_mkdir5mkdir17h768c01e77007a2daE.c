__int64 __fastcall uu_mkdir::mkdir(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 dir; // r14
  _QWORD v10[3]; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+18h] [rbp-20h]

  if ( a2 )
  {
    uucore::features::fs::dir_strip_dot_for_creation(v10, a1, a2);
    dir = uu_mkdir::create_dir(v10[1], v10[2], a3, a5, 0LL, a4);
    core::ptr::drop_in_place<std::path::PathBuf>(v10);
    return dir;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v10, aCannotCreateDi, 53LL);
    v11 = 1;
    return alloc::boxed::Box<T>::new(v10);
  }
}
