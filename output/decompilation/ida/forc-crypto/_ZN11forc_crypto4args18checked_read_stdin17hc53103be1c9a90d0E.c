__int64 __fastcall forc_crypto::args::checked_read_stdin(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // bp
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int8 v9; // [rsp+10h] [rbp-48h]
  __int128 v10; // [rsp+18h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  v8 = a3;
  v9 = a4;
  if ( __OFSUB__(0LL, *a2)
    || (v5 = a3, (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2[1], a2[2], asc_8080C, 1LL)) )
  {
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 1LL;
    v11 = 0LL;
    v12[0] = <std::io::stdio::StdinLock as std::io::Read>::read_to_end(&v8, &v10);
    v12[1] = v6;
    if ( v12[0] )
    {
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v12);
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v12);
      a1[2] = v11;
      *(_OWORD *)a1 = v10;
    }
    v5 = v8;
    v4 = v9;
  }
  else
  {
    *a1 = 0x8000000000000000LL;
  }
  return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(
           v5,
           v4);
}