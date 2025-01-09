__int64 __fastcall uu_test::parser::Parser::parse(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // [rsp+0h] [rbp-88h] BYREF
  __int128 v5; // [rsp+10h] [rbp-78h]
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  _BYTE v8[24]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v9; // [rsp+58h] [rbp-30h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]

  result = uu_test::parser::Parser::expr((__int64)&v4, a2);
  if ( (_DWORD)v4 == 7 )
  {
    result = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
    if ( result == 0x8000000000000001LL )
    {
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v8, a2 + 48);
      result = *(_QWORD *)v8;
    }
    else
    {
      *(_OWORD *)&v8[8] = *(_OWORD *)(a2 + 32);
      *(_QWORD *)v8 = result;
    }
    if ( result == 0x8000000000000000LL )
    {
      *(_QWORD *)a1 = 7LL;
    }
    else
    {
      v7 = *(_QWORD *)&v8[16];
      v6 = *(_OWORD *)v8;
      *(_QWORD *)&v4 = 1LL;
      *((_QWORD *)&v4 + 1) = *(_QWORD *)&v8[8];
      *(_QWORD *)&v5 = *(_QWORD *)&v8[16];
      BYTE8(v5) = 1;
      <T as alloc::string::ToString>::to_string(&v9, &v4);
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 2LL;
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v6);
    }
  }
  else
  {
    v3 = v4;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v3;
  }
  return result;
}
