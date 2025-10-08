__int64 __fastcall uu_runcon::errors::Error::from_io1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int128 v9; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-28h]

  <T as core::convert::Into<U>>::into(&v9, a4, a5);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 8) = v9;
  result = v10;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 48) = a6;
  *(_DWORD *)a1 = 16;
  return result;
}