__int64 __fastcall uu_env::split_iterator::SplitIterator::skip_one(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v8; // [rsp+10h] [rbp-28h]
  _BYTE v9[7]; // [rsp+11h] [rbp-27h]
  __int64 v10; // [rsp+18h] [rbp-20h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int8 v12; // [rsp+28h] [rbp-10h]
  _DWORD v13[3]; // [rsp+29h] [rbp-Fh]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v10, (_QWORD *)(a2 + 24));
  v4 = v11;
  v5 = v12;
  if ( v10 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v4;
    *(_BYTE *)(a1 + 24) = v5;
    result = 5LL;
  }
  else
  {
    *(_DWORD *)&v9[3] = *(_DWORD *)((char *)v13 + 3);
    *(_DWORD *)v9 = v13[0];
    v7[0] = v10;
    v7[1] = v11;
    v8 = v12;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD, __int64, __int64))core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>)(
      v7,
      v13[0],
      v10,
      v12,
      v2,
      v3);
    result = 8LL;
  }
  *(_DWORD *)a1 = result;
  return result;
}
