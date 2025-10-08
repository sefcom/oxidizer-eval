__int64 __fastcall uu_pinky::platform::unix::gecos_to_fullname(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+10h] [rbp-58h]
  _BYTE v9[8]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  if ( __OFSUB__(0LL, a2[3]) )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(&v6, a2 + 3);
    v3 = v7;
    v4 = v8;
    if ( (core::str::<impl str>::find(v7, v8) & 1) != 0 )
    {
      alloc::string::String::truncate(&v6, v5);
      v3 = v7;
      v4 = v8;
    }
    <str as uu_pinky::Capitalize>::capitalize(v9, a2[1], a2[2]);
    alloc::str::<impl str>::replace(&v12, v3, v4, v10, v11);
    a1[2] = v13;
    *(_OWORD *)a1 = v12;
    core::ptr::drop_in_place<alloc::string::String>(v9);
    return core::ptr::drop_in_place<alloc::string::String>(&v6);
  }
  return result;
}