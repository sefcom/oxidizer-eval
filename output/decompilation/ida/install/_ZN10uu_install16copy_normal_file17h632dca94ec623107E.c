__int64 __fastcall uu_install::copy_normal_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+20h] [rbp-98h] BYREF
  __int64 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+38h] [rbp-80h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  _QWORD v14[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+60h] [rbp-58h]
  __int64 v16; // [rsp+70h] [rbp-48h]
  __int128 v17; // [rsp+78h] [rbp-40h]
  __int64 v18; // [rsp+88h] [rbp-30h]

  v9[0] = std::fs::copy();
  v9[1] = v6;
  if ( (v9[0] & 1) != 0 )
  {
    v7 = v6;
    std::path::Path::to_path_buf(&v10, a1, a2);
    std::path::Path::to_path_buf(&v12, a3, a4);
    v16 = v11;
    v15 = v10;
    v17 = v12;
    v18 = v13;
    v14[1] = v7;
    v14[0] = 8LL;
    return alloc::boxed::Box<T>::new(v14);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v9);
    return 0LL;
  }
}