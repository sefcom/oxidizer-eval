__int64 __fastcall rg::flags::hiargs::suggest_multiline(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v7; // [rsp+10h] [rbp-68h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[10]; // [rsp+28h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aTheLiteral, 11LL, v2, v3)
    && (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aNotAllowed, 11LL, v2, v3) )
  {
    v6[0] = a2;
    v6[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v9[0] = &unk_3EB428;
    v9[1] = 2LL;
    v9[4] = 0LL;
    v9[2] = v6;
    v9[3] = 1LL;
    core::option::Option<T>::map_or_else(&v7, 0LL, v4, v9);
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  }
  else
  {
    result = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return result;
}