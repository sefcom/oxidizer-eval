__int64 __fastcall rg::flags::hiargs::suggest_text(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v5; // [rsp+10h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-48h]
  _QWORD v7[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                          aPatternContain,
                          21LL,
                          *(_QWORD *)(a2 + 8),
                          *(_QWORD *)(a2 + 16)) )
  {
    v4[0] = a2;
    v4[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v7[0] = &unk_3EB448;
    v7[1] = 2LL;
    v7[4] = 0LL;
    v7[2] = v4;
    v7[3] = 1LL;
    core::option::Option<T>::map_or_else(&v5, 0LL, v2, v7);
    *(_QWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
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