_BOOL8 uu_df::blocks::block_size_from_env()
{
  __int64 v0; // rax
  _BOOL8 v1; // rbx
  __int64 v3; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v4[8]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v5; // [rsp+18h] [rbp-90h]
  __int64 v6; // [rsp+20h] [rbp-88h]
  _QWORD v7[8]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v8; // [rsp+68h] [rbp-40h] BYREF

  v7[0] = 0LL;
  v7[1] = 3LL;
  v7[2] = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
  v7[3] = 13LL;
  v7[4] = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
  v7[5] = 10LL;
  v7[6] = "BLOCKSIZEsrc/uu/df/src/columns.rssourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
  v7[7] = 9LL;
  v0 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v7);
  if ( !v0 )
    return 0LL;
  v1 = 0LL;
  while ( 1 )
  {
    std::env::var(&v3, v0);
    if ( !v3 )
      break;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v3);
    v0 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v7);
    if ( !v0 )
      return v1;
  }
  uucore::features::parser::parse_size::parse_size_u64(&v8, v5, v6);
  v1 = v8 == 4;
  if ( (_DWORD)v8 != 4 )
    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v8);
  core::ptr::drop_in_place<alloc::string::String>(v4);
  return v1;
}