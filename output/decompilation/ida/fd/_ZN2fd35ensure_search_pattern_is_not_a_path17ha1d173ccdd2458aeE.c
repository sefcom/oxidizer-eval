__int64 __fastcall fd::ensure_search_pattern_is_not_a_path(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v6[4]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v7[6]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v8[48]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 494) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 152);
  if ( !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v2, v3)
    || !(unsigned __int8)std::path::Path::is_dir(v2, v3) )
  {
    return 0LL;
  }
  v5 = a1 + 136;
  v6[0] = &v5;
  v6[1] = <&T as core::fmt::Display>::fmt;
  v6[2] = &unk_717CC;
  v6[3] = <char as core::fmt::Display>::fmt;
  v7[0] = &off_402868;
  v7[1] = 6LL;
  v7[4] = &unk_7B7E0;
  v7[5] = 5LL;
  v7[2] = v6;
  v7[3] = 2LL;
  core::option::Option<T>::map_or_else(v8, 0LL, v4, v7);
  return anyhow::error::<impl anyhow::Error>::msg(v8);
}