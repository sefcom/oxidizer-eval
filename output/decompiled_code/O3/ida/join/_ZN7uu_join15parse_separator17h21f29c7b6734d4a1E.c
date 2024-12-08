__int64 __fastcall uu_join::parse_separator(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  _QWORD *v5; // r15
  int v6; // edx
  int v7; // ebp
  int v8; // edx
  _QWORD v9[2]; // [rsp+8h] [rbp-A0h] BYREF
  char **v10; // [rsp+18h] [rbp-90h] BYREF
  __int64 v11; // [rsp+20h] [rbp-88h]
  _QWORD *v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+30h] [rbp-78h]
  __int64 v14; // [rsp+38h] [rbp-70h]
  _QWORD v15[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v17[24]; // [rsp+68h] [rbp-40h] BYREF
  int v18; // [rsp+80h] [rbp-28h]

  if ( a3 == 1 )
  {
    result = *a2;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_BYTE *)(a1 + 8) = result;
  }
  else if ( a3 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v10);
    if ( v10 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aNonUtf8MultiBy, 24LL);
      LODWORD(v13) = 1;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v10);
      *(_QWORD *)(a1 + 16) = &off_135E48;
      result = 0x8000000000000004LL;
      *(_QWORD *)a1 = 0x8000000000000004LL;
    }
    else
    {
      v4 = v11;
      v5 = v12;
      v15[0] = v11;
      v15[1] = v12;
      v9[0] = v11;
      v9[1] = (char *)v12 + v11;
      if ( !(unsigned int)core::str::validations::next_code_point(v9) )
        core::option::expect_failed(aValidStringWit, 35LL, &off_136008);
      v7 = v6;
      result = core::str::validations::next_code_point(v9);
      if ( (_DWORD)result )
      {
        if ( v7 == 92 && v8 == 48 )
        {
          *(_QWORD *)a1 = 0x8000000000000000LL;
          *(_BYTE *)(a1 + 8) = 0;
        }
        else
        {
          v16[0] = v15;
          v16[1] = <&T as core::fmt::Display>::fmt;
          v10 = &off_136020;
          v11 = 1LL;
          v14 = 0LL;
          v12 = v16;
          v13 = 1LL;
          core::option::Option<T>::map_or_else(v17, &v10);
          v18 = 1;
          *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v17);
          result = (__int64)&off_135E48;
          *(_QWORD *)(a1 + 16) = &off_135E48;
          *(_QWORD *)a1 = 0x8000000000000004LL;
        }
      }
      else
      {
        return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a1, v4, v5);
      }
    }
  }
  else
  {
    result = 0x8000000000000002LL;
    *(_QWORD *)a1 = 0x8000000000000002LL;
  }
  return result;
}
