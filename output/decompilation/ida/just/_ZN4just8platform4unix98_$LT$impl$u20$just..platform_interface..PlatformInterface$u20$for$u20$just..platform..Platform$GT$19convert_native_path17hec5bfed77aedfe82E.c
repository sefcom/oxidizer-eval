__int64 __fastcall just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::convert_native_path(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-20h] BYREF
  __int128 v10; // [rsp+10h] [rbp-18h]

  core::str::converts::from_utf8(&v9, a5, a6);
  if ( (_DWORD)v9 == 1 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aErrorGettingCu_0);
    v6 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v10);
    v7 = v9;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 8) = v7;
    v6 = 0LL;
  }
  *(_QWORD *)a1 = v6;
  return a1;
}