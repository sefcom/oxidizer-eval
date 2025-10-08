__int64 __fastcall uu_cat::get_input_type(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v10[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-D0h] BYREF
  void *dest; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-C0h]
  _QWORD *v14; // [rsp+30h] [rbp-B8h]
  __int64 v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+40h] [rbp-A8h]
  int v17; // [rsp+58h] [rbp-90h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3) )
  {
    *(_BYTE *)(a1 + 8) = 2;
LABEL_3:
    result = 0x8000000000000006LL;
    *(_QWORD *)a1 = 0x8000000000000006LL;
  }
  else
  {
    std::fs::metadata(&dest);
    if ( (_DWORD)dest == 2 )
    {
      v8 = v13;
      v11 = v13;
      result = std::io::error::repr_bitpacked::decode_repr(v10, v13);
      if ( LOBYTE(v10[0]) || HIDWORD(v10[0]) != 40 )
      {
        *(_QWORD *)a1 = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 8) = v8;
      }
      else
      {
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return core::ptr::drop_in_place<std::io::error::Error>(&v11);
      }
    }
    else
    {
      HIDWORD(v9) = v17;
      switch ( ((v17 & 0xF000u) - 4096) >> 12 )
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
          v10[0] = (char *)&v9 + 4;
          v10[1] = <std::fs::FileType as core::fmt::Debug>::fmt;
          dest = &unk_19BE0;
          v13 = 1LL;
          v16 = 0LL;
          v14 = v10;
          v15 = 1LL;
          result = ((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
                     a1,
                     &dest,
                     v4,
                     v5,
                     v6,
                     v7,
                     v9);
          break;
      }
    }
  }
  return result;
}