__int64 __fastcall uu_sort::merge::check_child_success(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int128 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+18h] [rbp-60h]
  int v8; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+24h] [rbp-54h]
  unsigned __int8 v10; // [rsp+25h] [rbp-53h]
  __int128 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-40h]

  std::process::Child::wait(&v8, a1);
  if ( v8 )
  {
    *((_QWORD *)&v6 + 1) = v11;
    LODWORD(v6) = 1;
  }
  else
  {
    DWORD1(v6) = (v9 & 0x7F) == 0;
    DWORD2(v6) = v10;
    LODWORD(v6) = 0;
    if ( (v9 & 0x7F) == 0 && v10 )
    {
      core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v6);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v6, a2, a3);
      v12 = v7;
      v11 = v6;
      LOBYTE(v8) = 6;
      v4 = alloc::boxed::Box<T>::new(&v8);
      goto LABEL_4;
    }
  }
  core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v6);
  v4 = 0LL;
LABEL_4:
  core::ptr::drop_in_place<std::process::Child>(a1);
  return v4;
}
