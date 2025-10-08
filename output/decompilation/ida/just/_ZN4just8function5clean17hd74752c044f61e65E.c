__int64 __fastcall just::function::clean(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  _BYTE v7[8]; // [rsp+18h] [rbp-20h] BYREF
  __int64 v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v7, a3, a4);
  core::str::converts::from_utf8(&v5, v8, v9);
  if ( (_DWORD)v5 == 1 )
    core::option::unwrap_failed(&off_42FDF0);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, *((_QWORD *)&v5 + 1));
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<std::path::PathBuf>(v7);
  return a1;
}