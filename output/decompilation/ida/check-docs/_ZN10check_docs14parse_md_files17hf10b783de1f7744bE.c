__int64 __fastcall check_docs::parse_md_files(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-A0h]
  _QWORD v12[4]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v13[48]; // [rsp+30h] [rbp-78h] BYREF
  __int16 v14; // [rsp+60h] [rbp-48h]
  _BYTE v15[64]; // [rsp+68h] [rbp-40h] BYREF

  v10 = a3;
  v11 = a4;
  regex::regex::string::Regex::new(v12, aMd_1, 12LL);
  core::result::Result<T,E>::expect(v15, v12, &off_1D35D0);
  v4 = *(_QWORD *)(a2 + 16);
  <char as core::str::pattern::Pattern>::into_searcher(v13, *(_QWORD *)(a2 + 8), v4);
  v12[1] = v15;
  v12[2] = 0LL;
  v12[3] = v4;
  v14 = 0;
  v12[0] = &v10;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64, __int64, __int64))core::iter::traits::iterator::Iterator::collect)(
    a1,
    v12,
    v5,
    v6,
    v7,
    v8,
    v10,
    v11);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v15);
  core::ptr::drop_in_place<alloc::string::String>(a2);
  return a1;
}