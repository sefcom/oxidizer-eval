__int64 __fastcall uu_sort::merge::check_child_success(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int128 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+18h] [rbp-60h]
  unsigned __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-40h]

  std::process::Child::wait(&v8, a1);
  if ( (_DWORD)v8 == 1 )
  {
    *((_QWORD *)&v6 + 1) = v9;
    LODWORD(v6) = 1;
LABEL_5:
    core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v6);
    v4 = 0LL;
    goto LABEL_6;
  }
  DWORD1(v6) = (v8 & 0x7F00000000LL) == 0;
  DWORD2(v6) = BYTE5(v8);
  LODWORD(v6) = 0;
  if ( (v8 & 0x7F00000000LL) != 0 || BYTE5(v8) == 0 )
    goto LABEL_5;
  core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v6);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, a2, a3);
  v10 = v7;
  v9 = v6;
  v8 = 0x8000000000000005LL;
  v4 = alloc::boxed::Box<T>::new(&v8);
LABEL_6:
  core::ptr::drop_in_place<std::process::Child>(a1);
  return v4;
}