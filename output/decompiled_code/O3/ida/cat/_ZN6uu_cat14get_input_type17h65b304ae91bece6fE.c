__int64 __fastcall uu_cat::get_input_type(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v11[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+18h] [rbp-D0h] BYREF
  void *v13; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-C0h]
  _QWORD *v15; // [rsp+30h] [rbp-B8h]
  __int64 v16; // [rsp+38h] [rbp-B0h]
  __int64 v17; // [rsp+40h] [rbp-A8h]
  int v18; // [rsp+58h] [rbp-90h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_139E5, 1LL) )
  {
    *(_BYTE *)(a1 + 8) = 2;
LABEL_3:
    result = 0x8000000000000006LL;
    *(_QWORD *)a1 = 0x8000000000000006LL;
  }
  else
  {
    std::fs::metadata(&v13, a2, a3);
    if ( (_DWORD)v13 == 2 )
    {
      v9 = v14;
      v12 = v14;
      std::io::error::repr_bitpacked::decode_repr(v11, v14);
      switch ( LOBYTE(v11[0]) )
      {
        case 0:
          if ( HIDWORD(v11[0]) != 40 )
            goto LABEL_6;
          *(_QWORD *)a1 = 0x8000000000000005LL;
          result = core::ptr::drop_in_place<std::io::error::Error>(&v12);
          break;
        case 1:
        case 2:
        case 3:
LABEL_6:
          result = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          *(_QWORD *)(a1 + 8) = v9;
          break;
      }
    }
    else
    {
      HIDWORD(v10) = v18;
      switch ( ((v18 & 0xF000u) - 4096) >> 12 )
      {
        case 0u:
          *(_BYTE *)(a1 + 8) = 6;
          goto LABEL_3;
        case 1u:
          *(_BYTE *)(a1 + 8) = 5;
          goto LABEL_3;
        case 3u:
          *(_BYTE *)(a1 + 8) = 0;
          goto LABEL_3;
        case 5u:
          *(_BYTE *)(a1 + 8) = 4;
          goto LABEL_3;
        case 7u:
          *(_BYTE *)(a1 + 8) = 1;
          goto LABEL_3;
        case 9u:
          *(_BYTE *)(a1 + 8) = 3;
          goto LABEL_3;
        case 0xBu:
          *(_BYTE *)(a1 + 8) = 7;
          goto LABEL_3;
        default:
          v11[0] = (char *)&v10 + 4;
          v11[1] = <std::fs::FileType as core::fmt::Debug>::fmt;
          v13 = &unk_B1C0;
          v14 = 1LL;
          v17 = 0LL;
          v15 = v11;
          v16 = 1LL;
          result = ((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
                     a1,
                     &v13,
                     v5,
                     v6,
                     v7,
                     v8,
                     v10);
          break;
      }
    }
  }
  return result;
}
