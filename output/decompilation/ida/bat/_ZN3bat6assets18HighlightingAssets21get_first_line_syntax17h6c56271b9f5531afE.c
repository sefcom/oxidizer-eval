__int64 __fastcall bat::assets::HighlightingAssets::get_first_line_syntax(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v12[9]; // [rsp+8h] [rbp-A0h]
  __int128 v13; // [rsp+50h] [rbp-58h]
  _BYTE v14[64]; // [rsp+68h] [rbp-40h] BYREF

  bat::assets::HighlightingAssets::get_syntax_set((__int64)&v11, a2);
  result = (unsigned __int8)v11;
  if ( (_BYTE)v11 != 13 )
  {
    v9 = *(_DWORD *)((char *)&v11 + 1);
    *(_DWORD *)(a1 + 4) = HIDWORD(v11);
    *(_DWORD *)(a1 + 1) = v9;
    v10 = v12[0];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v12[3];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v12[5];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v12[7];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v12[1];
    *(_BYTE *)a1 = result;
    *(_QWORD *)(a1 + 8) = v10;
    return result;
  }
  v7 = v12[0];
  <&str as alloc::string::SpecToString>::spec_to_string(v14, a3, a4);
  alloc::string::String::from_utf8(&v11, v14);
  if ( __OFSUB__(0LL, v11) )
  {
    v8 = v12[0];
    v13 = *(_OWORD *)&v12[1];
    if ( v12[0] != 0x8000000000000000LL )
    {
      *(_OWORD *)v12 = v13;
      v11 = v8;
      result = ((__int64 (__fastcall *)(__int64, __int64 *))bat::assets::HighlightingAssets::get_first_line_syntax::{{closure}})(
                 v7,
                 &v11);
      if ( result )
        goto LABEL_9;
    }
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::string::FromUtf8Error>>(&v11);
  }
  result = 0LL;
LABEL_9:
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v7;
  *(_BYTE *)a1 = 13;
  return result;
}