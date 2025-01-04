__int64 __fastcall uu_env::split_iterator::SplitIterator::skip_one(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  _BYTE v7[7]; // [rsp+11h] [rbp-27h]
  __int64 v8; // [rsp+18h] [rbp-20h] BYREF
  __int64 v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]
  _DWORD v11[3]; // [rsp+29h] [rbp-Fh]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v8, (_QWORD *)(a2 + 24));
  v2 = v9;
  v3 = v10;
  if ( v8 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v2;
    *(_BYTE *)(a1 + 24) = v3;
    result = 5LL;
  }
  else
  {
    *(_DWORD *)&v7[3] = *(_DWORD *)((char *)v11 + 3);
    *(_DWORD *)v7 = v11[0];
    v5[0] = v8;
    v5[1] = v9;
    v6 = v10;
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>)(v5);
    result = 8LL;
  }
  *(_DWORD *)a1 = result;
  return result;
}
