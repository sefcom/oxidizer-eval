__int64 __fastcall uu_tail::follow::watch::Observer::add_stdin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 142) & 1) == 0 && *(_BYTE *)(a1 + 142) != 2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aDevStdin, 10LL);
    v6 = v10;
    v7 = v11;
    v8 = uu_tail::follow::watch::Observer::add_path(a1, v11, v12, a2, a3, a4, (__int64)&off_173AD0, 1);
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
    return v8;
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
      a4,
      &off_173AD0);
    return 0LL;
  }
}