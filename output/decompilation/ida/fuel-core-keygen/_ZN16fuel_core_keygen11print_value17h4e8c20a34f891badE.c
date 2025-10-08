__int64 __fastcall fuel_core_keygen::print_value(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v5; // r14
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = a1;
    serde_json::ser::to_vec_pretty(&v6, a1);
  }
  else
  {
    v2 = a1;
    serde_json::ser::to_vec(&v6, a1);
  }
  if ( __OFSUB__(-v6, 1LL) )
  {
    v5 = anyhow::error::<impl anyhow::Error>::msg(v7, v2, v3, -v6);
    core::ptr::drop_in_place<serde_json::value::Value>(a1);
    return v5;
  }
  else
  {
    v9[0] = fuel_core_keygen::display_string_discreetly(v7, v8);
    core::ptr::drop_in_place<core::result::Result<(),anyhow::Error>>(v9);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    core::ptr::drop_in_place<serde_json::value::Value>(a1);
    return 0LL;
  }
}