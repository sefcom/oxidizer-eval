__int64 __fastcall rg::flags::lowargs::FieldMatchSeparator::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  char **v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int128 v10; // [rsp+18h] [rbp-20h]

  core::str::converts::from_utf8(&v7);
  if ( (_DWORD)v7 != 1 )
    return bstr::ext_vec::ByteVec::unescape_bytes(a1, v8, v9);
  v7 = &off_3EB468;
  v8 = 1LL;
  v9 = 8LL;
  v10 = 0LL;
  a1[1] = anyhow::__private::format_err(&v7, a2, v2, v3, v4, v5);
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}